/*
 * XREFs of PopComputeWatchdogTimeout @ 0x1403B4B38
 * Callers:
 *     PopDiagTraceIrpFinishTelemetry @ 0x14021BE34 (PopDiagTraceIrpFinishTelemetry.c)
 *     PoQueryWatchdogTime @ 0x1403B3890 (PoQueryWatchdogTime.c)
 *     PopEnableIrpWatchdog @ 0x1403B49DC (PopEnableIrpWatchdog.c)
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
