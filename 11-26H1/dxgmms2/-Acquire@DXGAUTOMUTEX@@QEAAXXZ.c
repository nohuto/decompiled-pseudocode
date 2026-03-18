/*
 * XREFs of ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x14002C2E0
 * Callers:
 *     ?UpdateAllocationPriority@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@K@Z @ 0x14009B954 (-UpdateAllocationPriority@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@K@Z.c)
 *     ?InvalidateCache@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PROCESS@@PEAUVIDMM_MULTI_GLOBAL_ALLOC@@PEAUVIDMM_MULTI_ALLOC@@_K3@Z @ 0x14009F738 (-InvalidateCache@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PROCESS@@PEAUVIDMM_MULTI_GLOBAL_ALLOC@@PEAUVIDMM_M.c)
 *     ?VidMmCopyContentEscape@@YAJW4_D3DKMT_ESCAPE_COPY_CONTENT_DIRECTION@@PEAXI_K2@Z @ 0x1400A2820 (-VidMmCopyContentEscape@@YAJW4_D3DKMT_ESCAPE_COPY_CONTENT_DIRECTION@@PEAXI_K2@Z.c)
 *     VidMmSetExistingSysMemPages @ 0x1400A3B50 (VidMmSetExistingSysMemPages.c)
 *     VidMmSetExistingSysMemStore @ 0x1400A3C40 (VidMmSetExistingSysMemStore.c)
 *     ?AllocateGlobal@VIDMM_RECYCLE_HEAP_MGR@@UEAAJPEAUVIDMM_GLOBAL_ALLOC@@_KIW4VIDMM_HEAP_ALLOCATE_FLAGS@@PEAXW4VIDMM_PROCESS_HEAP_MAPPING@@PEAPEAUVIDMM_HEAP_ALLOC@@PEAPEAXPEAE@Z @ 0x1400ACD30 (-AllocateGlobal@VIDMM_RECYCLE_HEAP_MGR@@UEAAJPEAUVIDMM_GLOBAL_ALLOC@@_KIW4VIDMM_HEAP_ALLOCATE_FL.c)
 *     ?GetGuestPhysicalAddress@VIDMM_RECYCLE_HEAP_MGR@@UEAAPEAXPEBUVIDMM_HEAP_ALLOC@@@Z @ 0x1400AD740 (-GetGuestPhysicalAddress@VIDMM_RECYCLE_HEAP_MGR@@UEAAPEAXPEBUVIDMM_HEAP_ALLOC@@@Z.c)
 *     ?MapViewOfAllocation@VIDMM_RECYCLE_HEAP_MGR@@UEAAPEAXPEAUVIDMM_HEAP_ALLOC@@_K1_N2PEAPEAX@Z @ 0x1400ADB40 (-MapViewOfAllocation@VIDMM_RECYCLE_HEAP_MGR@@UEAAPEAXPEAUVIDMM_HEAP_ALLOC@@_K1_N2PEAPEAX@Z.c)
 *     ?UnmapViewOfAllocation@VIDMM_RECYCLE_HEAP_MGR@@UEAAXPEAUVIDMM_HEAP_ALLOC@@PEAX@Z @ 0x1400ADC40 (-UnmapViewOfAllocation@VIDMM_RECYCLE_HEAP_MGR@@UEAAXPEAUVIDMM_HEAP_ALLOC@@PEAX@Z.c)
 *     ReleaseTemporaryResourcesForAllocation @ 0x1400AFF9C (ReleaseTemporaryResourcesForAllocation.c)
 *     ?VidMmReleaseTemporaryResourcesForLegacyAllocation@@YAXPEAUVIDMM_PHYSICAL_ADAPTER_LEGACY@@PEAUVIDMM_PHYSICAL_ALLOC_LEGACY@@_N@Z @ 0x1400B37E4 (-VidMmReleaseTemporaryResourcesForLegacyAllocation@@YAXPEAUVIDMM_PHYSICAL_ADAPTER_LEGACY@@PEAUVI.c)
 *     ?MapVideoApertureSegment@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@I_K11PEBU_MDL@@_N3@Z @ 0x1400D76D0 (-MapVideoApertureSegment@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@I_K11PEBU_MDL@@_N3@Z.c)
 *     ?UnmapVideoApertureSegment@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@I_K11T_LARGE_INTEGER@@_N@Z @ 0x1400D9190 (-UnmapVideoApertureSegment@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@I_K11T_LARGE_INTEGER@@_N@Z.c)
 *     CommitResources_0 @ 0x1400DCFC8 (CommitResources_0.c)
 *     ?CurationThread@VIDMM_RECYCLE_HEAP_MGR@@QEAAXXZ @ 0x1400F1660 (-CurationThread@VIDMM_RECYCLE_HEAP_MGR@@QEAAXXZ.c)
 *     ?FreeGlobal@VIDMM_RECYCLE_HEAP_MGR@@UEAAXPEAUVIDMM_HEAP_ALLOC@@PEAX_N@Z @ 0x1400F4DC0 (-FreeGlobal@VIDMM_RECYCLE_HEAP_MGR@@UEAAXPEAUVIDMM_HEAP_ALLOC@@PEAX_N@Z.c)
 *     ?ZeroIfNeeded@VIDMM_RECYCLE_HEAP_MGR@@UEAAXPEAUVIDMM_HEAP_ALLOC@@@Z @ 0x1400F5080 (-ZeroIfNeeded@VIDMM_RECYCLE_HEAP_MGR@@UEAAXPEAUVIDMM_HEAP_ALLOC@@@Z.c)
 *     ?MarkNoZeroNeed@VIDMM_RECYCLE_HEAP_MGR@@UEAAXPEAUVIDMM_HEAP_ALLOC@@@Z @ 0x1400F5120 (-MarkNoZeroNeed@VIDMM_RECYCLE_HEAP_MGR@@UEAAXPEAUVIDMM_HEAP_ALLOC@@@Z.c)
 *     ?LockHeapAllocation@VIDMM_RECYCLE_HEAP_MGR@@UEAAJPEAUVIDMM_HEAP_ALLOC@@PEAUVIDMM_GLOBAL_ALLOC@@_K2W4_LOCK_OPERATION@@PEAVVIDMM_GLOBAL@@_N@Z @ 0x1400F5F40 (-LockHeapAllocation@VIDMM_RECYCLE_HEAP_MGR@@UEAAJPEAUVIDMM_HEAP_ALLOC@@PEAUVIDMM_GLOBAL_ALLOC@@_.c)
 *     ??1VIDMM_RECYCLE_HEAP_MGR@@UEAA@XZ @ 0x1400F6060 (--1VIDMM_RECYCLE_HEAP_MGR@@UEAA@XZ.c)
 *     ?GetBackingAddress@VIDMM_RECYCLE_HEAP_MGR@@UEBA_KPEBUVIDMM_HEAP_ALLOC@@@Z @ 0x1400F7470 (-GetBackingAddress@VIDMM_RECYCLE_HEAP_MGR@@UEBA_KPEBUVIDMM_HEAP_ALLOC@@@Z.c)
 *     ?Reset@VIDMM_RECYCLE_HEAP_MGR@@UEAAJPEAUVIDMM_HEAP_ALLOC@@PEAX_KW4VIDMM_PAGE_PRIORITY@@_N@Z @ 0x1400F7A30 (-Reset@VIDMM_RECYCLE_HEAP_MGR@@UEAAJPEAUVIDMM_HEAP_ALLOC@@PEAX_KW4VIDMM_PAGE_PRIORITY@@_N@Z.c)
 *     ?Rotate@VIDMM_RECYCLE_HEAP_MGR@@UEAAJPEAVVIDMM_GLOBAL@@PEAUVIDMM_HEAP_ALLOC@@W4_MM_ROTATE_DIRECTION@@PEAU_MDL@@_KP6AJ33PEAX@Z5TVIDMM_ROTATE_FLAGS@@@Z @ 0x140109670 (-Rotate@VIDMM_RECYCLE_HEAP_MGR@@UEAAJPEAVVIDMM_GLOBAL@@PEAUVIDMM_HEAP_ALLOC@@W4_MM_ROTATE_DIRECT.c)
 *     ?UnlockHeapAllocation@VIDMM_RECYCLE_HEAP_MGR@@UEAAXPEAUVIDMM_HEAP_ALLOC@@_K1_N@Z @ 0x14010A420 (-UnlockHeapAllocation@VIDMM_RECYCLE_HEAP_MGR@@UEAAXPEAUVIDMM_HEAP_ALLOC@@_K1_N@Z.c)
 *     ?EvictTemporaryResourceForCleanup@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_PHYSICAL_ALLOC@@PEAUVIDMM_LOCAL_ALLOC@@@Z @ 0x14010B960 (-EvictTemporaryResourceForCleanup@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_PHYSICAL_ALLOC@@PEAUVIDMM_LOCAL_A.c)
 *     ?ForceDiscardOffer@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x14010DB3C (-ForceDiscardOffer@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z.c)
 *     ProcessSystemMemoryOfferList @ 0x14010E534 (ProcessSystemMemoryOfferList.c)
 *     ?GetDefaultMapping@VIDMM_RECYCLE_HEAP_MGR@@QEAAPEAXPEAUVIDMM_HEAP_ALLOC@@@Z @ 0x140110640 (-GetDefaultMapping@VIDMM_RECYCLE_HEAP_MGR@@QEAAPEAXPEAUVIDMM_HEAP_ALLOC@@@Z.c)
 *     ?ReportHeapStates@VIDMM_RECYCLE_HEAP_MGR@@QEAAXXZ @ 0x140112990 (-ReportHeapStates@VIDMM_RECYCLE_HEAP_MGR@@QEAAXXZ.c)
 *     ?GetPfnArray@VIDMM_RECYCLE_HEAP_MGR@@UEBAPEB_KPEBUVIDMM_HEAP_ALLOC@@_K1@Z @ 0x140115D80 (-GetPfnArray@VIDMM_RECYCLE_HEAP_MGR@@UEBAPEB_KPEBUVIDMM_HEAP_ALLOC@@_K1@Z.c)
 *     EvictResources @ 0x1401172F8 (EvictResources.c)
 *     ?FlushTransitions@VIDMM_RECYCLE_HEAP_MGR@@UEAAJXZ @ 0x140119790 (-FlushTransitions@VIDMM_RECYCLE_HEAP_MGR@@UEAAJXZ.c)
 *     ?ResetUndo@VIDMM_RECYCLE_HEAP_MGR@@UEAAJPEAUVIDMM_HEAP_ALLOC@@PEAX_K@Z @ 0x14011CEC0 (-ResetUndo@VIDMM_RECYCLE_HEAP_MGR@@UEAAJPEAUVIDMM_HEAP_ALLOC@@PEAX_K@Z.c)
 * Callees:
 *     McTemplateK0q_EtwWriteTransfer @ 0x1400294D8 (McTemplateK0q_EtwWriteTransfer.c)
 *     _guard_dispatch_icall @ 0x14005B850 (_guard_dispatch_icall.c)
 */

