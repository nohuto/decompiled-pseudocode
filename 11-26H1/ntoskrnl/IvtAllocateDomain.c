/*
 * XREFs of IvtAllocateDomain @ 0x1405A5920
 * Callers:
 *     <none>
 * Callees:
 *     ExtEnvInitializeSpinLock @ 0x140597F04 (ExtEnvInitializeSpinLock.c)
 */

__int64 __fastcall IvtAllocateDomain(__int64 a1, _QWORD *a2)
{
  ExtEnvInitializeSpinLock(a2 + 9);
  a2[8] = a2 + 7;
  a2[7] = a2 + 7;
  return 0LL;
}
