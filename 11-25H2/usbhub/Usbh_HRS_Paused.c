/*
 * XREFs of Usbh_HRS_Paused @ 0x14004CB58
 * Callers:
 *     UsbhDispatch_HardResetEvent @ 0x1400329CC (UsbhDispatch_HardResetEvent.c)
 * Callees:
 *     FdoExt @ 0x140009560 (FdoExt.c)
 *     Log @ 0x14001C5D0 (Log.c)
 *     UsbhReleaseResetLock @ 0x14003A56C (UsbhReleaseResetLock.c)
 *     WPP_RECORDER_SF_d @ 0x14003E938 (WPP_RECORDER_SF_d.c)
 */

__int64 __fastcall Usbh_HRS_Paused(__int64 a1, int a2)
{
  __int64 v3; // rbx
  _DWORD *v4; // rsi
  unsigned int v5; // edi
  int v6; // ebx
  int v7; // ebx
  int v8; // ebx
  int v9; // ebx
  int v10; // ebx

  v3 = a2;
  v4 = FdoExt(*(_QWORD *)(a1 + 8));
  FdoExt(*(_QWORD *)(a1 + 8));
  v5 = *(_DWORD *)(a1 + 68);
  Log(*(_QWORD *)(a1 + 8), 16, 1920159827, a1, v3);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_d(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      0,
      1u,
      0xCu,
      (__int64)&WPP_ba2e62575cae3d6a8bb98b5a8ed3568a_Traceguids,
      v3);
  v6 = v3 - 1;
  if ( v6 )
  {
    v7 = v6 - 1;
    if ( !v7 )
    {
      v5 = 1;
      return UsbhReleaseResetLock(*(_QWORD *)(a1 + 8), a1, v5);
    }
    v8 = v7 - 1;
    if ( v8 && (v9 = v8 - 6) != 0 )
    {
      v10 = v9 - 1;
      if ( v10 )
      {
        if ( v10 != 1 )
          return UsbhReleaseResetLock(*(_QWORD *)(a1 + 8), a1, v5);
        goto LABEL_10;
      }
    }
    else
    {
      v4[640] |= 0x10u;
    }
    v5 = 6;
    return UsbhReleaseResetLock(*(_QWORD *)(a1 + 8), a1, v5);
  }
LABEL_10:
  if ( (v4[640] & 0x10) != 0 )
  {
    KeResetEvent((PRKEVENT)(v4 + 712));
    IoQueueWorkItem(*((PIO_WORKITEM *)v4 + 148), (PIO_WORKITEM_ROUTINE)UsbhHardResetWorker, DelayedWorkQueue, 0LL);
    v5 = 3;
  }
  else
  {
    v5 = 2;
  }
  return UsbhReleaseResetLock(*(_QWORD *)(a1 + 8), a1, v5);
}
