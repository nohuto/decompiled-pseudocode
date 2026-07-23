/*
 * XREFs of RtlpDynamicEHContinuationTargetsTreeCompare @ 0x140A950DC
 * Callers:
 *     RtlAddDynamicEHContinuationTarget @ 0x14080F038 (RtlAddDynamicEHContinuationTarget.c)
 *     RtlRemoveDynamicEHContinuationTarget @ 0x14080F1AC (RtlRemoveDynamicEHContinuationTarget.c)
 *     RtlpFindDynamicEHContinuationTarget @ 0x140A95000 (RtlpFindDynamicEHContinuationTarget.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpDynamicEHContinuationTargetsTreeCompare(unsigned __int64 a1, __int64 a2)
{
  unsigned __int64 v2; // r8

  v2 = *(_QWORD *)(a2 + 24);
  if ( a1 >= v2 )
    return a1 > v2;
  else
    return 0xFFFFFFFFLL;
}
