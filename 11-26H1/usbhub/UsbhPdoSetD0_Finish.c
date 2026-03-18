/*
 * XREFs of UsbhPdoSetD0_Finish @ 0x14004BA84
 * Callers:
 *     UsbhPdoSetD0 @ 0x140016CD0 (UsbhPdoSetD0.c)
 *     UsbhPdoUnblockPendedD0IrpWI @ 0x14004BC70 (UsbhPdoUnblockPendedD0IrpWI.c)
 * Callees:
 *     Log @ 0x140009B80 (Log.c)
 *     Usb_Disconnected @ 0x140013CE4 (Usb_Disconnected.c)
 *     UsbhSet_Pdo_Dx @ 0x14001451C (UsbhSet_Pdo_Dx.c)
 *     PdoExt @ 0x140016350 (PdoExt.c)
 *     FdoExt @ 0x1400196E0 (FdoExt.c)
 *     UsbhException @ 0x14001B7DC (UsbhException.c)
 *     UsbhAcquireFdoPwrLock @ 0x14002AFD0 (UsbhAcquireFdoPwrLock.c)
 *     UsbhReleaseFdoPwrLock @ 0x14002B05C (UsbhReleaseFdoPwrLock.c)
 *     UsbhDisableDeviceForWake @ 0x14002D984 (UsbhDisableDeviceForWake.c)
 *     UsbhSetPdoPowerState @ 0x140034138 (UsbhSetPdoPowerState.c)
 *     WPP_RECORDER_SF_d @ 0x14003E3EC (WPP_RECORDER_SF_d.c)
 */

__int64 __fastcall UsbhPdoSetD0_Finish(KSPIN_LOCK a1, struct _DEVICE_OBJECT *a2, __int64 a3)
{
  _DWORD *v6; // rbp
  _DWORD *v7; // rdi
  POWER_STATE v8; // ebx
  __int64 v9; // r8
  int v10; // edx
  int v11; // edx
  __int64 v13; // [rsp+28h] [rbp-40h]

  v6 = PdoExt((__int64)a2);
  v7 = FdoExt(*(_QWORD *)(a1 + 8));
  v8.SystemState = *(_SYSTEM_POWER_STATE *)(*(_QWORD *)(a3 + 184) + 24LL);
  UsbhAcquireFdoPwrLock(*(_QWORD *)(a1 + 8), a1, 126, 1852401232);
  PdoExt((__int64)a2);
  UsbhSetPdoPowerState(a1, (__int64)a2, v9, 1, 8);
  Log(*(_QWORD *)(a1 + 8), 16, 1884769123, a1, (__int64)a2);
  v6[596] = v7[1054];
  UsbhReleaseFdoPwrLock(*(_QWORD *)(a1 + 8), a1);
  if ( (v6[355] & 0x100) != 0 )
  {
    v10 = UsbhDisableDeviceForWake(*(_QWORD *)(a1 + 8), (__int64)a2);
    if ( (v10 & 0xC0000000) == 0xC0000000 && !Usb_Disconnected(v10) )
      UsbhException(*(_QWORD *)(a1 + 8), *((_WORD *)v6 + 714), 49, 0LL, 0, v11, 0, usbfile_pdopwr_c, 842, 0);
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LODWORD(v13) = *((unsigned __int16 *)v6 + 714);
    WPP_RECORDER_SF_d(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      0,
      1u,
      0xCu,
      (__int64)&WPP_c17b1c85f60233f7ab03bac02008ab80_Traceguids,
      v13);
  }
  UsbhSet_Pdo_Dx(a2, v8);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LODWORD(v13) = *((unsigned __int16 *)v6 + 714);
    WPP_RECORDER_SF_d(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      0,
      1u,
      0xDu,
      (__int64)&WPP_c17b1c85f60233f7ab03bac02008ab80_Traceguids,
      v13);
  }
  return 0LL;
}
