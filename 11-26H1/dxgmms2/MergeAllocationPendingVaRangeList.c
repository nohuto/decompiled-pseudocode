/*
 * XREFs of MergeAllocationPendingVaRangeList @ 0x1400A13CC
 * Callers:
 *     ?PageInOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@W4VIDMM_PLACEMENT_RESTRICTION@@_NPEA_NPEAPEAU2@I_K@Z @ 0x1400CEDF8 (-PageInOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@W4VIDMM_PLACEMENT_RESTRICTION@@_NPEA_NP.c)
 * Callees:
 *     ?AddVaRangeToVadRangeList@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_VAD@@IPEAUVIDMM_MAPPED_VA_RANGE@@@Z @ 0x1400CBEA0 (-AddVaRangeToVadRangeList@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_VAD@@IPEAUVIDMM_MAPPED_VA_RAN.c)
 */

__int64 __fastcall MergeAllocationPendingVaRangeList(CVirtualAddressAllocator *this, __int64 a2)
{
  __int64 v3; // rbx
  __int64 result; // rax

  v3 = a2 + 664;
  while ( *(_QWORD *)v3 != v3 )
  {
    result = CVirtualAddressAllocator::AddVaRangeToVadRangeList(
               this,
               *(struct VIDMM_VAD **)(*(_QWORD *)v3 - 32LL),
               (*(_DWORD *)(*(_QWORD *)v3 + 40LL) >> 4) & 0x3F,
               (struct VIDMM_MAPPED_VA_RANGE *)(*(_QWORD *)v3 - 32LL));
    if ( (int)result < 0 )
      return result;
  }
  return 0LL;
}
