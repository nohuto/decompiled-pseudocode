/*
 * XREFs of PopComputeWatchdogTimeout @ 0x1403AAE28
 * Callers:
 *     PopDiagTraceIrpFinishTelemetry @ 0x14021A4A4 (PopDiagTraceIrpFinishTelemetry.c)
 *     PoQueryWatchdogTime @ 0x1403A9C80 (PoQueryWatchdogTime.c)
 *     PopEnableIrpWatchdog @ 0x1403AACCC (PopEnableIrpWatchdog.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PopComputeWatchdogTimeout(__int64 a1)
{
  if ( *(_DWORD *)(a1 + 188) <= 1u && *(_DWORD *)(a1 + 192) == 1 )
    return (unsigned int)PopWatchdogResumeTimeout;
  else
    return (unsigned int)PopWatchdogSleepTimeout;
}
