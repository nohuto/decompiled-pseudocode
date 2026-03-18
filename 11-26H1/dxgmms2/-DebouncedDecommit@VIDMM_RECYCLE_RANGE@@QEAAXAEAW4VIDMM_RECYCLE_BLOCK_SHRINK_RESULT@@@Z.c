/*
 * XREFs of ?DebouncedDecommit@VIDMM_RECYCLE_RANGE@@QEAAXAEAW4VIDMM_RECYCLE_BLOCK_SHRINK_RESULT@@@Z @ 0x1400F1384
 * Callers:
 *     ?CurationThread@VIDMM_RECYCLE_HEAP_MGR@@QEAAXXZ @ 0x1400F1660 (-CurationThread@VIDMM_RECYCLE_HEAP_MGR@@QEAAXXZ.c)
 *     ?ProcessDebounceList@VIDMM_RECYCLE_HEAP_MGR@@QEAAX_N0@Z @ 0x1400F1DE0 (-ProcessDebounceList@VIDMM_RECYCLE_HEAP_MGR@@QEAAX_N0@Z.c)
 *     ??1VIDMM_RECYCLE_HEAP_MGR@@UEAA@XZ @ 0x1400F6060 (--1VIDMM_RECYCLE_HEAP_MGR@@UEAA@XZ.c)
 * Callees:
 *     McTemplateK0pqq_EtwWriteTransfer @ 0x140012AD0 (McTemplateK0pqq_EtwWriteTransfer.c)
 *     McTemplateK0qxxx_EtwWriteTransfer @ 0x14001970C (McTemplateK0qxxx_EtwWriteTransfer.c)
 *     ?DxgkGetVirtualMemoryInterface@@YAPEBUDXGK_VIRTUAL_MEMORY_INTERFACE@@XZ @ 0x140038DA8 (-DxgkGetVirtualMemoryInterface@@YAPEBUDXGK_VIRTUAL_MEMORY_INTERFACE@@XZ.c)
 *     _guard_dispatch_icall @ 0x14005B850 (_guard_dispatch_icall.c)
 *     ?ShiftTreeMembershipOnDebouncedStateChange@VIDMM_RECYCLE_HEAP@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1400F0C7C (-ShiftTreeMembershipOnDebouncedStateChange@VIDMM_RECYCLE_HEAP@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z.c)
 *     ?DebouncedDecommitZeroTransition@VIDMM_RECYCLE_RANGE@@QEAAXXZ @ 0x1400F0FEC (-DebouncedDecommitZeroTransition@VIDMM_RECYCLE_RANGE@@QEAAXXZ.c)
 *     ?ShrinkOnTailRangeFree@VIDMM_RECYCLE_BLOCK@@QEAA?AW4VIDMM_RECYCLE_BLOCK_SHRINK_RESULT@@PEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1400F106C (-ShrinkOnTailRangeFree@VIDMM_RECYCLE_BLOCK@@QEAA-AW4VIDMM_RECYCLE_BLOCK_SHRINK_RESULT@@PEAVVIDMM.c)
 *     ?CombineFreedScanFromRange@VIDMM_RECYCLE_BLOCK@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1400F2B9C (-CombineFreedScanFromRange@VIDMM_RECYCLE_BLOCK@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z.c)
 */

// write access to const memory has been detected, the output may be wrong!
void __fastcall VIDMM_RECYCLE_RANGE::DebouncedDecommit(
        VIDMM_RECYCLE_BLOCK **this,
        enum VIDMM_RECYCLE_BLOCK_SHRINK_RESULT *a2)
{
  __int64 *v2; // rdi
  __int64 v5; // rcx
  __int64 v6; // r8
  VIDMM_RECYCLE_BLOCK *v7; // rax
  int v8; // edx
  const struct DXGK_VIRTUAL_MEMORY_INTERFACE *VirtualMemoryInterface; // rax
  __int64 v10; // r8
  __int64 v11; // rcx
  __int64 v12; // r8
  VIDMM_RECYCLE_BLOCK *v13; // rdi
  __int64 *v14; // r8
  VIDMM_RECYCLE_BLOCK *v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rax
  __int64 v19; // rcx
  PVOID *v20; // r8
  __int64 v21; // rcx
  __int64 v22; // [rsp+20h] [rbp-28h]
  __int64 v23; // [rsp+28h] [rbp-20h]
  signed __int64 v24; // [rsp+50h] [rbp+8h] BYREF

