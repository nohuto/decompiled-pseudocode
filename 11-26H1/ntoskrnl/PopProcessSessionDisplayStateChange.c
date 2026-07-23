/*
 * XREFs of PopProcessSessionDisplayStateChange @ 0x1409FA84C
 * Callers:
 *     PopMonitorInvocation @ 0x14077EBD0 (PopMonitorInvocation.c)
 *     NtPowerInformation @ 0x140A1B510 (NtPowerInformation.c)
 * Callees:
 *     PopArmIdlePhaseWatchdog @ 0x1409F52D8 (PopArmIdlePhaseWatchdog.c)
 *     TtmIsEnabled @ 0x1409FA8A4 (TtmIsEnabled.c)
 *     PopDisarmIdlePhaseWatchdog @ 0x1409FA8D4 (PopDisarmIdlePhaseWatchdog.c)
 *     PopTriggerMonitorPowerEvent @ 0x1409FA938 (PopTriggerMonitorPowerEvent.c)
 */

__int64 __fastcall PopProcessSessionDisplayStateChange(char a1, unsigned int a2)
{
  unsigned int v2; // ebx
  __int64 v5; // rcx

  v2 = 0;
  if ( a1 )
    PopDisarmIdlePhaseWatchdog();
  else
    PopArmIdlePhaseWatchdog(a2);
  if ( !(unsigned __int8)TtmIsEnabled() )
  {
    LOBYTE(v5) = a1;
    return (unsigned int)PopTriggerMonitorPowerEvent(v5, a2);
  }
  return v2;
}
