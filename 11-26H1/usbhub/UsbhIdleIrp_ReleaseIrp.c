/*
 * XREFs of UsbhIdleIrp_ReleaseIrp @ 0x140013D04
 * Callers:
 *     UsbhIdleIrp_NoIrp @ 0x14000F28C (UsbhIdleIrp_NoIrp.c)
 *     UsbhIdleIrp_Event @ 0x1400152D4 (UsbhIdleIrp_Event.c)
 *     UsbhIdleIrp_CB_Pending @ 0x1400347F0 (UsbhIdleIrp_CB_Pending.c)
 *     UsbhIdleExIrp_IdleReady @ 0x14005E288 (UsbhIdleExIrp_IdleReady.c)
 *     UsbhIdleIrp_CB_Canceled @ 0x14005E40C (UsbhIdleIrp_CB_Canceled.c)
 *     UsbhIdleIrp_WaitWorker @ 0x14005E508 (UsbhIdleIrp_WaitWorker.c)
 * Callees:
 *     UsbhDecPdoIoCount @ 0x140007EA0 (UsbhDecPdoIoCount.c)
 *     Log @ 0x140009B80 (Log.c)
 *     UsbhEtwLogDeviceIrpEvent @ 0x14000F910 (UsbhEtwLogDeviceIrpEvent.c)
 *     UsbhClearPdoIdleReady @ 0x140011788 (UsbhClearPdoIdleReady.c)
 *     PdoExt @ 0x140016350 (PdoExt.c)
 *     WPP_RECORDER_SF_dqqD @ 0x14005E6DC (WPP_RECORDER_SF_dqqD.c)
 */

__int64 __fastcall UsbhIdleIrp_ReleaseIrp(__int64 a1, ULONG_PTR a2, IRP *a3, unsigned int a4)
{
  __int64 v8; // r9
  int v9; // r10d
  __int64 v10; // rbp
  int v11; // r8d
  int v12; // r9d
  int v14; // [rsp+20h] [rbp-48h]

  Log(a1, 0x10000, 1936933744, (int)a4, (__int64)a3);
  if ( a3 )
  {
    v10 = PdoExt(a2);
    UsbhClearPdoIdleReady(a1, a2, (__int64)a3);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_dqqD(
        WPP_GLOBAL_Control->DeviceExtension,
        *(unsigned __int16 *)(v10 + 1428),
        v11,
        v12,
        v14,
        *(_WORD *)(v10 + 1428),
        a2,
        (char)a3,
        a4);
    UsbhEtwLogDeviceIrpEvent(v10, (__int64)a3, &USBHUB_ETW_EVENT_DEVICE_IDLE_NOTIFICATION_COMPLETE, a4);
    a3->IoStatus.Status = a4;
    IofCompleteRequest(a3, 0);
    UsbhDecPdoIoCount(a2, (ULONG_PTR)a3);
  }
  else
  {
    Log(a1, v9, 1936933680, v8, 0LL);
  }
  return a4;
}
