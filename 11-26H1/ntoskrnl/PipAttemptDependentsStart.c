/*
 * XREFs of PipAttemptDependentsStart @ 0x14090690C
 * Callers:
 *     IoResolveDependency @ 0x1404F5D10 (IoResolveDependency.c)
 *     PnpStartedDeviceNodeDependencyCheck @ 0x140907730 (PnpStartedDeviceNodeDependencyCheck.c)
 * Callees:
 *     PiListEntryToDependencyEdge @ 0x140515F40 (PiListEntryToDependencyEdge.c)
 *     PipAttemptDependentStart @ 0x14079FD20 (PipAttemptDependentStart.c)
 */

_QWORD *__fastcall PipAttemptDependentsStart(__int64 a1)
{
  _QWORD *result; // rax
  __int64 v2; // rbx
  __int64 *v3; // rbx
  __int64 *v4; // rdi
  __int64 v5; // rax
  _QWORD *v6; // rcx

  result = *(_QWORD **)(a1 + 32);
  if ( result && (result = (_QWORD *)result[39], (v2 = result[10]) != 0) )
    v3 = (__int64 *)(v2 + 32);
  else
    v3 = &PiDependencyNodeEmptyList;
  v4 = (__int64 *)*v3;
  while ( v4 != v3 )
  {
    v5 = PiListEntryToDependencyEdge((__int64)v4, 1);
    v4 = (__int64 *)*v4;
    result = *(_QWORD **)(v5 + 40);
    v6 = (_QWORD *)result[6];
    if ( v6 )
      result = (_QWORD *)PipAttemptDependentStart(v6);
  }
  return result;
}
