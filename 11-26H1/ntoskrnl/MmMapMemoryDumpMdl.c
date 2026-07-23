/*
 * XREFs of MmMapMemoryDumpMdl @ 0x1404BCF20
 * Callers:
 *     <none>
 * Callees:
 *     MiMapMemoryDumpMdl @ 0x1404BCF5C (MiMapMemoryDumpMdl.c)
 */

__int64 __fastcall MmMapMemoryDumpMdl(__int64 a1, __int64 a2)
{
  return MiMapMemoryDumpMdl((__int64)stru_140E2ED08.WaitBlock[2].Thread << 25 >> 16, a2, a1, 0LL);
}
