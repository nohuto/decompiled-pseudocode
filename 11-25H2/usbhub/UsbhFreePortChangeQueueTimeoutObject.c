/*
 * XREFs of UsbhFreePortChangeQueueTimeoutObject @ 0x140043A1C
 * Callers:
 *     UsbhFreePortChangeQueueObject @ 0x140001AF4 (UsbhFreePortChangeQueueObject.c)
 *     Usbh_PCE_QueueChange_Action @ 0x140026210 (Usbh_PCE_QueueChange_Action.c)
 * Callees:
 *     FdoExt @ 0x140009560 (FdoExt.c)
 *     Log @ 0x14001C5D0 (Log.c)
 *     WPP_RECORDER_SF_d @ 0x14003E938 (WPP_RECORDER_SF_d.c)
 *     Usbh_iSignalSyncDeviceReset @ 0x140049E24 (Usbh_iSignalSyncDeviceReset.c)
 */

void __fastcall UsbhFreePortChangeQueueTimeoutObject(__int64 a1, __int64 a2, void *a3, char a4)
{
  KSPIN_LOCK *v8; // rdi
  KIRQL v9; // al
  KIRQL v10; // bl
  __int64 v11; // rdx
  int v12; // [rsp+28h] [rbp-20h]

  Log(a1, 512, 1718898755, 0LL, *(unsigned __int16 *)(a2 + 4));
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    v12 = *(unsigned __int16 *)(a2 + 4);
    WPP_RECORDER_SF_d(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      0,
      1u,
      0x35u,
      (__int64)&WPP_ccf2d5d86ecd3ff97d61dec65be5cc3f_Traceguids,
      v12);
  }
  v8 = (KSPIN_LOCK *)(FdoExt(a1) + 1236);
  v9 = KeAcquireSpinLockRaiseToDpc(v8);
  *(_QWORD *)(a2 + 680) = 0LL;
  *(_DWORD *)(a2 + 696) = 0;
  v10 = v9;
  KeSetEvent((PRKEVENT)(a2 + 768), 0, 0);
  KeReleaseSpinLock(v8, v10);
  v11 = *(_QWORD *)(a2 + 392);
  if ( v11 && a4 )
    Usbh_iSignalSyncDeviceReset(a1, v11, a2);
  if ( a3 )
    ExFreePoolWithTag(a3, 0);
}
