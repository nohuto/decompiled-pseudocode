/*
 * XREFs of ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x14002BFF0
 * Callers:
 *     UpdateAllocationProperty @ 0x1400B2A2C (UpdateAllocationProperty.c)
 *     EvictAllocationCallback @ 0x1400B62BC (EvictAllocationCallback.c)
 *     ?InvalidateAllVirtualAddress@VIDMM_SEGMENT@@QEAAXXZ @ 0x1400B66CC (-InvalidateAllVirtualAddress@VIDMM_SEGMENT@@QEAAXXZ.c)
 *     ?MoveOneResource@VIDMM_SEGMENT@@QEAAJPEAUVIDMM_PHYSICAL_ALLOC_LEGACY@@PEA_NPEAX@Z @ 0x1400B6A80 (-MoveOneResource@VIDMM_SEGMENT@@QEAAJPEAUVIDMM_PHYSICAL_ALLOC_LEGACY@@PEA_NPEAX@Z.c)
 *     ?SaveResourceCB@VIDMM_SEGMENT@@QEAAJPEAUVIDMM_PHYSICAL_ALLOC_LEGACY@@PEA_NPEAX@Z @ 0x1400B73F0 (-SaveResourceCB@VIDMM_SEGMENT@@QEAAJPEAUVIDMM_PHYSICAL_ALLOC_LEGACY@@PEA_NPEAX@Z.c)
 *     ?SuspendCpuAccess@VIDMM_SEGMENT@@QEAAJXZ @ 0x1400B76D8 (-SuspendCpuAccess@VIDMM_SEGMENT@@QEAAJXZ.c)
 *     ?AllocateSmallAllocation@VIDMM_PROCESS_HEAP@@AEAAJ_KI_NW4VIDMM_PROCESS_HEAP_MAPPING@@PEAPEAUVIDMM_HEAP_ALLOC@@PEAPEAXPEAE@Z @ 0x1400BA5B8 (-AllocateSmallAllocation@VIDMM_PROCESS_HEAP@@AEAAJ_KI_NW4VIDMM_PROCESS_HEAP_MAPPING@@PEAPEAUVIDM.c)
 *     ?FreeSmallAllocation@VIDMM_PROCESS_HEAP@@AEAAXPEAU_VIDMM_PROCESS_HEAP_ALLOC@@@Z @ 0x1400BAEFC (-FreeSmallAllocation@VIDMM_PROCESS_HEAP@@AEAAXPEAU_VIDMM_PROCESS_HEAP_ALLOC@@@Z.c)
 *     ?MoveDisplayingResource@VIDMM_MEMORY_SEGMENT@@QEAA_K_K0PEBUVIDMM_DISPLAYING_BLOCK@@@Z @ 0x1400BEEBC (-MoveDisplayingResource@VIDMM_MEMORY_SEGMENT@@QEAA_K_K0PEBUVIDMM_DISPLAYING_BLOCK@@@Z.c)
 *     ?PageInFaultedAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@_NPEA_NPEAPEAU2@@Z @ 0x1400CEA6C (-PageInFaultedAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@_NPEA_NPEAPEAU2@@Z.c)
 *     ?VidMmOpCloseAllocationCommand@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@AEAE@Z @ 0x1400D198C (-VidMmOpCloseAllocationCommand@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@AEAE@Z.c)
 *     ?CloseOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@PEAPEAUVIDMM_LOCAL_ALLOC@@_NU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEAPEAU_KEVENT@@@Z @ 0x1400D4C18 (-CloseOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@PEAPEAUVIDMM_LOCAL_ALLOC@@_NU_D3DDDICB_D.c)
 *     ?OpenOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@PEAUVIDMM_GLOBAL_ALLOC@@PEAX_NPEAVDXGALLOCATION@@PEAPEAUVIDMM_ALLOC@@@Z @ 0x1400DE210 (-OpenOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@PEAUVIDMM_GLOBAL_ALLOC@@PEAX_NPEAVDXGALL.c)
 *     ?Evict@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_DEVICE@@PEAPEAUVIDMM_MULTI_ALLOC@@IKPEA_K@Z @ 0x1400E591C (-Evict@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_DEVICE@@PEAPEAUVIDMM_MULTI_ALLOC@@IKPEA_K@Z.c)
 *     ?LockCommon@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@_NKPEAPEAXPEA_N@Z @ 0x1400E7D78 (-LockCommon@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@_NKPEAPEAXPEA_N@Z.c)
 *     ?TerminateAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_MULTI_ALLOC@@IU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEAVDXGTERMINATIONTRACKER@@@Z @ 0x1400E95E8 (-TerminateAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_MULTI_ALLOC@@IU_D3DDDICB_DESTROYALLOCATION2FLA.c)
 *     ?TerminateOneAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@IU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEAVDXGTERMINATIONTRACKER@@@Z @ 0x1400E9BD0 (-TerminateOneAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@IU_D3DDDICB_DESTROYALLOCATION2FLAGS@.c)
 *     ?ReferenceDmaBuffer@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_DMA_BUFFER@@PEAU_D3DDDI_ALLOCATIONLIST@@IEJPEAIPEAT_LARGE_INTEGER@@PEA_KPEAPEAUVIDMM_ALLOC@@PEAUVIDMM_PRIMARIES_REFERENCES@@PEAPEAVDXGALLOCATION@@@Z @ 0x1400EBE64 (-ReferenceDmaBuffer@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_DMA_BUFFER@@PEAU_D3DDDI_ALLOCATIONLIST@@IEJPEAI.c)
 *     ?VidMmSuspendAccessToAllocation@@YAPEAVVIDMM_DEVICE@@PEAUVIDMM_WORKER_THREAD@@PEAUVIDMM_GLOBAL_ALLOC@@@Z @ 0x140102D7C (-VidMmSuspendAccessToAllocation@@YAPEAVVIDMM_DEVICE@@PEAUVIDMM_WORKER_THREAD@@PEAUVIDMM_GLOBAL_A.c)
 *     ?ReclaimOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_PAGING_QUEUE@@PEAUVIDMM_ALLOC@@PEA_KPEAW4_D3DDDI_RECLAIM_RESULT@@@Z @ 0x14010CF0C (-ReclaimOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_PAGING_QUEUE@@PEAUVIDMM_ALLOC@@PEA_KPEAW4_D3D.c)
 *     ?IsAllocationRepurposed@VIDMM_GLOBAL@@QEAA_NPEAUVIDMM_GLOBAL_ALLOC@@@Z @ 0x14010DFB8 (-IsAllocationRepurposed@VIDMM_GLOBAL@@QEAA_NPEAUVIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?DecommitGlobalAllocation@VIDMM_GLOBAL@@QEAA_NPEAUVIDMM_GLOBAL_ALLOC@@@Z @ 0x14010E090 (-DecommitGlobalAllocation@VIDMM_GLOBAL@@QEAA_NPEAUVIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?MarkGlobalAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@@Z @ 0x14010E9E4 (-MarkGlobalAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?OfferOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@W4_D3DKMT_OFFER_PRIORITY@@U_D3DKMT_OFFER_FLAGS@@@Z @ 0x140113CB0 (-OfferOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@W4_D3DKMT_OFFER_PRIORITY@@U_D3DKMT_OFFER.c)
 *     ?EvictAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@@Z @ 0x14011C0EC (-EvictAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?FlushPendingAllocationAccess@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@PEAUVIDMM_ALLOC@@E@Z @ 0x140122454 (-FlushPendingAllocationAccess@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@PEAUVIDMM_ALLOC@@E@Z.c)
 *     ?WaitOnAllDMAReferencesExceptThis@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x140122544 (-WaitOnAllDMAReferencesExceptThis@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z.c)
 *     ?VidMmSetAllocationFlipQueueReferencesPointer@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_MULTI_ALLOC@@PEAUVIDMM_FLIP_QUEUE_REFERENCES@@@Z @ 0x140122628 (-VidMmSetAllocationFlipQueueReferencesPointer@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_MULTI_ALLOC@@PEAUVIDM.c)
 *     ?InvalidateOneAllocation@VIDMM_GLOBAL@@QEAAEPEAUVIDMM_GLOBAL_ALLOC@@@Z @ 0x140124788 (-InvalidateOneAllocation@VIDMM_GLOBAL@@QEAAEPEAUVIDMM_GLOBAL_ALLOC@@@Z.c)
 * Callees:
 *     McTemplateK0q_EtwWriteTransfer @ 0x1400294D8 (McTemplateK0q_EtwWriteTransfer.c)
 *     _guard_dispatch_icall @ 0x14005B850 (_guard_dispatch_icall.c)
 */

