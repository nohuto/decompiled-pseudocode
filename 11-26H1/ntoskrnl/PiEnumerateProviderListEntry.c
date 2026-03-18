/*
 * XREFs of PiEnumerateProviderListEntry @ 0x14079FB10
 * Callers:
 *     PipCheckIfAllProvidersHaveDevnodes @ 0x140771D30 (PipCheckIfAllProvidersHaveDevnodes.c)
 *     PipCheckForUnsatisfiedDependencies @ 0x14090EF88 (PipCheckForUnsatisfiedDependencies.c)
 *     IopSortRelationListForRemove @ 0x14090F5A8 (IopSortRelationListForRemove.c)
 *     IopCheckIfMergeRequired @ 0x140910748 (IopCheckIfMergeRequired.c)
 *     PiQueryPowerDependencyRelations @ 0x140B35BCC (PiQueryPowerDependencyRelations.c)
 * Callees:
 *     PiListEntryToDependencyEdge @ 0x140515F40 (PiListEntryToDependencyEdge.c)
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
