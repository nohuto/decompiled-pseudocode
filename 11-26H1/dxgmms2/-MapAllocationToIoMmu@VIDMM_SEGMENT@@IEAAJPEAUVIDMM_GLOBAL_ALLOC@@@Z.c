/*
 * XREFs of ?MapAllocationToIoMmu@VIDMM_SEGMENT@@IEAAJPEAUVIDMM_GLOBAL_ALLOC@@@Z @ 0x140125340
 * Callers:
 *     ?MapToIommu@VIDMM_SEGMENT@@QEAAJXZ @ 0x14012A0A4 (-MapToIommu@VIDMM_SEGMENT@@QEAAJXZ.c)
 *     ?CommitResource@VIDMM_SYSMEM_SEGMENT@@UEAAJPEAUVIDMM_PHYSICAL_ALLOC_LEGACY@@@Z @ 0x14012A3F0 (-CommitResource@VIDMM_SYSMEM_SEGMENT@@UEAAJPEAUVIDMM_PHYSICAL_ALLOC_LEGACY@@@Z.c)
 *     ?CommitResource@VIDMM_APERTURE_SEGMENT@@UEAAJPEAUVIDMM_PHYSICAL_ALLOC_LEGACY@@@Z @ 0x14012A910 (-CommitResource@VIDMM_APERTURE_SEGMENT@@UEAAJPEAUVIDMM_PHYSICAL_ALLOC_LEGACY@@@Z.c)
 * Callees:
 *     ?VidMmGetFullPfnArray@@YAPEB_KPEBUVIDMM_GLOBAL_ALLOC@@@Z @ 0x14003E1A4 (-VidMmGetFullPfnArray@@YAPEB_KPEBUVIDMM_GLOBAL_ALLOC@@@Z.c)
 *     _guard_dispatch_icall @ 0x14005B850 (_guard_dispatch_icall.c)
 *     ?VidMmiGetLogicalAddress@@YA_KPEAX_K@Z @ 0x1400D8DB4 (-VidMmiGetLogicalAddress@@YA_KPEAX_K@Z.c)
 */

__int64 __fastcall VIDMM_SEGMENT::MapAllocationToIoMmu(VIDMM_SEGMENT *this, struct VIDMM_GLOBAL_ALLOC *a2)
{
  const unsigned __int64 *FullPfnArray; // rsi
  int v6; // ebx
  __int64 v7; // rdi
  unsigned __int64 LogicalAddress; // rax

  if ( (*((_DWORD *)a2 + 7) & 2) != 0 )
    return 0LL;
  FullPfnArray = VidMmGetFullPfnArray(a2);
  (*(void (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 2) + 216LL))(*((_QWORD *)this + 2), *(_QWORD *)a2);
  v6 = **((_DWORD **)a2 + 46);
  v7 = *(_QWORD *)(*(_QWORD *)a2 + 16LL) >> 12;
  LogicalAddress = VidMmiGetLogicalAddress(*((void **)a2 + 43), 0LL);
  return SysMmMapPagesToIommu(
           *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 1) + 24LL) + 224LL),
           LogicalAddress,
           FullPfnArray,
           v7,
           (v6 & 0x10) != 0,
           2,
           a2);
}
