/*
 * XREFs of MmMapMemoryDumpMdlEx @ 0x1406F6C20
 * Callers:
 *     IopLiveDumpBufferDumpData @ 0x1405CDF10 (IopLiveDumpBufferDumpData.c)
 *     PopCreateDumpMdl @ 0x140BFA18C (PopCreateDumpMdl.c)
 * Callees:
 *     MiMapMemoryDumpMdl @ 0x1404C370C (MiMapMemoryDumpMdl.c)
 */

__int64 __fastcall MmMapMemoryDumpMdlEx(unsigned __int64 a1, __int64 a2, __int64 a3, int a4)
{
  if ( (a4 & 0xFFFFFFFD) != 0 )
    return 3221225714LL;
  MiMapMemoryDumpMdl(a1, a2, a3, a4);
  return 0LL;
}
