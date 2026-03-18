/*
 * XREFs of MiEnableExportCallers @ 0x140A866C0
 * Callers:
 *     MmGetModuleRoutineAddress @ 0x140864A10 (MmGetModuleRoutineAddress.c)
 *     MmGetSystemRoutineAddress @ 0x140A864E0 (MmGetSystemRoutineAddress.c)
 * Callees:
 *     MiMarkKernelCfgTarget @ 0x1404B5394 (MiMarkKernelCfgTarget.c)
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
