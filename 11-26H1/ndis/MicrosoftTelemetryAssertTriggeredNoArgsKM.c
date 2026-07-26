/*
 * XREFs of MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1400E7FA8
 * Callers:
 *     ?ndisMUpdateNameOnPMWakePacket@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PM_WAKE_PACKET@@@Z @ 0x140044C50 (-ndisMUpdateNameOnPMWakePacket@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PM_WAKE_PACKET@@@Z.c)
 *     ?ndisAoAcActiveRefSubtract@@YAJPEAU_NDIS_MINIPORT_AOAC@@W4_NDIS_PM_COMPONENT_ID@@K@Z @ 0x140048C90 (-ndisAoAcActiveRefSubtract@@YAJPEAU_NDIS_MINIPORT_AOAC@@W4_NDIS_PM_COMPONENT_ID@@K@Z.c)
 *     ?ndisQuerySetMiniportDeviceState@@YAHPEAU_NDIS_MINIPORT_BLOCK@@W4_DEVICE_POWER_STATE@@KE@Z @ 0x14004CD50 (-ndisQuerySetMiniportDeviceState@@YAHPEAU_NDIS_MINIPORT_BLOCK@@W4_DEVICE_POWER_STATE@@KE@Z.c)
 *     ?IndicateReceiveNetBufferListsDummyHandler@@YAXPEAXPEAU_NET_BUFFER_LIST@@KKK@Z @ 0x1400A5350 (-IndicateReceiveNetBufferListsDummyHandler@@YAXPEAXPEAU_NET_BUFFER_LIST@@KKK@Z.c)
 *     ?ReturnNetBufferListsDummyHandler@@YAXPEAXPEAU_NET_BUFFER_LIST@@K@Z @ 0x1400A5420 (-ReturnNetBufferListsDummyHandler@@YAXPEAXPEAU_NET_BUFFER_LIST@@K@Z.c)
 *     ?SendNetBufferListsCompleteDummyHandler@@YAXPEAXPEAU_NET_BUFFER_LIST@@K@Z @ 0x1400A5470 (-SendNetBufferListsCompleteDummyHandler@@YAXPEAXPEAU_NET_BUFFER_LIST@@K@Z.c)
 *     ?SendNetBufferListsDummyHandler@@YAXPEAXPEAU_NET_BUFFER_LIST@@KK@Z @ 0x1400A54C0 (-SendNetBufferListsDummyHandler@@YAXPEAXPEAU_NET_BUFFER_LIST@@KK@Z.c)
 *     ?ndisFreeReceiveQueue@@YAHPEAU_NDIS_MINIPORT_BLOCK@@K@Z @ 0x1400AC768 (-ndisFreeReceiveQueue@@YAHPEAU_NDIS_MINIPORT_BLOCK@@K@Z.c)
 *     ?ndisWdfPreReleaseHardware@@YAJPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140141A74 (-ndisWdfPreReleaseHardware@@YAJPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ndisIfSetFilterIfInfoInRegistry @ 0x140165550 (ndisIfSetFilterIfInfoInRegistry.c)
 *     ?ndisPnPIrpRemoveDevice@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@PEAE3@Z @ 0x14016E220 (-ndisPnPIrpRemoveDevice@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@PEAE3@Z.c)
 *     ?ndisMInitializeAdapter@@YAHPEAU_NDIS_M_DRIVER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_WRAPPER_CONFIGURATION_HANDLE@@PEAU_UNICODE_STRING@@PEAX@Z @ 0x14017F540 (-ndisMInitializeAdapter@@YAHPEAU_NDIS_M_DRIVER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_WRAPPE.c)
 *     ?ndisPmInitializeMiniport@@_Y2PAGENPNP@@AHPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140185800 (-ndisPmInitializeMiniport@@_Y2PAGENPNP@@AHPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredWorker @ 0x1400E7FDC (MicrosoftTelemetryAssertTriggeredWorker.c)
 */

__int64 MicrosoftTelemetryAssertTriggeredNoArgsKM()
{
  void *retaddr; // [rsp+38h] [rbp+0h]

  return MicrosoftTelemetryAssertTriggeredWorker(retaddr, 0LL, 0LL);
}
