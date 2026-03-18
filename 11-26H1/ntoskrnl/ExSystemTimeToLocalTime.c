/*
 * XREFs of ExSystemTimeToLocalTime @ 0x140215090
 * Callers:
 *     IopCopyBootLogRegistryToFile @ 0x1407946FC (IopCopyBootLogRegistryToFile.c)
 *     PopDiagTraceActiveCooling @ 0x1407D2580 (PopDiagTraceActiveCooling.c)
 *     PopDiagTracePassiveCooling @ 0x1407D390C (PopDiagTracePassiveCooling.c)
 *     PopPowerAdapterPublishRecState @ 0x1407D9848 (PopPowerAdapterPublishRecState.c)
 *     PopNetGetNextDueRefreshTime @ 0x1407DA57C (PopNetGetNextDueRefreshTime.c)
 *     PopAdaptiveStandbyTraceBatteryUpdate @ 0x1407E0808 (PopAdaptiveStandbyTraceBatteryUpdate.c)
 *     ExpRefreshSystemTime @ 0x140836324 (ExpRefreshSystemTime.c)
 *     NtSetSystemTime @ 0x1408366B0 (NtSetSystemTime.c)
 *     HalpUtcTimeToAcpiRealTime @ 0x140B268C4 (HalpUtcTimeToAcpiRealTime.c)
 *     CmpUpdateReorganizeRegistryValues @ 0x140B363D8 (CmpUpdateReorganizeRegistryValues.c)
 *     ExpSetSystemTime @ 0x140C09314 (ExpSetSystemTime.c)
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x1402150C0 (PsGetCurrentServerSiloGlobals.c)
 */

void __stdcall ExSystemTimeToLocalTime(PLARGE_INTEGER SystemTime, PLARGE_INTEGER LocalTime)
{
  __int64 CurrentServerSiloGlobals; // rax
  _QWORD *v3; // r9
  _QWORD *v4; // rdx

  CurrentServerSiloGlobals = PsGetCurrentServerSiloGlobals(SystemTime, LocalTime);
  *v4 = *v3 - *(_QWORD *)(*(_QWORD *)(CurrentServerSiloGlobals + 1224) + 440LL);
}
