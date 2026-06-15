/*
 * XREFs of ??1?$vector@USpatialTechAppDetails@CommonSpatialTechInfo@AtmosCheck@@V?$allocator@USpatialTechAppDetails@CommonSpatialTechInfo@AtmosCheck@@@std@@@std@@QEAA@XZ @ 0x180154C40
 * Callers:
 *     _AtmosCheck::GetLicenseStatusForEndpointId_::_1_::dtor$2 @ 0x18016497A (_AtmosCheck--GetLicenseStatusForEndpointId_--_1_--dtor$2.c)
 * Callees:
 *     ??$_Deallocate@$0BA@@std@@YAXPEAX_K@Z @ 0x180044828 (--$_Deallocate@$0BA@@std@@YAXPEAX_K@Z.c)
 *     ??$_Destroy_range@V?$allocator@USpatialAudioAppDetails@@@std@@@std@@YAXPEAUSpatialAudioAppDetails@@QEAU1@AEAV?$allocator@USpatialAudioAppDetails@@@0@@Z @ 0x18015409C (--$_Destroy_range@V-$allocator@USpatialAudioAppDetails@@@std@@@std@@YAXPEAUSpatialAudioAppDetail.c)
 */

void __fastcall std::vector<AtmosCheck::CommonSpatialTechInfo::SpatialTechAppDetails>::~vector<AtmosCheck::CommonSpatialTechInfo::SpatialTechAppDetails>(
        __int64 a1)
{
  SpatialAudioAppDetails *v2; // rcx

  v2 = *(SpatialAudioAppDetails **)a1;
  if ( v2 )
  {
    std::_Destroy_range<std::allocator<SpatialAudioAppDetails>>(v2, *(SpatialAudioAppDetails **)(a1 + 8));
    std::_Deallocate<16>(
      *(void **)a1,
      (struct std::nothrow_t *)((*(_QWORD *)(a1 + 16) - *(_QWORD *)a1) & 0xFFFFFFFFFFFFFFF0uLL));
    *(_QWORD *)a1 = 0LL;
    *(_QWORD *)(a1 + 8) = 0LL;
    *(_QWORD *)(a1 + 16) = 0LL;
  }
}
