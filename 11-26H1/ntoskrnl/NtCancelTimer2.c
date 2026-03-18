/*
 * XREFs of NtCancelTimer2 @ 0x1403A9800
 * Callers:
 *     <none>
 * Callees:
 *     ExpSetTimer2 @ 0x1403A9844 (ExpSetTimer2.c)
 */

__int64 __fastcall NtCancelTimer2(void *a1)
{
  return ExpSetTimer2(a1);
}
