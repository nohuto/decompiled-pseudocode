/*
 * XREFs of RtlAbPostRelease @ 0x180079680
 * Callers:
 *     RtlpQueueWaitBlockToSRWLock @ 0x18002AA00 (RtlpQueueWaitBlockToSRWLock.c)
 *     RtlTryAcquireSRWLockShared @ 0x180050CE0 (RtlTryAcquireSRWLockShared.c)
 *     RtlDeleteCriticalSection @ 0x180079550 (RtlDeleteCriticalSection.c)
 *     RtlTryConvertSRWLockSharedToExclusiveOrRelease @ 0x18013DF50 (RtlTryConvertSRWLockSharedToExclusiveOrRelease.c)
 * Callees:
 *     NtSetInformationThread @ 0x18015F0E0 (NtSetInformationThread.c)
 */

struct _TEB *__fastcall RtlAbPostRelease(__int64 a1, _BYTE *a2)
{
  _BYTE *v2; // rbx
  struct _TEB *result; // rax
  _QWORD *SchedulerSharedDataSlot; // r9
  unsigned int v6; // ecx
  __int64 v7; // r8
  _QWORD v8[3]; // [rsp+20h] [rbp-18h] BYREF

  v2 = a2;
  if ( a2 )
    goto LABEL_9;
  result = NtCurrentTeb();
  v2 = 0LL;
  SchedulerSharedDataSlot = result->SchedulerSharedDataSlot;
  if ( SchedulerSharedDataSlot )
  {
    v6 = 0;
    v7 = a1 & 0x7FFFFFFFFFFFFFFCLL;
    while ( v6 < 8 )
    {
      result = (struct _TEB *)(SchedulerSharedDataSlot[v6] & 0x7FFFFFFFFFFFFFFCLL);
      if ( result == (struct _TEB *)v7 )
      {
        v2 = &SchedulerSharedDataSlot[v6];
        break;
      }
      ++v6;
    }
  }
  if ( v2 )
  {
LABEL_9:
    *v2 |= 2u;
    if ( (char)v2[7] < 0 )
    {
      v8[1] = 0LL;
      v8[0] = (v2 - (char *)NtCurrentTeb()->SchedulerSharedDataSlot) >> 3;
      result = (struct _TEB *)NtSetInformationThread(-2LL, 56LL, v8, 16LL);
    }
    *(_QWORD *)v2 = 0LL;
  }
  return result;
}
