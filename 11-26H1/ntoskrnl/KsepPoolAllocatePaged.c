/*
 * XREFs of KsepPoolAllocatePaged @ 0x1404DE51C
 * Callers:
 *     KsepEvntLogShimsApplied @ 0x1405FE07C (KsepEvntLogShimsApplied.c)
 *     KsepDbGetShimInfo @ 0x1407BCA3C (KsepDbGetShimInfo.c)
 *     KsepDbQueryRegistryDeviceDataList @ 0x1407BCC58 (KsepDbQueryRegistryDeviceDataList.c)
 *     KseRegisterShimEx @ 0x1407BCFE0 (KseRegisterShimEx.c)
 *     KsepSdbBootInitialize @ 0x1407BE4DC (KsepSdbBootInitialize.c)
 *     KsepGetLoadedModulesList @ 0x1407BE654 (KsepGetLoadedModulesList.c)
 *     KsepStringSplitMultiString @ 0x1407BE83C (KsepStringSplitMultiString.c)
 *     KsepCacheDeviceInsertData @ 0x1407BEA8C (KsepCacheDeviceInsertData.c)
 *     KsepCacheInitialize @ 0x1407BEB6C (KsepCacheInitialize.c)
 *     KsepRegistryEnumValue @ 0x1407BEF3C (KsepRegistryEnumValue.c)
 *     KsepRegistryQueryKeyInformation @ 0x1407BF18C (KsepRegistryQueryKeyInformation.c)
 *     KsepRegistryQuerySZ @ 0x1407BF28C (KsepRegistryQuerySZ.c)
 *     KsepRegistryQueryValue @ 0x1407BF4FC (KsepRegistryQueryValue.c)
 *     KsepDbGetDriverShims @ 0x1409E45DC (KsepDbGetDriverShims.c)
 *     KsepDbGetDriverShimsInternal @ 0x1409E47C0 (KsepDbGetDriverShimsInternal.c)
 *     KseAddHardwareId @ 0x1409E4D00 (KseAddHardwareId.c)
 *     KsepStringConcatenate @ 0x1409E5358 (KsepStringConcatenate.c)
 *     KsepStringDuplicate @ 0x1409E5E2C (KsepStringDuplicate.c)
 *     KsepDbCacheReadDevice @ 0x1409E6158 (KsepDbCacheReadDevice.c)
 *     KsepEngineGetShimsFromRegistry @ 0x140A25360 (KsepEngineGetShimsFromRegistry.c)
 *     KsepGetShimsForDriver @ 0x140A255BC (KsepGetShimsForDriver.c)
 *     KsepStringDuplicateUnicode @ 0x140A25B24 (KsepStringDuplicateUnicode.c)
 * Callees:
 *     ExAllocatePool2 @ 0x140C10430 (ExAllocatePool2.c)
 */

__int64 KsepPoolAllocatePaged()
{
  __int64 result; // rax
  volatile signed __int32 *p_Teb; // rcx

  result = ExAllocatePool2(0x100uLL);
  p_Teb = (volatile signed __int32 *)(&AlpcpMessageLogLock.SwapListEntry + 1);
  if ( !result )
    p_Teb = (volatile signed __int32 *)&AlpcpMessageLogLock.Teb;
  _InterlockedIncrement(p_Teb);
  return result;
}
