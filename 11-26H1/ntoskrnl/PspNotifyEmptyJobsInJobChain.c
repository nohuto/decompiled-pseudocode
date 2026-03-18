/*
 * XREFs of PspNotifyEmptyJobsInJobChain @ 0x140959924
 * Callers:
 *     PspRundownSingleProcess @ 0x14095918C (PspRundownSingleProcess.c)
 * Callees:
 *     PspEvaluateAndNotifyEmptyJob @ 0x140959B30 (PspEvaluateAndNotifyEmptyJob.c)
 */

__int64 __fastcall PspNotifyEmptyJobsInJobChain(__int64 a1)
{
  _QWORD *i; // rbx
  __int64 result; // rax

  _interlockedbittestandset((volatile signed __int32 *)(a1 + 496), 0xBu);
  for ( i = *(_QWORD **)(a1 + 672); i; i = (_QWORD *)i[163] )
    result = PspEvaluateAndNotifyEmptyJob(i);
  return result;
}
