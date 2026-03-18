/*
 * XREFs of DumpCtlCheckExitStatus @ 0x1405C6130
 * Callers:
 *     IoFillTriageDumpBuffer @ 0x1405C6994 (IoFillTriageDumpBuffer.c)
 *     IoSetDumpRange @ 0x1405C7A20 (IoSetDumpRange.c)
 *     IoWriteCrashDump @ 0x1405C7FAC (IoWriteCrashDump.c)
 *     IoAddPagesForPartialKernelDump @ 0x1405D4728 (IoAddPagesForPartialKernelDump.c)
 *     IopAddLiveDumpPagesToPartialKernelDump @ 0x1405D4BE0 (IopAddLiveDumpPagesToPartialKernelDump.c)
 *     IopAddMiniDumpPagesToPartialKernelDump @ 0x1405D5088 (IopAddMiniDumpPagesToPartialKernelDump.c)
 * Callees:
 *     IopWheaSelLogError @ 0x1405CA160 (IopWheaSelLogError.c)
 */

__int64 __fastcall DumpCtlCheckExitStatus(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  if ( (int)a2 < 0 )
    return IopWheaSelLogError(a1, a2, 0LL);
  return result;
}
