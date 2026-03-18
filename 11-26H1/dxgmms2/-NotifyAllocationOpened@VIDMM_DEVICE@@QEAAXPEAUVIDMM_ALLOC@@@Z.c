/*
 * XREFs of ?NotifyAllocationOpened@VIDMM_DEVICE@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x14010F7B0
 * Callers:
 *     ?OpenOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@PEAUVIDMM_GLOBAL_ALLOC@@PEAX_NPEAVDXGALLOCATION@@PEAPEAUVIDMM_ALLOC@@@Z @ 0x1400DE210 (-OpenOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@PEAUVIDMM_GLOBAL_ALLOC@@PEAX_NPEAVDXGALL.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14002EEAC (DxgkLogInternalTriageEvent.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x14002FF98 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 */

void __fastcall VIDMM_DEVICE::NotifyAllocationOpened(VIDMM_DEVICE *this, struct VIDMM_ALLOC *a2)
{
  __int64 v2; // rbx
  struct _KTHREAD **v5; // rbx
  __int64 v6; // rcx
  VIDMM_DEVICE **v7; // rdx
  VIDMM_DEVICE *v8; // rax

  v2 = *((_QWORD *)this + 2);
  if ( v2 )
  {
    v5 = (struct _KTHREAD **)(v2 + 144);
    if ( v5 && v5[1] == KeGetCurrentThread() )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 1495;
      DxgkLogInternalTriageEvent(v6, 262146LL);
    }
    DXGPUSHLOCK::AcquireExclusive((DXGPUSHLOCK *)v5);
    v7 = (VIDMM_DEVICE **)*((_QWORD *)this + 22);
    v8 = (struct VIDMM_ALLOC *)((char *)a2 + 632);
    if ( *v7 != (VIDMM_DEVICE *)((char *)this + 168) )
      __fastfail(3u);
    *(_QWORD *)v8 = (char *)this + 168;
    *((_QWORD *)a2 + 80) = v7;
    *v7 = v8;
    *((_QWORD *)this + 22) = v8;
    v5[1] = 0LL;
    ExReleasePushLockExclusiveEx(v5, 0LL);
    KeLeaveCriticalRegion();
  }
}
