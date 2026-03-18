/*
 * XREFs of ?ProcessReleaseResourceCommands@VIDMM_GLOBAL@@QEAAXXZ @ 0x1400FFB34
 * Callers:
 *     VidMmFlushDeferredEvictions @ 0x14010065C (VidMmFlushDeferredEvictions.c)
 *     VidMmWorkerThreadProc @ 0x140128480 (VidMmWorkerThreadProc.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1400048C0 (--3@YAXPEAX@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x14002EEAC (DxgkLogInternalTriageEvent.c)
 *     ?AcquireExclusive@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x140030100 (-AcquireExclusive@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     _guard_dispatch_icall @ 0x14005B850 (_guard_dispatch_icall.c)
 */

void __fastcall VIDMM_GLOBAL::ProcessReleaseResourceCommands(struct _KTHREAD **this)
{
  __int64 v2; // rcx
  void **v3; // rdi
  void ***v4; // rbx
  volatile signed __int32 *v5; // rcx
  void **v6; // rax
  volatile signed __int32 *v7; // rcx
  __int64 v8; // [rsp+28h] [rbp-50h]
  __int64 v9; // [rsp+30h] [rbp-48h]
  __int64 v10; // [rsp+38h] [rbp-40h]
  char v11[8]; // [rsp+50h] [rbp-28h] BYREF
  volatile signed __int32 *v12; // [rsp+58h] [rbp-20h]
  int v13; // [rsp+60h] [rbp-18h]

  v13 = 0;
  v12 = (volatile signed __int32 *)(this + 4997);
  if ( this != (struct _KTHREAD **)-39976LL && this[4998] == KeGetCurrentThread() )
  {
    WdLogSingleEntry0(1LL);
    v10 = 0LL;
    v9 = 0LL;
    v8 = 0LL;
    WdLogGlobalForLineNumber = 1495;
    DxgkLogInternalTriageEvent(v2, 262146LL);
  }
  DXGAUTOPUSHLOCK::AcquireExclusive((DXGAUTOPUSHLOCK *)v11);
  v3 = (void **)(this + 4995);
  while ( 1 )
  {
    v4 = (void ***)*v3;
    if ( *v3 == v3 )
      break;
    if ( v4[1] != v3 || (v6 = *v4, (*v4)[1] != v4) )
      __fastfail(3u);
    *v3 = v6;
    v6[1] = v3;
    (*((void (__fastcall **)(void **, _QWORD, void **, void **, void **, __int64, __int64, __int64))*v4[2] + 3))(
      v4[2],
      0LL,
      v4[3],
      v4[4],
      v4[5],
      v8,
      v9,
      v10);
    operator delete(v4);
  }
  if ( v13 == 1 )
  {
    v5 = v12;
    v13 = 0;
    _InterlockedDecrement(v12 + 4);
    ExReleasePushLockSharedEx(v5, 0LL);
LABEL_8:
    KeLeaveCriticalRegion();
    return;
  }
  if ( v13 == 2 )
  {
    v7 = v12;
    v13 = 0;
    *((_QWORD *)v12 + 1) = 0LL;
    ExReleasePushLockExclusiveEx(v7, 0LL);
    goto LABEL_8;
  }
}
