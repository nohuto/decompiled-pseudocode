/*
 * XREFs of ACPIDebugGetIrpText @ 0x14003D6E4
 * Callers:
 *     ACPIFanStartDevice @ 0x1400A89C0 (ACPIFanStartDevice.c)
 *     ACPIBusAndFilterIrpEject @ 0x1400A8F30 (ACPIBusAndFilterIrpEject.c)
 *     ACPIDockIrpQueryCapabilities @ 0x1400AB740 (ACPIDockIrpQueryCapabilities.c)
 *     ACPIDockIrpQueryDeviceRelations @ 0x1400AB9F0 (ACPIDockIrpQueryDeviceRelations.c)
 *     ACPIDockIrpQueryID @ 0x1400ABDF0 (ACPIDockIrpQueryID.c)
 *     ACPIDockIrpQueryInterface @ 0x1400AC120 (ACPIDockIrpQueryInterface.c)
 *     ACPIDockIrpQueryPnpDeviceState @ 0x1400AC2F0 (ACPIDockIrpQueryPnpDeviceState.c)
 *     ACPIBusAndFilterIrpSetLock @ 0x1400AD8A0 (ACPIBusAndFilterIrpSetLock.c)
 *     ACPIBusIrpCancelRemoveOrStopDevice @ 0x1400AD970 (ACPIBusIrpCancelRemoveOrStopDevice.c)
 *     ACPIBusIrpQueryRemoveOrStopDevice @ 0x1400ADC00 (ACPIBusIrpQueryRemoveOrStopDevice.c)
 *     ACPIBusIrpStartDeviceWorker @ 0x1400AE0C0 (ACPIBusIrpStartDeviceWorker.c)
 *     ACPIBusIrpStopDevice @ 0x1400AE270 (ACPIBusIrpStopDevice.c)
 *     ACPIFilterIrpQueryIdCompletion @ 0x1400B0E60 (ACPIFilterIrpQueryIdCompletion.c)
 *     ACPIFilterIrpStopDevice @ 0x1400B1360 (ACPIFilterIrpStopDevice.c)
 *     ACPIRootIrpCancelRemoveOrStopDevice @ 0x1400B9F20 (ACPIRootIrpCancelRemoveOrStopDevice.c)
 *     ACPIRootIrpQueryCapabilities @ 0x1400BA050 (ACPIRootIrpQueryCapabilities.c)
 *     ACPIRootIrpStopDevice @ 0x1400BA2E0 (ACPIRootIrpStopDevice.c)
 *     ACPIBusIrpDeviceEnumerated @ 0x1400C0080 (ACPIBusIrpDeviceEnumerated.c)
 *     ACPIBusAndFilterIrpQueryCapabilities @ 0x1400C0E70 (ACPIBusAndFilterIrpQueryCapabilities.c)
 *     ACPIBusIrpDeviceUsageNotification @ 0x1400C1F40 (ACPIBusIrpDeviceUsageNotification.c)
 *     ACPIFilterIrpQueryDeviceRelations @ 0x1400C58A0 (ACPIFilterIrpQueryDeviceRelations.c)
 *     ACPIRootIrpQueryBusRelations @ 0x1400C5BD8 (ACPIRootIrpQueryBusRelations.c)
 *     ACPIInternalDeviceQueryDeviceRelations @ 0x1400C61D0 (ACPIInternalDeviceQueryDeviceRelations.c)
 *     ACPIBusIrpQueryDeviceRelations @ 0x1400C63C0 (ACPIBusIrpQueryDeviceRelations.c)
 *     ACPIBusIrpQueryResources @ 0x1400C94D0 (ACPIBusIrpQueryResources.c)
 *     ACPIBusIrpQueryResourceRequirements @ 0x1400C9940 (ACPIBusIrpQueryResourceRequirements.c)
 *     ACPIFilterIrpFilterResourceRequirements @ 0x1400C9E20 (ACPIFilterIrpFilterResourceRequirements.c)
 *     ACPIBusAndFilterIrpQueryPnpDeviceState @ 0x1400CA9C0 (ACPIBusAndFilterIrpQueryPnpDeviceState.c)
 *     ACPIBusIrpQueryId @ 0x1400CBDB0 (ACPIBusIrpQueryId.c)
 *     ACPIRootIrpQueryInterface @ 0x1400CC6A0 (ACPIRootIrpQueryInterface.c)
 *     ACPIFilterIrpStartDeviceWorker @ 0x1400CCC00 (ACPIFilterIrpStartDeviceWorker.c)
 *     ACPIRootIrpQueryDeviceRelations @ 0x1400CDB30 (ACPIRootIrpQueryDeviceRelations.c)
 *     ACPIFilterIrpStartDevice @ 0x1400CFC00 (ACPIFilterIrpStartDevice.c)
 *     ACPIFilterIrpDeviceEnumeratedCompletion @ 0x1400D01C0 (ACPIFilterIrpDeviceEnumeratedCompletion.c)
 *     ACPIFilterIrpSurpriseRemoval @ 0x1400D1170 (ACPIFilterIrpSurpriseRemoval.c)
 *     ACPIFilterIrpDeviceUsageNotification @ 0x1400D1390 (ACPIFilterIrpDeviceUsageNotification.c)
 *     ACPIRootIrpQueryRemoveOrStopDevice @ 0x1400D1D20 (ACPIRootIrpQueryRemoveOrStopDevice.c)
 * Callees:
 *     <none>
 */

char *__fastcall ACPIDebugGetIrpText(__int64 a1, unsigned __int8 a2)
{
  __int64 v2; // rax

  v2 = a2;
  if ( a2 >= 0x1Au )
    v2 = 26LL;
  return ACPIDispatchPnpTableNames[v2];
}
