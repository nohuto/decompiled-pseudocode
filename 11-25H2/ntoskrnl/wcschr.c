/*
 * XREFs of wcschr @ 0x1404FD610
 * Callers:
 *     wcscspn @ 0x1404FD6E0 (wcscspn.c)
 *     wcsspn @ 0x1404FDAC0 (wcsspn.c)
 *     wcspbrk @ 0x1404FE1A0 (wcspbrk.c)
 *     PiDevCfgParsePropertyKeyName @ 0x1405A3500 (PiDevCfgParsePropertyKeyName.c)
 *     SmUniqueIdParseProductName @ 0x140600C84 (SmUniqueIdParseProductName.c)
 *     PiGetDeviceRegistryProperty @ 0x140712B28 (PiGetDeviceRegistryProperty.c)
 *     PiDevCfgSplitDriverConfigurationId @ 0x1407202A8 (PiDevCfgSplitDriverConfigurationId.c)
 *     EtwpCovSampSplitSegments @ 0x1407A336C (EtwpCovSampSplitSegments.c)
 *     MiFormDllRegistryPath @ 0x1407D7590 (MiFormDllRegistryPath.c)
 *     SdbQueryDataExTagID @ 0x1407F253C (SdbQueryDataExTagID.c)
 *     AslPathClean @ 0x1407F9B9C (AslPathClean.c)
 *     BiCreateFileDeviceElement @ 0x140803728 (BiCreateFileDeviceElement.c)
 *     BiCreatePartitionDevice @ 0x1408038D4 (BiCreatePartitionDevice.c)
 *     BiDoesHiveKeyExist @ 0x140804C88 (BiDoesHiveKeyExist.c)
 *     _CmGetMatchingDeviceListForSubkey @ 0x14080BD80 (_CmGetMatchingDeviceListForSubkey.c)
 *     DrvDbDeleteObjectSubKey @ 0x1408116CC (DrvDbDeleteObjectSubKey.c)
 *     DrvDbValidateDeviceIdName @ 0x1408136FC (DrvDbValidateDeviceIdName.c)
 *     DrvDbValidateDriverDatabaseName @ 0x140813774 (DrvDbValidateDriverDatabaseName.c)
 *     DrvDbValidateDriverInfFileName @ 0x1408137D8 (DrvDbValidateDriverInfFileName.c)
 *     SdbpCreateSearchPathPartsFromPath @ 0x140829934 (SdbpCreateSearchPathPartsFromPath.c)
 *     PiGetDeviceRegProperty @ 0x140834998 (PiGetDeviceRegProperty.c)
 *     DrvDbSetDeviceIdDriverInfMatches @ 0x140891064 (DrvDbSetDeviceIdDriverInfMatches.c)
 *     DrvDbSplitDeviceIdDriverInfMatch @ 0x14089134C (DrvDbSplitDeviceIdDriverInfMatch.c)
 *     PiDevCfgFindDeviceDriver @ 0x1408914DC (PiDevCfgFindDeviceDriver.c)
 *     EtwpQueryTokenPackageInfo @ 0x1408BE7AC (EtwpQueryTokenPackageInfo.c)
 *     _CmGetDeviceRegPropWorker @ 0x1408C7ED0 (_CmGetDeviceRegPropWorker.c)
 *     LocalGetAclForString @ 0x140917620 (LocalGetAclForString.c)
 *     DrvDbGetDeviceIdMappedProperty @ 0x14092F690 (DrvDbGetDeviceIdMappedProperty.c)
 *     DrvDbGetObjectDatabaseNode @ 0x140930228 (DrvDbGetObjectDatabaseNode.c)
 *     DrvDbOpenObjectRegKey @ 0x140931000 (DrvDbOpenObjectRegKey.c)
 *     _RegRtlCreateTreeTransacted @ 0x140931CBC (_RegRtlCreateTreeTransacted.c)
 *     PiPnpRtlGetFilteredDeviceList @ 0x14094FB0C (PiPnpRtlGetFilteredDeviceList.c)
 *     _CmGetDeviceInterfaceReferenceString @ 0x140955AE0 (_CmGetDeviceInterfaceReferenceString.c)
 *     _CmGetDeviceInterfaceSubkeyPath @ 0x140958260 (_CmGetDeviceInterfaceSubkeyPath.c)
 *     _CmGetDeviceInterfaceRegKeyPath @ 0x140959250 (_CmGetDeviceInterfaceRegKeyPath.c)
 *     _CmGetDeviceInterfaceSymbolicLinkName @ 0x14096A93C (_CmGetDeviceInterfaceSymbolicLinkName.c)
 *     PiSwFindSwDevice @ 0x1409A1B58 (PiSwFindSwDevice.c)
 *     PiNormalizeDeviceText @ 0x1409AFC94 (PiNormalizeDeviceText.c)
 *     LocalpConvertStringSidToSid @ 0x1409E7FDC (LocalpConvertStringSidToSid.c)
 *     PnpQueryDeviceID @ 0x140A2FC8C (PnpQueryDeviceID.c)
 *     PiDevCfgQueryIncludedDriverConfigurations @ 0x140A7B244 (PiDevCfgQueryIncludedDriverConfigurations.c)
 *     EtwpGenerateFileName @ 0x140A7C3A0 (EtwpGenerateFileName.c)
 *     SepParseElamCertResources @ 0x140A904FC (SepParseElamCertResources.c)
 *     PiDevCfgResolveVariableKeyHandle @ 0x140A968D4 (PiDevCfgResolveVariableKeyHandle.c)
 *     _CmSplitDevicePanelId @ 0x140AB1928 (_CmSplitDevicePanelId.c)
 * Callees:
 *     <none>
 */

wchar_t *__cdecl wcschr(const wchar_t *Str, wchar_t Ch)
{
  wchar_t *v3; // r9
  __m128i v4; // xmm2
  __m128i v5; // xmm0
  unsigned int v6; // eax
  __int64 v7; // rax
  __int64 v8; // rcx
  wchar_t *v9; // r8

  v3 = 0LL;
  v4 = _mm_shuffle_epi32(_mm_shufflelo_epi16(_mm_cvtsi32_si128(Ch), 0), 0);
  while ( ((unsigned __int16)Str & 0xFFFu) > 0xFF0uLL )
  {
    if ( *Str == Ch )
      return (wchar_t *)Str;
    if ( !*Str )
      return 0LL;
    v7 = 2LL;
LABEL_8:
    Str = (const wchar_t *)((char *)Str + v7);
  }
  v5 = _mm_loadu_si128((const __m128i *)Str);
  v6 = _mm_movemask_epi8((__m128i)_mm_or_ps((__m128)_mm_cmpeq_epi16((__m128i)0LL, v5), (__m128)_mm_cmpeq_epi16(v5, v4)));
  if ( !v6 )
  {
    v7 = 16LL;
    goto LABEL_8;
  }
  _BitScanForward((unsigned int *)&v8, v6);
  v9 = (wchar_t *)((char *)Str + v8);
  if ( *v9 == Ch )
    return v9;
  return v3;
}
