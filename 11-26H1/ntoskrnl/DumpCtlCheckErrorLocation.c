/*
 * XREFs of DumpCtlCheckErrorLocation @ 0x1405C897C
 * Callers:
 *     IoFillTriageDumpBuffer @ 0x1405C9264 (IoFillTriageDumpBuffer.c)
 *     IoSetDumpRange @ 0x1405CA2F0 (IoSetDumpRange.c)
 *     IoWriteCrashDump @ 0x1405CA87C (IoWriteCrashDump.c)
 *     IoAddPagesForPartialKernelDump @ 0x1405D6F18 (IoAddPagesForPartialKernelDump.c)
 *     IopAddLiveDumpPagesToPartialKernelDump @ 0x1405D73D0 (IopAddLiveDumpPagesToPartialKernelDump.c)
 *     IopAddMiniDumpPagesToPartialKernelDump @ 0x1405D7878 (IopAddMiniDumpPagesToPartialKernelDump.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DumpCtlCheckErrorLocation(unsigned int a1, int a2)
{
  if ( CrashdmpDumpBlock && *(_DWORD *)(CrashdmpDumpBlock + 1472) == a2 )
    return *(unsigned int *)(CrashdmpDumpBlock + 1476);
  return a1;
}
