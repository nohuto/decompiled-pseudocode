/*
 * XREFs of ExpDeleteMutant @ 0x1403DFA00
 * Callers:
 *     <none>
 * Callees:
 *     KeDeleteMutant @ 0x1403DFA18 (KeDeleteMutant.c)
 */

__int64 __fastcall ExpDeleteMutant(struct _KTHREAD *a1)
{
  return KeDeleteMutant(a1);
}
