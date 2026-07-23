/*
 * XREFs of PiGetProviderList @ 0x1409B298C
 * Callers:
 *     IopSortRelationListForRemove @ 0x1409B16D8 (IopSortRelationListForRemove.c)
 *     PnpNewDeviceNodeDependencyCheck @ 0x1409B247C (PnpNewDeviceNodeDependencyCheck.c)
 *     PnpGetDeviceDependencyList @ 0x1409B2710 (PnpGetDeviceDependencyList.c)
 *     IopCheckIfMergeRequired @ 0x1409B2828 (IopCheckIfMergeRequired.c)
 *     PiQueryPowerDependencyRelations @ 0x140B37DDC (PiQueryPowerDependencyRelations.c)
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
