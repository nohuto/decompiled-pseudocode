/*
 * XREFs of IoReserveKsrPersistentMemory @ 0x14079F690
 * Callers:
 *     <none>
 * Callees:
 *     IoReserveKsrPersistentMemoryEx @ 0x14079F6D0 (IoReserveKsrPersistentMemoryEx.c)
 */

__int64 __fastcall IoReserveKsrPersistentMemory(__int64 a1, __int64 a2, __int64 a3, int a4, __int64 a5)
{
  return IoReserveKsrPersistentMemoryEx(a1, a2, 0LL, 0LL, 0, a3, a4, a5);
}
