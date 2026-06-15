/*
 * XREFs of ?push_back@?$vector@USpatialTechAppDetails@CommonSpatialTechInfo@AtmosCheck@@V?$allocator@USpatialTechAppDetails@CommonSpatialTechInfo@AtmosCheck@@@std@@@std@@QEAAX$$QEAUSpatialTechAppDetails@CommonSpatialTechInfo@AtmosCheck@@@Z @ 0x1801586EC
 * Callers:
 *     ?GetLicenseStatusForEndpointId@AtmosCheck@@AEAAJPEBG0PEAU__MIDL___MIDL_itf_spatialaudiolicenseserver_0000_0000_0001@@@Z @ 0x180039E38 (-GetLicenseStatusForEndpointId@AtmosCheck@@AEAAJPEBG0PEAU__MIDL___MIDL_itf_spatialaudiolicensese.c)
 *     ?RefreshSpatialAudioLicenseModelState@AtmosCheck@@AEAAJPEA_N@Z @ 0x1800923C8 (-RefreshSpatialAudioLicenseModelState@AtmosCheck@@AEAAJPEA_N@Z.c)
 * Callees:
 *     <none>
 */

char *__fastcall std::vector<AtmosCheck::CommonSpatialTechInfo::SpatialTechAppDetails>::push_back(
        _QWORD *a1,
        __int64 *a2)
{
  __int64 *v2; // r9
  char *result; // rax

  v2 = (__int64 *)a1[1];
  if ( v2 == (__int64 *)a1[2] )
    return std::vector<SpatialAudioAppDetails>::_Emplace_reallocate<SpatialAudioAppDetails>(a1, a1[1], a2);
  *v2 = *a2;
  result = (char *)a2[1];
  *a2 = 0LL;
  v2[1] = (__int64)result;
  a2[1] = 0LL;
  a1[1] += 16LL;
  return result;
}
