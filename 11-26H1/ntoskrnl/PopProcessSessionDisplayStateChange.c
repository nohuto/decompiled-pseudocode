/*
 * XREFs of PopProcessSessionDisplayStateChange @ 0x140A3EE2C
 * Callers:
 *     PopMonitorInvocation @ 0x14077C050 (PopMonitorInvocation.c)
 *     NtPowerInformation @ 0x1409DE3E0 (NtPowerInformation.c)
 * Callees:
 *     PopArmIdlePhaseWatchdog @ 0x140A396D0 (PopArmIdlePhaseWatchdog.c)
 *     TtmIsEnabled @ 0x140A3EE84 (TtmIsEnabled.c)
 *     PopDisarmIdlePhaseWatchdog @ 0x140A3EEB4 (PopDisarmIdlePhaseWatchdog.c)
 *     PopTriggerMonitorPowerEvent @ 0x140A3EF18 (PopTriggerMonitorPowerEvent.c)
 */

__int64 __fastcall PopProcessSessionDisplayStateChange(char a1, unsigned int a2)
{
  unsigned int v2; // ebx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // rcx

  v2 = 0;
  if ( a1 )
    PopDisarmIdlePhaseWatchdog();
  else
    PopArmIdlePhaseWatchdog(a2);
  if ( !(unsigned __int8)TtmIsEnabled(v6, v5, v7) )
  {
    LOBYTE(v8) = a1;
    return (unsigned int)PopTriggerMonitorPowerEvent(v8, a2);
  }
  return v2;
}
