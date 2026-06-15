/*
 * XREFs of ??$_Destroy_range@V?$allocator@USpatialAudioAppDetails@@@std@@@std@@YAXPEAUSpatialAudioAppDetails@@QEAU1@AEAV?$allocator@USpatialAudioAppDetails@@@0@@Z @ 0x18015409C
 * Callers:
 *     ?GetLicenseStatusForEndpointId@AtmosCheck@@AEAAJPEBG0PEAU__MIDL___MIDL_itf_spatialaudiolicenseserver_0000_0000_0001@@@Z @ 0x180039E38 (-GetLicenseStatusForEndpointId@AtmosCheck@@AEAAJPEBG0PEAU__MIDL___MIDL_itf_spatialaudiolicensese.c)
 *     ??1SpatialAudioFormatSubtypeInfo@@QEAA@XZ @ 0x180091CF0 (--1SpatialAudioFormatSubtypeInfo@@QEAA@XZ.c)
 *     ?RefreshSpatialAudioLicenseModelState@AtmosCheck@@AEAAJPEA_N@Z @ 0x1800923C8 (-RefreshSpatialAudioLicenseModelState@AtmosCheck@@AEAAJPEA_N@Z.c)
 *     ??$_Uninitialized_move@PEAUSpatialAudioAppDetails@@V?$allocator@USpatialAudioAppDetails@@@std@@@std@@YAPEAUSpatialAudioAppDetails@@QEAU1@0PEAU1@AEAV?$allocator@USpatialAudioAppDetails@@@0@@Z @ 0x180154510 (--$_Uninitialized_move@PEAUSpatialAudioAppDetails@@V-$allocator@USpatialAudioAppDetails@@@std@@@.c)
 *     ??1?$vector@USpatialTechAppDetails@CommonSpatialTechInfo@AtmosCheck@@V?$allocator@USpatialTechAppDetails@CommonSpatialTechInfo@AtmosCheck@@@std@@@std@@QEAA@XZ @ 0x180154C40 (--1-$vector@USpatialTechAppDetails@CommonSpatialTechInfo@AtmosCheck@@V-$allocator@USpatialTechAp.c)
 *     ??1CommonSpatialTechInfo@AtmosCheck@@QEAA@XZ @ 0x180154D80 (--1CommonSpatialTechInfo@AtmosCheck@@QEAA@XZ.c)
 *     ??1_Reallocation_guard@?$vector@USpatialAudioAppDetails@@V?$allocator@USpatialAudioAppDetails@@@std@@@std@@QEAA@XZ @ 0x180154E24 (--1_Reallocation_guard@-$vector@USpatialAudioAppDetails@@V-$allocator@USpatialAudioAppDetails@@@.c)
 *     ?_Change_array@?$vector@USpatialAudioAppDetails@@V?$allocator@USpatialAudioAppDetails@@@std@@@std@@AEAAXQEAUSpatialAudioAppDetails@@_K1@Z @ 0x1801582E4 (-_Change_array@-$vector@USpatialAudioAppDetails@@V-$allocator@USpatialAudioAppDetails@@@std@@@st.c)
 * Callees:
 *     ??1SpatialAudioAppDetails@@QEAA@XZ @ 0x180154DDC (--1SpatialAudioAppDetails@@QEAA@XZ.c)
 */

void __fastcall std::_Destroy_range<std::allocator<SpatialAudioAppDetails>>(
        SpatialAudioAppDetails *this,
        SpatialAudioAppDetails *a2)
{
  SpatialAudioAppDetails *v3; // rbx

  if ( this != a2 )
  {
    v3 = this;
    do
    {
      SpatialAudioAppDetails::~SpatialAudioAppDetails(v3);
      v3 = (SpatialAudioAppDetails *)((char *)v3 + 16);
    }
    while ( v3 != a2 );
  }
}
