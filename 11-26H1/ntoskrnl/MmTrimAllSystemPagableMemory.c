/*
 * XREFs of MmTrimAllSystemPagableMemory @ 0x1406F7F40
 * Callers:
 *     <none>
 * Callees:
 *     MiTrimAllSystemPagableMemory @ 0x140457728 (MiTrimAllSystemPagableMemory.c)
 */

__int64 __fastcall MmTrimAllSystemPagableMemory(int a1)
{
  return MiTrimAllSystemPagableMemory(a1);
}
