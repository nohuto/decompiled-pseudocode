/*
 * XREFs of DpiCheckForOutstandingD3Requests @ 0x1400321CC
 * Callers:
 *     DxgkQueryConnectionChanges @ 0x140015450 (DxgkQueryConnectionChanges.c)
 *     ?Acquire@AUTO_PNPPOWER_LOCK@@QEAAXXZ @ 0x1400320DC (-Acquire@AUTO_PNPPOWER_LOCK@@QEAAXXZ.c)
 *     DpiMiracastStopMiracastSessionSync @ 0x14004C670 (DpiMiracastStopMiracastSessionSync.c)
 *     ?DpiPdoHandleOpmIoctlsInternal@@YAJPEAU_FDO_CONTEXT@@PEAU_PDO_CONTEXT@@KPEAXK2KPEA_K@Z @ 0x140051678 (-DpiPdoHandleOpmIoctlsInternal@@YAJPEAU_FDO_CONTEXT@@PEAU_PDO_CONTEXT@@KPEAXK2KPEA_K@Z.c)
 *     DpiPdoDispatchPower @ 0x1400581A0 (DpiPdoDispatchPower.c)
 *     ?CommonConstructor@CInterfaceCallContext@@AEAAXPEAXPEAU_IRP@@EW4AdapterLockAcquireType@@EEE@Z @ 0x140060BF4 (-CommonConstructor@CInterfaceCallContext@@AEAAXPEAXPEAU_IRP@@EW4AdapterLockAcquireType@@EEE@Z.c)
 *     DxgkInvalidateDeviceState @ 0x14006C7B4 (DxgkInvalidateDeviceState.c)
 *     DpiEnterSystemDisplay @ 0x140086F40 (DpiEnterSystemDisplay.c)
 *     DpiMiracastTearDownAssociation @ 0x140088FAC (DpiMiracastTearDownAssociation.c)
 *     DpiIndirectCbOpmGetSrmListVersion @ 0x140091A00 (DpiIndirectCbOpmGetSrmListVersion.c)
 *     DpiIndirectCbOpmSetSrmList @ 0x140091B50 (DpiIndirectCbOpmSetSrmList.c)
 *     DpiPollSingleDisplayChild @ 0x14023A744 (DpiPollSingleDisplayChild.c)
 *     DpiFdoDispatchPnp @ 0x1402408C0 (DpiFdoDispatchPnp.c)
 *     DpiFdoExcludeAdapterAccess @ 0x140241720 (DpiFdoExcludeAdapterAccess.c)
 *     DpiFdoHandleStartDevice @ 0x1402424B0 (DpiFdoHandleStartDevice.c)
 *     DpiFdoHandleStopDevice @ 0x140242E80 (DpiFdoHandleStopDevice.c)
 *     DpiFdoHandleSurpriseRemoval @ 0x140243240 (DpiFdoHandleSurpriseRemoval.c)
 *     DpiFdoStartAdapterThreadImpl @ 0x14024809C (DpiFdoStartAdapterThreadImpl.c)
 *     DxgkPowerOnOffMonitor @ 0x14024A2EC (DxgkPowerOnOffMonitor.c)
 *     DpiDisableMsBddFallbackDriver @ 0x14024B0EC (DpiDisableMsBddFallbackDriver.c)
 *     DpiEnableMsBddFallbackDriver @ 0x14024B32C (DpiEnableMsBddFallbackDriver.c)
 *     DpiFdoHandleQueryFlexibleIovInterface @ 0x14024F0C0 (DpiFdoHandleQueryFlexibleIovInterface.c)
 *     DpiFdoHandleQueryPartitioningDeviceInterface @ 0x14024F2F0 (DpiFdoHandleQueryPartitioningDeviceInterface.c)
 *     DpiFdoHandleQuerySrIovInterface @ 0x14024F480 (DpiFdoHandleQuerySrIovInterface.c)
 *     DpiFdoHandleQueryThermalInterface @ 0x14024F640 (DpiFdoHandleQueryThermalInterface.c)
 *     DpiFdoThermalActiveCooling @ 0x14024F910 (DpiFdoThermalActiveCooling.c)
 *     DpiFdoThermalPassiveCooling @ 0x14024FA90 (DpiFdoThermalPassiveCooling.c)
 *     DpiKsrStopAdapter @ 0x140252AB0 (DpiKsrStopAdapter.c)
 *     DpiLdaLinkDeviceToChain @ 0x1402549DC (DpiLdaLinkDeviceToChain.c)
 *     DpiLdaUnLinkDeviceFromChain @ 0x140254F00 (DpiLdaUnLinkDeviceFromChain.c)
 *     DpiLdaValidateSystemChainStatus @ 0x1402551FC (DpiLdaValidateSystemChainStatus.c)
 *     DpiFdoWaitWakePoCompletionWorkItem @ 0x140255680 (DpiFdoWaitWakePoCompletionWorkItem.c)
 *     DpiPdoHandleStartDevice @ 0x1402567B0 (DpiPdoHandleStartDevice.c)
 *     DpiPdoHandleStopDevice @ 0x1402568C0 (DpiPdoHandleStopDevice.c)
 *     DpiPdoPollingWorkItem @ 0x140256B00 (DpiPdoPollingWorkItem.c)
 *     DpiAcquireCoreSyncAccessSafe @ 0x14030CE44 (DpiAcquireCoreSyncAccessSafe.c)
 *     DpiFdoInvalidateChildWorkItem @ 0x14030F770 (DpiFdoInvalidateChildWorkItem.c)
 *     DpiFdoHandleSystemPower @ 0x1403BA2FC (DpiFdoHandleSystemPower.c)
 *     DpiPdoDispatchPnp @ 0x1403D1510 (DpiPdoDispatchPnp.c)
 *     DpiIndicateConnectorChangeWorkItem @ 0x1403DB5F0 (DpiIndicateConnectorChangeWorkItem.c)
 *     DpiPdoHandleQueryDeviceRelations @ 0x1403DF920 (DpiPdoHandleQueryDeviceRelations.c)
 *     DpiPollDisplayChildren @ 0x1403E6480 (DpiPollDisplayChildren.c)
 *     DpiMiracastFindDisplayAdapterFdo @ 0x1403E7010 (DpiMiracastFindDisplayAdapterFdo.c)
 *     DpiFdoHandleQueryDeviceRelations @ 0x1403FA470 (DpiFdoHandleQueryDeviceRelations.c)
 *     DpiFdoStopMiracastSession @ 0x1403FB020 (DpiFdoStopMiracastSession.c)
 *     DpiAcpiHandleAcpiEvent @ 0x140411414 (DpiAcpiHandleAcpiEvent.c)
 *     DpiMiracastFindDisplayAdapterFdoIhv @ 0x14042A5B4 (DpiMiracastFindDisplayAdapterFdoIhv.c)
 *     DxgkHandleMiracastEscape @ 0x14042CB5C (DxgkHandleMiracastEscape.c)
 *     DpiPdoDispatchInternalIoctl @ 0x140442E60 (DpiPdoDispatchInternalIoctl.c)
 * Callees:
 *     DpiRequestDevicePowerState @ 0x140032628 (DpiRequestDevicePowerState.c)
 *     DpiEnableD3Requests @ 0x14030EA10 (DpiEnableD3Requests.c)
 *     DpiDisableD3Requests @ 0x1403760F0 (DpiDisableD3Requests.c)
 */

NTSTATUS __fastcall DpiCheckForOutstandingD3Requests(__int64 a1)
{
  int v2; // ebx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-28h] BYREF

  DpiDisableD3Requests(*(_QWORD *)(a1 + 24));
  memset(&LockHandle, 0, sizeof(LockHandle));
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 4224), &LockHandle);
  v2 = *(_DWORD *)(a1 + 4288);
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  if ( v2 )
  {
    DpiRequestDevicePowerState(*(_QWORD *)(a1 + 24), 1LL);
    DpiEnableD3Requests(*(_QWORD *)(a1 + 24));
  }
  return KeWaitForSingleObject((PVOID)(a1 + 4240), Executive, 0, 0, 0LL);
}
