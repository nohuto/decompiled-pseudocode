/*
 * XREFs of ExpDeleteMutant @ 0x1403DC810
 * Callers:
 *     <none>
 * Callees:
 *     KeDeleteMutant @ 0x1403DC828 (KeDeleteMutant.c)
 */

__int64 __fastcall ExpDeleteMutant(struct _KTHREAD *a1)
{
  return KeDeleteMutant(a1);
}
