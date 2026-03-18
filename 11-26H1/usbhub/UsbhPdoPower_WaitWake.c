/*
 * XREFs of UsbhPdoPower_WaitWake @ 0x14000F7A0
 * Callers:
 *     UsbhPdoPower @ 0x140033830 (UsbhPdoPower.c)
 *     UsbhPdoPowerWorkerInternal @ 0x14003404C (UsbhPdoPowerWorkerInternal.c)
 * Callees:
 *     UsbhDecPdoIoCount @ 0x140007EA0 (UsbhDecPdoIoCount.c)
 *     Log @ 0x140009B80 (Log.c)
 *     UsbhIncPdoIoCount @ 0x14000EA40 (UsbhIncPdoIoCount.c)
 *     UsbhEtwLogDeviceIrpEvent @ 0x14000F910 (UsbhEtwLogDeviceIrpEvent.c)
 *     PdoExt @ 0x140016350 (PdoExt.c)
 *     FdoExt @ 0x1400196E0 (FdoExt.c)
 */

__int64 __fastcall UsbhPdoPower_WaitWake(ULONG_PTR BugCheckParameter3, IRP *BugCheckParameter4)
{
  __int64 v4; // rdi
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9
  signed __int32 v8; // r14d
  unsigned int v9; // esi

  v4 = PdoExt(BugCheckParameter3);
  FdoExt(*(_QWORD *)(v4 + 1184), v5, v6, v7);
  UsbhEtwLogDeviceIrpEvent(v4, 0LL, &USBHUB_ETW_EVENT_DEVICE_WAIT_WAKE_DISPATCH, 0LL);
  v8 = _InterlockedIncrement((volatile signed __int32 *)(v4 + 2352));
  v9 = UsbhIncPdoIoCount(BugCheckParameter3, (__int64)BugCheckParameter4, 2004308036, 0);
  if ( (v9 & 0xC0000000) == 0xC0000000 )
  {
    UsbhEtwLogDeviceIrpEvent(v4, 0LL, &USBHUB_ETW_EVENT_DEVICE_WAIT_WAKE_COMPLETE, v9);
    BugCheckParameter4->IoStatus.Status = v9;
    IofCompleteRequest(BugCheckParameter4, 0);
LABEL_3:
    _InterlockedDecrement((volatile signed __int32 *)(v4 + 2352));
    return v9;
  }
  if ( (*(_DWORD *)(v4 + 1420) & 0x100) == 0 )
  {
    v9 = -1073741637;
LABEL_8:
    UsbhEtwLogDeviceIrpEvent(v4, 0LL, &USBHUB_ETW_EVENT_DEVICE_WAIT_WAKE_COMPLETE, v9);
    BugCheckParameter4->IoStatus.Status = v9;
    IofCompleteRequest(BugCheckParameter4, 0);
    UsbhDecPdoIoCount(BugCheckParameter3, (ULONG_PTR)BugCheckParameter4);
    goto LABEL_3;
  }
  if ( v8 )
  {
    v9 = -2147483631;
    goto LABEL_8;
  }
  BugCheckParameter4->Tail.Overlay.CurrentStackLocation->Control |= 1u;
  Log(*(_QWORD *)(v4 + 1184), 16, 2004306249, 0LL, (__int64)BugCheckParameter4);
  IoCsqInsertIrp((PIO_CSQ)(v4 + 2280), BugCheckParameter4, 0LL);
  return 259LL;
}
