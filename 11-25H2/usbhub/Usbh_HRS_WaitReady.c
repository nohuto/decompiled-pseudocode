/*
 * XREFs of Usbh_HRS_WaitReady @ 0x14004D268
 * Callers:
 *     UsbhDispatch_HardResetEvent @ 0x1400329CC (UsbhDispatch_HardResetEvent.c)
 * Callees:
 *     FdoExt @ 0x140009560 (FdoExt.c)
 *     Log @ 0x14001C5D0 (Log.c)
 *     UsbhReleaseResetLock @ 0x14003A56C (UsbhReleaseResetLock.c)
 *     WPP_RECORDER_SF_d @ 0x14003E938 (WPP_RECORDER_SF_d.c)
 *     UsbhResetNotifyDownstreamHub @ 0x140051194 (UsbhResetNotifyDownstreamHub.c)
 */

__int64 __fastcall Usbh_HRS_WaitReady(__int64 a1, int a2)
{
  __int64 v3; // rbx
  _DWORD *v4; // rbp
  unsigned int v5; // edi
  int v6; // ebx
  int v7; // ebx
  int v8; // ebx

  v3 = a2;
  v4 = FdoExt(*(_QWORD *)(a1 + 8));
  FdoExt(*(_QWORD *)(a1 + 8));
  v5 = *(_DWORD *)(a1 + 68);
  Log(*(_QWORD *)(a1 + 8), 16, 1651722574, a1, v3);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_d(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      0,
      1u,
      0xDu,
      (__int64)&WPP_ba2e62575cae3d6a8bb98b5a8ed3568a_Traceguids,
      v3);
  v6 = v3 - 2;
  if ( v6 )
  {
    v7 = v6 - 1;
    if ( v7 )
    {
      v8 = v7 - 6;
      if ( v8 )
      {
        if ( v8 == 1 )
          v5 = 6;
      }
      else
      {
        v5 = 2;
      }
    }
    else
    {
      KeResetEvent((PRKEVENT)(v4 + 712));
      UsbhResetNotifyDownstreamHub(*(_QWORD *)(a1 + 8));
      IoQueueWorkItem(*((PIO_WORKITEM *)v4 + 148), (PIO_WORKITEM_ROUTINE)UsbhHardResetWorker, DelayedWorkQueue, 0LL);
      v5 = 3;
    }
  }
  else
  {
    v5 = 1;
  }
  return UsbhReleaseResetLock(*(_QWORD *)(a1 + 8), a1, v5);
}
