/*
 * XREFs of ?VidMmRotateLegacyAllocation@@YAJPEAVVIDMM_GLOBAL@@PEAUVIDMM_PHYSICAL_ALLOC@@W4_MM_ROTATE_DIRECTION@@PEAU_MDL@@P6AJ33PEAX@Z4TVIDMM_ROTATE_FLAGS@@@Z @ 0x140122398
 * Callers:
 *     DiscardCpuHostApertureRange @ 0x1400B1B94 (DiscardCpuHostApertureRange.c)
 *     ?InvalidateAllVirtualAddress@VIDMM_SEGMENT@@QEAAXXZ @ 0x1400B66CC (-InvalidateAllVirtualAddress@VIDMM_SEGMENT@@QEAAXXZ.c)
 *     ?SuspendCpuAccess@VIDMM_SEGMENT@@QEAAJXZ @ 0x1400B76D8 (-SuspendCpuAccess@VIDMM_SEGMENT@@QEAAJXZ.c)
 *     ?PurgeCpuVisibleAllocations@VIDMM_MEMORY_SEGMENT@@QEAAXUVIDMM_PURGE_FLAGS@@PEA_K@Z @ 0x1400FF140 (-PurgeCpuVisibleAllocations@VIDMM_MEMORY_SEGMENT@@QEAAXUVIDMM_PURGE_FLAGS@@PEA_K@Z.c)
 *     MapInCpuVisibleSegment @ 0x140103038 (MapInCpuVisibleSegment.c)
 *     ?TransferToSegment@VIDMM_MEMORY_SEGMENT@@QEAAJPEAUVIDMM_PHYSICAL_ALLOC_LEGACY@@PEAU_MDL@@_N@Z @ 0x14012B6B8 (-TransferToSegment@VIDMM_MEMORY_SEGMENT@@QEAAJPEAUVIDMM_PHYSICAL_ALLOC_LEGACY@@PEAU_MDL@@_N@Z.c)
 *     ?TransferToSystem@VIDMM_MEMORY_SEGMENT@@QEAAXPEAUVIDMM_PHYSICAL_ALLOC_LEGACY@@_NPEAUVIDMM_LOCAL_ALLOC@@1@Z @ 0x14012C3C4 (-TransferToSystem@VIDMM_MEMORY_SEGMENT@@QEAAXPEAUVIDMM_PHYSICAL_ALLOC_LEGACY@@_NPEAUVIDMM_LOCAL_.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14005B850 (_guard_dispatch_icall.c)
 */

__int64 __fastcall VidMmRotateLegacyAllocation(
        __int64 a1,
        _QWORD *a2,
        unsigned int a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        int a7)
{
  __int64 result; // rax
  __int64 v10; // rcx

  result = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD, _QWORD, __int64, _QWORD, __int64, __int64, int))(**(_QWORD **)(*a2 + 216LL) + 48LL))(
             *(_QWORD *)(*a2 + 216LL),
             a1,
             *(_QWORD *)(*a2 + 224LL),
             a3,
             a4,
             a2[2],
             a5,
             a6,
             a7);
  if ( (int)result >= 0 )
  {
    v10 = a2[8];
    if ( !v10 )
      v10 = a2[16];
    if ( a3 > 1 )
      _InterlockedDecrement((volatile signed __int32 *)(v10 + 520));
    else
      _InterlockedIncrement((volatile signed __int32 *)(v10 + 520));
  }
  return result;
}
