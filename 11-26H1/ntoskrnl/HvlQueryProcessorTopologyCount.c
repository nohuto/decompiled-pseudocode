/*
 * XREFs of HvlQueryProcessorTopologyCount @ 0x140532990
 * Callers:
 *     HalpMcStagingHypervisor @ 0x140593A60 (HalpMcStagingHypervisor.c)
 *     ExpQuerySystemInformation @ 0x140B145DC (ExpQuerySystemInformation.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HvlQueryProcessorTopologyCount(_DWORD *a1, _DWORD *a2)
{
  if ( (HvlpFlags & 2) == 0 )
    return 3221225506LL;
  if ( a1 )
    *a1 = HvlpPackageCount;
  if ( a2 )
    *a2 = HvlpCoreCount;
  return 0LL;
}
