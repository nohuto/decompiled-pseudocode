/*
 * XREFs of VfShutdownScheduleWatchdog @ 0x140647028
 * Callers:
 *     PopGracefulShutdown @ 0x140BF9180 (PopGracefulShutdown.c)
 * Callees:
 *     ViShutdownScheduleWatchdog @ 0x140C33208 (ViShutdownScheduleWatchdog.c)
 */

__int64 VfShutdownScheduleWatchdog()
{
  __int64 result; // rax

  result = (unsigned int)VfRuleClasses;
  if ( (VfRuleClasses & 0x10) != 0 )
    return ViShutdownScheduleWatchdog();
  return result;
}
