/*
 * XREFs of StorpInitializeAdapterTelemetry @ 0x140056650
 * Callers:
 *     RaidInitializeAdapter @ 0x140186B24 (RaidInitializeAdapter.c)
 * Callees:
 *     StorpInitializeHierarchicalResetBuckets @ 0x14005C0F0 (StorpInitializeHierarchicalResetBuckets.c)
 *     Feature_SurfaceUfsHealthInfo__private_IsEnabledDeviceUsageNoInline @ 0x1400B2840 (Feature_SurfaceUfsHealthInfo__private_IsEnabledDeviceUsageNoInline.c)
 */

__int64 __fastcall StorpInitializeAdapterTelemetry(__int64 a1)
{
  __int64 v2; // rax
  __int64 result; // rax

  StorpInitializeHierarchicalResetBuckets();
  v2 = MEMORY[0xFFFFF78000000008];
  *(_DWORD *)(a1 + 5408) &= 0xFFFFFFF0;
  *(_QWORD *)(a1 + 5280) = v2;
  *(_QWORD *)(a1 + 5288) = 0LL;
  *(_QWORD *)(a1 + 5296) = 0LL;
  *(_QWORD *)(a1 + 5304) = 0LL;
  *(_QWORD *)(a1 + 5312) = 0LL;
  *(_QWORD *)(a1 + 5320) = 0LL;
  *(_QWORD *)(a1 + 5328) = 0LL;
  *(_QWORD *)(a1 + 5336) = 0LL;
  *(_QWORD *)(a1 + 5344) = 0LL;
  *(_QWORD *)(a1 + 5352) = 0LL;
  *(_QWORD *)(a1 + 5360) = 0LL;
  *(_QWORD *)(a1 + 5368) = 1LL;
  *(_DWORD *)(a1 + 5376) = 0;
  *(_WORD *)(a1 + 5380) = 0;
  result = Feature_SurfaceUfsHealthInfo__private_IsEnabledDeviceUsageNoInline();
  if ( (_DWORD)result )
    *(_DWORD *)(a1 + 5408) &= ~0x10u;
  return result;
}
