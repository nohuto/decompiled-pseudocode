/*
 * XREFs of LdrpAcquireSchedulerSharedDataSlot @ 0x1800E4D30
 * Callers:
 *     LdrpInitializeThread @ 0x1800CF3C0 (LdrpInitializeThread.c)
 *     LdrpInitializeProcess @ 0x1800CF8B8 (LdrpInitializeProcess.c)
 *     RtlCloneUserProcess @ 0x18015C640 (RtlCloneUserProcess.c)
 *     RtlCompleteProcessCloning @ 0x18015C950 (RtlCompleteProcessCloning.c)
 * Callees:
 *     RtlReleaseSRWLockShared @ 0x18002D9F0 (RtlReleaseSRWLockShared.c)
 *     RtlAcquireSRWLockShared @ 0x18004C610 (RtlAcquireSRWLockShared.c)
 *     NtSetInformationThread @ 0x18015F0E0 (NtSetInformationThread.c)
 */

struct _TEB *__fastcall LdrpAcquireSchedulerSharedDataSlot(__int64 a1)
{
  __int64 v2; // rbx
  struct _TEB *result; // rax
  _QWORD v4[2]; // [rsp+20h] [rbp-28h] BYREF
  struct _TEB *v5; // [rsp+30h] [rbp-18h]

  HIDWORD(v4[0]) = 0;
  RtlAcquireSRWLockShared(&LdrpSchedulerSharedDataListHeadLock);
  v2 = LdrpSchedulerSharedDataListHead;
  if ( (__int64 *)LdrpSchedulerSharedDataListHead == &LdrpSchedulerSharedDataListHead
    || !LdrpSchedulerSharedDataListHead
    || (NtCurrentPeb()->NtGlobalFlag2 & 0x10) != 0 )
  {
    return RtlReleaseSRWLockShared(&LdrpSchedulerSharedDataListHeadLock);
  }
  RtlReleaseSRWLockShared(&LdrpSchedulerSharedDataListHeadLock);
  v4[0] = 0LL;
  v5 = 0LL;
  v4[1] = *(_QWORD *)(v2 + 16);
  result = (struct _TEB *)NtSetInformationThread(-2LL, 57LL, v4, 24LL);
  if ( (int)result >= 0 )
  {
    result = v5;
    *(_QWORD *)(a1 + 6224) = v5;
  }
  return result;
}
