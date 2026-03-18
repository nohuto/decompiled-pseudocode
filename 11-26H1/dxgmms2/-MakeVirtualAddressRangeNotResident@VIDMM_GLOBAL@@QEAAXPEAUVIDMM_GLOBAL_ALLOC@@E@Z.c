/*
 * XREFs of ?MakeVirtualAddressRangeNotResident@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@E@Z @ 0x1400E5F94
 * Callers:
 *     ?EvictResource@VIDMM_SYSMEM_SEGMENT@@UEAA_NPEAUVIDMM_PHYSICAL_ALLOC_LEGACY@@_N11PEAUVIDMM_LOCAL_ALLOC@@@Z @ 0x14012A730 (-EvictResource@VIDMM_SYSMEM_SEGMENT@@UEAA_NPEAUVIDMM_PHYSICAL_ALLOC_LEGACY@@_N11PEAUVIDMM_LOCAL_.c)
 *     ?EvictResource@VIDMM_APERTURE_SEGMENT@@UEAA_NPEAUVIDMM_PHYSICAL_ALLOC_LEGACY@@_N11PEAUVIDMM_LOCAL_ALLOC@@@Z @ 0x14012ACD0 (-EvictResource@VIDMM_APERTURE_SEGMENT@@UEAA_NPEAUVIDMM_PHYSICAL_ALLOC_LEGACY@@_N11PEAUVIDMM_LOCA.c)
 *     ?EvictResource@VIDMM_MEMORY_SEGMENT@@UEAA_NPEAUVIDMM_PHYSICAL_ALLOC_LEGACY@@_N11PEAUVIDMM_LOCAL_ALLOC@@@Z @ 0x14012B100 (-EvictResource@VIDMM_MEMORY_SEGMENT@@UEAA_NPEAUVIDMM_PHYSICAL_ALLOC_LEGACY@@_N11PEAUVIDMM_LOCAL_.c)
 * Callees:
 *     ?MakeOneVirtualAddressRangeNotResident@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1400E6030 (-MakeOneVirtualAddressRangeNotResident@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z.c)
 *     ?WaitForAllPagingEngines@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@@Z @ 0x1400E71D0 (-WaitForAllPagingEngines@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@@Z.c)
 */

void __fastcall VIDMM_GLOBAL::MakeVirtualAddressRangeNotResident(
        VIDMM_GLOBAL *this,
        struct VIDMM_GLOBAL_ALLOC *a2,
        char a3)
{
  char *v6; // rdi
  char *i; // rbx
  char *j; // r14

  if ( (*((_BYTE *)this + 41064) & 0x10) != 0 )
  {
    v6 = (char *)a2 + 112;
    for ( i = (char *)*((_QWORD *)a2 + 14); i != v6; i = *(char **)i )
    {
      for ( j = (char *)*((_QWORD *)i - 2); j != i - 16; j = *(char **)j )
        VIDMM_GLOBAL::MakeOneVirtualAddressRangeNotResident(this, (struct VIDMM_ALLOC *)(j - 40));
    }
    if ( (*((_BYTE *)this + 41064) & 2) != 0 )
    {
      if ( a3 )
        VIDMM_GLOBAL::WaitForAllPagingEngines(this, a2);
    }
  }
}
