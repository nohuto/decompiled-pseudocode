/*
 * XREFs of OfferResources @ 0x14011B3B8
 * Callers:
 *     ?OfferResources@VIDMM_PHYSICAL_ADAPTER_LEGACY@@UEAAXPEAUVIDMM_PHYSICAL_ALLOC@@@Z @ 0x14011B3A0 (-OfferResources@VIDMM_PHYSICAL_ADAPTER_LEGACY@@UEAAXPEAUVIDMM_PHYSICAL_ALLOC@@@Z.c)
 * Callees:
 *     ?OfferAllocation@VIDMM_SEGMENT@@QEAAXPEAUVIDMM_PHYSICAL_ALLOC_LEGACY@@@Z @ 0x14011B414 (-OfferAllocation@VIDMM_SEGMENT@@QEAAXPEAUVIDMM_PHYSICAL_ALLOC_LEGACY@@@Z.c)
 */

void __fastcall OfferResources(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  _QWORD *v3; // r8
  _QWORD *v4; // rcx

  if ( (*(_DWORD *)(a2 + 56) & 5) == 1 )
  {
    if ( *(_DWORD *)(*(_QWORD *)a2 + 72LL) == 2 )
      VIDMM_SEGMENT::OfferAllocation(*(VIDMM_SEGMENT **)(a2 + 64), (struct VIDMM_PHYSICAL_ALLOC_LEGACY *)a2);
  }
  else
  {
    v2 = a1 + 1872;
    v3 = (_QWORD *)(a2 + 96);
    v4 = *(_QWORD **)(a1 + 1880);
    if ( *v4 != v2 )
      __fastfail(3u);
    *v3 = v2;
    *(_QWORD *)(a2 + 104) = v4;
    *v4 = v3;
    *(_QWORD *)(v2 + 8) = v3;
  }
}
