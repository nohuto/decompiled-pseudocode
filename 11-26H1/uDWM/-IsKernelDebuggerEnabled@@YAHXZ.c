/*
 * XREFs of ?IsKernelDebuggerEnabled@@YAHXZ @ 0x1800E57E8
 * Callers:
 *     ?MilInstrumentationBreak@@YAXK_N@Z @ 0x1800E594C (-MilInstrumentationBreak@@YAXK_N@Z.c)
 * Callees:
 *     <none>
 */

__int64 IsKernelDebuggerEnabled(void)
{
  if ( !byte_180118AF0 )
    byte_180118AF0 = NtQuerySystemInformation(SystemKernelDebuggerInformation, &byte_180118AF4, 2u, 0LL) >= 0;
  return (unsigned __int8)byte_180118AF4;
}
