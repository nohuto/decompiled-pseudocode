/*
 * XREFs of KsepPoolAllocatePaged @ 0x1404D7BFC
 * Callers:
 *     KsepEvntLogShimsApplied @ 0x140600ACC (KsepEvntLogShimsApplied.c)
 *     KsepDbGetShimInfo @ 0x1407BFA9C (KsepDbGetShimInfo.c)
 *     KsepDbQueryRegistryDeviceDataList @ 0x1407BFCB8 (KsepDbQueryRegistryDeviceDataList.c)
 *     KseRegisterShimEx @ 0x1407C0040 (KseRegisterShimEx.c)
 *     KsepSdbBootInitialize @ 0x1407C153C (KsepSdbBootInitialize.c)
 *     KsepGetLoadedModulesList @ 0x1407C16B4 (KsepGetLoadedModulesList.c)
 *     KsepStringSplitMultiString @ 0x1407C189C (KsepStringSplitMultiString.c)
 *     KsepCacheDeviceInsertData @ 0x1407C1AEC (KsepCacheDeviceInsertData.c)
 *     KsepCacheInitialize @ 0x1407C1BCC (KsepCacheInitialize.c)
 *     KsepRegistryEnumValue @ 0x1407C1F9C (KsepRegistryEnumValue.c)
 *     KsepRegistryQueryKeyInformation @ 0x1407C21EC (KsepRegistryQueryKeyInformation.c)
 *     KsepRegistryQuerySZ @ 0x1407C22EC (KsepRegistryQuerySZ.c)
 *     KsepRegistryQueryValue @ 0x1407C255C (KsepRegistryQueryValue.c)
 *     KsepDbCacheReadDevice @ 0x1409D6A58 (KsepDbCacheReadDevice.c)
 *     KsepStringDuplicate @ 0x1409D73AC (KsepStringDuplicate.c)
 *     KsepStringConcatenate @ 0x1409D7A8C (KsepStringConcatenate.c)
 *     KseAddHardwareId @ 0x1409D80D0 (KseAddHardwareId.c)
 *     KsepDbGetDriverShims @ 0x1409D8DF4 (KsepDbGetDriverShims.c)
 *     KsepDbGetDriverShimsInternal @ 0x1409D8FD8 (KsepDbGetDriverShimsInternal.c)
 *     KsepEngineGetShimsFromRegistry @ 0x140A38400 (KsepEngineGetShimsFromRegistry.c)
 *     KsepGetShimsForDriver @ 0x140A3865C (KsepGetShimsForDriver.c)
 *     KsepStringDuplicateUnicode @ 0x140A38BC4 (KsepStringDuplicateUnicode.c)
 * Callees:
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 */

__int64 KsepPoolAllocatePaged()
{
  __int64 result; // rax
  volatile signed __int32 *p_WaitStatus; // rcx

  result = ExAllocatePool2(0x100uLL);
  p_WaitStatus = (volatile signed __int32 *)&AlpcpMessageLogLock.ApcStateFill[32];
  if ( !result )
    p_WaitStatus = (volatile signed __int32 *)&AlpcpMessageLogLock.WaitStatus;
  _InterlockedIncrement(p_WaitStatus);
  return result;
}
