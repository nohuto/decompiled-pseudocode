/*
 * XREFs of KsepPoolFreePaged @ 0x1404E2A70
 * Callers:
 *     KsepEvntLogShimsApplied @ 0x1405FE07C (KsepEvntLogShimsApplied.c)
 *     KsepCacheHwIdFree @ 0x1405FE2C0 (KsepCacheHwIdFree.c)
 *     KsepDbGetShimInfo @ 0x1407BCA3C (KsepDbGetShimInfo.c)
 *     KsepDbQueryRegistryDeviceDataList @ 0x1407BCC58 (KsepDbQueryRegistryDeviceDataList.c)
 *     KseRegisterShimEx @ 0x1407BCFE0 (KseRegisterShimEx.c)
 *     KseUnregisterShim @ 0x1407BD330 (KseUnregisterShim.c)
 *     KsepResolveApplicableShimsForDriver @ 0x1407BDDD4 (KsepResolveApplicableShimsForDriver.c)
 *     KsepSdbBootInitialize @ 0x1407BE4DC (KsepSdbBootInitialize.c)
 *     KsepSdbBootRelease @ 0x1407BE614 (KsepSdbBootRelease.c)
 *     KsepGetLoadedModulesList @ 0x1407BE654 (KsepGetLoadedModulesList.c)
 *     KsepStringSplitMultiString @ 0x1407BE83C (KsepStringSplitMultiString.c)
 *     KsepCacheDeviceInsertData @ 0x1407BEA8C (KsepCacheDeviceInsertData.c)
 *     KsepCacheInitialize @ 0x1407BEB6C (KsepCacheInitialize.c)
 *     KsepCacheUninitialize @ 0x1407BECA0 (KsepCacheUninitialize.c)
 *     KsepRegistryEnumValue @ 0x1407BEF3C (KsepRegistryEnumValue.c)
 *     KsepRegistryQueryKeyInformation @ 0x1407BF18C (KsepRegistryQueryKeyInformation.c)
 *     KsepRegistryQuerySZ @ 0x1407BF28C (KsepRegistryQuerySZ.c)
 *     KsepRegistryQueryValue @ 0x1407BF4FC (KsepRegistryQueryValue.c)
 *     KsepDbFreeDriverShims @ 0x1409E3D40 (KsepDbFreeDriverShims.c)
 *     KsepRegistryQueryDriverShims @ 0x1409E4314 (KsepRegistryQueryDriverShims.c)
 *     KseAddHardwareId @ 0x1409E4D00 (KseAddHardwareId.c)
 *     KsepRegistryOpenKey @ 0x1409E5254 (KsepRegistryOpenKey.c)
 *     KsepStringFree @ 0x1409E5588 (KsepStringFree.c)
 *     KsepDbQueryRegistryDeviceData @ 0x1409E5B5C (KsepDbQueryRegistryDeviceData.c)
 *     KsepCacheDeviceFree @ 0x1409E6270 (KsepCacheDeviceFree.c)
 *     KseDriverUnloadImage @ 0x140A2501C (KseDriverUnloadImage.c)
 *     KsepEngineGetShimsFromRegistry @ 0x140A25360 (KsepEngineGetShimsFromRegistry.c)
 *     KseDriverLoadImage @ 0x140A25978 (KseDriverLoadImage.c)
 *     KseShimDriverIoCallbacks @ 0x140A26360 (KseShimDriverIoCallbacks.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

void __fastcall KsepPoolFreePaged(void *a1)
{
  if ( a1 )
  {
    ExFreePoolWithTag(a1, 0x6145534Bu);
    _InterlockedIncrement((_DWORD *)&AlpcpMessageLogLock.SwapListEntry + 3);
  }
}
