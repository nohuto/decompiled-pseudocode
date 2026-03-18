/*
 * XREFs of MiMarkKernelCfgTarget @ 0x1404B5394
 * Callers:
 *     MiEnableExportCallers @ 0x140A866C0 (MiEnableExportCallers.c)
 *     MiMarkKernelCfgAddressTakenImports @ 0x140B30DB0 (MiMarkKernelCfgAddressTakenImports.c)
 * Callees:
 *     VslEnableKernelCfgTarget @ 0x140AB2188 (VslEnableKernelCfgTarget.c)
 */

__int64 MiMarkKernelCfgTarget()
{
  if ( (MiFlags & 0x100000) != 0 )
    VslEnableKernelCfgTarget();
  return 0LL;
}
