/*
 * XREFs of PiEnumerateProviderListEntry @ 0x1407A2650
 * Callers:
 *     PipCheckIfAllProvidersHaveDevnodes @ 0x140774D30 (PipCheckIfAllProvidersHaveDevnodes.c)
 *     PipCheckForUnsatisfiedDependencies @ 0x1409B10B8 (PipCheckForUnsatisfiedDependencies.c)
 *     IopSortRelationListForRemove @ 0x1409B16D8 (IopSortRelationListForRemove.c)
 *     IopCheckIfMergeRequired @ 0x1409B2828 (IopCheckIfMergeRequired.c)
 *     PiQueryPowerDependencyRelations @ 0x140B37DDC (PiQueryPowerDependencyRelations.c)
 * Callees:
 *     PiListEntryToDependencyEdge @ 0x14050F9B0 (PiListEntryToDependencyEdge.c)
 */

__int64 __fastcall PiEnumerateProviderListEntry(__int64 a1)
{
  __int64 result; // rax
  _DWORD *v2; // r8
  _QWORD *v3; // r10

  result = PiListEntryToDependencyEdge(a1, 0);
  *v3 = *(_QWORD *)(*(_QWORD *)(result + 32) + 48LL);
  if ( v2 )
  {
    result = *(unsigned int *)(result + 48);
    *v2 = result;
  }
  return result;
}
