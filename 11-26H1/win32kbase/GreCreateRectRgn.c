/*
 * XREFs of GreCreateRectRgn @ 0x140194400
 * Callers:
 *     InitializeGre @ 0x1402F3768 (InitializeGre.c)
 * Callees:
 *     ?vInitialize@RGNMEMOBJ@@QEAAXK@Z @ 0x140015950 (-vInitialize@RGNMEMOBJ@@QEAAXK@Z.c)
 *     ?vDeleteRGNOBJ@RGNOBJ@@QEAAXXZ @ 0x1400163D0 (-vDeleteRGNOBJ@RGNOBJ@@QEAAXXZ.c)
 *     PopThreadGuardedObject @ 0x140019EE0 (PopThreadGuardedObject.c)
 *     ?vSet@RGNOBJ@@QEAAXQEBU_RECTL@@@Z @ 0x14001F730 (-vSet@RGNOBJ@@QEAAXQEBU_RECTL@@@Z.c)
 *     EngSetLastError @ 0x140020060 (EngSetLastError.c)
 *     PushThreadGuardedObject @ 0x140030350 (PushThreadGuardedObject.c)
 *     ?HmgInsertObjectInternal@@YAPEAUHOBJ__@@AEAUSESSION_GLOBALS@Base@Gre@@PEAXKE@Z @ 0x1400C4460 (-HmgInsertObjectInternal@@YAPEAUHOBJ__@@AEAUSESSION_GLOBALS@Base@Gre@@PEAXKE@Z.c)
 *     __security_check_cookie @ 0x14024BC30 (__security_check_cookie.c)
 */

struct HOBJ__ *__fastcall GreCreateRectRgn(LONG a1, LONG a2, LONG a3, LONG a4)
{
  unsigned int v4; // ecx
  unsigned int v5; // r9d
  unsigned int v6; // r8d
  unsigned int v7; // edx
  struct OBJECT *v9; // rdi
  struct HOBJ__ *inserted; // rbx
  LONG left; // ecx
  LONG top; // ecx
  __int64 v13; // rcx
  struct Gre::Base::SESSION_GLOBALS *v14; // rbx
  struct OBJECT *v15; // [rsp+20h] [rbp-50h] BYREF
  _OWORD v16[2]; // [rsp+28h] [rbp-48h] BYREF
  struct OBJECT *v17; // [rsp+48h] [rbp-28h]
  char v18; // [rsp+50h] [rbp-20h]
  struct _RECTL v19; // [rsp+58h] [rbp-18h] BYREF

  v19.left = a1;
  v19.top = a2;
  v19.right = a3;
  v19.bottom = a4;
  v4 = a1 & 0xF8000000;
  if ( (!v4 || v4 == -134217728)
    && ((v5 = a4 & 0xF8000000) == 0 || v5 == -134217728)
    && ((v6 = a3 & 0xF8000000) == 0 || v6 == -134217728)
    && ((v7 = a2 & 0xF8000000) == 0 || v7 == -134217728) )
  {
    v15 = 0LL;
    RGNMEMOBJ::vInitialize((RGNMEMOBJ *)&v15, 0x70u);
    v9 = v15;
    if ( v15 )
    {
      left = v19.left;
      if ( v19.left > v19.right )
      {
        v19.left = v19.right;
        v19.right = left;
      }
      top = v19.top;
      if ( v19.top > v19.bottom )
      {
        v19.top = v19.bottom;
        v19.bottom = top;
      }
      RGNOBJ::vSet((RGNOBJ *)&v15, &v19);
      v14 = *(struct Gre::Base::SESSION_GLOBALS **)(W32GetSessionState(v13) + 88);
      memset(v16, 0, sizeof(v16));
      PushThreadGuardedObject(
        v16,
        (__int64)v16,
        (__int64)UnexpectedThreadTerminationHandler<HmgInsertObjectHelper>::OnUnexpectedThreadTerminationStatic);
      v17 = 0LL;
      v18 = 0;
      inserted = HmgInsertObjectInternal(v14, v9, 9u, 4u);
      if ( inserted )
      {
        v17 = v9;
      }
      else
      {
        RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v15);
        v9 = v17;
      }
      if ( v9 )
      {
        if ( !v18 )
          _InterlockedDecrement16((volatile signed __int16 *)v9 + 6);
      }
      PopThreadGuardedObject(v16);
    }
    else
    {
      inserted = 0LL;
      EngSetLastError(8u);
    }
    return inserted;
  }
  else
  {
    EngSetLastError(0x57u);
    return 0LL;
  }
}
