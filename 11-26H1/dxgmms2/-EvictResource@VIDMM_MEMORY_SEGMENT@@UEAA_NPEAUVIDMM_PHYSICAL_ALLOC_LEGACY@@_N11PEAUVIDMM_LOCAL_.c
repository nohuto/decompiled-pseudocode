/*
 * XREFs of ?EvictResource@VIDMM_MEMORY_SEGMENT@@UEAA_NPEAUVIDMM_PHYSICAL_ALLOC_LEGACY@@_N11PEAUVIDMM_LOCAL_ALLOC@@@Z @ 0x14012B100
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x14005B850 (_guard_dispatch_icall.c)
 *     ?MakeVirtualAddressRangeNotResident@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@E@Z @ 0x1400E5F94 (-MakeVirtualAddressRangeNotResident@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@E@Z.c)
 *     ?DiscardOfferedAllocation@VIDMM_GLOBAL@@QEAA_NPEAUVIDMM_GLOBAL_ALLOC@@@Z @ 0x14010E984 (-DiscardOfferedAllocation@VIDMM_GLOBAL@@QEAA_NPEAUVIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?UnmapRange@VIDMM_CPU_HOST_APERTURE@@QEAAXPEAUVIDMM_CPU_HOST_APERTURE_RANGE@@@Z @ 0x1401103FC (-UnmapRange@VIDMM_CPU_HOST_APERTURE@@QEAAXPEAUVIDMM_CPU_HOST_APERTURE_RANGE@@@Z.c)
 *     ?ReleaseRange@VIDMM_CPU_HOST_APERTURE@@QEAAXPEAUVIDMM_CPU_HOST_APERTURE_RANGE@@@Z @ 0x140124588 (-ReleaseRange@VIDMM_CPU_HOST_APERTURE@@QEAAXPEAUVIDMM_CPU_HOST_APERTURE_RANGE@@@Z.c)
 *     ?TransferToSystem@VIDMM_MEMORY_SEGMENT@@QEAAXPEAUVIDMM_PHYSICAL_ALLOC_LEGACY@@_NPEAUVIDMM_LOCAL_ALLOC@@1@Z @ 0x14012C3C4 (-TransferToSystem@VIDMM_MEMORY_SEGMENT@@QEAAXPEAUVIDMM_PHYSICAL_ALLOC_LEGACY@@_NPEAUVIDMM_LOCAL_.c)
 */

char __fastcall VIDMM_MEMORY_SEGMENT::EvictResource(
        VIDMM_GLOBAL **this,
        struct VIDMM_GLOBAL_ALLOC **a2,
        bool a3,
        __int64 a4,
        bool a5,
        struct VIDMM_LOCAL_ALLOC *a6)
{
  struct VIDMM_GLOBAL_ALLOC *v6; // rdi
  struct VIDMM_LOCAL_ALLOC *v10; // r14
  int v11; // ebp
  struct VIDMM_CPU_HOST_APERTURE_RANGE ***v12; // rdx
  __int64 v13; // rbx
  __int64 v14; // rcx

  v6 = *a2;
  VIDMM_GLOBAL::MakeVirtualAddressRangeNotResident(this[1], *a2, 0);
  v10 = a6;
  if ( !a6 )
    v10 = (struct VIDMM_LOCAL_ALLOC *)*((_QWORD *)v6 + 6);
  v11 = 0;
  if ( VIDMM_GLOBAL::DiscardOfferedAllocation(this[1], v6) )
  {
    v11 = 1;
    if ( *((_BYTE *)v6 + 43) )
      *((_BYTE *)v6 + 42) = 0;
    a3 = 0;
  }
  VIDMM_MEMORY_SEGMENT::TransferToSystem(
    (VIDMM_MEMORY_SEGMENT *)this,
    (struct VIDMM_PHYSICAL_ALLOC_LEGACY *)a2,
    a3,
    v10,
    0);
  v12 = (struct VIDMM_CPU_HOST_APERTURE_RANGE ***)a2[18];
  if ( v12 )
  {
    VIDMM_CPU_HOST_APERTURE::UnmapRange(this[64], v12);
    VIDMM_CPU_HOST_APERTURE::ReleaseRange(this[64], a2[18]);
    a2[18] = 0LL;
  }
  *((_QWORD *)this[1] + 5039) -= (unsigned __int64)a2[2] >> 12;
  if ( !v11 )
  {
    *((_DWORD *)v6 + 8) &= ~8u;
    *((_BYTE *)v6 + 43) = 0;
  }
  if ( (*((_DWORD *)v6 + 7) & 0x4000) != 0 )
  {
    v13 = *((_QWORD *)v6 + 8);
    v14 = *(_QWORD *)(*((_QWORD *)this[1] + 5040) + 8LL * ((*(_DWORD *)(*(_QWORD *)v6 + 52LL) >> 2) & 0x3F));
    (*(void (__fastcall **)(__int64, _QWORD, _QWORD, __int64))(*(_QWORD *)v14 + 24LL))(
      v14,
      *(_QWORD *)v6,
      *(_QWORD *)(v13 + 192),
      v13 + 168);
    *(_QWORD *)(v13 + 192) = *(_QWORD *)(v13 + 120);
  }
  return 1;
}
