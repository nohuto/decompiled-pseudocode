/*
 * XREFs of ViIrqlExAcquireFastMutex_Exit @ 0x140C42590
 * Callers:
 *     <none>
 * Callees:
 *     VfKeIrqlLogRaise @ 0x140C4CD5C (VfKeIrqlLogRaise.c)
 */

__int64 __fastcall ViIrqlExAcquireFastMutex_Exit(__int64 a1, __int64 a2)
{
  LOBYTE(a2) = 1;
  return VfKeIrqlLogRaise(KeGetCurrentIrql(), a2);
}
