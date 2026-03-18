/*
 * XREFs of ?NotifyAllocationClosed@VIDMM_DEVICE@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x14010F3AC
 * Callers:
 *     ?CloseOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@PEAPEAUVIDMM_LOCAL_ALLOC@@_NU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEAPEAU_KEVENT@@@Z @ 0x1400D4C18 (-CloseOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@PEAPEAUVIDMM_LOCAL_ALLOC@@_NU_D3DDDICB_D.c)
 *     ?OpenOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@PEAUVIDMM_GLOBAL_ALLOC@@PEAX_NPEAVDXGALLOCATION@@PEAPEAUVIDMM_ALLOC@@@Z @ 0x1400DE210 (-OpenOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@PEAUVIDMM_GLOBAL_ALLOC@@PEAX_NPEAVDXGALL.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14002EEAC (DxgkLogInternalTriageEvent.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x14002FF98 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 */

void __fastcall VIDMM_DEVICE::NotifyAllocationClosed(VIDMM_DEVICE *this, struct VIDMM_ALLOC *a2)
{
  __int64 v2; // rbx
  struct _KTHREAD **v4; // rbx
  __int64 v5; // rcx
  _QWORD *v6; // rax
  __int64 v7; // rdx
  _QWORD *v8; // rcx

  v2 = *((_QWORD *)this + 2);
  if ( v2 )
  {
    v4 = (struct _KTHREAD **)(v2 + 144);
    if ( v4 && v4[1] == KeGetCurrentThread() )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 1495;
      DxgkLogInternalTriageEvent(v5, 262146LL);
    }
    DXGPUSHLOCK::AcquireExclusive((DXGPUSHLOCK *)v4);
    v6 = (_QWORD *)((char *)a2 + 632);
    v7 = *((_QWORD *)a2 + 79);
    if ( *(struct VIDMM_ALLOC **)(v7 + 8) != (struct VIDMM_ALLOC *)((char *)a2 + 632)
      || (v8 = (_QWORD *)*((_QWORD *)a2 + 80), (_QWORD *)*v8 != v6) )
    {
      __fastfail(3u);
    }
    *v8 = v7;
    *(_QWORD *)(v7 + 8) = v8;
    *((_QWORD *)a2 + 80) = 0LL;
    *v6 = 0LL;
    v4[1] = 0LL;
    ExReleasePushLockExclusiveEx(v4, 0LL);
    KeLeaveCriticalRegion();
  }
}
