/*
 * XREFs of WPP_SF_qq @ 0x14006F514
 * Callers:
 *     RaDriverScsiIrp @ 0x140003DF0 (RaDriverScsiIrp.c)
 *     RaUnitScsiIrp @ 0x140004D30 (RaUnitScsiIrp.c)
 *     StorpInitializeWorkItem @ 0x140009A30 (StorpInitializeWorkItem.c)
 *     RaidAdapterSetDevicePowerCompletionRoutine @ 0x14000EF90 (RaidAdapterSetDevicePowerCompletionRoutine.c)
 *     RaidAdapterDevicePowerstopAdapter @ 0x14000F504 (RaidAdapterDevicePowerstopAdapter.c)
 *     RaidAdapterSetSystemPowerCompletion @ 0x14000F6F0 (RaidAdapterSetSystemPowerCompletion.c)
 *     RaidAdapterQuerySystemPowerCompletionRoutine @ 0x14000F980 (RaidAdapterQuerySystemPowerCompletionRoutine.c)
 *     RaidAdapterPowerUpDeviceCompletion @ 0x14000FDD0 (RaidAdapterPowerUpDeviceCompletion.c)
 *     RaidUnitProcessSetDevicePowerIrp @ 0x14001A3CC (RaidUnitProcessSetDevicePowerIrp.c)
 *     RaDriverDeviceControlIrp @ 0x14001CFC0 (RaDriverDeviceControlIrp.c)
 *     RaDriverIoIrp @ 0x14001F950 (RaDriverIoIrp.c)
 *     RaidAdapterIoIrp @ 0x14001FCCC (RaidAdapterIoIrp.c)
 *     RaidAdapterSetDevicePowerIrp @ 0x14002E9E4 (RaidAdapterSetDevicePowerIrp.c)
 *     RaidAdapterPowerDownDevice @ 0x14002EBC0 (RaidAdapterPowerDownDevice.c)
 *     RaidAdapterQuerySystemPowerIrp @ 0x14002EFF8 (RaidAdapterQuerySystemPowerIrp.c)
 *     RaidAdapterPowerUpDevice @ 0x14002F46C (RaidAdapterPowerUpDevice.c)
 *     RaidAdapterSetSystemPowerIrp @ 0x14002F554 (RaidAdapterSetSystemPowerIrp.c)
 *     RaidAdapterQueryDeviceRelationsIrp @ 0x1400364C4 (RaidAdapterQueryDeviceRelationsIrp.c)
 *     RaidUnitSetPowerIrp @ 0x14003CC5C (RaidUnitSetPowerIrp.c)
 *     RaidUnitSetDevicePowerIrp @ 0x14003D4FC (RaidUnitSetDevicePowerIrp.c)
 *     RaidUnitQueryPowerIrp @ 0x14003D674 (RaidUnitQueryPowerIrp.c)
 *     RaDriverFlushIrp @ 0x140041210 (RaDriverFlushIrp.c)
 *     RaidAdapterQueryDevicePowerCompletionRoutine @ 0x140045360 (RaidAdapterQueryDevicePowerCompletionRoutine.c)
 *     RaidSyncAcpiEvalMethod @ 0x140047160 (RaidSyncAcpiEvalMethod.c)
 *     RaidAdapterPowerDownDeviceCompletion @ 0x14004B660 (RaidAdapterPowerDownDeviceCompletion.c)
 *     RaUnitScsiFreeDumpPointersIoctl @ 0x140056C08 (RaUnitScsiFreeDumpPointersIoctl.c)
 *     StorpFreeTimer @ 0x140059470 (StorpFreeTimer.c)
 *     StorpFreeWorkItem @ 0x1400597F4 (StorpFreeWorkItem.c)
 *     StorpInitializeTimer @ 0x14005A2AC (StorpInitializeTimer.c)
 *     RaidAdapterStartDevice @ 0x140068EBC (RaidAdapterStartDevice.c)
 *     RaDriverAddDevice @ 0x140072400 (RaDriverAddDevice.c)
 *     RaDriverPowerIrp @ 0x140072930 (RaDriverPowerIrp.c)
 *     RaDriverShutdownIrp @ 0x140072A70 (RaDriverShutdownIrp.c)
 *     RaidUnitSetDevicePowerCompletionRoutine @ 0x140080D20 (RaidUnitSetDevicePowerCompletionRoutine.c)
 *     RaUnitGetContiguousPhysicalAddressIoctl @ 0x14009BD04 (RaUnitGetContiguousPhysicalAddressIoctl.c)
 *     RaUnitRemoveDeviceIrp @ 0x14009EC3C (RaUnitRemoveDeviceIrp.c)
 *     RaUnitScsiGetDumpPointersIoctl @ 0x14009F164 (RaUnitScsiGetDumpPointersIoctl.c)
 *     ParseTcgMethodData @ 0x1401370EC (ParseTcgMethodData.c)
 *     RaidAdapterDiagnosticIoctl @ 0x14018470C (RaidAdapterDiagnosticIoctl.c)
 *     RaidAdapterGetMiniportDumpInfo @ 0x1401855B0 (RaidAdapterGetMiniportDumpInfo.c)
 *     RaidAdapterScsiIrp @ 0x140185F18 (RaidAdapterScsiIrp.c)
 *     RaDriverCreateIrp @ 0x1401B2C80 (RaDriverCreateIrp.c)
 *     RaDriverCloseIrp @ 0x1401B2D90 (RaDriverCloseIrp.c)
 *     RaUnitStorageDataSetManagementIoctl @ 0x1401B407C (RaUnitStorageDataSetManagementIoctl.c)
 *     RaDriverSystemControlIrp @ 0x1401B7620 (RaDriverSystemControlIrp.c)
 *     RaidAdapterFreeMiniportDumpInfo @ 0x1401B816C (RaidAdapterFreeMiniportDumpInfo.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401385D0 (_guard_dispatch_icall.c)
 */

__int64 WPP_SF_qq(__int64 a1, unsigned __int16 a2, __int64 a3, ...)
{
  __int64 v4; // [rsp+78h] [rbp+20h] BYREF
  va_list va; // [rsp+78h] [rbp+20h]
  va_list va1; // [rsp+80h] [rbp+28h] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  v4 = va_arg(va1, _QWORD);
  return ((__int64 (__fastcall *)(__int64, __int64, __int64, _QWORD, __int64 *, __int64, char *, __int64, _QWORD))pfnWppTraceMessage)(
           a1,
           43LL,
           a3,
           a2,
           (__int64 *)va,
           8LL,
           va1,
           8LL,
           0LL);
}
