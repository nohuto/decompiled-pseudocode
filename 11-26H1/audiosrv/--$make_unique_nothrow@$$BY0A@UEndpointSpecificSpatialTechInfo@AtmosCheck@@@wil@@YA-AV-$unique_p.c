/*
 * XREFs of ??$make_unique_nothrow@$$BY0A@UEndpointSpecificSpatialTechInfo@AtmosCheck@@@wil@@YA?AV?$unique_ptr@$$BY0A@UEndpointSpecificSpatialTechInfo@AtmosCheck@@U?$default_delete@$$BY0A@UEndpointSpecificSpatialTechInfo@AtmosCheck@@@wistd@@@wistd@@_K@Z @ 0x1800396D4
 * Callers:
 *     ?PerformLicenseCheckForSpatialAudioSubtype@AtmosCheck@@AEAAJPEBG0PEA_N@Z @ 0x180037A44 (-PerformLicenseCheckForSpatialAudioSubtype@AtmosCheck@@AEAAJPEBG0PEA_N@Z.c)
 *     ?PerformLicenseCheckInternalLegacy@AtmosCheck@@AEAAJPEA_N@Z @ 0x180037E78 (-PerformLicenseCheckInternalLegacy@AtmosCheck@@AEAAJPEA_N@Z.c)
 *     ?AddArrayToLicenseMap@AtmosCheck@@AEAAJPEBG@Z @ 0x18015584C (-AddArrayToLicenseMap@AtmosCheck@@AEAAJPEBG@Z.c)
 *     ?PerformLicenseCheckForEndpoint@AtmosCheck@@AEAAJPEBGPEA_N@Z @ 0x1801569BC (-PerformLicenseCheckForEndpoint@AtmosCheck@@AEAAJPEBGPEA_N@Z.c)
 * Callees:
 *     ??0EndpointSpecificSpatialTechInfo@AtmosCheck@@QEAA@XZ @ 0x180039754 (--0EndpointSpecificSpatialTechInfo@AtmosCheck@@QEAA@XZ.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800B24EC (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     memset_0 @ 0x1800B3208 (memset_0.c)
 */

AtmosCheck::EndpointSpecificSpatialTechInfo **__fastcall wil::make_unique_nothrow<AtmosCheck::EndpointSpecificSpatialTechInfo [0]>(
        AtmosCheck::EndpointSpecificSpatialTechInfo **a1)
{
  AtmosCheck::EndpointSpecificSpatialTechInfo *v2; // rax
  AtmosCheck::EndpointSpecificSpatialTechInfo *v3; // rbx
  AtmosCheck::EndpointSpecificSpatialTechInfo *v4; // rsi
  __int64 v5; // rbp
  AtmosCheck::EndpointSpecificSpatialTechInfo **result; // rax

  v2 = (AtmosCheck::EndpointSpecificSpatialTechInfo *)operator new[](
                                                        0xE0uLL,
                                                        (const struct std::nothrow_t *)&std::nothrow);
  v3 = v2;
  if ( v2 )
  {
    memset_0(v2, 0, 0xE0uLL);
    v4 = v3;
    v5 = 7LL;
    do
    {
      AtmosCheck::EndpointSpecificSpatialTechInfo::EndpointSpecificSpatialTechInfo(v4);
      v4 = (AtmosCheck::EndpointSpecificSpatialTechInfo *)((char *)v4 + 32);
      --v5;
    }
    while ( v5 );
  }
  else
  {
    v3 = 0LL;
  }
  result = a1;
  *a1 = v3;
  return result;
}
