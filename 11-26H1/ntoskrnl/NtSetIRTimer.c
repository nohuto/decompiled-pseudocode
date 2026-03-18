/*
 * XREFs of NtSetIRTimer @ 0x1403A97E0
 * Callers:
 *     <none>
 * Callees:
 *     ExpSetTimer2 @ 0x1403A9844 (ExpSetTimer2.c)
 */

__int64 __fastcall NtSetIRTimer(void *a1)
{
  return ExpSetTimer2(a1);
}
