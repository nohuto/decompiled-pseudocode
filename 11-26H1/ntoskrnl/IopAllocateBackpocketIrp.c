/*
 * XREFs of IopAllocateBackpocketIrp @ 0x140533EB4
 * Callers:
 *     MiSynchronousPageWrite @ 0x14026AA34 (MiSynchronousPageWrite.c)
 *     MiIssueSynchronousFlush @ 0x14026ACAC (MiIssueSynchronousFlush.c)
 *     IoSynchronousPageWriteEx @ 0x14026AF60 (IoSynchronousPageWriteEx.c)
 *     IoPageReadEx @ 0x14026B300 (IoPageReadEx.c)
 *     IoAsynchronousPageWrite @ 0x14026D9C4 (IoAsynchronousPageWrite.c)
 * Callees:
 *     IopAllocateIrpExReturn @ 0x14026BBB0 (IopAllocateIrpExReturn.c)
 *     KeWaitForSingleObject @ 0x140277AD0 (KeWaitForSingleObject.c)
 *     IopIsActivityTracingEnabled @ 0x1404555A0 (IopIsActivityTracingEnabled.c)
 *     IoInitializeIrp @ 0x14046FE20 (IoInitializeIrp.c)
 *     IopInitActivityIdIrp @ 0x14047B8F0 (IopInitActivityIdIrp.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 */

__int64 __fastcall IopAllocateBackpocketIrp(__int64 a1, char a2, char a3)
{
  __int16 v3; // di
  struct _KTHREAD *CurrentThread; // rax
  __int64 v6; // rdx
  __int64 result; // rax
  _KPROCESS *Queue; // rbx
  __int64 v9; // rdx
  LARGE_INTEGER Timeout; // [rsp+58h] [rbp+20h] BYREF

  v3 = a2;
  if ( a2 > SLOBYTE(IopPerfIoTrackingLock.Timer.TimerListEntry.Flink) )
    return 0LL;
  CurrentThread = KeGetCurrentThread();
  if ( !a3 )
  {
    if ( (struct _KTHREAD *)IopPerfIoTrackingLock.RelativeTimerBias != CurrentThread )
    {
      Timeout.QuadPart = -300000000LL;
      while ( _InterlockedExchange((volatile __int32 *)&IopPerfIoTrackingLock.Teb, 1) == 1 )
      {
        if ( KeWaitForSingleObject(&IopPerfIoTrackingLock.Timer, Executive, 0, 0, &Timeout) == 258 )
        {
          LOBYTE(v9) = v3;
          result = IopAllocateIrpExReturn(a1, v9, 0LL);
          if ( result )
            return result;
        }
      }
      Queue = (_KPROCESS *)IopPerfIoTrackingLock.Queue;
      IoInitializeIrp((PIRP)IopPerfIoTrackingLock.Queue, 72 * v3 + 352, v3 + 2);
      HIBYTE(Queue->ProcessTimerDelay) = 33;
      IopPerfIoTrackingLock.RelativeTimerBias = (unsigned __int64)KeGetCurrentThread();
      goto LABEL_10;
    }
    Queue = (_KPROCESS *)IopPerfIoTrackingLock.Timer.DueTime.QuadPart;
    if ( IopPerfIoTrackingLock.Timer.DueTime.QuadPart )
    {
LABEL_21:
      IopPerfIoTrackingLock.Timer.DueTime.QuadPart = *(_QWORD *)IopPerfIoTrackingLock.Timer.DueTime.QuadPart;
      IoInitializeIrp((PIRP)Queue, 72 * a2 + 352, a2 + 2);
      Queue->IdealProcessorAssignmentBlock = (_KI_IDEAL_PROCESSOR_ASSIGNMENT_BLOCK *)((char *)Queue->IdealProcessorAssignmentBlock
                                                                                    - 144);
      Queue->Padding[1] = (unsigned __int64)Queue->IdealProcessorAssignmentBlock;
      HIBYTE(Queue->ProcessTimerDelay) = 33;
      goto LABEL_22;
    }
    return 0LL;
  }
  if ( (struct _KTHREAD *)IopPerfIoTrackingLock.WaitStatus == CurrentThread )
  {
    Queue = (_KPROCESS *)IopPerfIoTrackingLock.Timer.DueTime.QuadPart;
    if ( !IopPerfIoTrackingLock.Timer.DueTime.QuadPart )
      KeBugCheckEx(0x11Eu, 0LL, 0LL, 0LL, 0LL);
    goto LABEL_21;
  }
  Timeout.QuadPart = -300000000LL;
  while ( _InterlockedExchange((volatile __int32 *)&IopPerfIoTrackingLock.ApcStateFill[40], 1) == 1 )
  {
    if ( KeWaitForSingleObject(&IopPerfIoTrackingLock.WaitBlockList, Executive, 0, 0, &Timeout) == 258 )
    {
      LOBYTE(v6) = v3;
      result = IopAllocateIrpExReturn(a1, v6, 0LL);
      if ( result )
        return result;
    }
  }
  Queue = IopPerfIoTrackingLock.ApcState.Process;
  IoInitializeIrp((PIRP)IopPerfIoTrackingLock.ApcState.Process, 72 * v3 + 352, v3 + 2);
  HIBYTE(Queue->ProcessTimerDelay) = 33;
  IopPerfIoTrackingLock.WaitStatus = (volatile __int64)KeGetCurrentThread();
LABEL_10:
  Queue->IdealProcessorAssignmentBlock = (_KI_IDEAL_PROCESSOR_ASSIGNMENT_BLOCK *)((char *)Queue->IdealProcessorAssignmentBlock
                                                                                - 144);
  Queue->Padding[1] = (unsigned __int64)Queue->IdealProcessorAssignmentBlock;
LABEL_22:
  BYTE2(Queue->ProcessLock) -= 2;
  HIBYTE(Queue->ProcessLock) -= 2;
  if ( IopIsActivityTracingEnabled() )
    IopInitActivityIdIrp((__int64)Queue);
  return (__int64)Queue;
}
