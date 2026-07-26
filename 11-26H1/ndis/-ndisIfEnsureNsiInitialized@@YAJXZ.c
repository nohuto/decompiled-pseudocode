/*
 * XREFs of ?ndisIfEnsureNsiInitialized@@YAJXZ @ 0x14016A550
 * Callers:
 *     ?ndisInternalRegisterMiniportDriver@@YAHPEAU_DRIVER_OBJECT@@PEAU_UNICODE_STRING@@PEAXPEAU_NDIS_MINIPORT_DRIVER_CHARACTERISTICS@@PEAPEAX@Z @ 0x140076300 (-ndisInternalRegisterMiniportDriver@@YAHPEAU_DRIVER_OBJECT@@PEAU_UNICODE_STRING@@PEAXPEAU_NDIS_M.c)
 *     NdisIMRegisterLayeredMiniport @ 0x140094D50 (NdisIMRegisterLayeredMiniport.c)
 *     NdisMRegisterMiniport @ 0x140095DB0 (NdisMRegisterMiniport.c)
 *     ndisDriverReinit @ 0x140097620 (ndisDriverReinit.c)
 *     NdisRegisterProtocol @ 0x1400BBFE0 (NdisRegisterProtocol.c)
 *     NdisRegisterProtocolDriver @ 0x1400BC420 (NdisRegisterProtocolDriver.c)
 *     NdisIfRegisterProvider @ 0x1400CEC10 (NdisIfRegisterProvider.c)
 *     ?ndisMInitializeAdapter@@YAHPEAU_NDIS_M_DRIVER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_WRAPPER_CONFIGURATION_HANDLE@@PEAU_UNICODE_STRING@@PEAX@Z @ 0x14017F540 (-ndisMInitializeAdapter@@YAHPEAU_NDIS_M_DRIVER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_WRAPPE.c)
 * Callees:
 *     <none>
 */

NTSTATUS ndisIfEnsureNsiInitialized(void)
{
  return RtlRunOnceExecuteOnce(&stru_14011E9D0, (PRTL_RUN_ONCE_INIT_FN)ndisIfInitializePhase2, 0LL, 0LL);
}
