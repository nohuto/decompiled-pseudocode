/*
 * XREFs of KiInitMachineDependent @ 0x1405F7354
 * Callers:
 *     KeInitSystem @ 0x140CCE3A8 (KeInitSystem.c)
 * Callees:
 *     KeRevertToUserGroupAffinityThread @ 0x14037E240 (KeRevertToUserGroupAffinityThread.c)
 *     KiSetSystemAffinityThreadToProcessor @ 0x1405F9488 (KiSetSystemAffinityThreadToProcessor.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     KiInitializeMTRR @ 0x140CD14E0 (KiInitializeMTRR.c)
 */

char KiInitMachineDependent()
{
  int v0; // edi
  char v1; // si
  unsigned int v2; // ebx
  __int64 v3; // rcx
  char result; // al
  _GROUP_AFFINITY PreviousAffinity; // [rsp+20h] [rbp-28h] BYREF

  v0 = 0;
  v1 = 0;
  v2 = 0;
  for ( PreviousAffinity = 0LL; v2 < (unsigned int)KeNumberProcessors_0; ++v2 )
  {
    if ( v0 )
    {
      KiSetSystemAffinityThreadToProcessor(v2, 0LL);
    }
    else
    {
      KiSetSystemAffinityThreadToProcessor(v2, &PreviousAffinity);
      v0 = 1;
    }
    if ( v2 == (_DWORD)KeNumberProcessors_0 - 1 )
      v1 = 1;
    LOBYTE(v3) = v1;
    KiInitializeMTRR(v3);
    if ( (KeFeatureBits & 0x400000) != 0 )
      __writemsr(0x1A0u, __readmsr(0x1A0u) | 0x8000000);
  }
  if ( KeGetCurrentPrcb()->CpuVendor == 2 )
    stru_140FC11F0.SavedApcState.ApcListHead[0].Blink = (struct _LIST_ENTRY *)__readmsr(0x1A0u);
  if ( v0 )
    KeRevertToUserGroupAffinityThread(&PreviousAffinity);
  LODWORD(KsepShimDbLock.OtherTransferCount) = 1;
  KsepShimDbLock.QueuedScb = 0LL;
  KsepShimDbLock.ThreadTimerDelay = 0;
  LOWORD(KsepShimDbLock.TracingPrivate[0]) = 1;
  BYTE2(KsepShimDbLock.TracingPrivate[0]) = 6;
  HIDWORD(KsepShimDbLock.TracingPrivate[0]) = 0;
  KsepShimDbLock.AbWaitObject = &KsepShimDbLock.SchedulerAssist;
  KsepShimDbLock.SchedulerAssist = &KsepShimDbLock.SchedulerAssist;
  memset_0((void *)&KsepShimDbLock.Queue, 0, 0x80uLL);
  KsepShimDbLock.Teb = (void *)&KsepShimDbLock.Queue;
  KsepShimDbLock.Timer.DueTime.QuadPart = (unsigned __int64)KiAltReturnDpcRoutine;
  result = 1;
  KsepShimDbLock.Queue = (_DISPATCHER_HEADER *volatile)&KsepShimDbLock.Queue;
  *(_QWORD *)&KsepShimDbLock.WaitBlockFill11[16] = KiAltReturnWorkerRoutine;
  KsepShimDbLock.WaitBlock[0].Object = KiAltContextProcessMcheckAltReturn;
  KsepShimDbLock.RelativeTimerBias = 0LL;
  KsepShimDbLock.Timer.Header.LockNV = 275;
  KsepShimDbLock.Timer.TimerListEntry.Flink = (struct _LIST_ENTRY *)&KsepShimDbLock.Queue;
  *(_QWORD *)&KsepShimDbLock.Timer.Processor = 0LL;
  KsepShimDbLock.Timer.Header.WaitListHead.Blink = 0LL;
  KsepShimDbLock.WaitBlock[0].Thread = (struct _KTHREAD *)&KsepShimDbLock.Queue;
  KsepShimDbLock.WaitBlock[0].WaitListEntry.Flink = 0LL;
  KiAltReturnInitialized = 1;
  return result;
}
