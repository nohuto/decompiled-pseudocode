/*
 * XREFs of DumpCtlCheckExitStatus @ 0x1405C89A0
 * Callers:
 *     IoFillTriageDumpBuffer @ 0x1405C9264 (IoFillTriageDumpBuffer.c)
 *     IoSetDumpRange @ 0x1405CA2F0 (IoSetDumpRange.c)
 *     IoWriteCrashDump @ 0x1405CA87C (IoWriteCrashDump.c)
 *     IoAddPagesForPartialKernelDump @ 0x1405D6F18 (IoAddPagesForPartialKernelDump.c)
 *     IopAddLiveDumpPagesToPartialKernelDump @ 0x1405D73D0 (IopAddLiveDumpPagesToPartialKernelDump.c)
 *     IopAddMiniDumpPagesToPartialKernelDump @ 0x1405D7878 (IopAddMiniDumpPagesToPartialKernelDump.c)
 * Callees:
 *     IopWheaSelLogError @ 0x1405CCA30 (IopWheaSelLogError.c)
 */

__int64 __fastcall DumpCtlCheckExitStatus(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  if ( (int)a2 < 0 )
    return IopWheaSelLogError(a1, a2, 0LL);
  return result;
}
