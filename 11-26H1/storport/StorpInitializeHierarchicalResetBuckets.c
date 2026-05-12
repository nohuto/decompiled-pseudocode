/*
 * XREFs of StorpInitializeHierarchicalResetBuckets @ 0x14005C0F0
 * Callers:
 *     StorpInitializeAdapterTelemetry @ 0x140056650 (StorpInitializeAdapterTelemetry.c)
 *     StorpLogPerAdapterStatistics @ 0x1400B84B8 (StorpLogPerAdapterStatistics.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall StorpInitializeHierarchicalResetBuckets(__int64 a1)
{
  __int64 v1; // rcx
  __int64 result; // rax

  v1 = a1 + 5160;
  result = 5LL;
  do
  {
    *(_QWORD *)(v1 - 4) = 0LL;
    *(_BYTE *)(v1 + 4) = 1;
    *(_QWORD *)(v1 + 56) = 0LL;
    *(_BYTE *)(v1 + 64) = 1;
    v1 += 12LL;
    --result;
  }
  while ( result );
  return result;
}
