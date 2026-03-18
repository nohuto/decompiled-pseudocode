/*
 * XREFs of ??$vGarbageCollectObject@VXEPALOBJ2@@@@YAXPEAUHOBJ__@@@Z @ 0x1401D1760
 * Callers:
 *     ?vGarbageCollectObjects@@YAXXZ @ 0x1400855F0 (-vGarbageCollectObjects@@YAXXZ.c)
 * Callees:
 *     ??1HANDLELOCK@@QEAA@XZ @ 0x140016260 (--1HANDLELOCK@@QEAA@XZ.c)
 *     ?vUnlock@HANDLELOCK@@QEAAXXZ @ 0x140016B80 (-vUnlock@HANDLELOCK@@QEAAXXZ.c)
 *     ?HmgShareLockEx@@YAPEAU_BASEOBJECT@@PEAUHOBJ__@@EW4HandleLockOptions@@@Z @ 0x140016E40 (-HmgShareLockEx@@YAPEAU_BASEOBJECT@@PEAUHOBJ__@@EW4HandleLockOptions@@@Z.c)
 *     ??0HANDLELOCK@@QEAA@PEAUHOBJ__@@W4HandleLockOptions@@@Z @ 0x140018960 (--0HANDLELOCK@@QEAA@PEAUHOBJ__@@W4HandleLockOptions@@@Z.c)
 *     ??0XEPALOBJ2@@QEAA@XZ @ 0x1401C58B4 (--0XEPALOBJ2@@QEAA@XZ.c)
 *     ??1XEPALOBJ2@@QEAA@XZ @ 0x1401C58F8 (--1XEPALOBJ2@@QEAA@XZ.c)
 *     ?bGarbageCollect@XEPALOBJ2@@QEAA_NXZ @ 0x1401C5B00 (-bGarbageCollect@XEPALOBJ2@@QEAA_NXZ.c)
 */

void __fastcall vGarbageCollectObject<XEPALOBJ2>(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // rcx
  __int64 v4; // [rsp+20h] [rbp-40h] BYREF
  int v5; // [rsp+28h] [rbp-38h]
  char v6; // [rsp+2Dh] [rbp-33h]
  struct _BASEOBJECT *v7[5]; // [rsp+38h] [rbp-28h] BYREF

  XEPALOBJ2::XEPALOBJ2((XEPALOBJ2 *)v7);
  v2 = HmgShareLockEx(a1, 8, 0);
  v7[0] = (struct _BASEOBJECT *)v2;
  if ( v2 && *(_DWORD *)(v2 + 8) <= 1u && (*(_BYTE *)(v2 + 14) & 0x40) != 0 )
  {
    HANDLELOCK::HANDLELOCK((__int64)&v4, a1, 1u);
    if ( v5 )
    {
      if ( (*(_DWORD *)(v4 + 8) & 0xFFFFFFFE) == 0x80000012 )
      {
        HANDLELOCK::vUnlock((HANDLELOCK *)&v4);
        if ( XEPALOBJ2::bGarbageCollect((XEPALOBJ2 *)v7) )
          _InterlockedDecrement((volatile signed __int32 *)(*(_QWORD *)(W32GetSessionState(v3) + 88) + 1756LL));
        goto LABEL_10;
      }
      HANDLELOCK::vUnlock((HANDLELOCK *)&v4);
    }
    v6 = 1;
LABEL_10:
    HANDLELOCK::~HANDLELOCK((HANDLELOCK *)&v4);
  }
  XEPALOBJ2::~XEPALOBJ2(v7);
}
