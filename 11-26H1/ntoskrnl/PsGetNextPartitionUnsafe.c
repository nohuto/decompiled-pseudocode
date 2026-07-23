/*
 * XREFs of PsGetNextPartitionUnsafe @ 0x140259B7C
 * Callers:
 *     CcIsThereDirtyData @ 0x140259630 (CcIsThereDirtyData.c)
 *     PsGetNextPartition @ 0x1402598D8 (PsGetNextPartition.c)
 *     CcForEachPartition @ 0x140259934 (CcForEachPartition.c)
 *     CcGetDirtyPages @ 0x140259A70 (CcGetDirtyPages.c)
 *     CcCoalescingCallBack @ 0x140259D70 (CcCoalescingCallBack.c)
 *     MiCheckControlArea @ 0x14036FA60 (MiCheckControlArea.c)
 *     ExSwapinWorkerThreads @ 0x14094A380 (ExSwapinWorkerThreads.c)
 * Callees:
 *     ObReferenceObjectSafeWithTag @ 0x140259C30 (ObReferenceObjectSafeWithTag.c)
 *     ObfDereferenceObjectWithTag @ 0x140264E00 (ObfDereferenceObjectWithTag.c)
 *     ExReleaseSpinLockShared @ 0x14026C450 (ExReleaseSpinLockShared.c)
 *     ExAcquireSpinLockShared @ 0x1402CFF90 (ExAcquireSpinLockShared.c)
 */

unsigned int *__fastcall PsGetNextPartitionUnsafe(_QWORD *Object)
{
  unsigned int *p_SchedulerAssistYieldCounter; // rsi
  KIRQL v3; // al
  struct _KTHREAD *WpsFeedback; // rbx
  KIRQL v5; // r14

  p_SchedulerAssistYieldCounter = 0LL;
  v3 = ExAcquireSpinLockShared((PEX_SPIN_LOCK)&NormalizationListLock.WaitBlockFill11[88]);
  WpsFeedback = (struct _KTHREAD *)SshpBlockerCollections.WpsFeedback;
  v5 = v3;
  if ( Object )
    WpsFeedback = (struct _KTHREAD *)Object[7];
  while ( WpsFeedback != (struct _KTHREAD *)&SshpBlockerCollections.WpsFeedback )
  {
    if ( (unsigned __int8)ObReferenceObjectSafeWithTag(&WpsFeedback[-1].SchedulerAssistYieldCounter, 1850045264LL) )
    {
      p_SchedulerAssistYieldCounter = &WpsFeedback[-1].SchedulerAssistYieldCounter;
      break;
    }
    WpsFeedback = *(struct _KTHREAD **)&WpsFeedback->Header.Lock;
  }
  ExReleaseSpinLockShared((PEX_SPIN_LOCK)&NormalizationListLock.WaitBlockFill11[88], v5);
  if ( Object )
    ObfDereferenceObjectWithTag(Object, 0x6E457350u);
  return p_SchedulerAssistYieldCounter;
}
