/*
 * XREFs of ?IsKernelDebuggerEnabled@@YAHXZ @ 0x1800E9B80
 * Callers:
 *     ?MilInstrumentationBreak@@YAXK_N@Z @ 0x1800E9CE4 (-MilInstrumentationBreak@@YAXK_N@Z.c)
 * Callees:
 *     <none>
 */

__int64 IsKernelDebuggerEnabled(void)
{
  if ( !byte_18011CB20 )
    byte_18011CB20 = NtQuerySystemInformation(SystemKernelDebuggerInformation, &byte_18011CB24, 2u, 0LL) >= 0;
  return (unsigned __int8)byte_18011CB24;
}
