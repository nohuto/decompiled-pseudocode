/*
 * XREFs of ??$vGarbageCollectObject@VCOLORSPACEGC@@@@YAXPEAUHOBJ__@@@Z @ 0x1401D1498
 * Callers:
 *     ?vGarbageCollectObjects@@YAXXZ @ 0x1400855F0 (-vGarbageCollectObjects@@YAXXZ.c)
 * Callees:
 *     ??1HANDLELOCK@@QEAA@XZ @ 0x140016260 (--1HANDLELOCK@@QEAA@XZ.c)
 *     ?vUnlock@HANDLELOCK@@QEAAXXZ @ 0x140016B80 (-vUnlock@HANDLELOCK@@QEAAXXZ.c)
 *     ?HmgShareLockEx@@YAPEAU_BASEOBJECT@@PEAUHOBJ__@@EW4HandleLockOptions@@@Z @ 0x140016E40 (-HmgShareLockEx@@YAPEAU_BASEOBJECT@@PEAUHOBJ__@@EW4HandleLockOptions@@@Z.c)
 *     ??0HANDLELOCK@@QEAA@PEAUHOBJ__@@W4HandleLockOptions@@@Z @ 0x140018960 (--0HANDLELOCK@@QEAA@PEAUHOBJ__@@W4HandleLockOptions@@@Z.c)
 *     ??1SURFREF@@QEAA@XZ @ 0x14008D2D8 (--1SURFREF@@QEAA@XZ.c)
 *     PushThreadGuardedObject @ 0x1400988E0 (PushThreadGuardedObject.c)
 *     ?bDeleteColorSpace@@YAHPEAUHCOLORSPACE__@@W4_CLEANUPTYPE@@@Z @ 0x1401D1F78 (-bDeleteColorSpace@@YAHPEAUHCOLORSPACE__@@W4_CLEANUPTYPE@@@Z.c)
 */

void __fastcall vGarbageCollectObject<COLORSPACEGC>(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // rcx
  __int64 v4; // [rsp+20h] [rbp-40h] BYREF
  int v5; // [rsp+28h] [rbp-38h]
  char v6; // [rsp+2Dh] [rbp-33h]
  _OWORD v7[2]; // [rsp+38h] [rbp-28h] BYREF
  _QWORD *v8; // [rsp+58h] [rbp-8h]

  memset(v7, 0, sizeof(v7));
  PushThreadGuardedObject(
    v7,
    (__int64)v7,
    (__int64)UnexpectedThreadTerminationHandler<COLORSPACEREF>::OnUnexpectedThreadTerminationStatic);
  v8 = 0LL;
  v2 = HmgShareLockEx(a1, 9, 0);
  v8 = (_QWORD *)v2;
  if ( v2 && *(_DWORD *)(v2 + 8) <= 1u && (*(_BYTE *)(v2 + 14) & 0x40) != 0 )
  {
    HANDLELOCK::HANDLELOCK((__int64)&v4, a1, 1u);
    if ( v5 )
    {
      if ( (*(_DWORD *)(v4 + 8) & 0xFFFFFFFE) == 0x80000012 )
      {
        HANDLELOCK::vUnlock((HANDLELOCK *)&v4);
        if ( (unsigned int)bDeleteColorSpace(*v8, 1LL) )
        {
          v8 = 0LL;
          _InterlockedDecrement((volatile signed __int32 *)(*(_QWORD *)(W32GetSessionState(v3) + 88) + 1756LL));
        }
        goto LABEL_10;
      }
      HANDLELOCK::vUnlock((HANDLELOCK *)&v4);
    }
    v6 = 1;
LABEL_10:
    HANDLELOCK::~HANDLELOCK((HANDLELOCK *)&v4);
  }
  SURFREF::~SURFREF((SURFREF *)v7);
}
