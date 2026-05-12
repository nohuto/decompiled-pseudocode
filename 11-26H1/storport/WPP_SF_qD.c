/*
 * XREFs of WPP_SF_qD @ 0x14006F3F4
 * Callers:
 *     RaidBusEnumeratorGetLunListFromTarget @ 0x14000CA30 (RaidBusEnumeratorGetLunListFromTarget.c)
 *     RaidpBuildAdapterBusRelations @ 0x140036A00 (RaidpBuildAdapterBusRelations.c)
 *     StorPortBusy @ 0x140050770 (StorPortBusy.c)
 *     RaidAdapterStartDevice @ 0x140068EBC (RaidAdapterStartDevice.c)
 *     RaidAdapterProgramCryptoKeyRoutine @ 0x140071020 (RaidAdapterProgramCryptoKeyRoutine.c)
 *     RaUnitScsiGetDumpPointersIoctl @ 0x14009F164 (RaUnitScsiGetDumpPointersIoctl.c)
 *     RaidAdapterFilterResourceRequirementsIrp @ 0x140184FF8 (RaidAdapterFilterResourceRequirementsIrp.c)
 *     RaidAdapterGetNvmeIceCapabilities @ 0x1401877EC (RaidAdapterGetNvmeIceCapabilities.c)
 *     RaUnitStorageDumpControl @ 0x14018C0B0 (RaUnitStorageDumpControl.c)
 *     RaWmiPassToMiniPort @ 0x1401B8A40 (RaWmiPassToMiniPort.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401385D0 (_guard_dispatch_icall.c)
 */

__int64 WPP_SF_qD(__int64 a1, unsigned __int16 a2, __int64 a3, ...)
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
           4LL,
           0LL);
}
