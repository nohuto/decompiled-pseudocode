/*
 * XREFs of ?UnmapApertureRange@VIDMM_APERTURE_SEGMENT@@AEAAXPEAUVIDMM_PHYSICAL_ALLOC_LEGACY@@_K11PEBU_MDL@@_N@Z @ 0x1400D969C
 * Callers:
 *     ?UnmapPagingBuffer@VIDMM_APERTURE_SEGMENT@@UEAAXPEAUVIDMM_PHYSICAL_ALLOC_LEGACY@@@Z @ 0x1400BDF90 (-UnmapPagingBuffer@VIDMM_APERTURE_SEGMENT@@UEAAXPEAUVIDMM_PHYSICAL_ALLOC_LEGACY@@@Z.c)
 *     ?UnmapTemporaryResource@VIDMM_APERTURE_SEGMENT@@AEAAXPEAUVIDMM_PHYSICAL_ALLOC_LEGACY@@_K1PEBU_MDL@@@Z @ 0x1400BDFD8 (-UnmapTemporaryResource@VIDMM_APERTURE_SEGMENT@@AEAAXPEAUVIDMM_PHYSICAL_ALLOC_LEGACY@@_K1PEBU_MD.c)
 *     ?EvictResource@VIDMM_APERTURE_SEGMENT@@UEAA_NPEAUVIDMM_PHYSICAL_ALLOC_LEGACY@@_N11PEAUVIDMM_LOCAL_ALLOC@@@Z @ 0x14012ACD0 (-EvictResource@VIDMM_APERTURE_SEGMENT@@UEAA_NPEAUVIDMM_PHYSICAL_ALLOC_LEGACY@@_N11PEAUVIDMM_LOCA.c)
 * Callees:
 *     ?DriverId@VIDMM_SEGMENT@@QEBAGXZ @ 0x140037CA4 (-DriverId@VIDMM_SEGMENT@@QEBAGXZ.c)
 *     McTemplateK0ppxt_EtwWriteTransfer @ 0x140041810 (McTemplateK0ppxt_EtwWriteTransfer.c)
 *     ?VerifyAllocationPagingOperationDone@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@@Z @ 0x14009BD68 (-VerifyAllocationPagingOperationDone@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?VerifyAllocationIsIdle@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@@Z @ 0x1400D8328 (-VerifyAllocationIsIdle@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?UnmapVideoApertureSegment@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@I_K11T_LARGE_INTEGER@@_N@Z @ 0x1400D9190 (-UnmapVideoApertureSegment@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@I_K11T_LARGE_INTEGER@@_N@Z.c)
 *     ?WaitForAllPagingEngines@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@@Z @ 0x1400E71D0 (-WaitForAllPagingEngines@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@@Z.c)
 */

void __fastcall VIDMM_APERTURE_SEGMENT::UnmapApertureRange(
        VIDMM_GLOBAL **this,
        struct VIDMM_GLOBAL_ALLOC **a2,
        LARGE_INTEGER a3,
        SIZE_T a4,
        unsigned __int64 a5,
        const struct _MDL *a6,
        bool a7)
{
  struct VIDMM_GLOBAL_ALLOC *v7; // rdi
  __int64 v11; // r14
  VIDMM_GLOBAL *v12; // rcx
  __int64 v13; // rcx
  __int64 v14; // r8
  unsigned __int16 v15; // ax
  union _LARGE_INTEGER v16; // rdx
  VIDMM_GLOBAL *v17; // r10
  __int64 v18; // rax
  unsigned __int64 v19; // [rsp+28h] [rbp-30h]
  union _LARGE_INTEGER v20; // [rsp+30h] [rbp-28h]

  v7 = *a2;
  VIDMM_GLOBAL::WaitForAllPagingEngines(this[1], *a2);
  v11 = 0LL;
  v12 = this[1];
  if ( a7 )
    VIDMM_GLOBAL::VerifyAllocationPagingOperationDone(v12, v7);
  else
    VIDMM_GLOBAL::VerifyAllocationIsIdle(v12, v7);
  if ( (*(_DWORD *)(*((_QWORD *)this[1] + 3) + 444LL) & 4) == 0 )
  {
    v15 = VIDMM_SEGMENT::DriverId((VIDMM_SEGMENT *)this);
    VIDMM_GLOBAL::UnmapVideoApertureSegment(v17, v7, v15, a3, a4, v19, v16, a7);
  }
  if ( (byte_14008A201 & 0x10) != 0 )
  {
    v18 = *((_QWORD *)v7 + 6);
    if ( v18 )
      v11 = *(_QWORD *)(*(_QWORD *)(v18 + 8) + 24LL);
    v20.LowPart = a7;
    McTemplateK0ppxt_EtwWriteTransfer(v13, &EventApertureUnmapping, v14, v11, v7, a3.QuadPart << 12, v20.QuadPart);
  }
  _InterlockedAdd64((volatile signed __int64 *)this[1] + 941, a3.QuadPart << 12);
  *((_QWORD *)this[1] + 5037) -= a3.QuadPart;
}
