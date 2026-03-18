/*
 * XREFs of ?ReleaseMiniportListMutex@@YAXXZ @ 0x14004CE28
 * Callers:
 *     DpiMiracastStopMiracastSessionSync @ 0x14004C670 (DpiMiracastStopMiracastSessionSync.c)
 *     DxgkMiracastEnforceInactiveMonitorPolicy @ 0x14004CCA0 (DxgkMiracastEnforceInactiveMonitorPolicy.c)
 *     ?DpiPdoHandleOpmIoctlsInternal@@YAJPEAU_FDO_CONTEXT@@PEAU_PDO_CONTEXT@@KPEAXK2KPEA_K@Z @ 0x140051678 (-DpiPdoHandleOpmIoctlsInternal@@YAJPEAU_FDO_CONTEXT@@PEAU_PDO_CONTEXT@@KPEAXK2KPEA_K@Z.c)
 *     DpiLeaveSystemDisplay @ 0x1400655D0 (DpiLeaveSystemDisplay.c)
 *     DxgkMiracastStartMiracastSession @ 0x1400685F0 (DxgkMiracastStartMiracastSession.c)
 *     DpiEnterSystemDisplay @ 0x140086F40 (DpiEnterSystemDisplay.c)
 *     DpiMiracastInterfaceChange @ 0x140087EC0 (DpiMiracastInterfaceChange.c)
 *     DpiMiracastTargetDeviceChange @ 0x140088AC0 (DpiMiracastTargetDeviceChange.c)
 *     DpiMiracastTearDownAssociation @ 0x140088FAC (DpiMiracastTearDownAssociation.c)
 *     ?PerformSwitch@DISPLAY_MUX_SWITCH_OPERATION@@QEAAXPEAU_D3DKMT_DISPLAYMUX_SWITCH_STATUS@@PEAH@Z @ 0x14008D6DC (-PerformSwitch@DISPLAY_MUX_SWITCH_OPERATION@@QEAAXPEAU_D3DKMT_DISPLAYMUX_SWITCH_STATUS@@PEAH@Z.c)
 *     DpiDumpAdaptersDisplayMuxStatus @ 0x1400903D0 (DpiDumpAdaptersDisplayMuxStatus.c)
 *     DpiIndirectCbOpmGetSrmListVersion @ 0x140091A00 (DpiIndirectCbOpmGetSrmListVersion.c)
 *     DpiIndirectCbOpmSetSrmList @ 0x140091B50 (DpiIndirectCbOpmSetSrmList.c)
 *     ?FindAdapterAndAcquire@AUTO_REMOVE_LOCK@@QEAAJPEAU_LUID@@@Z @ 0x140093840 (-FindAdapterAndAcquire@AUTO_REMOVE_LOCK@@QEAAJPEAU_LUID@@@Z.c)
 *     DpiMiracastGetDeviceContextFromName @ 0x140192584 (DpiMiracastGetDeviceContextFromName.c)
 *     DpiAcpiUnregisterAcpiCallbacks @ 0x140194A18 (DpiAcpiUnregisterAcpiCallbacks.c)
 *     DpiControlEtwLogging @ 0x1402386B8 (DpiControlEtwLogging.c)
 *     DpiAddDevice @ 0x14023C1E0 (DpiAddDevice.c)
 *     DpiCleanup @ 0x14023E63C (DpiCleanup.c)
 *     DpiInitializeEx @ 0x14023E988 (DpiInitializeEx.c)
 *     DpiFdoHandleQueryPowerRelations @ 0x140242120 (DpiFdoHandleQueryPowerRelations.c)
 *     DpiFdoHandleStartDevice @ 0x1402424B0 (DpiFdoHandleStartDevice.c)
 *     DpiFdoHandleStopDevice @ 0x140242E80 (DpiFdoHandleStopDevice.c)
 *     DpiFdoStartAdapterThreadImpl @ 0x14024809C (DpiFdoStartAdapterThreadImpl.c)
 *     DpiFdoStopAdapter @ 0x140248A44 (DpiFdoStopAdapter.c)
 *     DpiDisableMsBddFallbackDriverWorkItem @ 0x14024B2A0 (DpiDisableMsBddFallbackDriverWorkItem.c)
 *     DpiIndirectFindDeviceFromInstanceId @ 0x140250698 (DpiIndirectFindDeviceFromInstanceId.c)
 *     ?DpIterateFdoContexts@@YAXP6AJPEAU_FDO_CONTEXT@@PEAX@Z1@Z @ 0x14025124C (-DpIterateFdoContexts@@YAXP6AJPEAU_FDO_CONTEXT@@PEAX@Z1@Z.c)
 *     DpiKsrStopAdapter @ 0x140252AB0 (DpiKsrStopAdapter.c)
 *     DpiAcpiRegisterAcpiCallbacks @ 0x1402537D8 (DpiAcpiRegisterAcpiCallbacks.c)
 *     DpiLdaValidateSystemChainStatus @ 0x1402551FC (DpiLdaValidateSystemChainStatus.c)
 *     DpiGdoDestroyGdiObjects @ 0x1402572A4 (DpiGdoDestroyGdiObjects.c)
 *     DpiValidateDeviceName @ 0x1403A0FE0 (DpiValidateDeviceName.c)
 *     DxgkMiracastStopAllMiracastSessions @ 0x1403B5090 (DxgkMiracastStopAllMiracastSessions.c)
 *     DpiMiracastFindDisplayAdapterFdo @ 0x1403E7010 (DpiMiracastFindDisplayAdapterFdo.c)
 *     DxgkMiracastQueryMiracastSupportInternal @ 0x1403E7368 (DxgkMiracastQueryMiracastSupportInternal.c)
 *     DpiFdoStopMiracastSession @ 0x1403FB020 (DpiFdoStopMiracastSession.c)
 *     DpiAcpiHandleAcpiEvent @ 0x140411414 (DpiAcpiHandleAcpiEvent.c)
 *     DpiFdoHandleRemoveDevice @ 0x14041A370 (DpiFdoHandleRemoveDevice.c)
 *     ?DpiIndirectGetMiniport@@YAJAEBUDXGK_MINIPORT_FILTER@@AEAVAUTO_REMOVE_LOCK@@AEAVAUTO_PNPPOWER_LOCK@@PEAPEAU_FDO_CONTEXT@@@Z @ 0x140426148 (-DpiIndirectGetMiniport@@YAJAEBUDXGK_MINIPORT_FILTER@@AEAVAUTO_REMOVE_LOCK@@AEAVAUTO_PNPPOWER_LO.c)
 *     DxgkHandleMiracastEscape @ 0x14042CB5C (DxgkHandleMiracastEscape.c)
 * Callees:
 *     <none>
 */

void ReleaseMiniportListMutex(void)
{
  _InterlockedExchange64(&qword_140168E18, 0LL);
  KeReleaseMutex(Mutex, 0);
}
