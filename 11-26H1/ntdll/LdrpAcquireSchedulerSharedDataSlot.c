/*
 * XREFs of LdrpAcquireSchedulerSharedDataSlot @ 0x1800E2BE0
 * Callers:
 *     LdrpInitializeThread @ 0x1800CCB30 (LdrpInitializeThread.c)
 *     LdrpInitializeProcess @ 0x1800CD028 (LdrpInitializeProcess.c)
 *     RtlCloneUserProcess @ 0x18015C500 (RtlCloneUserProcess.c)
 *     RtlCompleteProcessCloning @ 0x18015C810 (RtlCompleteProcessCloning.c)
 * Callees:
 *     RtlReleaseSRWLockShared @ 0x180018AF0 (RtlReleaseSRWLockShared.c)
 *     RtlAcquireSRWLockShared @ 0x180036B90 (RtlAcquireSRWLockShared.c)
 *     NtSetInformationThread @ 0x18015EFE0 (NtSetInformationThread.c)
 */

void __fastcall LdrpAcquireSchedulerSharedDataSlot(__int64 a1)
{
  __int64 v2; // rbx
  _QWORD ThreadInformation[2]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v4; // [rsp+30h] [rbp-18h]

  HIDWORD(ThreadInformation[0]) = 0;
  RtlAcquireSRWLockShared(&LdrpSchedulerSharedDataListHeadLock);
  v2 = LdrpSchedulerSharedDataListHead;
  if ( (__int64 *)LdrpSchedulerSharedDataListHead == &LdrpSchedulerSharedDataListHead
    || !LdrpSchedulerSharedDataListHead
    || (NtCurrentPeb()->NtGlobalFlag2 & 0x10) != 0 )
  {
    RtlReleaseSRWLockShared(&LdrpSchedulerSharedDataListHeadLock);
  }
  else
  {
    RtlReleaseSRWLockShared(&LdrpSchedulerSharedDataListHeadLock);
    ThreadInformation[0] = 0LL;
    v4 = 0LL;
    ThreadInformation[1] = *(_QWORD *)(v2 + 16);
    if ( NtSetInformationThread((HANDLE)0xFFFFFFFFFFFFFFFELL, ThreadSchedulerSharedDataSlot, ThreadInformation, 0x18u) >= 0 )
      *(_QWORD *)(a1 + 6224) = v4;
  }
}
