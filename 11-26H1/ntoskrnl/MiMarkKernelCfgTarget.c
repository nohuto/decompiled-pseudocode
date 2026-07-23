/*
 * XREFs of MiMarkKernelCfgTarget @ 0x1404AE7E4
 * Callers:
 *     MiEnableExportCallers @ 0x140A8B640 (MiEnableExportCallers.c)
 *     MiMarkKernelCfgAddressTakenImports @ 0x140B32FB0 (MiMarkKernelCfgAddressTakenImports.c)
 * Callees:
 *     VslEnableKernelCfgTarget @ 0x140AAFE5C (VslEnableKernelCfgTarget.c)
 */

__int64 MiMarkKernelCfgTarget()
{
  if ( (MiFlags & 0x100000) != 0 )
    VslEnableKernelCfgTarget();
  return 0LL;
}
