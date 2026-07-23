/*
 * XREFs of PiGetDependentList @ 0x1409B6958
 * Callers:
 *     IoDuplicateDependency @ 0x1407A23F0 (IoDuplicateDependency.c)
 *     PnpNewDeviceNodeDependencyCheck @ 0x1409B247C (PnpNewDeviceNodeDependencyCheck.c)
 *     PnpGetDeviceDependencyList @ 0x1409B2710 (PnpGetDeviceDependencyList.c)
 *     PnpProcessDependencyRelations @ 0x1409B6868 (PnpProcessDependencyRelations.c)
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
