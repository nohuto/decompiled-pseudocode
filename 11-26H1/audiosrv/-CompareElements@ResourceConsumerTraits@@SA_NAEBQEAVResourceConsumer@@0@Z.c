/*
 * XREFs of ?CompareElements@ResourceConsumerTraits@@SA_NAEBQEAVResourceConsumer@@0@Z @ 0x1801597A4
 * Callers:
 *     ?GetResourceConsumptionFromMap@CConstraintModel@@AEAAJPEAVResourceConsumer@@PEAKPEAPEAU_ResourceInfo@@@Z @ 0x18007AF98 (-GetResourceConsumptionFromMap@CConstraintModel@@AEAAJPEAVResourceConsumer@@PEAKPEAPEAU_Resource.c)
 *     ?Lookup@?$CAtlMap@PEAVResourceConsumer@@PEAV?$CAtlList@U_ResourceInfo@@VResourceInfoTraits@@@ATL@@VResourceConsumerTraits@@V?$CElementTraits@PEAV?$CAtlList@U_ResourceInfo@@VResourceInfoTraits@@@ATL@@@3@@ATL@@QEBA_NAEBQEAVResourceConsumer@@AEAPEAV?$CAtlList@U_ResourceInfo@@VResourceInfoTraits@@@2@@Z @ 0x18007BD4C (-Lookup@-$CAtlMap@PEAVResourceConsumer@@PEAV-$CAtlList@U_ResourceInfo@@VResourceInfoTraits@@@ATL.c)
 *     ?GetNode@?$CAtlMap@PEAVResourceConsumer@@PEAV?$CAtlList@U_ResourceInfo@@VResourceInfoTraits@@@ATL@@VResourceConsumerTraits@@V?$CElementTraits@PEAV?$CAtlList@U_ResourceInfo@@VResourceInfoTraits@@@ATL@@@3@@ATL@@AEBAPEAVCNode@12@AEBQEAVResourceConsumer@@AEAI1AEAPEAV312@@Z @ 0x180083508 (-GetNode@-$CAtlMap@PEAVResourceConsumer@@PEAV-$CAtlList@U_ResourceInfo@@VResourceInfoTraits@@@AT.c)
 * Callees:
 *     ??8EndpointInfo@@QEBA_NAEBV0@@Z @ 0x1800F0F9C (--8EndpointInfo@@QEBA_NAEBV0@@Z.c)
 */

char __fastcall ResourceConsumerTraits::CompareElements(
        struct ResourceConsumer *const *a1,
        struct ResourceConsumer *const *a2)
{
  __int64 v2; // rcx
  char v3; // bl
  int v5; // r8d
  _DWORD *v6; // rdx
  __int64 v7; // rax

  v2 = (__int64)*a1;
  v3 = 0;
  v5 = *(_DWORD *)(v2 + 8);
  if ( v5 )
    return v5 == *((_DWORD *)*a2 + 2);
  v6 = *a2;
  if ( v6[2] )
    return v5 == *((_DWORD *)*a2 + 2);
  if ( *(_DWORD *)(v2 + 160) == v6[40] )
  {
    v7 = *(_QWORD *)(v2 + 144) - *((_QWORD *)v6 + 18);
    if ( !v7 )
      v7 = *(_QWORD *)(v2 + 152) - *((_QWORD *)v6 + 19);
    if ( !v7 )
    {
      if ( EndpointInfo::operator==((__int64 *)(v2 + 16), (__int64 *)v6 + 2) )
        return 1;
    }
  }
  return v3;
}
