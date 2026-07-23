/*
 * XREFs of PspNotifyEmptyJobsInJobChain @ 0x1409FF1E4
 * Callers:
 *     PspRundownSingleProcess @ 0x1409FEA50 (PspRundownSingleProcess.c)
 * Callees:
 *     PspEvaluateAndNotifyEmptyJob @ 0x1409FF3F0 (PspEvaluateAndNotifyEmptyJob.c)
 */

__int64 __fastcall PspNotifyEmptyJobsInJobChain(__int64 a1)
{
  struct _KEVENT *i; // rbx
  __int64 result; // rax

  _interlockedbittestandset((volatile signed __int32 *)(a1 + 496), 0xBu);
  for ( i = *(struct _KEVENT **)(a1 + 672); i; i = (struct _KEVENT *)i[54].Header.WaitListHead.Flink )
    result = PspEvaluateAndNotifyEmptyJob(i);
  return result;
}
