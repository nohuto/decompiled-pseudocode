/*
 * XREFs of ?MapApertureRange@VIDMM_APERTURE_SEGMENT@@AEAAXPEAUVIDMM_PHYSICAL_ALLOC_LEGACY@@_K11PEBU_MDL@@_N3@Z @ 0x1400D7D00
 * Callers:
 *     ?MapPagingBuffer@VIDMM_APERTURE_SEGMENT@@UEAAXPEAUVIDMM_PHYSICAL_ALLOC_LEGACY@@@Z @ 0x1400BD960 (-MapPagingBuffer@VIDMM_APERTURE_SEGMENT@@UEAAXPEAUVIDMM_PHYSICAL_ALLOC_LEGACY@@@Z.c)
 *     ?MapTemporaryResource@VIDMM_APERTURE_SEGMENT@@AEAAXPEAUVIDMM_PHYSICAL_ALLOC_LEGACY@@_K1PEBU_MDL@@@Z @ 0x1400BD9CC (-MapTemporaryResource@VIDMM_APERTURE_SEGMENT@@AEAAXPEAUVIDMM_PHYSICAL_ALLOC_LEGACY@@_K1PEBU_MDL@.c)
 *     ?RestoreFromPurge@VIDMM_APERTURE_SEGMENT@@UEAAXXZ @ 0x1400D7F90 (-RestoreFromPurge@VIDMM_APERTURE_SEGMENT@@UEAAXXZ.c)
 *     ?CommitResource@VIDMM_APERTURE_SEGMENT@@UEAAJPEAUVIDMM_PHYSICAL_ALLOC_LEGACY@@@Z @ 0x14012A910 (-CommitResource@VIDMM_APERTURE_SEGMENT@@UEAAJPEAUVIDMM_PHYSICAL_ALLOC_LEGACY@@@Z.c)
 * Callees:
 *     ?DriverId@VIDMM_SEGMENT@@QEBAGXZ @ 0x140037CA4 (-DriverId@VIDMM_SEGMENT@@QEBAGXZ.c)
 *     McTemplateK0ppxt_EtwWriteTransfer @ 0x140041810 (McTemplateK0ppxt_EtwWriteTransfer.c)
 *     ?MapVideoApertureSegment@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@I_K11PEBU_MDL@@_N3@Z @ 0x1400D76D0 (-MapVideoApertureSegment@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@I_K11PEBU_MDL@@_N3@Z.c)
 */

void __fastcall VIDMM_APERTURE_SEGMENT::MapApertureRange(
        VIDMM_APERTURE_SEGMENT *this,
        struct VIDMM_GLOBAL_ALLOC **a2,
        __int64 a3,
        __int64 a4,
        unsigned __int64 a5,
        struct _MDL *a6,
        bool a7,
        bool a8)
{
  struct VIDMM_GLOBAL_ALLOC *v9; // rbp
  unsigned __int16 v11; // ax
  SIZE_T v12; // r9
  VIDMM_GLOBAL *v13; // r10
  __int64 v14; // rax
  __int64 v15; // r9
  unsigned __int64 v16; // [rsp+28h] [rbp-30h]
  PMDL MemoryDescriptorList; // [rsp+30h] [rbp-28h]
  int v18; // [rsp+40h] [rbp-18h]

  v9 = *a2;
  if ( (*(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 1) + 24LL) + 444LL) & 4) == 0 )
  {
    v11 = VIDMM_SEGMENT::DriverId(this);
    LOBYTE(v18) = a7;
    VIDMM_GLOBAL::MapVideoApertureSegment(v13, v9, v11, (LARGE_INTEGER)a3, v12, v16, a6, a8, v18);
  }
  if ( (byte_14008A201 & 0x10) != 0 )
  {
    v14 = *((_QWORD *)v9 + 6);
    v15 = 0LL;
    if ( v14 )
      v15 = *(_QWORD *)(*(_QWORD *)(v14 + 8) + 24LL);
    LODWORD(MemoryDescriptorList) = a7;
    McTemplateK0ppxt_EtwWriteTransfer((__int64)this, &EventApertureMapping, a3, v15, v9, a3 << 12, MemoryDescriptorList);
  }
  _InterlockedAdd64((volatile signed __int64 *)(*((_QWORD *)this + 1) + 7520LL), a3 << 12);
  *(_QWORD *)(*((_QWORD *)this + 1) + 40296LL) += a3;
}