void __fastcall DXGFASTMUTEX::Acquire(DXGFASTMUTEX *this)
{
  __int64 v2; // rcx
  __int64 v3; // r8
  int v4; // r9d
  void (__fastcall *v5)(_QWORD, __int64, __int64, const wchar_t *, __int64, _QWORD, _QWORD, _QWORD, _QWORD); // rax
  void (__fastcall *v6)(_QWORD, __int64, __int64, const wchar_t *, __int64, _QWORD, _QWORD, _QWORD, _QWORD); // rax

  KeEnterCriticalRegion();
  if ( *((struct _KTHREAD **)this + 3) == KeGetCurrentThread() )
  {
    if ( *((int *)this + 8) <= 0 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 504;
      ((void (__fastcall *)(_QWORD, __int64, __int64, const wchar_t *, __int64, _QWORD, _QWORD, _QWORD, _QWORD))DxgCoreInterface[88])(
        0LL,
        262146LL,
        0xFFFFFFFFLL,
        L"m_OwnerAcquireCount > 0",
        504LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    ++*((_DWORD *)this + 8);
  }
  else
  {
    if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx((char *)this + 8, 0LL) )
    {
      if ( bTracingEnabled )
      {
        v4 = *((_DWORD *)this + 9);
        if ( v4 != -1 && (byte_14008A201 & 1) != 0 )
          McTemplateK0q_EtwWriteTransfer(v2, &EventBlockThread, v3, v4);
      }
      _InterlockedIncrement64((volatile signed __int64 *)this + 2);
      ExAcquirePushLockExclusiveEx((char *)this + 8, 0LL);
    }
    if ( *((_QWORD *)this + 3) )
    {
      WdLogSingleEntry0(1LL);
      v5 = (void (__fastcall *)(_QWORD, __int64, __int64, const wchar_t *, __int64, _QWORD, _QWORD, _QWORD, _QWORD))DxgCoreInterface[88];
      WdLogGlobalForLineNumber = 530;
      v5(0LL, 262146LL, 0xFFFFFFFFLL, L"NULL == m_OwningThread", 530LL, 0LL, 0LL, 0LL, 0LL);
    }
    if ( *((_DWORD *)this + 8) )
    {
      WdLogSingleEntry0(1LL);
      v6 = (void (__fastcall *)(_QWORD, __int64, __int64, const wchar_t *, __int64, _QWORD, _QWORD, _QWORD, _QWORD))DxgCoreInterface[88];
      WdLogGlobalForLineNumber = 531;
      v6(0LL, 262146LL, 0xFFFFFFFFLL, L"0 == m_OwnerAcquireCount", 531LL, 0LL, 0LL, 0LL, 0LL);
    }
    *((_QWORD *)this + 3) = KeGetCurrentThread();
    *((_DWORD *)this + 8) = 1;
  }
}
