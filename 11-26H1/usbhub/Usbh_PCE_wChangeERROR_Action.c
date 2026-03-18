/*
 * XREFs of Usbh_PCE_wChangeERROR_Action @ 0x140045820
 * Callers:
 *     UsbhDispatch_PortChangeQueueEventEx @ 0x14001E990 (UsbhDispatch_PortChangeQueueEventEx.c)
 * Callees:
 *     UsbhUnlockPcqWithTag @ 0x140001100 (UsbhUnlockPcqWithTag.c)
 *     UsbhLockPcqWithTag @ 0x140002710 (UsbhLockPcqWithTag.c)
 *     Log @ 0x140009B80 (Log.c)
 *     UsbhSignalResumeEvent @ 0x14000BD28 (UsbhSignalResumeEvent.c)
 *     FdoExt @ 0x1400196E0 (FdoExt.c)
 *     UsbhSignalSuspendEvent @ 0x140022970 (UsbhSignalSuspendEvent.c)
 *     WPP_RECORDER_SF_dq @ 0x14003E7C4 (WPP_RECORDER_SF_dq.c)
 *     UsbhSignalSyncDeviceReset @ 0x1400482B8 (UsbhSignalSyncDeviceReset.c)
 */

void __fastcall Usbh_PCE_wChangeERROR_Action(__int64 a1, __int64 a2, __int64 a3, int a4, KIRQL a5, __int64 a6)
{
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r8
  __int64 v13; // r9
  int v14; // [rsp+28h] [rbp-20h]

  a5 = 0;
  FdoExt(a1);
  Log(a1, 512, 842231856, a2, *(unsigned __int16 *)(a2 + 4));
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    v14 = *(unsigned __int16 *)(a2 + 4);
    WPP_RECORDER_SF_dq(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      v10,
      v11,
      0x2Eu,
      (__int64)&WPP_ccf2d5d86ecd3ff97d61dec65be5cc3f_Traceguids,
      v14,
      a3);
  }
  UsbhLockPcqWithTag(a1, a2, 23, &a5, 0);
  UsbhUnlockPcqWithTag(a1, a2, a5, 0);
  if ( (a4 & 0x100000) != 0 )
    UsbhSignalResumeEvent(a1, a2, v12, v13);
  if ( (a4 & 0x40000) != 0 )
    UsbhSignalSuspendEvent(a1, a2);
  if ( (a4 & 0x20000) != 0 )
  {
    Log(a1, 512, 842231857, a6, *(unsigned __int16 *)(a2 + 4));
    UsbhSignalSyncDeviceReset(a1, a6, a2, 3221225486LL);
  }
}
