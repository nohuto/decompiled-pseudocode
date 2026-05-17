/*
 * XREFs of RtlTryEnterCriticalSection @ 0x1800215A0
 * Callers:
 *     RtlpFlushHeap @ 0x180016FFC (RtlpFlushHeap.c)
 *     RtlpAllocateHeap @ 0x18001E7C0 (RtlpAllocateHeap.c)
 *     RtlpReAllocateHeap @ 0x1800216E0 (RtlpReAllocateHeap.c)
 *     RtlTryAcquirePebLock @ 0x180022CE0 (RtlTryAcquirePebLock.c)
 *     LdrpTryAcquireLoaderLock @ 0x1800E69A8 (LdrpTryAcquireLoaderLock.c)
 *     RtlpLockHeapForClone @ 0x180145468 (RtlpLockHeapForClone.c)
 * Callees:
 *     NtSetInformationThread @ 0x18015F0E0 (NtSetInformationThread.c)
 */

__int64 __fastcall RtlTryEnterCriticalSection(__int64 a1)
{
  struct _TEB *v1; // r10
  unsigned int v2; // edi
  char *v3; // rbx
  char *SchedulerSharedDataSlot; // r9
  __int64 i; // rax
  char *v6; // r8
  signed __int8 v7; // cf
  void *UniqueThread; // rax
  _QWORD v10[3]; // [rsp+20h] [rbp-18h] BYREF

  v1 = NtCurrentTeb();
  v2 = 0;
  v3 = 0LL;
  SchedulerSharedDataSlot = (char *)v1->SchedulerSharedDataSlot;
  if ( SchedulerSharedDataSlot )
  {
    for ( i = 0LL; (unsigned int)i < 8; i = (unsigned int)(i + 1) )
    {
      v6 = &SchedulerSharedDataSlot[8 * i];
      if ( !*(_QWORD *)v6 )
      {
        v3 = &SchedulerSharedDataSlot[8 * i];
        if ( v6 )
          *(_QWORD *)v6 = a1;
        break;
      }
    }
  }
  v7 = _interlockedbittestandreset((volatile signed __int32 *)(a1 + 8), 0);
  UniqueThread = v1->ClientId.UniqueThread;
  if ( v7 )
  {
    v2 = 1;
    *(_QWORD *)(a1 + 16) = UniqueThread;
    *(_DWORD *)(a1 + 12) = 1;
  }
  else
  {
    if ( *(void **)(a1 + 16) == UniqueThread )
    {
      ++*(_DWORD *)(a1 + 12);
      v2 = 1;
    }
    if ( v3 )
    {
      *v3 |= 2u;
      if ( v3[7] < 0 )
      {
        v10[1] = 0LL;
        v10[0] = (v3 - (char *)NtCurrentTeb()->SchedulerSharedDataSlot) >> 3;
        ((void (__fastcall *)(__int64, __int64, _QWORD *, __int64))NtSetInformationThread)(-2LL, 56LL, v10, 16LL);
      }
      *(_QWORD *)v3 = 0LL;
    }
  }
  return v2;
}