void __fastcall DXGAUTOMUTEX::Acquire(DXGAUTOMUTEX *this)
{
  __int64 v2; // rbx
  __int64 v3; // rcx
  __int64 v4; // r8
  int v5; // r9d
  void (__fastcall *v6)(_QWORD, __int64, __int64, const wchar_t *, __int64, _QWORD, _QWORD, _QWORD, _QWORD); // rax
  void (__fastcall *v7)(_QWORD, __int64, __int64, const wchar_t *, __int64, _QWORD, _QWORD, _QWORD, _QWORD); // rax
  void (__fastcall *v8)(_QWORD, __int64, __int64, const wchar_t *, __int64, _QWORD, _QWORD, _QWORD, _QWORD); // rax

  if ( *((_BYTE *)this + 8) )
  {
    WdLogSingleEntry5(0LL, 275LL, 4LL, this, 0LL, 0LL);
    WdLogGlobalForLineNumber = 672;
  }
  v2 = *(_QWORD *)this;
  KeEnterCriticalRegion();
  if ( *(struct _KTHREAD **)(v2 + 24) == KeGetCurrentThread() )
  {
    if ( *(int *)(v2 + 32) <= 0 )
    {
      WdLogSingleEntry0(1LL);
      v8 = (void (__fastcall *)(_QWORD, __int64, __int64, const wchar_t *, __int64, _QWORD, _QWORD, _QWORD, _QWORD))DxgCoreInterface[88];
      WdLogGlobalForLineNumber = 504;
      v8(0LL, 262146LL, 0xFFFFFFFFLL, L"m_OwnerAcquireCount > 0", 504LL, 0LL, 0LL, 0LL, 0LL);
    }
    ++*(_DWORD *)(v2 + 32);
  }
  else
  {
    if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(v2 + 8, 0LL) )
    {
      if ( bTracingEnabled )
      {
        v5 = *(_DWORD *)(v2 + 36);
        if ( v5 != -1 && (byte_14008A201 & 1) != 0 )
          McTemplateK0q_EtwWriteTransfer(v3, &EventBlockThread, v4, v5);
      }
      _InterlockedIncrement64((volatile signed __int64 *)(v2 + 16));
      ExAcquirePushLockExclusiveEx(v2 + 8, 0LL);
    }
    if ( *(_QWORD *)(v2 + 24) )
    {
      WdLogSingleEntry0(1LL);
      v6 = (void (__fastcall *)(_QWORD, __int64, __int64, const wchar_t *, __int64, _QWORD, _QWORD, _QWORD, _QWORD))DxgCoreInterface[88];
      WdLogGlobalForLineNumber = 530;
      v6(0LL, 262146LL, 0xFFFFFFFFLL, L"NULL == m_OwningThread", 530LL, 0LL, 0LL, 0LL, 0LL);
    }
    if ( *(_DWORD *)(v2 + 32) )
    {
      WdLogSingleEntry0(1LL);
      v7 = (void (__fastcall *)(_QWORD, __int64, __int64, const wchar_t *, __int64, _QWORD, _QWORD, _QWORD, _QWORD))DxgCoreInterface[88];
      WdLogGlobalForLineNumber = 531;
      v7(0LL, 262146LL, 0xFFFFFFFFLL, L"0 == m_OwnerAcquireCount", 531LL, 0LL, 0LL, 0LL, 0LL);
    }
    *(_QWORD *)(v2 + 24) = KeGetCurrentThread();
    *(_DWORD *)(v2 + 32) = 1;
  }
  *((_BYTE *)this + 8) = 1;
}
