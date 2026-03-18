/*
 * XREFs of ?UnmapRange@VIDMM_CPU_HOST_APERTURE@@QEAAXPEAUVIDMM_CPU_HOST_APERTURE_RANGE@@@Z @ 0x1401103FC
 * Callers:
 *     AcquireResidentSystemAddressInCpuHostAperture @ 0x1400B10FC (AcquireResidentSystemAddressInCpuHostAperture.c)
 *     DiscardCpuHostApertureRange @ 0x1400B1B94 (DiscardCpuHostApertureRange.c)
 *     ReleaseResidentSystemAddressInCpuHostAperture @ 0x1400B2780 (ReleaseResidentSystemAddressInCpuHostAperture.c)
 *     ?InvalidateAllVirtualAddress@VIDMM_SEGMENT@@QEAAXXZ @ 0x1400B66CC (-InvalidateAllVirtualAddress@VIDMM_SEGMENT@@QEAAXXZ.c)
 *     ?PurgeCpuVisibleAllocations@VIDMM_MEMORY_SEGMENT@@QEAAXUVIDMM_PURGE_FLAGS@@PEA_K@Z @ 0x1400FF140 (-PurgeCpuVisibleAllocations@VIDMM_MEMORY_SEGMENT@@QEAAXUVIDMM_PURGE_FLAGS@@PEA_K@Z.c)
 *     ?FreeAddressForPageTableInCpuHostAperture@VIDMM_MEMORY_SEGMENT@@QEAAXXZ @ 0x140110398 (-FreeAddressForPageTableInCpuHostAperture@VIDMM_MEMORY_SEGMENT@@QEAAXXZ.c)
 *     ?CommitResource@VIDMM_MEMORY_SEGMENT@@UEAAJPEAUVIDMM_PHYSICAL_ALLOC_LEGACY@@@Z @ 0x14012AEC0 (-CommitResource@VIDMM_MEMORY_SEGMENT@@UEAAJPEAUVIDMM_PHYSICAL_ALLOC_LEGACY@@@Z.c)
 *     ?EvictResource@VIDMM_MEMORY_SEGMENT@@UEAA_NPEAUVIDMM_PHYSICAL_ALLOC_LEGACY@@_N11PEAUVIDMM_LOCAL_ALLOC@@@Z @ 0x14012B100 (-EvictResource@VIDMM_MEMORY_SEGMENT@@UEAA_NPEAUVIDMM_PHYSICAL_ALLOC_LEGACY@@_N11PEAUVIDMM_LOCAL_.c)
 * Callees:
 *     ?DdiUnmapCpuHostAperture@ADAPTER_RENDER@@QEAAJPEBU_DXGKARG_UNMAPCPUHOSTAPERTURE@@@Z @ 0x14003A604 (-DdiUnmapCpuHostAperture@ADAPTER_RENDER@@QEAAJPEBU_DXGKARG_UNMAPCPUHOSTAPERTURE@@@Z.c)
 *     McTemplateK0ppqQR2_EtwWriteTransfer @ 0x140046C0C (McTemplateK0ppqQR2_EtwWriteTransfer.c)
 */

// write access to const memory has been detected, the output may be wrong!
void __fastcall VIDMM_CPU_HOST_APERTURE::UnmapRange(
        VIDMM_CPU_HOST_APERTURE *this,
        struct VIDMM_CPU_HOST_APERTURE_RANGE ***a2)
{
  struct VIDMM_CPU_HOST_APERTURE_RANGE **v4; // rcx
  struct VIDMM_CPU_HOST_APERTURE_RANGE **v5; // rax
  _DWORD *v6; // rsi
  WORD *v7; // rcx
  UINT64 v8; // rbp
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  int v12; // [rsp+28h] [rbp-40h]
  struct _DXGKARG_UNMAPCPUHOSTAPERTURE v13; // [rsp+40h] [rbp-28h] BYREF

  v4 = *a2;
  if ( (*a2)[1] != (struct VIDMM_CPU_HOST_APERTURE_RANGE *)a2
    || (v5 = a2[1], *v5 != (struct VIDMM_CPU_HOST_APERTURE_RANGE *)a2) )
  {
    __fastfail(3u);
  }
  *v5 = (struct VIDMM_CPU_HOST_APERTURE_RANGE *)v4;
  v6 = (_DWORD *)a2 + 9;
  v4[1] = (struct VIDMM_CPU_HOST_APERTURE_RANGE *)v5;
  *a2 = 0LL;
  a2[1] = 0LL;
  v7 = (WORD *)*((_QWORD *)this + 6);
  v8 = *((unsigned int *)a2 + 6);
  *(_DWORD *)(&v13.PhysicalAdapterIndex + 1) = 0;
  v13.NumberOfPages = v8;
  v13.pCpuHostAperturePages = (UINT32 *)a2 + 9;
  v13.SegmentId = v7[32];
  v13.PhysicalAdapterIndex = v7[30];
  if ( (int)ADAPTER_RENDER::DdiUnmapCpuHostAperture(
              *(ADAPTER_RENDER **)(*(_QWORD *)(*(_QWORD *)v7 + 24LL) + 3168LL),
              &v13) < 0 )
  {
    g_DxgMmsBugcheckExportIndex = 1;
    WdLogSingleEntry5(0LL, 270LL, 46LL, this, a2, &v13);
    WdLogGlobalForLineNumber = 213;
    JUMPOUT(0x14011051BLL);
  }
  *v6 = -1;
  if ( (byte_14008A201 & 0x10) != 0 )
  {
    v12 = v8;
    McTemplateK0ppqQR2_EtwWriteTransfer(v10, v9, v11, **((_QWORD **)this + 6), a2[2], v12, v6);
  }
}
