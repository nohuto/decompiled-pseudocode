/*
 * XREFs of UsbhDispatch_HardResetEvent @ 0x140037850
 * Callers:
 *     UsbhQueryPortState @ 0x1400199F0 (UsbhQueryPortState.c)
 *     UsbhFdoSetPowerDx_Action @ 0x14003743C (UsbhFdoSetPowerDx_Action.c)
 *     UsbhResumeHardReset @ 0x14003A324 (UsbhResumeHardReset.c)
 *     UsbhOvercurrentResetWorker @ 0x14003FA80 (UsbhOvercurrentResetWorker.c)
 *     UsbhQueueDriverOvercurrent @ 0x14003FCE0 (UsbhQueueDriverOvercurrent.c)
 *     UsbhQueueOvercurrentReset @ 0x14003FE60 (UsbhQueueOvercurrentReset.c)
 *     UsbhFinishStart @ 0x140046A70 (UsbhFinishStart.c)
 *     UsbhDisableHardReset @ 0x14004BFFC (UsbhDisableHardReset.c)
 *     UsbhHardResetWorker @ 0x14004C0A0 (UsbhHardResetWorker.c)
 *     UsbhQueueHardReset @ 0x14004C400 (UsbhQueueHardReset.c)
 *     UsbhResetNotificationIrpCompletion @ 0x1400514C0 (UsbhResetNotificationIrpCompletion.c)
 * Callees:
 *     Log @ 0x140009B80 (Log.c)
 *     FdoExt @ 0x1400196E0 (FdoExt.c)
 *     Usbh_HRS_Disabled @ 0x140037A80 (Usbh_HRS_Disabled.c)
 *     UsbhAcquireResetLock @ 0x140037B70 (UsbhAcquireResetLock.c)
 *     UsbhReleaseResetLock @ 0x140039FA4 (UsbhReleaseResetLock.c)
 *     WPP_RECORDER_SF_d @ 0x14003E3EC (WPP_RECORDER_SF_d.c)
 *     UsbhIncrementConcurrentResetCounter @ 0x14004C3AC (UsbhIncrementConcurrentResetCounter.c)
 *     Usbh_HRS_Paused @ 0x14004C72C (Usbh_HRS_Paused.c)
 *     Usbh_HRS_PausedWaitDone @ 0x14004C868 (Usbh_HRS_PausedWaitDone.c)
 *     Usbh_HRS_Queued @ 0x14004C960 (Usbh_HRS_Queued.c)
 *     Usbh_HRS_ResetStop @ 0x14004CC28 (Usbh_HRS_ResetStop.c)
 *     Usbh_HRS_WaitDone @ 0x14004CD44 (Usbh_HRS_WaitDone.c)
 *     Usbh_HRS_WaitReady @ 0x14004CE3C (Usbh_HRS_WaitReady.c)
 */

__int64 __fastcall UsbhDispatch_HardResetEvent(__int64 a1, __int64 a2, int a3)
{
  __int64 v3; // rbx
  _DWORD *v6; // r14
  __int64 v7; // rbp
  __int64 v8; // r9
  KIRQL v9; // r10
  KIRQL v10; // r10

  v3 = a3;
  v6 = FdoExt(a1);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_d(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      19,
      (__int64)&WPP_ba2e62575cae3d6a8bb98b5a8ed3568a_Traceguids,
      v3);
  KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)v6 + 350);
  v7 = (int)v6[702];
  Log(a1, 16, 1381200433, v7, v3);
  if ( ((_DWORD)v3 == 3 || (_DWORD)v3 == 9) && (_DWORD)v7 == 3 )
  {
    if ( *((_BYTE *)v6 + 5268) )
    {
      _InterlockedIncrement(v6 + 1315);
      UsbhIncrementConcurrentResetCounter(a1);
    }
    Log(a1, 16, 1381200434, v7, v3);
    KeReleaseSpinLock((PKSPIN_LOCK)v6 + 350, v9);
    return (unsigned int)v7;
  }
  Log(a1, 16, 1381200435, v8, v3);
  KeReleaseSpinLock((PKSPIN_LOCK)v6 + 350, v10);
  Log(a1, 16, 1920150315, a2, v3);
  v7 = (int)UsbhAcquireResetLock(a1, a2, (unsigned int)v3);
  Log(a1, 16, 1920150829, a2, v7);
  switch ( (_DWORD)v7 )
  {
    case 1:
      return Usbh_HRS_Disabled(a2, (unsigned int)v3);
    case 2:
      return Usbh_HRS_WaitReady(a2, (unsigned int)v3);
    case 3:
      return Usbh_HRS_Queued(a2, (unsigned int)v3);
    case 4:
      return Usbh_HRS_ResetStop(a2, (unsigned int)v3);
    case 5:
      return Usbh_HRS_WaitDone(a2, (unsigned int)v3);
    case 6:
      return Usbh_HRS_Paused(a2, (unsigned int)v3);
  }
  if ( (_DWORD)v7 != 7 )
  {
    UsbhReleaseResetLock(a1, a2, (unsigned int)v7);
    return (unsigned int)v7;
  }
  return Usbh_HRS_PausedWaitDone(a2, (unsigned int)v3);
}
