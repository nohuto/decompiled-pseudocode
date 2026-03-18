/*
 * XREFs of UsbhFdoWakePoComplete_Action @ 0x140029C80
 * Callers:
 *     <none>
 * Callees:
 *     Log @ 0x140009B80 (Log.c)
 *     GET_FDO_POWER_STATE @ 0x140012D8C (GET_FDO_POWER_STATE.c)
 *     FdoExt @ 0x1400196E0 (FdoExt.c)
 *     UsbhAcquireFdoPwrLock @ 0x14002AFD0 (UsbhAcquireFdoPwrLock.c)
 *     UsbhReleaseFdoPwrLock @ 0x14002B05C (UsbhReleaseFdoPwrLock.c)
 *     UsbhSetFdoPowerState @ 0x14002B0B8 (UsbhSetFdoPowerState.c)
 *     UsbhQueueWorkItemEx @ 0x14002C4D0 (UsbhQueueWorkItemEx.c)
 *     WPP_RECORDER_SF_ @ 0x14003E310 (WPP_RECORDER_SF_.c)
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
  unsigned int v8; // ebp
  __int64 v9; // rsi
  unsigned int Status; // r14d
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  unsigned int v14; // eax
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // r9
  unsigned int v18; // eax

  v6 = (struct _KEVENT *)FdoExt(DeviceObject);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      13,
      (__int64)&WPP_a1eb007e7448359bd872fcf3001d4cf6_Traceguids);
  v7 = FdoExt(DeviceObject);
  v8 = 122;
  v6[203].Header.WaitListHead.Blink = 0LL;
  HIDWORD(v6[203].Header.WaitListHead.Flink) = 1;
  v9 = (__int64)(v7 + 346);
  UsbhAcquireFdoPwrLock(DeviceObject, v7 + 346, 122LL, 829120887LL);
  Status = IoStatus->Status;
  if ( IoStatus->Status < 0 )
  {
    KeSetEvent(v6 + 204, 0, 0);
    v8 = 125;
  }
  else
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
    if ( (unsigned int)GET_FDO_POWER_STATE(v9, v11, v12, v13) == 201 )
    {
      v14 = (unsigned int)FdoExt(DeviceObject);
      Status = UsbhQueueWorkItemEx(DeviceObject, 1, (unsigned int)UsbhSShResumeWorker, v14 + 1912, 0, 2001228627, 0LL);
    }
    KeSetEvent(v6 + 204, 0, 0);
  }
  v18 = GET_FDO_POWER_STATE(v9, v15, v16, v17);
  UsbhSetFdoPowerState(DeviceObject, Status, v18, v8);
  UsbhReleaseFdoPwrLock(DeviceObject, v9);
}
