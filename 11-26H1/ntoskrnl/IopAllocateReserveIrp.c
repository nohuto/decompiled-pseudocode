/*
 * XREFs of IopAllocateReserveIrp @ 0x14026F5DC
 * Callers:
 *     MiSynchronousPageWrite @ 0x14026AA34 (MiSynchronousPageWrite.c)
 *     MiIssueSynchronousFlush @ 0x14026ACAC (MiIssueSynchronousFlush.c)
 *     IoSynchronousPageWriteEx @ 0x14026AF60 (IoSynchronousPageWriteEx.c)
 *     IoPageReadEx @ 0x14026B300 (IoPageReadEx.c)
 *     IopAllocateIrpMustSucceed @ 0x14026BB50 (IopAllocateIrpMustSucceed.c)
 *     IoAsynchronousPageWrite @ 0x14026D9C4 (IoAsynchronousPageWrite.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x140277AD0 (KeWaitForSingleObject.c)
 *     IopIsActivityTracingEnabled @ 0x1404555A0 (IopIsActivityTracingEnabled.c)
 *     IoInitializeIrp @ 0x14046FE20 (IoInitializeIrp.c)
 *     IopInitActivityIdIrp @ 0x14047B8F0 (IopInitActivityIdIrp.c)
 */

_KTRAP_FRAME *__fastcall IopAllocateReserveIrp(LARGE_INTEGER a1, char a2, int a3)
{
  CCHAR v3; // di
  __int16 v4; // si
  unsigned __int64 ThreadLock; // rcx
  __int64 v7; // rax
  _KSCHEDULING_GROUP *volatile SchedulingGroup; // rcx
  struct _LIST_ENTRY *ReadyTime; // rax
  _KTRAP_FRAME *TrapFrame; // rcx
  __int64 High; // rax
  LARGE_INTEGER Timeout; // [rsp+40h] [rbp+8h] BYREF

  Timeout = a1;
  if ( a2 > SLOBYTE(IopPerfIoTrackingLock.Timer.TimerListEntry.Flink) )
    return 0LL;
  v3 = a2 + 2;
  v4 = (char)(a2 + 2);
  if ( !a3 )
  {
    while ( _InterlockedExchange((volatile __int32 *)&IopPerfIoTrackingLock.CycleTime, 1) == 1 )
      KeWaitForSingleObject(&IopPerfIoTrackingLock.CurrentRunTime, Executive, 0, 0, 0LL);
    IoInitializeIrp((PIRP)IopPerfIoTrackingLock.ThreadLock, 8 * (8 * v3 + v4) + 208, v3);
    *(_BYTE *)(IopPerfIoTrackingLock.ThreadLock + 71) = 33;
    ThreadLock = IopPerfIoTrackingLock.ThreadLock;
    *(_QWORD *)(IopPerfIoTrackingLock.ThreadLock + 184) -= 144LL;
    v7 = *(_QWORD *)(ThreadLock + 184);
    *(_BYTE *)(ThreadLock + 67) -= 2;
    *(_BYTE *)(ThreadLock + 66) -= 2;
    *(_QWORD *)(ThreadLock + 200) = v7;
    if ( (unsigned __int8)IopIsActivityTracingEnabled() )
      IopInitActivityIdIrp(IopPerfIoTrackingLock.ThreadLock);
    return (_KTRAP_FRAME *)IopPerfIoTrackingLock.ThreadLock;
  }
  if ( a3 == 1 )
  {
    while ( _InterlockedExchange((volatile __int32 *)&IopPerfIoTrackingLock.WaitRegister.Flags, 1) == 1 )
      KeWaitForSingleObject((char *)&IopPerfIoTrackingLock.116 + 4, Executive, 0, 0, 0LL);
    IoInitializeIrp((PIRP)IopPerfIoTrackingLock.SchedulingGroup, 8 * (8 * v3 + v4) + 208, v3);
    HIBYTE(IopPerfIoTrackingLock.SchedulingGroup->Sibling.Flink) = 33;
    SchedulingGroup = IopPerfIoTrackingLock.SchedulingGroup;
    IopPerfIoTrackingLock.SchedulingGroup->PerProcessor[0].ReadyTime -= 144LL;
    ReadyTime = (struct _LIST_ENTRY *)SchedulingGroup->PerProcessor[0].ReadyTime;
    BYTE3(SchedulingGroup->Sibling.Flink) -= 2;
    BYTE2(SchedulingGroup->Sibling.Flink) -= 2;
    SchedulingGroup->PerProcessor[0].PerProcessorList.Flink = ReadyTime;
    if ( (unsigned __int8)IopIsActivityTracingEnabled() )
      IopInitActivityIdIrp(IopPerfIoTrackingLock.SchedulingGroup);
    return (_KTRAP_FRAME *)IopPerfIoTrackingLock.SchedulingGroup;
  }
  if ( a3 != 3 )
    return 0LL;
  Timeout.QuadPart = 0LL;
  while ( _InterlockedExchange((volatile __int32 *)&IopPerfIoTrackingLock.152, 1) == 1 )
  {
    Timeout.QuadPart = -50000000LL;
    if ( KeWaitForSingleObject(&IopPerfIoTrackingLock.ApcStateFill[8], Executive, 0, 0, &Timeout) == 258 )
      return 0LL;
  }
  IoInitializeIrp((PIRP)IopPerfIoTrackingLock.TrapFrame, 8 * (8 * v3 + v4) + 208, v3);
  HIBYTE(IopPerfIoTrackingLock.TrapFrame->Rdx) = 33;
  TrapFrame = IopPerfIoTrackingLock.TrapFrame;
  IopPerfIoTrackingLock.TrapFrame->Xmm4.High -= 144LL;
  High = TrapFrame->Xmm4.High;
  BYTE3(TrapFrame->Rdx) -= 2;
  BYTE2(TrapFrame->Rdx) -= 2;
  TrapFrame->Xmm5.High = High;
  if ( (unsigned __int8)IopIsActivityTracingEnabled() )
    IopInitActivityIdIrp(IopPerfIoTrackingLock.TrapFrame);
  return IopPerfIoTrackingLock.TrapFrame;
}
