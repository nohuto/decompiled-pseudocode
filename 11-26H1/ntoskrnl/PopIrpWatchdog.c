/*
 * XREFs of PopIrpWatchdog @ 0x140600A40
 * Callers:
 *     <none>
 * Callees:
 *     PopIrpWatchdogBugcheck @ 0x140600A58 (PopIrpWatchdogBugcheck.c)
 */

__int64 __fastcall PopIrpWatchdog(__int64 a1, ULONG a2)
{
  return PopIrpWatchdogBugcheck(a2);
}
