/*
 * XREFs of ExLocalTimeToSystemTime @ 0x1404C6E60
 * Callers:
 *     HalpAcpiRealTimeToUtcTime @ 0x1407801E4 (HalpAcpiRealTimeToUtcTime.c)
 *     PopNetGetNextDueRefreshTime @ 0x1407DA57C (PopNetGetNextDueRefreshTime.c)
 *     ExpRefreshSystemTime @ 0x140836324 (ExpRefreshSystemTime.c)
 *     NtSetSystemTime @ 0x1408366B0 (NtSetSystemTime.c)
 *     ExpRefreshTimeZoneInformation @ 0x140B1209C (ExpRefreshTimeZoneInformation.c)
 *     ExUpdateSystemTimeFromCmos @ 0x140C08734 (ExUpdateSystemTimeFromCmos.c)
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x1402150C0 (PsGetCurrentServerSiloGlobals.c)
 */

void __stdcall ExLocalTimeToSystemTime(PLARGE_INTEGER LocalTime, PLARGE_INTEGER SystemTime)
{
  struct _LIST_ENTRY *CurrentServerSiloGlobals; // rax
  _QWORD *v3; // r10
  _QWORD *v4; // rdx

  CurrentServerSiloGlobals = PsGetCurrentServerSiloGlobals();
  *v4 = (char *)CurrentServerSiloGlobals[76].Blink[27].Blink + *v3;
}
