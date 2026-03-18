/*
 * XREFs of ?bDeleteRGNOBJAPI@RGNOBJAPI@@QEAAHXZ @ 0x140055690
 * Callers:
 *     ?GrepDeleteReferencedRegion@@YAJPEAUHRGN__@@@Z @ 0x1400554B0 (-GrepDeleteReferencedRegion@@YAJPEAUHRGN__@@@Z.c)
 *     bDeleteRegion @ 0x1400555E0 (bDeleteRegion.c)
 * Callees:
 *     HmgFreeObjectAttr @ 0x14000E3A0 (HmgFreeObjectAttr.c)
 *     ?vDeleteRGNOBJ@RGNOBJ@@QEAAXXZ @ 0x1400163D0 (-vDeleteRGNOBJ@RGNOBJ@@QEAAXXZ.c)
 *     HmgPentryFromPobj @ 0x140019EC0 (HmgPentryFromPobj.c)
 *     ??1HANDLELOCK@@QEAA@XZ @ 0x14001AE40 (--1HANDLELOCK@@QEAA@XZ.c)
 *     ?vUnlock@HANDLELOCK@@QEAAXXZ @ 0x14001C690 (-vUnlock@HANDLELOCK@@QEAAXXZ.c)
 *     ?bDeleteHandle@RGNOBJAPI@@QEAAHXZ @ 0x14001ED10 (-bDeleteHandle@RGNOBJAPI@@QEAAHXZ.c)
 *     ?GreDecodeUserModePointer@@YAPEAXPEAX@Z @ 0x140041EB0 (-GreDecodeUserModePointer@@YAPEAXPEAX@Z.c)
 *     bPEBCacheHandle @ 0x1400549F0 (bPEBCacheHandle.c)
 *     ?bLockHobj@HANDLELOCK@@QEAAHPEAUHOBJ__@@E@Z @ 0x1400570A0 (-bLockHobj@HANDLELOCK@@QEAAHPEAUHOBJ__@@E@Z.c)
 */

__int64 __fastcall RGNOBJAPI::bDeleteRGNOBJAPI(struct HOBJ__ ***this)
{
  unsigned int v1; // ebx
  __int64 v2; // rsi
  __int64 SessionState; // rax
  struct HOBJ__ **v5; // rdx
  __int64 v6; // rbp
  struct HOBJ__ *v7; // rdx
  __int64 v9; // rbp
  _DWORD *v10; // rax
  __int64 v11; // [rsp+30h] [rbp-28h] BYREF
  int v12; // [rsp+38h] [rbp-20h]
  __int16 v13; // [rsp+3Ch] [rbp-1Ch]
  __int64 v14; // [rsp+40h] [rbp-18h]

  v1 = 0;
  v2 = 0LL;
  if ( !*this )
    goto LABEL_9;
  SessionState = W32GetSessionState(this);
  v5 = *this;
  v11 = 0LL;
  v12 = 0;
  v6 = *(_QWORD *)(SessionState + 88);
  v7 = *v5;
  v14 = v6;
  v13 = 0;
  HANDLELOCK::bLockHobj((HANDLELOCK *)&v11, v7, 4u);
  if ( v12 )
  {
    v9 = HmgPentryFromPobj(v6);
    v10 = (_DWORD *)GreDecodeUserModePointer(*(void **)(v9 + 16));
    v2 = (__int64)v10;
    if ( !v10 || (v1 = bPEBCacheHandle(2LL, v10, (unsigned int *)v9, (HANDLELOCK *)&v11, (__int64)this)) == 0 )
      HANDLELOCK::vUnlock((HANDLELOCK *)&v11);
  }
  else
  {
    HIBYTE(v13) = 1;
  }
  HANDLELOCK::~HANDLELOCK((HANDLELOCK *)&v11);
  if ( !v1 )
  {
LABEL_9:
    v1 = RGNOBJAPI::bDeleteHandle((RGNOBJAPI *)this);
    if ( v1 )
    {
      RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)this);
      if ( v2 )
        HmgFreeObjectAttr(v2);
    }
  }
  return v1;
}
