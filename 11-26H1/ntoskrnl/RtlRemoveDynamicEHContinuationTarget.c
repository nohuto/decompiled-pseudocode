/*
 * XREFs of RtlRemoveDynamicEHContinuationTarget @ 0x14080F1AC
 * Callers:
 *     PspProcessDynamicEHContinuationTargets @ 0x140B694A0 (PspProcessDynamicEHContinuationTargets.c)
 * Callees:
 *     RtlAvlRemoveNode @ 0x1402EE660 (RtlAvlRemoveNode.c)
 *     RtlpDynamicEHContinuationTargetsTreeCompare @ 0x140A950DC (RtlpDynamicEHContinuationTargetsTreeCompare.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall RtlRemoveDynamicEHContinuationTarget(unsigned __int64 *a1, __int64 a2)
{
  _QWORD *v2; // rbx
  int v5; // eax

  v2 = (_QWORD *)*a1;
  while ( v2 )
  {
    v5 = RtlpDynamicEHContinuationTargetsTreeCompare(a2, v2);
    if ( v5 >= 0 )
    {
      if ( v5 <= 0 )
        break;
      v2 = (_QWORD *)v2[1];
    }
    else
    {
      v2 = (_QWORD *)*v2;
    }
  }
  if ( !v2 )
    return 3221226021LL;
  RtlAvlRemoveNode(a1, (__int64)v2);
  ExFreePoolWithTag(v2, 0);
  return 0LL;
}
