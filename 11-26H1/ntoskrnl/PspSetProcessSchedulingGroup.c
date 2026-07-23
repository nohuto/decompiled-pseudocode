/*
 * XREFs of PspSetProcessSchedulingGroup @ 0x140AED7E8
 * Callers:
 *     PspApplyJobChainLimitsToProcess @ 0x140A94870 (PspApplyJobChainLimitsToProcess.c)
 *     PspSetCpuRateControlJobPostCallback @ 0x140AED760 (PspSetCpuRateControlJobPostCallback.c)
 * Callees:
 *     KeSetProcessSchedulingGroup @ 0x1405225A4 (KeSetProcessSchedulingGroup.c)
 */

struct _KSCHEDULING_GROUP *__fastcall PspSetProcessSchedulingGroup(__int64 a1, struct _KSCHEDULING_GROUP *a2)
{
  int v4; // esi
  struct _KSCHEDULING_GROUP *result; // rax

  v4 = *(_DWORD *)(a1 + 500) & 8;
  if ( !v4 || !a2 )
    KeSetProcessSchedulingGroup(a1, a2);
  result = (struct _KSCHEDULING_GROUP *)(*(_DWORD *)(a1 + 500) & 8);
  if ( v4 != (_DWORD)result )
  {
    if ( a2 )
      return KeSetProcessSchedulingGroup(a1, 0LL);
  }
  return result;
}
