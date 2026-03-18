/*
 * XREFs of KiInitMachineDependent @ 0x1405F4994
 * Callers:
 *     KeInitSystem @ 0x140CC82B8 (KeInitSystem.c)
 * Callees:
 *     KeRevertToUserGroupAffinityThread @ 0x14037C490 (KeRevertToUserGroupAffinityThread.c)
 *     KiSetSystemAffinityThreadToProcessor @ 0x1405F6AC8 (KiSetSystemAffinityThreadToProcessor.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 *     KiInitializeMTRR @ 0x140CCB400 (KiInitializeMTRR.c)
 */

char KiInitMachineDependent()
{
  int v0; // edi
  char v1; // si
  unsigned int v2; // ebx
  __int64 v3; // rcx
  char result; // al
  struct _GROUP_AFFINITY PreviousAffinity; // [rsp+20h] [rbp-28h] BYREF

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
    stru_140FC01F0.SavedApcState.ApcListHead[1].Flink = (struct _LIST_ENTRY *)__readmsr(0x1A0u);
  if ( v0 )
    KeRevertToUserGroupAffinityThread(&PreviousAffinity);
  LODWORD(KsepShimDbLock.ReadTransferCount) = 1;
  KsepShimDbLock.WriteTransferCount = 0LL;
  LODWORD(KsepShimDbLock.OtherTransferCount) = 0;
  LOWORD(KsepShimDbLock.QueuedScb) = 1;
  BYTE2(KsepShimDbLock.QueuedScb) = 6;
  HIDWORD(KsepShimDbLock.QueuedScb) = 0;
  KsepShimDbLock.TracingPrivate[0] = (unsigned __int64)&KsepShimDbLock.ThreadTimerDelay;
  *(_QWORD *)&KsepShimDbLock.ThreadTimerDelay = &KsepShimDbLock.ThreadTimerDelay;
  memset_0(&KsepShimDbLock.ApcStateFill[32], 0, 0x80uLL);
  *(_QWORD *)&KsepShimDbLock.ApcStateFill[40] = &KsepShimDbLock.ApcState.Process;
  KsepShimDbLock.Queue = (_DISPATCHER_HEADER *volatile)KiAltReturnDpcRoutine;
  result = 1;
  KsepShimDbLock.ApcState.Process = (_KPROCESS *)&KsepShimDbLock.ApcStateFill[32];
  KsepShimDbLock.Timer.TimerListEntry.Flink = (struct _LIST_ENTRY *)KiAltReturnWorkerRoutine;
  KsepShimDbLock.Timer.Dpc = (_KDPC *)KiAltContextProcessMcheckAltReturn;
  KsepShimDbLock.WaitStatus = 0LL;
  LODWORD(KsepShimDbLock.WaitBlockList) = 275;
  KsepShimDbLock.Teb = &KsepShimDbLock.ApcStateFill[32];
  KsepShimDbLock.Timer.Header.WaitListHead.Flink = 0LL;
  KsepShimDbLock.WaitListEntry.Blink = 0LL;
  KsepShimDbLock.Timer.TimerListEntry.Blink = (struct _LIST_ENTRY *)&KsepShimDbLock.ApcStateFill[32];
  KsepShimDbLock.Timer.Header.WaitListHead.Blink = 0LL;
  KiAltReturnInitialized = 1;
  return result;
}
