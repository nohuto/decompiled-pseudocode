/*
 * XREFs of WPP_SF_DDD @ 0x14006F394
 * Callers:
 *     RaidBusEnumeratorVisitUnit @ 0x140009CE4 (RaidBusEnumeratorVisitUnit.c)
 *     RaidPnPPassToMiniPort @ 0x14001A8BC (RaidPnPPassToMiniPort.c)
 *     StorPortResumeDevice @ 0x140028690 (StorPortResumeDevice.c)
 *     RaidAdapterResumeUnit @ 0x140028A9C (RaidAdapterResumeUnit.c)
 *     RaidAdapterPauseUnit @ 0x140028B48 (RaidAdapterPauseUnit.c)
 *     StorPortPauseDevice @ 0x140028C40 (StorPortPauseDevice.c)
 *     RaidUnitRequestTimeout @ 0x1400346C8 (RaidUnitRequestTimeout.c)
 *     StorpLogSystemEvent @ 0x140058584 (StorpLogSystemEvent.c)
 *     RaidAdapterDeviceBusy @ 0x140060A68 (RaidAdapterDeviceBusy.c)
 *     RaidAdapterDeviceReady @ 0x140060B5C (RaidAdapterDeviceReady.c)
 *     StorPortCompleteRequest @ 0x14007B250 (StorPortCompleteRequest.c)
 *     StorPortDeviceReady @ 0x14007B410 (StorPortDeviceReady.c)
 *     ParseLockingObjectInfo @ 0x1401326F0 (ParseLockingObjectInfo.c)
 *     ParseGetTableColumnData @ 0x140133860 (ParseGetTableColumnData.c)
 *     RaWmiPassToMiniPort @ 0x1401B8A40 (RaWmiPassToMiniPort.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401385D0 (_guard_dispatch_icall.c)
 */

__int64 WPP_SF_DDD(__int64 a1, unsigned __int16 a2, __int64 a3, int a4, ...)
{
  int v5; // [rsp+88h] [rbp+20h] BYREF
  __int64 v6; // [rsp+90h] [rbp+28h] BYREF
  va_list va; // [rsp+90h] [rbp+28h]
  va_list va1; // [rsp+98h] [rbp+30h] BYREF

  va_start(va1, a4);
  va_start(va, a4);
  v6 = va_arg(va1, _QWORD);
  v5 = a4;
  return ((__int64 (__fastcall *)(__int64, __int64, __int64, _QWORD, int *, __int64, __int64 *, __int64, char *, __int64, _QWORD))pfnWppTraceMessage)(
           a1,
           43LL,
           a3,
           a2,
           &v5,
           4LL,
           (__int64 *)va,
           4LL,
           va1,
           4LL,
           0LL);
}
