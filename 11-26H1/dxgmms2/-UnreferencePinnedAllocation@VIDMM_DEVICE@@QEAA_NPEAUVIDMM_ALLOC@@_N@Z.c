/*
 * XREFs of ?UnreferencePinnedAllocation@VIDMM_DEVICE@@QEAA_NPEAUVIDMM_ALLOC@@_N@Z @ 0x1400E3EA4
 * Callers:
 *     ?UnpinOneAllocation@VIDMM_GLOBAL@@QEAA_NPEAUVIDMM_ALLOC@@W4VIDMM_UNPIN_ACTION@@_N@Z @ 0x1400E3CE8 (-UnpinOneAllocation@VIDMM_GLOBAL@@QEAA_NPEAUVIDMM_ALLOC@@W4VIDMM_UNPIN_ACTION@@_N@Z.c)
 *     ?PinOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@PEAUVIDMM_PAGING_QUEUE@@K_KPEA_K@Z @ 0x1400E41A0 (-PinOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@PEAUVIDMM_PAGING_QUEUE@@K_KPEA_K@Z.c)
 *     ?CleanupPrimaryAllocation@VIDMM_GLOBAL@@QEAAEPEAUVIDMM_GLOBAL_ALLOC@@@Z @ 0x14012500C (-CleanupPrimaryAllocation@VIDMM_GLOBAL@@QEAAEPEAUVIDMM_GLOBAL_ALLOC@@@Z.c)
 * Callees:
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x14002FF98 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x140030000 (--0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x1400301B0 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ?HasAnyResidencyReferences@VIDMM_ALLOC@@QEBA_NXZ @ 0x14003797C (-HasAnyResidencyReferences@VIDMM_ALLOC@@QEBA_NXZ.c)
 *     ?IsLogicallyPinned@VIDMM_ALLOC@@QEBA_NXZ @ 0x14003E4EC (-IsLogicallyPinned@VIDMM_ALLOC@@QEBA_NXZ.c)
 *     ?NotifyAllocationEvicted@VIDMM_DEVICE@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1400E3764 (-NotifyAllocationEvicted@VIDMM_DEVICE@@QEAAXPEAUVIDMM_ALLOC@@@Z.c)
 *     ?BeginMemoryUsageChange@VIDMM_PROCESS_ADAPTER_INFO@@QEAAXXZ @ 0x1400E5664 (-BeginMemoryUsageChange@VIDMM_PROCESS_ADAPTER_INFO@@QEAAXXZ.c)
 *     ?CommitMemoryUsageChange@VIDMM_PROCESS_ADAPTER_INFO@@QEAAXXZ @ 0x1400E573C (-CommitMemoryUsageChange@VIDMM_PROCESS_ADAPTER_INFO@@QEAAXXZ.c)
 */

bool __fastcall VIDMM_DEVICE::UnreferencePinnedAllocation(VIDMM_DEVICE *this, struct VIDMM_ALLOC *a2, char a3)
{
  char v6; // si
  char v7; // dl
  __int64 v8; // rcx
  _BYTE v10[40]; // [rsp+20h] [rbp-28h] BYREF

  if ( a3 )
    DXGPUSHLOCK::AcquireExclusive((DXGPUSHLOCK *)(*(_QWORD *)this + 45160LL));
  v6 = *((_BYTE *)a2 + 25) & 1;
  if ( v6 )
  {
    if ( !VIDMM_ALLOC::IsLogicallyPinned(a2) )
      *((_BYTE *)a2 + 25) = v7 | 4;
    DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE(
      (DXGAUTOPUSHLOCKEXCLUSIVE *)v10,
      (struct _KTHREAD **)(*((_QWORD *)this + 2) + 144LL));
    *((_BYTE *)a2 + 25) &= ~1u;
    if ( !VIDMM_ALLOC::HasAnyResidencyReferences(a2) )
    {
      VIDMM_PROCESS_ADAPTER_INFO::BeginMemoryUsageChange(*((VIDMM_PROCESS_ADAPTER_INFO **)this + 2));
      VIDMM_DEVICE::NotifyAllocationEvicted(this, a2);
      VIDMM_PROCESS_ADAPTER_INFO::CommitMemoryUsageChange(*((VIDMM_PROCESS_ADAPTER_INFO **)this + 2));
    }
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v10);
  }
  if ( a3 )
  {
    v8 = *(_QWORD *)this;
    *(_QWORD *)(v8 + 45168) = 0LL;
    ExReleasePushLockExclusiveEx(v8 + 45160, 0LL);
    KeLeaveCriticalRegion();
  }
  return v6;
}
