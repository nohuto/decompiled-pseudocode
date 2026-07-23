/*
 * XREFs of MmTrimAllSystemPagableMemory @ 0x1406FCC10
 * Callers:
 *     <none>
 * Callees:
 *     MiTrimAllSystemPagableMemory @ 0x14044EF98 (MiTrimAllSystemPagableMemory.c)
 */

__int64 __fastcall MmTrimAllSystemPagableMemory(int a1)
{
  return MiTrimAllSystemPagableMemory(a1);
}
