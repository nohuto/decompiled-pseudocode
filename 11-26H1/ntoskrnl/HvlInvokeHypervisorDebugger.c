/*
 * XREFs of HvlInvokeHypervisorDebugger @ 0x14047A3E8
 * Callers:
 *     KeAccumulateTicks @ 0x14021F980 (KeAccumulateTicks.c)
 * Callees:
 *     HvcallInitiateHypercall @ 0x14032BB00 (HvcallInitiateHypercall.c)
 */

__int64 __fastcall HvlInvokeHypervisorDebugger(unsigned int a1)
{
  __int64 result; // rax

  result = HvlpFlags;
  if ( (HvlpFlags & 2) == 0 || (result = HvlpRootFlags, (HvlpRootFlags & 1) != 0) )
  {
    if ( HvlHypervisorConnected )
      return HvcallInitiateHypercall(65546LL, a1);
  }
  return result;
}
