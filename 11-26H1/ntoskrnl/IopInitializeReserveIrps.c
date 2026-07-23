/*
 * XREFs of IopInitializeReserveIrps @ 0x140CC3790
 * Callers:
 *     IoInitSystemPreDrivers @ 0x140CC0D18 (IoInitSystemPreDrivers.c)
 * Callees:
 *     IopAllocateIrpWithExtension @ 0x14045782C (IopAllocateIrpWithExtension.c)
 */

char __fastcall IopInitializeReserveIrps(__int64 a1)
{
  __int64 v1; // rcx
  __int64 v2; // rcx
  __int64 v3; // rcx
  unsigned int v4; // ebx
  _KPROCESS *IrpWithExtension; // rax
  char result; // al

  LOBYTE(IopPerfIoTrackingLock.Timer.TimerListEntry.Flink) = 42;
  IopPerfIoTrackingLock.ThreadLock = IopAllocateIrpWithExtension(a1, 42, 0);
  if ( !IopPerfIoTrackingLock.ThreadLock )
    return 0;
  LODWORD(IopPerfIoTrackingLock.CycleTime) = 0;
  IopPerfIoTrackingLock.StateSaveArea = (_XSAVE_FORMAT *)&IopPerfIoTrackingLock.KernelStack;
  IopPerfIoTrackingLock.KernelStack = &IopPerfIoTrackingLock.KernelStack;
  LOWORD(IopPerfIoTrackingLock.CurrentRunTime) = 1;
  BYTE2(IopPerfIoTrackingLock.CurrentRunTime) = 6;
  IopPerfIoTrackingLock.ExpectedRunTime = 0;
  IopPerfIoTrackingLock.SchedulingGroup = (_KSCHEDULING_GROUP *volatile)IopAllocateIrpWithExtension(v1, 42, 0);
  if ( !IopPerfIoTrackingLock.SchedulingGroup )
    return 0;
  *(_DWORD *)&IopPerfIoTrackingLock.WaitRegister.Flags = 0;
  IopPerfIoTrackingLock.FirstArgument = &IopPerfIoTrackingLock.SystemCallNumber;
  *(_QWORD *)&IopPerfIoTrackingLock.SystemCallNumber = &IopPerfIoTrackingLock.SystemCallNumber;
  *((_WORD *)&IopPerfIoTrackingLock.MiscFlags + 2) = 1;
  *((_BYTE *)&IopPerfIoTrackingLock.MiscFlags + 6) = 6;
  *(_DWORD *)&IopPerfIoTrackingLock.Tag = 0;
  IopPerfIoTrackingLock.TrapFrame = (_KTRAP_FRAME *)IopAllocateIrpWithExtension(v2, 42, 0);
  if ( !IopPerfIoTrackingLock.TrapFrame )
    return 0;
  LODWORD(IopPerfIoTrackingLock.ApcState.ApcListHead[0].Flink) = 0;
  IopPerfIoTrackingLock.ApcState.ApcListHead[1].Blink = &IopPerfIoTrackingLock.ApcState.ApcListHead[1];
  v4 = 0;
  IopPerfIoTrackingLock.ApcState.ApcListHead[1].Flink = &IopPerfIoTrackingLock.ApcState.ApcListHead[1];
  *(_WORD *)&IopPerfIoTrackingLock.ApcStateFill[8] = 1;
  IopPerfIoTrackingLock.ApcStateFill[10] = 6;
  *(_DWORD *)&IopPerfIoTrackingLock.ApcStateFill[12] = 0;
  IopPerfIoTrackingLock.Timer.DueTime.QuadPart = 0LL;
  while ( v4 < 8 )
  {
    IrpWithExtension = (_KPROCESS *)IopAllocateIrpWithExtension(v3, 42, 0);
    v3 = (__int64)IrpWithExtension;
    if ( !IrpWithExtension )
      return 0;
    if ( v4 )
    {
      if ( v4 == 1 )
      {
        IopPerfIoTrackingLock.Queue = &IrpWithExtension->Header;
      }
      else
      {
        *(_QWORD *)&IrpWithExtension->Header.Lock = IopPerfIoTrackingLock.Timer.DueTime.QuadPart;
        IopPerfIoTrackingLock.Timer.DueTime.QuadPart = (unsigned __int64)IrpWithExtension;
      }
    }
    else
    {
      IopPerfIoTrackingLock.ApcState.Process = IrpWithExtension;
    }
    ++v4;
  }
  *(_DWORD *)&IopPerfIoTrackingLock.ApcStateFill[40] = 0;
  IopPerfIoTrackingLock.WaitListEntry.Blink = &IopPerfIoTrackingLock.WaitListEntry;
  result = 1;
  IopPerfIoTrackingLock.WaitListEntry.Flink = &IopPerfIoTrackingLock.WaitListEntry;
  IopPerfIoTrackingLock.Timer.Header.WaitListHead.Blink = &IopPerfIoTrackingLock.Timer.Header.WaitListHead;
  IopPerfIoTrackingLock.Timer.Header.WaitListHead.Flink = &IopPerfIoTrackingLock.Timer.Header.WaitListHead;
  LODWORD(IopPerfIoTrackingLock.Teb) = 0;
  IopPerfIoTrackingLock.WaitStatus = 0LL;
  IopPerfIoTrackingLock.RelativeTimerBias = 0LL;
  LOWORD(IopPerfIoTrackingLock.WaitBlockList) = 1;
  BYTE2(IopPerfIoTrackingLock.WaitBlockList) = 6;
  HIDWORD(IopPerfIoTrackingLock.WaitBlockList) = 0;
  LOWORD(IopPerfIoTrackingLock.Timer.Header.Lock) = 1;
  IopPerfIoTrackingLock.Timer.Header.Size = 6;
  IopPerfIoTrackingLock.Timer.Header.SignalState = 0;
  return result;
}
