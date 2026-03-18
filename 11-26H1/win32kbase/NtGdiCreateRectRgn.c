/*
 * XREFs of NtGdiCreateRectRgn @ 0x140102C20
 * Callers:
 *     <none>
 * Callees:
 *     HmgAllocateObjectAttr @ 0x14000DAE0 (HmgAllocateObjectAttr.c)
 *     HmgFreeObjectAttr @ 0x14000E3A0 (HmgFreeObjectAttr.c)
 *     ?vInitialize@RGNMEMOBJ@@QEAAXK@Z @ 0x140015950 (-vInitialize@RGNMEMOBJ@@QEAAXK@Z.c)
 *     ?vDeleteRGNOBJ@RGNOBJ@@QEAAXXZ @ 0x1400163D0 (-vDeleteRGNOBJ@RGNOBJ@@QEAAXXZ.c)
 *     HmgPentryFromPobj @ 0x140019EC0 (HmgPentryFromPobj.c)
 *     PopThreadGuardedObject @ 0x140019EE0 (PopThreadGuardedObject.c)
 *     ?vSet@RGNOBJ@@QEAAXQEBU_RECTL@@@Z @ 0x14001F730 (-vSet@RGNOBJ@@QEAAXQEBU_RECTL@@@Z.c)
 *     EngSetLastError @ 0x140020060 (EngSetLastError.c)
 *     PushThreadGuardedObject @ 0x140030350 (PushThreadGuardedObject.c)
 *     ?HmgInsertObjectInternal@@YAPEAUHOBJ__@@AEAUSESSION_GLOBALS@Base@Gre@@PEAXKE@Z @ 0x1400C4460 (-HmgInsertObjectInternal@@YAPEAUHOBJ__@@AEAUSESSION_GLOBALS@Base@Gre@@PEAXKE@Z.c)
 *     ?GreEncodeUserModePointer@@YAPEAXPEAX@Z @ 0x140102E20 (-GreEncodeUserModePointer@@YAPEAXPEAX@Z.c)
 *     __security_check_cookie @ 0x14024BC30 (__security_check_cookie.c)
 */

struct HOBJ__ *__fastcall NtGdiCreateRectRgn(LONG a1, LONG a2, LONG a3, LONG a4)
{
  unsigned int v4; // ecx
  unsigned int v5; // r9d
  unsigned int v6; // r8d
  unsigned int v7; // edx
  __int64 v9; // rcx
  void *ObjectAttr; // rdi
  struct Gre::Base::SESSION_GLOBALS *v11; // r14
  struct OBJECT *v12; // rbx
  struct HOBJ__ *inserted; // rsi
  LONG left; // ecx
  LONG top; // ecx
  void *v16; // rdi
  struct OBJECT *v17; // [rsp+20h] [rbp-50h] BYREF
  _OWORD v18[2]; // [rsp+28h] [rbp-48h] BYREF
  struct OBJECT *v19; // [rsp+48h] [rbp-28h]
  char v20; // [rsp+50h] [rbp-20h]
  struct _RECTL v21; // [rsp+58h] [rbp-18h] BYREF

  v21.left = a1;
  v21.top = a2;
  v21.right = a3;
  v21.bottom = a4;
  v4 = a1 & 0xF8000000;
  if ( (!v4 || v4 == -134217728)
    && ((v5 = a4 & 0xF8000000) == 0 || v5 == -134217728)
    && ((v6 = a3 & 0xF8000000) == 0 || v6 == -134217728)
    && ((v7 = a2 & 0xF8000000) == 0 || v7 == -134217728) )
  {
    ObjectAttr = (void *)HmgAllocateObjectAttr();
    if ( ObjectAttr
      && (v17 = 0LL,
          v11 = *(struct Gre::Base::SESSION_GLOBALS **)(W32GetSessionState(v9) + 88),
          RGNMEMOBJ::vInitialize((RGNMEMOBJ *)&v17, 0x70u),
          (v12 = v17) != 0LL) )
    {
      left = v21.left;
      if ( v21.left > v21.right )
      {
        v21.left = v21.right;
        v21.right = left;
      }
      top = v21.top;
      if ( v21.top > v21.bottom )
      {
        v21.top = v21.bottom;
        v21.bottom = top;
      }
      RGNOBJ::vSet((RGNOBJ *)&v17, &v21);
      memset(v18, 0, sizeof(v18));
      PushThreadGuardedObject(
        v18,
        (__int64)v18,
        (__int64)UnexpectedThreadTerminationHandler<HmgInsertObjectHelper>::OnUnexpectedThreadTerminationStatic);
      v19 = 0LL;
      v20 = 0;
      inserted = HmgInsertObjectInternal(v11, v12, 1u, 4u);
      if ( inserted )
      {
        v19 = v12;
        v16 = GreEncodeUserModePointer(ObjectAttr);
        *(_QWORD *)(HmgPentryFromPobj((__int64)v11) + 16) = v16;
      }
      else
      {
        RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v17);
        HmgFreeObjectAttr((__int64)ObjectAttr);
      }
      if ( v19 )
      {
        if ( !v20 )
          _InterlockedDecrement16((volatile signed __int16 *)v19 + 6);
      }
      PopThreadGuardedObject(v18);
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
