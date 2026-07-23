/*
 * XREFs of ExSystemTimeToLocalTime @ 0x1402153C0
 * Callers:
 *     IopCopyBootLogRegistryToFile @ 0x14079722C (IopCopyBootLogRegistryToFile.c)
 *     PopDiagTraceActiveCooling @ 0x1407D55EC (PopDiagTraceActiveCooling.c)
 *     PopDiagTracePassiveCooling @ 0x1407D6A8C (PopDiagTracePassiveCooling.c)
 *     PopPowerAdapterPublishRecState @ 0x1407DD4A0 (PopPowerAdapterPublishRecState.c)
 *     PopNetGetNextDueRefreshTime @ 0x1407DE46C (PopNetGetNextDueRefreshTime.c)
 *     PopAdaptiveStandbyTraceBatteryUpdate @ 0x1407E5664 (PopAdaptiveStandbyTraceBatteryUpdate.c)
 *     ExpRefreshSystemTime @ 0x14083C564 (ExpRefreshSystemTime.c)
 *     NtSetSystemTime @ 0x14083C8F0 (NtSetSystemTime.c)
 *     HalpUtcTimeToAcpiRealTime @ 0x140B28B24 (HalpUtcTimeToAcpiRealTime.c)
 *     CmpUpdateReorganizeRegistryValues @ 0x140B385E8 (CmpUpdateReorganizeRegistryValues.c)
 *     ExpSetSystemTime @ 0x140C0F524 (ExpSetSystemTime.c)
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x1402153F0 (PsGetCurrentServerSiloGlobals.c)
 */

void __stdcall ExSystemTimeToLocalTime(PLARGE_INTEGER SystemTime, PLARGE_INTEGER LocalTime)
{
  __int64 CurrentServerSiloGlobals; // rax
  _QWORD *v3; // r9
  _QWORD *v4; // rdx

  CurrentServerSiloGlobals = PsGetCurrentServerSiloGlobals(SystemTime, LocalTime);
  *v4 = *v3 - *(_QWORD *)(*(_QWORD *)(CurrentServerSiloGlobals + 1224) + 440LL);
}
