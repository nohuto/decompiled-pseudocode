/*
 * XREFs of wcschr @ 0x140537F60
 * Callers:
 *     wcscspn @ 0x140538030 (wcscspn.c)
 *     wcsspn @ 0x140538410 (wcsspn.c)
 *     wcspbrk @ 0x140538B34 (wcspbrk.c)
 *     PiDevCfgParsePropertyKeyName @ 0x1405DB2E4 (PiDevCfgParsePropertyKeyName.c)
 *     PiGetDeviceRegistryProperty @ 0x1407A02EC (PiGetDeviceRegistryProperty.c)
 *     PiDevCfgSplitDriverConfigurationId @ 0x1407ABB48 (PiDevCfgSplitDriverConfigurationId.c)
 *     EtwpCovSampSplitSegments @ 0x140830F04 (EtwpCovSampSplitSegments.c)
 *     MiFormDllRegistryPath @ 0x14087508C (MiFormDllRegistryPath.c)
 *     SdbQueryDataExTagID @ 0x140881ED8 (SdbQueryDataExTagID.c)
 *     AslPathClean @ 0x140888FB0 (AslPathClean.c)
 *     BiCreateFileDeviceElement @ 0x140891908 (BiCreateFileDeviceElement.c)
 *     BiCreatePartitionDevice @ 0x140891AB0 (BiCreatePartitionDevice.c)
 *     BiDoesHiveKeyExist @ 0x140892D5C (BiDoesHiveKeyExist.c)
 *     BiResolveLocateFileCallback @ 0x140893270 (BiResolveLocateFileCallback.c)
 *     _CmGetMatchingDeviceListForSubkey @ 0x1408994C0 (_CmGetMatchingDeviceListForSubkey.c)
 *     DrvDbValidateDeviceIdName @ 0x14089F170 (DrvDbValidateDeviceIdName.c)
 *     DrvDbValidateDriverDatabaseName @ 0x14089F1E8 (DrvDbValidateDriverDatabaseName.c)
 *     DrvDbValidateDriverInfFileName @ 0x14089F24C (DrvDbValidateDriverInfFileName.c)
 *     DrvDbGetDeviceIdMappedProperty @ 0x14091B5B8 (DrvDbGetDeviceIdMappedProperty.c)
 *     DrvDbOpenObjectRegKey @ 0x14091D580 (DrvDbOpenObjectRegKey.c)
 *     _RegRtlCreateTreeTransacted @ 0x14091E278 (_RegRtlCreateTreeTransacted.c)
 *     DrvDbGetObjectDatabaseNode @ 0x14091E8CC (DrvDbGetObjectDatabaseNode.c)
 *     LocalGetAclForString @ 0x1409243B0 (LocalGetAclForString.c)
 *     EtwpQueryTokenPackageInfo @ 0x14096DBF8 (EtwpQueryTokenPackageInfo.c)
 *     PiGetDeviceRegProperty @ 0x14099536C (PiGetDeviceRegProperty.c)
 *     _CmGetDeviceRegPropWorker @ 0x1409963B0 (_CmGetDeviceRegPropWorker.c)
 *     _CmGetDeviceInterfaceRegKeyPath @ 0x1409A0C40 (_CmGetDeviceInterfaceRegKeyPath.c)
 *     _CmGetDeviceInterfaceSubkeyPath @ 0x1409A1980 (_CmGetDeviceInterfaceSubkeyPath.c)
 *     _CmGetDeviceInterfaceReferenceString @ 0x1409DB608 (_CmGetDeviceInterfaceReferenceString.c)
 *     SdbpCreateSearchPathPartsFromPath @ 0x1409E4BC8 (SdbpCreateSearchPathPartsFromPath.c)
 *     EtwpGenerateFileName @ 0x140A1751C (EtwpGenerateFileName.c)
 *     PiNormalizeDeviceText @ 0x140A27F78 (PiNormalizeDeviceText.c)
 *     DrvDbDeleteObjectSubKey @ 0x140A2D44C (DrvDbDeleteObjectSubKey.c)
 *     LocalpConvertStringSidToSid @ 0x140A60294 (LocalpConvertStringSidToSid.c)
 *     PnpQueryDeviceID @ 0x140AA88B8 (PnpQueryDeviceID.c)
 *     PiPnpRtlGetFilteredDeviceList @ 0x140AB07F4 (PiPnpRtlGetFilteredDeviceList.c)
 *     _CmGetDeviceInterfaceSymbolicLinkName @ 0x140AB191C (_CmGetDeviceInterfaceSymbolicLinkName.c)
 *     PiDevCfgFindDeviceDriver @ 0x140ACF544 (PiDevCfgFindDeviceDriver.c)
 *     DrvDbSetDeviceIdDriverInfMatches @ 0x140ACFC14 (DrvDbSetDeviceIdDriverInfMatches.c)
 *     DrvDbSplitDeviceIdDriverInfMatch @ 0x140ACFF04 (DrvDbSplitDeviceIdDriverInfMatch.c)
 *     PiDevCfgQueryIncludedDriverConfigurations @ 0x140AD3638 (PiDevCfgQueryIncludedDriverConfigurations.c)
 *     PiSwFindSwDevice @ 0x140B23A48 (PiSwFindSwDevice.c)
 *     SepParseElamCertResources @ 0x140B3A274 (SepParseElamCertResources.c)
 *     PiDevCfgResolveVariableKeyHandle @ 0x140B40E8C (PiDevCfgResolveVariableKeyHandle.c)
 *     _CmSplitDevicePanelId @ 0x140B5CB08 (_CmSplitDevicePanelId.c)
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
