/*
 * XREFs of ?EvictTemporaryResourceForCleanup@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_PHYSICAL_ALLOC@@PEAUVIDMM_LOCAL_ALLOC@@@Z @ 0x14010B960
 * Callers:
 *     ?VidMmOpCloseAllocationCommand@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@AEAE@Z @ 0x1400D198C (-VidMmOpCloseAllocationCommand@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@AEAE@Z.c)
 * Callees:
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x14002C2E0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14002EEAC (DxgkLogInternalTriageEvent.c)
 *     McTemplateK0x_EtwWriteTransfer @ 0x140031A48 (McTemplateK0x_EtwWriteTransfer.c)
 *     ??1DXGAUTOMUTEX@@QEAA@XZ @ 0x140035B48 (--1DXGAUTOMUTEX@@QEAA@XZ.c)
 *     _guard_dispatch_icall @ 0x14005B850 (_guard_dispatch_icall.c)
 *     ?VidMmiRemoveProbeAndLockReference@@YAXPEAUVIDMM_GLOBAL_ALLOC@@@Z @ 0x14010BB30 (-VidMmiRemoveProbeAndLockReference@@YAXPEAUVIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?UnlockAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_LOCAL_ALLOC@@_K1_N2@Z @ 0x14010BB78 (-UnlockAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_LOCAL_ALLOC@@_K1_N2@Z.c)
 *     ?VidMmiReleaseSystemCommitMdl@@YAXPEAUVIDMM_GLOBAL_ALLOC@@@Z @ 0x14010BC7C (-VidMmiReleaseSystemCommitMdl@@YAXPEAUVIDMM_GLOBAL_ALLOC@@@Z.c)
 */

void __fastcall VIDMM_GLOBAL::EvictTemporaryResourceForCleanup(
        VIDMM_GLOBAL *this,
        struct VIDMM_PHYSICAL_ALLOC *a2,
        struct VIDMM_LOCAL_ALLOC *a3)
{
  __int64 v5; // rsi
  __int64 v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // rbx
  __int64 v12; // [rsp+50h] [rbp-18h] BYREF
  char v13; // [rsp+58h] [rbp-10h]

  v5 = *(_QWORD *)a2;
  v7 = *(_QWORD *)(*((_QWORD *)this + 5040) + 8LL * ((*((_DWORD *)a2 + 13) >> 2) & 0x3F));
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 216LL))(v7);
  v13 = 0;
  v12 = v5 + 136;
  if ( v5 == -136 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 628;
    DxgkLogInternalTriageEvent(v8, 262146LL);
  }
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)&v12);
  if ( (*(_DWORD *)(v5 + 32) & 2) != 0 )
  {
    if ( *(_QWORD *)(v5 + 56) )
      VidMmiReleaseSystemCommitMdl((struct VIDMM_GLOBAL_ALLOC *)v5);
    if ( ((*(_DWORD *)(*((_QWORD *)this + 3) + 444LL) & 4) == 0
       || (**(_DWORD **)(v5 + 368) & 0x4000) != 0
       || (*(_DWORD *)(v5 + 28) & 0x4000) != 0)
      && (*(_DWORD *)(v5 + 28) & 0x12) == 0 )
    {
      VidMmiRemoveProbeAndLockReference((struct VIDMM_GLOBAL_ALLOC *)v5);
      if ( !*(_DWORD *)(v5 + 188) )
      {
        if ( !a3 )
          a3 = *(struct VIDMM_LOCAL_ALLOC **)(v5 + 48);
        VIDMM_GLOBAL::UnlockAllocation(this, a3, 0LL, *(_QWORD *)(*(_QWORD *)v5 + 16LL), 0, 1);
        if ( (byte_14008A203 & 8) != 0 )
          McTemplateK0x_EtwWriteTransfer(v9, &EventUnlockAllocationBackingStore, v10, v5);
      }
    }
    v11 = *((_QWORD *)a2 + 2);
    ExAcquirePushLockExclusiveEx((char *)this + 7048, 0LL);
    *((_QWORD *)this + 886) -= v11;
    ExReleasePushLockExclusiveEx((char *)this + 7048, 0LL);
    *(_DWORD *)(v5 + 32) &= ~2u;
  }
  DXGAUTOMUTEX::~DXGAUTOMUTEX((DXGAUTOMUTEX *)&v12);
}
