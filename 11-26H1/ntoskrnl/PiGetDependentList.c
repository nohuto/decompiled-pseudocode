/*
 * XREFs of PiGetDependentList @ 0x1409142E8
 * Callers:
 *     IoDuplicateDependency @ 0x14079F8B0 (IoDuplicateDependency.c)
 *     PnpNewDeviceNodeDependencyCheck @ 0x14091034C (PnpNewDeviceNodeDependencyCheck.c)
 *     PnpGetDeviceDependencyList @ 0x140910630 (PnpGetDeviceDependencyList.c)
 *     PnpProcessDependencyRelations @ 0x1409141F8 (PnpProcessDependencyRelations.c)
 * Callees:
 *     <none>
 */

__int64 *__fastcall PiGetDependentList(__int64 a1)
{
  __int64 v1; // rcx
  __int64 *result; // rax

  if ( !a1 )
    return &PiDependencyNodeEmptyList;
  v1 = *(_QWORD *)(*(_QWORD *)(a1 + 312) + 80LL);
  result = (__int64 *)(v1 + 32);
  if ( !v1 )
    return &PiDependencyNodeEmptyList;
  return result;
}
