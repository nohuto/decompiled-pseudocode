/*
 * XREFs of Feature_SteelixInlineNvmeCryptoEngine__private_IsEnabledDeviceUsageNoInline @ 0x140015330
 * Callers:
 *     StorPortExtendedFunction @ 0x140001D50 (StorPortExtendedFunction.c)
 *     RaidBusEnumeratorVisitUnit @ 0x140009CE4 (RaidBusEnumeratorVisitUnit.c)
 *     RaidAdapterDevicePowerstopAdapter @ 0x14000F504 (RaidAdapterDevicePowerstopAdapter.c)
 *     RaidUnitProcessBusyRequest @ 0x140012A1C (RaidUnitProcessBusyRequest.c)
 *     RaUnitStartIo @ 0x140013D70 (RaUnitStartIo.c)
 *     RaUnitAsyncError @ 0x140016430 (RaUnitAsyncError.c)
 *     RaidUnitCompleteRequest @ 0x140017760 (RaidUnitCompleteRequest.c)
 *     StorAllocateContiguousIoResources @ 0x14001B548 (StorAllocateContiguousIoResources.c)
 *     RaidAdapterScsiMiniportIoctlWithAddress @ 0x14001BC80 (RaidAdapterScsiMiniportIoctlWithAddress.c)
 *     RaidUnitSubmitIrpRequest @ 0x140021420 (RaidUnitSubmitIrpRequest.c)
 *     RaidUnitCompleteResetRequest @ 0x140024200 (RaidUnitCompleteResetRequest.c)
 *     StorAllocateContiguousIoResourcesWithPreferredNode @ 0x140025578 (StorAllocateContiguousIoResourcesWithPreferredNode.c)
 *     StorPortUnitActiveConditionStep1 @ 0x14002BDC0 (StorPortUnitActiveConditionStep1.c)
 *     StorPortUnitIdleState @ 0x14002C7E0 (StorPortUnitIdleState.c)
 *     StorPortUnitIdleCondition @ 0x1400300F0 (StorPortUnitIdleCondition.c)
 *     RaidUnitSendPoFxPowerRequiredToMiniport @ 0x1400339DC (RaidUnitSendPoFxPowerRequiredToMiniport.c)
 *     RaidUnitSendPowerToMiniport @ 0x140042800 (RaidUnitSendPowerToMiniport.c)
 *     RaCallMiniportUnitControl @ 0x14004528C (RaCallMiniportUnitControl.c)
 *     RaidDeleteAdapter @ 0x1400478CC (RaidDeleteAdapter.c)
 *     RaidAdapterAcquireCryptoKeyResources @ 0x1400531D0 (RaidAdapterAcquireCryptoKeyResources.c)
 *     RaidAcquireNvmeIceKeyResources @ 0x140058BB4 (RaidAcquireNvmeIceKeyResources.c)
 *     RaidAdapterStartDevice @ 0x140068EBC (RaidAdapterStartDevice.c)
 *     RaidGetStorageAdapterCryptoProperty @ 0x14006C6B0 (RaidGetStorageAdapterCryptoProperty.c)
 *     AddNvmeIceInterfaceToList @ 0x14007067C (AddNvmeIceInterfaceToList.c)
 *     FreeNvmeIceEntry @ 0x140070BA0 (FreeNvmeIceEntry.c)
 *     RaidClearAllNvmeIceKeyTables @ 0x140071344 (RaidClearAllNvmeIceKeyTables.c)
 *     RaidInitializeCryptoEngine @ 0x140071818 (RaidInitializeCryptoEngine.c)
 *     RaidReleaseNvmeIceKeyResources @ 0x140071CF8 (RaidReleaseNvmeIceKeyResources.c)
 *     RemoveNvmeIceInterfaceFromList @ 0x140071D84 (RemoveNvmeIceInterfaceFromList.c)
 *     RaidNvmeIceIoComplete @ 0x14007A170 (RaidNvmeIceIoComplete.c)
 *     RaidNvmeIceIoStart @ 0x14007A278 (RaidNvmeIceIoStart.c)
 *     RaUnitDeviceUsageNotificationIrp @ 0x14009A788 (RaUnitDeviceUsageNotificationIrp.c)
 *     RaUnitStartResetIo @ 0x1400A2224 (RaUnitStartResetIo.c)
 *     DllInitialize @ 0x1400ACAB0 (DllInitialize.c)
 *     RaidUnitCreateDumpData @ 0x140183460 (RaidUnitCreateDumpData.c)
 *     FreeNvmeIceList @ 0x140187620 (FreeNvmeIceList.c)
 *     GetNvmeIceInterface @ 0x140187688 (GetNvmeIceInterface.c)
 *     RegisterForNvmeIceInterfaceCallback @ 0x140187A60 (RegisterForNvmeIceInterfaceCallback.c)
 *     RaUnitStorageDumpControl @ 0x14018C0B0 (RaUnitStorageDumpControl.c)
 *     RaUnitStorageGetDumpInfoIoctl @ 0x14018C2D8 (RaUnitStorageGetDumpInfoIoctl.c)
 *     RaUnitStorageQueryPropertyIoctl @ 0x1401B2144 (RaUnitStorageQueryPropertyIoctl.c)
 * Callees:
 *     Feature_SteelixInlineNvmeCryptoEngine__private_IsEnabledFallback @ 0x14005C460 (Feature_SteelixInlineNvmeCryptoEngine__private_IsEnabledFallback.c)
 */

__int64 Feature_SteelixInlineNvmeCryptoEngine__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_SteelixInlineNvmeCryptoEngine__private_featureState & 0x10) != 0 )
    return Feature_SteelixInlineNvmeCryptoEngine__private_featureState & 1;
  else
    return Feature_SteelixInlineNvmeCryptoEngine__private_IsEnabledFallback(
             (unsigned int)Feature_SteelixInlineNvmeCryptoEngine__private_featureState,
             3LL);
}
