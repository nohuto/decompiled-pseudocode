/*
 * XREFs of PiGetProviderList @ 0x1409108AC
 * Callers:
 *     IopSortRelationListForRemove @ 0x14090F5A8 (IopSortRelationListForRemove.c)
 *     PnpNewDeviceNodeDependencyCheck @ 0x14091034C (PnpNewDeviceNodeDependencyCheck.c)
 *     PnpGetDeviceDependencyList @ 0x140910630 (PnpGetDeviceDependencyList.c)
 *     IopCheckIfMergeRequired @ 0x140910748 (IopCheckIfMergeRequired.c)
 *     PiQueryPowerDependencyRelations @ 0x140B35BCC (PiQueryPowerDependencyRelations.c)
 * Callees:
 *     <none>
 */

__int64 *__fastcall PiGetProviderList(__int64 a1)
{
  __int64 v1; // rcx
  __int64 *result; // rax

  if ( !a1 )
    return &PiDependencyNodeEmptyList;
  v1 = *(_QWORD *)(*(_QWORD *)(a1 + 312) + 80LL);
  result = (__int64 *)(v1 + 16);
  if ( !v1 )
    return &PiDependencyNodeEmptyList;
  return result;
}
