/*
 * XREFs of wcschr @ 0x14053A3E0
 * Callers:
 *     wcscspn @ 0x14053A4B0 (wcscspn.c)
 *     wcsspn @ 0x14053A890 (wcsspn.c)
 *     wcspbrk @ 0x14053AFB4 (wcspbrk.c)
 *     PiDevCfgParsePropertyKeyName @ 0x1405DDB94 (PiDevCfgParsePropertyKeyName.c)
 *     PiGetDeviceRegistryProperty @ 0x1407A2E2C (PiGetDeviceRegistryProperty.c)
 *     PiDevCfgSplitDriverConfigurationId @ 0x1407AEB68 (PiDevCfgSplitDriverConfigurationId.c)
 *     EtwpCovSampSplitSegments @ 0x140837144 (EtwpCovSampSplitSegments.c)
 *     MiFormDllRegistryPath @ 0x14087B470 (MiFormDllRegistryPath.c)
 *     SdbQueryDataExTagID @ 0x1408882D8 (SdbQueryDataExTagID.c)
 *     AslPathClean @ 0x14088F3AC (AslPathClean.c)
 *     BiCreateFileDeviceElement @ 0x140897D04 (BiCreateFileDeviceElement.c)
 *     BiCreatePartitionDevice @ 0x140897EAC (BiCreatePartitionDevice.c)
 *     BiDoesHiveKeyExist @ 0x14089915C (BiDoesHiveKeyExist.c)
 *     BiResolveLocateFileCallback @ 0x140899670 (BiResolveLocateFileCallback.c)
 *     _CmGetMatchingDeviceListForSubkey @ 0x14089F8C0 (_CmGetMatchingDeviceListForSubkey.c)
 *     DrvDbValidateDeviceIdName @ 0x1408A5570 (DrvDbValidateDeviceIdName.c)
 *     DrvDbValidateDriverDatabaseName @ 0x1408A55E8 (DrvDbValidateDriverDatabaseName.c)
 *     DrvDbValidateDriverInfFileName @ 0x1408A564C (DrvDbValidateDriverInfFileName.c)
 *     EtwpQueryTokenPackageInfo @ 0x1408FBFFC (EtwpQueryTokenPackageInfo.c)
 *     LocalGetAclForString @ 0x1408FFEC0 (LocalGetAclForString.c)
 *     PiGetDeviceRegProperty @ 0x140955DCC (PiGetDeviceRegProperty.c)
 *     _CmGetDeviceRegPropWorker @ 0x140956E10 (_CmGetDeviceRegPropWorker.c)
 *     _CmGetDeviceInterfaceRegKeyPath @ 0x1409616A0 (_CmGetDeviceInterfaceRegKeyPath.c)
 *     _CmGetDeviceInterfaceSubkeyPath @ 0x1409623E0 (_CmGetDeviceInterfaceSubkeyPath.c)
 *     DrvDbGetDeviceIdMappedProperty @ 0x140976018 (DrvDbGetDeviceIdMappedProperty.c)
 *     DrvDbOpenObjectRegKey @ 0x140977FE0 (DrvDbOpenObjectRegKey.c)
 *     _RegRtlCreateTreeTransacted @ 0x140978CD8 (_RegRtlCreateTreeTransacted.c)
 *     DrvDbGetObjectDatabaseNode @ 0x14097932C (DrvDbGetObjectDatabaseNode.c)
 *     _CmGetDeviceInterfaceSymbolicLinkName @ 0x1409AA8E4 (_CmGetDeviceInterfaceSymbolicLinkName.c)
 *     SdbpCreateSearchPathPartsFromPath @ 0x1409D8280 (SdbpCreateSearchPathPartsFromPath.c)
 *     PnpQueryDeviceID @ 0x1409DBDEC (PnpQueryDeviceID.c)
 *     _CmGetDeviceInterfaceReferenceString @ 0x140A18858 (_CmGetDeviceInterfaceReferenceString.c)
 *     PiNormalizeDeviceText @ 0x140A3B018 (PiNormalizeDeviceText.c)
 *     DrvDbDeleteObjectSubKey @ 0x140A3EE58 (DrvDbDeleteObjectSubKey.c)
 *     LocalpConvertStringSidToSid @ 0x140A6D254 (LocalpConvertStringSidToSid.c)
 *     PiPnpRtlGetFilteredDeviceList @ 0x140AAE7D8 (PiPnpRtlGetFilteredDeviceList.c)
 *     DrvDbSetDeviceIdDriverInfMatches @ 0x140ADFC40 (DrvDbSetDeviceIdDriverInfMatches.c)
 *     DrvDbSplitDeviceIdDriverInfMatch @ 0x140ADFF30 (DrvDbSplitDeviceIdDriverInfMatch.c)
 *     PiDevCfgFindDeviceDriver @ 0x140AE6D34 (PiDevCfgFindDeviceDriver.c)
 *     PiDevCfgQueryIncludedDriverConfigurations @ 0x140AEA96C (PiDevCfgQueryIncludedDriverConfigurations.c)
 *     PiSwFindSwDevice @ 0x140B25E48 (PiSwFindSwDevice.c)
 *     EtwpGenerateFileName @ 0x140B277B0 (EtwpGenerateFileName.c)
 *     SepParseElamCertResources @ 0x140B3C614 (SepParseElamCertResources.c)
 *     PiDevCfgResolveVariableKeyHandle @ 0x140B42E9C (PiDevCfgResolveVariableKeyHandle.c)
 *     _CmSplitDevicePanelId @ 0x140B5FC88 (_CmSplitDevicePanelId.c)
 * Callees:
 *     <none>
 */

wchar_t *__cdecl wcschr(const wchar_t *Str, wchar_t Ch)
{
  int v2; // r10d
  wchar_t *v4; // r9
  __m128i v5; // xmm2
  __m128i v6; // xmm0
  unsigned int v7; // eax
  __int64 v8; // rax
  __int64 v9; // rdx
  wchar_t *v10; // rdx

  v2 = Ch;
  v4 = 0LL;
  v5 = _mm_shuffle_epi32(_mm_shufflelo_epi16(_mm_cvtsi32_si128(Ch), 0), 0);
  while ( ((unsigned __int16)Str & 0xFFFu) > 0xFF0uLL )
  {
    if ( *Str == Ch )
      return (wchar_t *)Str;
    if ( !*Str )
      return 0LL;
    v8 = 2LL;
LABEL_8:
    Str = (const wchar_t *)((char *)Str + v8);
  }
  v6 = _mm_loadu_si128((const __m128i *)Str);
  v7 = _mm_movemask_epi8((__m128i)_mm_or_ps((__m128)_mm_cmpeq_epi16((__m128i)0LL, v6), (__m128)_mm_cmpeq_epi16(v6, v5)));
  if ( !v7 )
  {
    v8 = 16LL;
    goto LABEL_8;
  }
  _BitScanForward((unsigned int *)&v9, v7);
  v10 = (wchar_t *)((char *)Str + v9);
  if ( *v10 == v2 )
    return v10;
  return v4;
}
