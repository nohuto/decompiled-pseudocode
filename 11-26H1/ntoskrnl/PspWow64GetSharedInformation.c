/*
 * XREFs of PspWow64GetSharedInformation @ 0x1409E6F34
 * Callers:
 *     PsThawMultiProcess @ 0x1405130EC (PsThawMultiProcess.c)
 *     PspPrepareSystemDllInitBlock @ 0x1409E5658 (PspPrepareSystemDllInitBlock.c)
 *     PspWow64InitThread @ 0x1409E712C (PspWow64InitThread.c)
 *     PspInitializeSystemDlls @ 0x140CDEF00 (PspInitializeSystemDlls.c)
 * Callees:
 *     <none>
 */

void *__fastcall PspWow64GetSharedInformation(int a1)
{
  if ( a1 == 1 )
    return &PsWowX86SharedInformation;
  else
    return 0LL;
}
