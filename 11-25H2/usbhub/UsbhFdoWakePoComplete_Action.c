/*
 * XREFs of UsbhFdoWakePoComplete_Action @ 0x140030460
 * Callers:
 *     <none>
 * Callees:
 *     FdoExt @ 0x140009560 (FdoExt.c)
 *     GET_FDO_POWER_STATE @ 0x14000DD54 (GET_FDO_POWER_STATE.c)
 *     Log @ 0x14001C5D0 (Log.c)
 *     UsbhAcquireFdoPwrLock @ 0x1400316B0 (UsbhAcquireFdoPwrLock.c)
 *     UsbhReleaseFdoPwrLock @ 0x14003173C (UsbhReleaseFdoPwrLock.c)
 *     UsbhSetFdoPowerState @ 0x140031794 (UsbhSetFdoPowerState.c)
 *     UsbhQueueWorkItemEx @ 0x140032140 (UsbhQueueWorkItemEx.c)
 *     WPP_RECORDER_SF_ @ 0x14003E860 (WPP_RECORDER_SF_.c)
 */

void __fastcall UsbhFdoWakePoComplete_Action(
        __int64 DeviceObject,
        UCHAR MinorFunction,
        POWER_STATE PowerState,
        PVOID Context,
        PIO_STATUS_BLOCK IoStatus)
{
  struct _KEVENT *v6; // rdi
  _DWORD *v7; // rax
  __int64 v8; // rsi
  unsigned int Status; // r14d
  unsigned int v10; // eax
  unsigned int v11; // eax

  v6 = (struct _KEVENT *)FdoExt(DeviceObject);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      13,
      (__int64)&WPP_a1eb007e7448359bd872fcf3001d4cf6_Traceguids);
  v7 = FdoExt(DeviceObject);
  v6[203].Header.WaitListHead.Blink = 0LL;
  HIDWORD(v6[203].Header.WaitListHead.Flink) = 1;
  v8 = (__int64)(v7 + 346);
  UsbhAcquireFdoPwrLock(DeviceObject, v7 + 346, 122LL, 829120887LL);
  Status = IoStatus->Status;
  if ( IoStatus->Status >= 0 )
  {
    Log(DeviceObject, 16, 1750548811, 0LL, 0LL);
    LODWORD(v6[106].Header.WaitListHead.Blink) |= 0x20000u;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_(
        WPP_GLOBAL_Control->DeviceExtension,
        0,
        1,
        14,
        (__int64)&WPP_a1eb007e7448359bd872fcf3001d4cf6_Traceguids);
    if ( (unsigned int)GET_FDO_POWER_STATE(v8) == 201 )
    {
      v10 = (unsigned int)FdoExt(DeviceObject);
      Status = UsbhQueueWorkItemEx(DeviceObject, 1, (unsigned int)UsbhSShResumeWorker, v10 + 1912, 0, 2001228627, 0LL);
    }
  }
  KeSetEvent(v6 + 204, 0, 0);
  v11 = GET_FDO_POWER_STATE(v8);
  UsbhSetFdoPowerState(DeviceObject, Status, v11);
  UsbhReleaseFdoPwrLock(DeviceObject, v8);
}
