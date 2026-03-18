/*
 * XREFs of IopInitializeReserveIrps @ 0x140CBD6C0
 * Callers:
 *     IoInitSystemPreDrivers @ 0x140CBACA0 (IoInitSystemPreDrivers.c)
 * Callees:
 *     IopAllocateIrpWithExtension @ 0x14045DC8C (IopAllocateIrpWithExtension.c)
 */

char __fastcall IopInitializeReserveIrps(__int64 a1)
{
  __int64 v1; // rcx
  __int64 v2; // rcx
  __int64 v3; // rcx
  unsigned int v4; // ebx
  _QWORD *IrpWithExtension; // rax
  char result; // al

  LOBYTE(IopSessionNotificationLock.Spare36) = 42;
  *(_QWORD *)&IopSessionNotificationLock.ForegroundLossTime = IopAllocateIrpWithExtension(a1, 42, 0);
  if ( !*(_QWORD *)&IopSessionNotificationLock.ForegroundLossTime )
    return 0;
  LODWORD(IopSessionNotificationLock.GlobalForegroundListEntry.Flink) = 0;
  IopSessionNotificationLock.WriteOperationCount = (__int64)&IopSessionNotificationLock.ReadOperationCount;
  IopSessionNotificationLock.ReadOperationCount = (__int64)&IopSessionNotificationLock.ReadOperationCount;
  LOWORD(IopSessionNotificationLock.InGlobalForegroundList) = 1;
  BYTE2(IopSessionNotificationLock.InGlobalForegroundList) = 6;
  HIDWORD(IopSessionNotificationLock.InGlobalForegroundList) = 0;
  IopSessionNotificationLock.OtherOperationCount = IopAllocateIrpWithExtension(v1, 42, 0);
  if ( !IopSessionNotificationLock.OtherOperationCount )
    return 0;
  LODWORD(IopSessionNotificationLock.ReadTransferCount) = 0;
  IopSessionNotificationLock.QueuedScb = (_KSCB *)&IopSessionNotificationLock.OtherTransferCount;
  IopSessionNotificationLock.OtherTransferCount = (__int64)&IopSessionNotificationLock.OtherTransferCount;
  LOWORD(IopSessionNotificationLock.WriteTransferCount) = 1;
  BYTE2(IopSessionNotificationLock.WriteTransferCount) = 6;
  HIDWORD(IopSessionNotificationLock.WriteTransferCount) = 0;
  *(_QWORD *)&IopSessionNotificationLock.ThreadTimerDelay = IopAllocateIrpWithExtension(v2, 42, 0);
  if ( !*(_QWORD *)&IopSessionNotificationLock.ThreadTimerDelay )
    return 0;
  LODWORD(IopSessionNotificationLock.TracingPrivate[0]) = 0;
  *(_QWORD *)&IopSessionNotificationLock.ReservedPreviousReadyTimeValue = &IopSessionNotificationLock.AbWaitObject;
  v4 = 0;
  IopSessionNotificationLock.AbWaitObject = (void *volatile)&IopSessionNotificationLock.AbWaitObject;
  LOWORD(IopSessionNotificationLock.SchedulerAssist) = 1;
  BYTE2(IopSessionNotificationLock.SchedulerAssist) = 6;
  HIDWORD(IopSessionNotificationLock.SchedulerAssist) = 0;
  IopSessionNotificationLock.Spare35[1] = 0LL;
  while ( v4 < 8 )
  {
    IrpWithExtension = (_QWORD *)IopAllocateIrpWithExtension(v3, 42, 0);
    v3 = (__int64)IrpWithExtension;
    if ( !IrpWithExtension )
      return 0;
    if ( v4 )
    {
      if ( v4 == 1 )
      {
        IopSessionNotificationLock.KernelShadowStackInitial = IrpWithExtension;
      }
      else
      {
        *IrpWithExtension = IopSessionNotificationLock.Spare35[1];
        IopSessionNotificationLock.Spare35[1] = (unsigned __int64)IrpWithExtension;
      }
    }
    else
    {
      IopSessionNotificationLock.KernelWaitTime = (unsigned __int64)IrpWithExtension;
    }
    ++v4;
  }
  LODWORD(IopSessionNotificationLock.UserWaitTime) = 0;
  IopSessionNotificationLock.KernelShadowStack = &IopSessionNotificationLock.SchedulerAssistPriorityFloor;
  result = 1;
  *(_QWORD *)&IopSessionNotificationLock.SchedulerAssistPriorityFloor = &IopSessionNotificationLock.SchedulerAssistPriorityFloor;
  IopSessionNotificationLock.Spare35[0] = (unsigned __int64)&IopSessionNotificationLock.WpsFeedback;
  IopSessionNotificationLock.WpsFeedback = (_KTHREAD_WPS_FEEDBACK *)&IopSessionNotificationLock.WpsFeedback;
  LODWORD(IopSessionNotificationLock.KernelShadowStackBase) = 0;
  IopSessionNotificationLock.GlobalUpdateVpThreadPriorityListEntry.Flink = 0LL;
  IopSessionNotificationLock.KernelShadowStackLimit.AllFields = 0LL;
  LOWORD(IopSessionNotificationLock.InGlobalUpdateVpThreadPriorityList) = 1;
  BYTE2(IopSessionNotificationLock.InGlobalUpdateVpThreadPriorityList) = 6;
  HIDWORD(IopSessionNotificationLock.InGlobalUpdateVpThreadPriorityList) = 0;
  LOWORD(IopSessionNotificationLock.ExtendedFeatureDisableMask) = 1;
  BYTE2(IopSessionNotificationLock.ExtendedFeatureDisableMask) = 6;
  HIDWORD(IopSessionNotificationLock.ExtendedFeatureDisableMask) = 0;
  return result;
}
