/*
 * XREFs of MiEnableExportCallers @ 0x140A8B640
 * Callers:
 *     MmGetModuleRoutineAddress @ 0x14086ADF0 (MmGetModuleRoutineAddress.c)
 *     MmGetSystemRoutineAddress @ 0x140A8B460 (MmGetSystemRoutineAddress.c)
 * Callees:
 *     MiMarkKernelCfgTarget @ 0x1404AE7E4 (MiMarkKernelCfgTarget.c)
 */

__int64 MiEnableExportCallers()
{
  int v0; // eax
  unsigned int v1; // ecx

  v0 = MiMarkKernelCfgTarget();
  v1 = 0;
  if ( v0 < 0 )
    return (unsigned int)v0;
  return v1;
}
