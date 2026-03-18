/*
 * XREFs of ?SysMmQueryIommuState@@YAXPEBUSYSMM_ADAPTER@@PEATSYSMM_IOMMU_STATE@@@Z @ 0x140373850
 * Callers:
 *     ?IsGpuVaIoMmuSupported@DXGADAPTER@@QEBAEXZ @ 0x14004B0E4 (-IsGpuVaIoMmuSupported@DXGADAPTER@@QEBAEXZ.c)
 *     ?IsGpuVaIoMmuGlobalSupported@DXGADAPTER@@QEBAEXZ @ 0x14004B118 (-IsGpuVaIoMmuGlobalSupported@DXGADAPTER@@QEBAEXZ.c)
 *     ?SysMmFinalizeInitialization@@YAJPEAUSYSMM_ADAPTER@@T_LARGE_INTEGER@@_N2PEBU_DXGK_PHYSICAL_MEMORY_RANGE@@IW4SYSMM_LEGACY_IOMMU_FLAGS_MODE@@PEATSYSMM_IOMMU_STATE@@@Z @ 0x140286F40 (-SysMmFinalizeInitialization@@YAJPEAUSYSMM_ADAPTER@@T_LARGE_INTEGER@@_N2PEBU_DXGK_PHYSICAL_MEMOR.c)
 *     DxgkEscape @ 0x14043CE60 (DxgkEscape.c)
 * Callees:
 *     <none>
 */

void __fastcall SysMmQueryIommuState(const struct SYSMM_ADAPTER *a1, union SYSMM_IOMMU_STATE *a2)
{
  int v2; // eax
  int v5; // ecx
  int v6; // edx

  v2 = 0;
  *(_DWORD *)a2 = 0;
  if ( (dword_1401696C0 & 0x100) == 0 )
    LOBYTE(v2) = *((_DWORD *)a1 + 24) != 0;
  *(_DWORD *)a2 = v2;
  v5 = v2 | (2 * (*((_DWORD *)a1 + 23) & 1));
  *(_DWORD *)a2 = v5;
  v6 = v5 | (2 * (*((_DWORD *)a1 + 23) & 2));
  *(_DWORD *)a2 = v6;
  *(_DWORD *)a2 = v6 | (2 * (*((_DWORD *)a1 + 23) & 4));
}
