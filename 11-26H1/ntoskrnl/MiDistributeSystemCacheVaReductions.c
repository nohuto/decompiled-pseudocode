/*
 * XREFs of MiDistributeSystemCacheVaReductions @ 0x1406E764C
 * Callers:
 *     MiSegmentDereferenceWorker @ 0x1404A3320 (MiSegmentDereferenceWorker.c)
 * Callees:
 *     PsGetNextPartition @ 0x1402580F8 (PsGetNextPartition.c)
 *     KeSetEvent @ 0x1402DE9C0 (KeSetEvent.c)
 */

_QWORD *MiDistributeSystemCacheVaReductions()
{
  void *i; // rcx
  __int64 v1; // rax
  _QWORD *result; // rax
  _QWORD *v3; // rbx

  for ( i = 0LL; ; i = v3 )
  {
    result = PsGetNextPartition(i);
    v3 = result;
    if ( !result )
      break;
    v1 = *result;
    if ( *(_DWORD *)(*v3 + 2768LL) > 0x10u )
      KeSetEvent((PRKEVENT)(v1 + 2776), 0, 0);
  }
  return result;
}
