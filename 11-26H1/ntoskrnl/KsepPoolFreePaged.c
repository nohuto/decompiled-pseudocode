/*
 * XREFs of KsepPoolFreePaged @ 0x1404DC150
 * Callers:
 *     KsepEvntLogShimsApplied @ 0x140600ACC (KsepEvntLogShimsApplied.c)
 *     KsepCacheHwIdFree @ 0x140600D10 (KsepCacheHwIdFree.c)
 *     KsepDbGetShimInfo @ 0x1407BFA9C (KsepDbGetShimInfo.c)
 *     KsepDbQueryRegistryDeviceDataList @ 0x1407BFCB8 (KsepDbQueryRegistryDeviceDataList.c)
 *     KseRegisterShimEx @ 0x1407C0040 (KseRegisterShimEx.c)
 *     KseUnregisterShim @ 0x1407C0390 (KseUnregisterShim.c)
 *     KsepResolveApplicableShimsForDriver @ 0x1407C0E34 (KsepResolveApplicableShimsForDriver.c)
 *     KsepSdbBootInitialize @ 0x1407C153C (KsepSdbBootInitialize.c)
 *     KsepSdbBootRelease @ 0x1407C1674 (KsepSdbBootRelease.c)
 *     KsepGetLoadedModulesList @ 0x1407C16B4 (KsepGetLoadedModulesList.c)
 *     KsepStringSplitMultiString @ 0x1407C189C (KsepStringSplitMultiString.c)
 *     KsepCacheDeviceInsertData @ 0x1407C1AEC (KsepCacheDeviceInsertData.c)
 *     KsepCacheInitialize @ 0x1407C1BCC (KsepCacheInitialize.c)
 *     KsepCacheUninitialize @ 0x1407C1D00 (KsepCacheUninitialize.c)
 *     KsepRegistryEnumValue @ 0x1407C1F9C (KsepRegistryEnumValue.c)
 *     KsepRegistryQueryKeyInformation @ 0x1407C21EC (KsepRegistryQueryKeyInformation.c)
 *     KsepRegistryQuerySZ @ 0x1407C22EC (KsepRegistryQuerySZ.c)
 *     KsepRegistryQueryValue @ 0x1407C255C (KsepRegistryQueryValue.c)
 *     KsepCacheDeviceFree @ 0x1409D6B70 (KsepCacheDeviceFree.c)
 *     KsepDbQueryRegistryDeviceData @ 0x1409D70DC (KsepDbQueryRegistryDeviceData.c)
 *     KsepStringFree @ 0x1409D7848 (KsepStringFree.c)
 *     KsepRegistryOpenKey @ 0x1409D7988 (KsepRegistryOpenKey.c)
 *     KseAddHardwareId @ 0x1409D80D0 (KseAddHardwareId.c)
 *     KsepRegistryQueryDriverShims @ 0x1409D8644 (KsepRegistryQueryDriverShims.c)
 *     KsepDbFreeDriverShims @ 0x1409D926C (KsepDbFreeDriverShims.c)
 *     KseDriverUnloadImage @ 0x140A380BC (KseDriverUnloadImage.c)
 *     KsepEngineGetShimsFromRegistry @ 0x140A38400 (KsepEngineGetShimsFromRegistry.c)
 *     KseDriverLoadImage @ 0x140A38A18 (KseDriverLoadImage.c)
 *     KseShimDriverIoCallbacks @ 0x140A39400 (KseShimDriverIoCallbacks.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

void __fastcall KsepPoolFreePaged(void *a1)
{
  if ( a1 )
  {
    ExFreePoolWithTag(a1, 0x6145534Bu);
    _InterlockedIncrement((volatile signed __int32 *)&AlpcpMessageLogLock.ApcStateFill[36]);
  }
}
