/*
 * XREFs of MiProcessKernelCfgAddressTakenImports @ 0x140B32F4C
 * Callers:
 *     MiProcessKernelCfgImage @ 0x1404F2220 (MiProcessKernelCfgImage.c)
 *     MiInitializeKernelCfg @ 0x140D04D10 (MiInitializeKernelCfg.c)
 * Callees:
 *     MmReleaseLoadLock @ 0x14049E200 (MmReleaseLoadLock.c)
 *     MiAcquireLoadLock @ 0x1404A507C (MiAcquireLoadLock.c)
 *     MiMarkKernelCfgAddressTakenImports @ 0x140B32FB0 (MiMarkKernelCfgAddressTakenImports.c)
 */

__int64 __fastcall MiProcessKernelCfgAddressTakenImports(PVOID *a1)
{
  __int64 result; // rax

  MiAcquireLoadLock(1u);
  if ( !a1 )
    a1 = (PVOID *)PsLoadedModuleList;
  while ( 1 )
  {
    if ( ((_DWORD)a1[13] & 0x2100) == 0x2000 )
    {
      result = MiMarkKernelCfgAddressTakenImports(a1);
      if ( (int)result < 0 )
        break;
    }
    a1 = (PVOID *)*a1;
    if ( a1 == &PsLoadedModuleList )
    {
      MmReleaseLoadLock(0LL);
      return 0LL;
    }
  }
  return result;
}
