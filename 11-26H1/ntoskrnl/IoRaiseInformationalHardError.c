/*
 * XREFs of IoRaiseInformationalHardError @ 0x1404D9300
 * Callers:
 *     MiCauseOverCommitPopup @ 0x1404B61B4 (MiCauseOverCommitPopup.c)
 *     DifIoRaiseInformationalHardErrorWrapper @ 0x1406614E0 (DifIoRaiseInformationalHardErrorWrapper.c)
 *     FsRtlLogCcFlushError @ 0x140B5A650 (FsRtlLogCcFlushError.c)
 *     PopTransitionSystemPowerStateEx @ 0x140C112B0 (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     KeInsertQueueApc @ 0x14020AE70 (KeInsertQueueApc.c)
 *     KeReleaseSpinLock @ 0x140309520 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140331330 (KeAcquireSpinLockRaiseToDpc.c)
 *     ExQueueWorkItem @ 0x140383A20 (ExQueueWorkItem.c)
 *     KeReleaseSemaphore @ 0x1403BBA30 (KeReleaseSemaphore.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     memcmp @ 0x140742350 (memcmp.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

BOOLEAN __stdcall IoRaiseInformationalHardError(NTSTATUS ErrorStatus, PUNICODE_STRING String, PKTHREAD Thread)
{
  bool v6; // zf
  __int64 Pool2; // rax
  _QWORD *v9; // rbx
  __int64 v10; // rax
  void *v11; // rax
  void *v12; // rcx
  KIRQL v13; // si
  const void *v14; // rcx
  unsigned __int8 *i; // rdi
  const void *v16; // rcx
  _QWORD *v17; // rax

  if ( !IopInitSystemCompletedEnoughForReInitRoutines )
    return 0;
  v6 = Thread
     ? (*(_DWORD *)(&Thread[1].SwapListEntry + 1) & 0x10) == 0
     : (*(_DWORD *)(&KeGetCurrentThread()[1].SwapListEntry + 1) & 0x10) == 0;
  if ( !v6
    || ErrorStatus == 1073741848
    || ErrorStatus == -1073741283
    || ErrorStatus == -1073741500
    || !Thread && *(int *)&IopPerfIoTrackingLock.SchedulerApcFill5[20] >= 25 )
  {
    return 0;
  }
  if ( *(int *)&IopPerfIoTrackingLock.SchedulerApcFill5[52] > 25 )
    return 0;
  Pool2 = ExAllocatePool2(0x40uLL);
  v9 = (_QWORD *)Pool2;
  if ( !Pool2 )
    return 0;
  *(_DWORD *)(Pool2 + 16) = ErrorStatus;
  if ( String && String->Length )
  {
    v11 = (void *)ExAllocatePool2(0x40uLL);
    if ( !v11 )
    {
LABEL_41:
      ExFreePoolWithTag(v9, 0);
      return 0;
    }
    *((_WORD *)v9 + 12) = String->Length;
    *((_WORD *)v9 + 13) = String->Length;
    v9[4] = v11;
    memmove(v11, String->Buffer, String->Length);
  }
  if ( !Thread )
  {
    v13 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&IopPerfIoTrackingLock.SchedulerApc.Thread);
    if ( *(int *)&IopPerfIoTrackingLock.SchedulerApcFill5[20] < 25
      && (!IopPerfIoTrackingLock.Spare32
       || *((_DWORD *)v9 + 4) != *((_DWORD *)IopPerfIoTrackingLock.Spare32 + 4)
       || ((v14 = (const void *)v9[4]) != 0LL || *((_QWORD *)IopPerfIoTrackingLock.Spare32 + 4))
       && (*((_WORD *)v9 + 12) != *((_WORD *)IopPerfIoTrackingLock.Spare32 + 12)
        || memcmp(v14, *((const void **)IopPerfIoTrackingLock.Spare32 + 4), *((unsigned __int16 *)v9 + 12)))) )
    {
      for ( i = *(unsigned __int8 **)&IopPerfIoTrackingLock.SavedApcStateFill[40];
            i != &IopPerfIoTrackingLock.SavedApcStateFill[40];
            i = *(unsigned __int8 **)i )
      {
        if ( *((_DWORD *)v9 + 4) == *((_DWORD *)i + 4) )
        {
          v16 = (const void *)v9[4];
          if ( !v16 && !*((_QWORD *)i + 4) )
            goto LABEL_40;
          if ( *((_WORD *)v9 + 12) == *((_WORD *)i + 12)
            && !memcmp(v16, *((const void **)i + 4), *((unsigned __int16 *)v9 + 12)) )
          {
            goto LABEL_40;
          }
        }
      }
      v17 = *(_QWORD **)&IopPerfIoTrackingLock.SchedulerApc.Type;
      if ( **(struct _KTHREAD ***)&IopPerfIoTrackingLock.SchedulerApc.Type != (struct _KTHREAD *)&IopPerfIoTrackingLock.SavedApcStateFill[40] )
        __fastfail(3u);
      *v9 = &IopPerfIoTrackingLock.SavedApcStateFill[40];
      v9[1] = v17;
      *v17 = v9;
      *(_QWORD *)&IopPerfIoTrackingLock.SchedulerApc.Type = v9;
      KeReleaseSemaphore((PRKSEMAPHORE)&IopPerfIoTrackingLock.SchedulerApcFill5[16], 0, 1, 0);
      if ( !IopPerfIoTrackingLock.SchedulerApcFill3[48] )
      {
        IopPerfIoTrackingLock.SchedulerApcFill3[48] = 1;
        ExQueueWorkItem((PWORK_QUEUE_ITEM)&IopPerfIoTrackingLock.SavedApcStateFill[8], DelayedWorkQueue);
      }
      KeReleaseSpinLock((PKSPIN_LOCK)&IopPerfIoTrackingLock.SchedulerApc.Thread, v13);
      return 1;
    }
LABEL_40:
    KeReleaseSpinLock((PKSPIN_LOCK)&IopPerfIoTrackingLock.SchedulerApc.Thread, v13);
    goto LABEL_23;
  }
  v10 = ExAllocatePool2(0x40uLL);
  if ( !v10 )
  {
LABEL_23:
    v12 = (void *)v9[4];
    if ( v12 )
      ExFreePoolWithTag(v12, 0);
    goto LABEL_41;
  }
  _InterlockedIncrement((volatile signed __int32 *)&IopPerfIoTrackingLock.SchedulerApcFill5[52]);
  *(_WORD *)v10 = 18;
  *(_QWORD *)(v10 + 32) = PspUserApcKernelRoutine;
  *(_BYTE *)(v10 + 2) = 88;
  *(_QWORD *)(v10 + 48) = IopRaiseInformationalHardError;
  *(_WORD *)(v10 + 80) = 0;
  *(_QWORD *)(v10 + 8) = Thread;
  *(_QWORD *)(v10 + 40) = 0LL;
  *(_QWORD *)(v10 + 56) = v9;
  *(_BYTE *)(v10 + 82) = 0;
  KeInsertQueueApc(v10, 0LL, 0LL, 0);
  return 1;
}
