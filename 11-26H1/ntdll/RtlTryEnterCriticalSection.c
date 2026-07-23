/*
 * XREFs of RtlTryEnterCriticalSection @ 0x18000C670
 * Callers:
 *     RtlpFlushHeap @ 0x1800020DC (RtlpFlushHeap.c)
 *     RtlpAllocateHeap @ 0x180009890 (RtlpAllocateHeap.c)
 *     RtlpReAllocateHeap @ 0x18000C7B0 (RtlpReAllocateHeap.c)
 *     RtlTryAcquirePebLock @ 0x18000DDB0 (RtlTryAcquirePebLock.c)
 *     LdrpTryAcquireLoaderLock @ 0x1800E4BB8 (LdrpTryAcquireLoaderLock.c)
 *     RtlpLockHeapForClone @ 0x180145318 (RtlpLockHeapForClone.c)
 * Callees:
 *     NtSetInformationThread @ 0x18015EFE0 (NtSetInformationThread.c)
 */

LOGICAL __cdecl RtlTryEnterCriticalSection(PRTL_CRITICAL_SECTION CriticalSection)
{
  struct _TEB *v1; // r10
  LOGICAL v2; // edi
  char *v3; // rbx
  char *SchedulerSharedDataSlot; // r9
  __int64 i; // rax
  PRTL_CRITICAL_SECTION *v6; // r8
  signed __int8 v7; // cf
  void *UniqueThread; // rax
  _QWORD ThreadInformation[3]; // [rsp+20h] [rbp-18h] BYREF

  v1 = NtCurrentTeb();
  v2 = 0;
  v3 = 0LL;
  SchedulerSharedDataSlot = (char *)v1->SchedulerSharedDataSlot;
  if ( SchedulerSharedDataSlot )
  {
    for ( i = 0LL; (unsigned int)i < 8; i = (unsigned int)(i + 1) )
    {
      v6 = (PRTL_CRITICAL_SECTION *)&SchedulerSharedDataSlot[8 * i];
      if ( !*v6 )
      {
        v3 = &SchedulerSharedDataSlot[8 * i];
        if ( v6 )
          *v6 = CriticalSection;
        break;
      }
    }
  }
  v7 = _interlockedbittestandreset(&CriticalSection->LockCount, 0);
  UniqueThread = v1->ClientId.UniqueThread;
  if ( v7 )
  {
    v2 = 1;
    CriticalSection->OwningThread = UniqueThread;
    CriticalSection->RecursionCount = 1;
  }
  else
  {
    if ( CriticalSection->OwningThread == UniqueThread )
    {
      ++CriticalSection->RecursionCount;
      v2 = 1;
    }
    if ( v3 )
    {
      *v3 |= 2u;
      if ( v3[7] < 0 )
      {
        ThreadInformation[1] = 0LL;
        ThreadInformation[0] = (v3 - (char *)NtCurrentTeb()->SchedulerSharedDataSlot) >> 3;
        NtSetInformationThread((HANDLE)0xFFFFFFFFFFFFFFFELL, ThreadUpdateLockOwnership, ThreadInformation, 0x10u);
      }
      *(_QWORD *)v3 = 0LL;
    }
  }
  return v2;
}
