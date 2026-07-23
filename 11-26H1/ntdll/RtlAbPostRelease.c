/*
 * XREFs of RtlAbPostRelease @ 0x180067EA0
 * Callers:
 *     RtlpQueueWaitBlockToSRWLock @ 0x180015B00 (RtlpQueueWaitBlockToSRWLock.c)
 *     RtlTryAcquireSRWLockShared @ 0x18003B260 (RtlTryAcquireSRWLockShared.c)
 *     RtlDeleteCriticalSection @ 0x180067D70 (RtlDeleteCriticalSection.c)
 *     RtlTryConvertSRWLockSharedToExclusiveOrRelease @ 0x18013DE00 (RtlTryConvertSRWLockSharedToExclusiveOrRelease.c)
 * Callees:
 *     NtSetInformationThread @ 0x18015EFE0 (NtSetInformationThread.c)
 */

int __fastcall RtlAbPostRelease(__int64 a1, _BYTE *a2)
{
  _BYTE *v2; // rbx
  struct _TEB *v4; // rax
  _QWORD *SchedulerSharedDataSlot; // r9
  unsigned int v6; // ecx
  __int64 v7; // r8
  _QWORD ThreadInformation[3]; // [rsp+20h] [rbp-18h] BYREF

  v2 = a2;
  if ( a2 )
    goto LABEL_9;
  v4 = NtCurrentTeb();
  v2 = 0LL;
  SchedulerSharedDataSlot = v4->SchedulerSharedDataSlot;
  if ( SchedulerSharedDataSlot )
  {
    v6 = 0;
    v7 = a1 & 0x7FFFFFFFFFFFFFFCLL;
    while ( v6 < 8 )
    {
      v4 = (struct _TEB *)(SchedulerSharedDataSlot[v6] & 0x7FFFFFFFFFFFFFFCLL);
      if ( v4 == (struct _TEB *)v7 )
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
      ThreadInformation[1] = 0LL;
      ThreadInformation[0] = (v2 - (char *)NtCurrentTeb()->SchedulerSharedDataSlot) >> 3;
      LODWORD(v4) = NtSetInformationThread(
                      (HANDLE)0xFFFFFFFFFFFFFFFELL,
                      ThreadUpdateLockOwnership,
                      ThreadInformation,
                      0x10u);
    }
    *(_QWORD *)v2 = 0LL;
  }
  return (int)v4;
}