  if ( g_IsInternalReleaseOrDbg )
  {
    *(_QWORD *)(WdLogNewEntry5_WdTrace(this) + 24) = this;
    WdLogGlobalForLineNumber = 1549;
  }
  v5 = *((int *)this + 16);
  v6 = 5LL;
  if ( (_DWORD)v5 != 5 )
    goto LABEL_6;
  v2 = (__int64 *)(this + 4);
  v7 = this[9];
  v24 = this[5] - this[4];
  v8 = **((_DWORD **)v7 + 4);
  if ( v8 == 3 || (unsigned int)(v8 - 4) <= 2 || (unsigned int)(v8 - 9) <= 1 )
  {
    g_DxgMmsBugcheckExportIndex = 1;
    WdLogSingleEntry5(0LL, 270LL, 52LL, 4LL, 5LL, 0LL);
    WdLogGlobalForLineNumber = 213;
LABEL_6:
    g_DxgMmsBugcheckExportIndex = 1;
    WdLogSingleEntry5(0LL, 270LL, 52LL, v6, v5, 0LL);
    WdLogGlobalForLineNumber = 213;
  }
  VirtualMemoryInterface = DxgkGetVirtualMemoryInterface();
  (*((void (__fastcall **)(__int64, __int64 *, signed __int64 *, __int64))VirtualMemoryInterface + 2))(
    -1LL,
    v2,
    &v24,
    0x4000LL);
  VIDMM_RECYCLE_HEAP::ShiftTreeMembershipOnDebouncedStateChange(
    *((VIDMM_RECYCLE_HEAP **)this[9] + 4),
    (struct VIDMM_RECYCLE_RANGE *)this);
  if ( (byte_14008A201 & 0x10) != 0 )
  {
    v15 = this[9];
    v16 = *((_QWORD *)v15 + 4);
    if ( *(_DWORD *)v16 == 3 || (unsigned int)(*(_DWORD *)v16 - 4) <= 2 )
      v17 = *((_QWORD *)v15 + 7);
    else
      v17 = *v2;
    McTemplateK0qxxx_EtwWriteTransfer(
      v17,
      &EventDestroyProcessAllocationDetails,
      v10,
      *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v16 + 8) + 8LL) + 24LL),
      (char)this,
      v24,
      v17);
  }
  WdLogSingleEntry3(4LL, this, *((int *)this + 16), 0LL);
  WdLogGlobalForLineNumber = 2257;
  if ( (byte_14008A202 & 0x40) != 0 )
  {
    LODWORD(v23) = 0;
    LODWORD(v22) = *((_DWORD *)this + 16);
    McTemplateK0pqq_EtwWriteTransfer(v11, &EventRecycleRangeTransition, v12, this, v22, v23);
  }
  v13 = this[9];
  v14 = (__int64 *)*((_QWORD *)v13 + 19);
  if ( v14 )
  {
    v18 = *v14;
    v19 = 144 * v14[1];
    v20 = (PVOID *)(v19 + *v14 + 16);
    *(_DWORD *)(v19 + v18) = 2;
    *(_QWORD *)(v19 + v18 + 8) = this;
    RtlCaptureStackBackTrace(1u, 0x10u, v20, 0LL);
    ++*(_QWORD *)(*((_QWORD *)v13 + 19) + 8LL);
    v21 = *((_QWORD *)v13 + 19);
    if ( *(_QWORD *)(v21 + 8) == *(_QWORD *)(v21 + 48) )
    {
      *(_QWORD *)(v21 + 8) = 0LL;
      *(_BYTE *)(*((_QWORD *)v13 + 19) + 16LL) = 1;
    }
  }
  *((_DWORD *)this + 16) = 0;
  VIDMM_RECYCLE_RANGE::DebouncedDecommitZeroTransition((VIDMM_RECYCLE_RANGE *)this);
  VIDMM_RECYCLE_BLOCK::CombineFreedScanFromRange(this[9], (struct VIDMM_RECYCLE_RANGE *)this);
  *(_DWORD *)a2 = VIDMM_RECYCLE_BLOCK::ShrinkOnTailRangeFree((__int64 *)this[9], (__int64)this);
}
