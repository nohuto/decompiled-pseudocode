/*
 * XREFs of PspWow64GetSharedInformation @ 0x1409EA764
 * Callers:
 *     PsThawMultiProcess @ 0x14051967C (PsThawMultiProcess.c)
 *     PspWow64InitThread @ 0x1409EA95C (PspWow64InitThread.c)
 *     PspPrepareSystemDllInitBlock @ 0x140A9A628 (PspPrepareSystemDllInitBlock.c)
 *     PspInitializeSystemDlls @ 0x140CD8B80 (PspInitializeSystemDlls.c)
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
