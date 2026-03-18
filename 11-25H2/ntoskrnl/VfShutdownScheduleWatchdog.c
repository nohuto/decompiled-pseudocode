/*
 * XREFs of VfShutdownScheduleWatchdog @ 0x140607F48
 * Callers:
 *     PopGracefulShutdown @ 0x140B4BB18 (PopGracefulShutdown.c)
 * Callees:
 *     ViShutdownScheduleWatchdog @ 0x140B84E20 (ViShutdownScheduleWatchdog.c)
 */

__int64 VfShutdownScheduleWatchdog()
{
  __int64 result; // rax

  result = (unsigned int)VfRuleClasses;
  if ( (VfRuleClasses & 0x10) != 0 )
    return ViShutdownScheduleWatchdog();
  return result;
}
