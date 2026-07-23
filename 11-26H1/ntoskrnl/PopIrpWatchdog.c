/*
 * XREFs of PopIrpWatchdog @ 0x1406034F0
 * Callers:
 *     <none>
 * Callees:
 *     PopIrpWatchdogBugcheck @ 0x140603508 (PopIrpWatchdogBugcheck.c)
 */

__int64 __fastcall PopIrpWatchdog(__int64 a1, ULONG a2)
{
  return PopIrpWatchdogBugcheck(a2);
}
