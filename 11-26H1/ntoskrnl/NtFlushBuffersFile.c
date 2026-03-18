/*
 * XREFs of NtFlushBuffersFile @ 0x1409B0C80
 * Callers:
 *     DifNtFlushBuffersFileWrapper @ 0x140677E90 (DifNtFlushBuffersFileWrapper.c)
 * Callees:
 *     NtFlushBuffersFileEx @ 0x1409B0CB0 (NtFlushBuffersFileEx.c)
 */

__int64 __fastcall NtFlushBuffersFile(int a1, __int64 a2)
{
  return NtFlushBuffersFileEx(a1, 0, 0, 0, a2);
}
