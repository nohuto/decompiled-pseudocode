/*
 * XREFs of WPP_SF_q @ 0x14005C1C0
 * Callers:
 *     StorpRequestTimer @ 0x140001980 (StorpRequestTimer.c)
 *     RaidBusEnumeratorGetLunListFromTarget @ 0x14000CA30 (RaidBusEnumeratorGetLunListFromTarget.c)
 *     RaidUnitPendingDpcRoutine @ 0x140034050 (RaidUnitPendingDpcRoutine.c)
 *     RaidUnitRequestTimeout @ 0x1400346C8 (RaidUnitRequestTimeout.c)
 *     RaidpBuildAdapterBusRelations @ 0x140036A00 (RaidpBuildAdapterBusRelations.c)
 *     RaidQueryAcpiDsdSynchronous @ 0x140045DC8 (RaidQueryAcpiDsdSynchronous.c)
 *     RaDriverUnload @ 0x14004ECA0 (RaDriverUnload.c)
 *     RaidAcquireNvmeIceKeyResources @ 0x140058BB4 (RaidAcquireNvmeIceKeyResources.c)
 *     StorpFreeTimer @ 0x140059470 (StorpFreeTimer.c)
 *     StorpInitializeTimer @ 0x14005A2AC (StorpInitializeTimer.c)
 *     StorPortReady @ 0x14005CDB0 (StorPortReady.c)
 *     AddNvmeIceInterfaceToList @ 0x14007067C (AddNvmeIceInterfaceToList.c)
 *     RaUnitAsyncNotificationWorkItemRoutine @ 0x140099000 (RaUnitAsyncNotificationWorkItemRoutine.c)
 *     RaUnitAttributeManagement @ 0x1400991B0 (RaUnitAttributeManagement.c)
 *     RaUnitClearUnresponsiveAttribute @ 0x14009A0D8 (RaUnitClearUnresponsiveAttribute.c)
 *     RaUnitGetQOSIoctl @ 0x14009C1F4 (RaUnitGetQOSIoctl.c)
 *     RaUnitSetQOSIoctl @ 0x1400A0538 (RaUnitSetQOSIoctl.c)
 *     RaUnitSetUnresponsiveAttribute @ 0x1400A13C0 (RaUnitSetUnresponsiveAttribute.c)
 *     RaUnitUnresponsiveAttributeMgmt @ 0x1400A66AC (RaUnitUnresponsiveAttributeMgmt.c)
 *     RaidUnitGetDeviceParameters @ 0x1401BB894 (RaidUnitGetDeviceParameters.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401385D0 (_guard_dispatch_icall.c)
 */

__int64 WPP_SF_q(__int64 a1, unsigned __int16 a2, __int64 a3, ...)
{
  va_list va; // [rsp+68h] [rbp+20h] BYREF

  va_start(va, a3);
  return ((__int64 (__fastcall *)(__int64, __int64, __int64, _QWORD, __int64 *, __int64, _QWORD))pfnWppTraceMessage)(
           a1,
           43LL,
           a3,
           a2,
           (__int64 *)va,
           8LL,
           0LL);
}
