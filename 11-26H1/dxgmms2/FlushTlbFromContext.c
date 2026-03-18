/*
 * XREFs of FlushTlbFromContext @ 0x140038EC8
 * Callers:
 *     CommitAllocationVaRange @ 0x140038DCC (CommitAllocationVaRange.c)
 *     ?MakeOneVirtualAddressRangeResident@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@_K1PEAPEAU2@PEA_N@Z @ 0x14009FFB8 (-MakeOneVirtualAddressRangeResident@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@_K1PEAPEAU2@PEA_N@Z.c)
 *     ?PageInOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@W4VIDMM_PLACEMENT_RESTRICTION@@_NPEA_NPEAPEAU2@I_K@Z @ 0x1400CEDF8 (-PageInOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@W4VIDMM_PLACEMENT_RESTRICTION@@_NPEA_NP.c)
 *     ?UpdateGpuVirtualAddressSystemCommand@VIDMM_GLOBAL@@QEAAJPEAUVIDSCH_DEVICE_COMMAND_UPDATEGPUVA@@PEAPEAUVIDMM_ALLOC@@@Z @ 0x140106E1C (-UpdateGpuVirtualAddressSystemCommand@VIDMM_GLOBAL@@QEAAJPEAUVIDSCH_DEVICE_COMMAND_UPDATEGPUVA@@.c)
 * Callees:
 *     ?FlushGpuVaTlb@CVirtualAddressAllocator@@QEAAXI_K0@Z @ 0x140038F20 (-FlushGpuVaTlb@CVirtualAddressAllocator@@QEAAXI_K0@Z.c)
 */

unsigned int __fastcall FlushTlbFromContext(CVirtualAddressAllocator *this, __int64 a2)
{
  unsigned int result; // eax
  unsigned int v5; // ebx

  for ( result = *(_DWORD *)a2; result; *(_DWORD *)a2 = result )
  {
    _BitScanForward(&v5, result);
    CVirtualAddressAllocator::FlushGpuVaTlb(this, v5, *(_QWORD *)(a2 + 8), *(_QWORD *)(a2 + 16));
    result = *(_DWORD *)a2 & ~(1 << v5);
  }
  return result;
}
