/*
 * XREFs of HvlQueryActiveHypervisorProcessorCount @ 0x1405BBD90
 * Callers:
 *     HalpMcStagingHypervisor @ 0x1405961E0 (HalpMcStagingHypervisor.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HvlQueryActiveHypervisorProcessorCount(_DWORD *a1)
{
  if ( (HvlpFlags & 2) == 0 )
    return 3221225473LL;
  *a1 = HvlpActiveProcessorCount;
  return 0LL;
}
