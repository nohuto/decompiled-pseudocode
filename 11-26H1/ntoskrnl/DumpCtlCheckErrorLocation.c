/*
 * XREFs of DumpCtlCheckErrorLocation @ 0x1405C610C
 * Callers:
 *     IoFillTriageDumpBuffer @ 0x1405C6994 (IoFillTriageDumpBuffer.c)
 *     IoSetDumpRange @ 0x1405C7A20 (IoSetDumpRange.c)
 *     IoWriteCrashDump @ 0x1405C7FAC (IoWriteCrashDump.c)
 *     IoAddPagesForPartialKernelDump @ 0x1405D4728 (IoAddPagesForPartialKernelDump.c)
 *     IopAddLiveDumpPagesToPartialKernelDump @ 0x1405D4BE0 (IopAddLiveDumpPagesToPartialKernelDump.c)
 *     IopAddMiniDumpPagesToPartialKernelDump @ 0x1405D5088 (IopAddMiniDumpPagesToPartialKernelDump.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DumpCtlCheckErrorLocation(unsigned int a1, int a2)
{
  if ( CrashdmpDumpBlock && *(_DWORD *)(CrashdmpDumpBlock + 1472) == a2 )
    return *(unsigned int *)(CrashdmpDumpBlock + 1476);
  return a1;
}
