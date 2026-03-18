/*
 * XREFs of UsbhFdoPower_PowerFailureEntry @ 0x14002A47C
 * Callers:
 *     UsbhFdoS0IoComplete_Action @ 0x14002A080 (UsbhFdoS0IoComplete_Action.c)
 *     UsbhFdoD0PoComplete_Action @ 0x14004A3D0 (UsbhFdoD0PoComplete_Action.c)
 *     UsbhFdoSxIoComplete_Action @ 0x14004B3D0 (UsbhFdoSxIoComplete_Action.c)
 * Callees:
 *     UsbhDisarmHubForWakeDetect @ 0x140007684 (UsbhDisarmHubForWakeDetect.c)
 *     Log @ 0x140009B80 (Log.c)
 *     Usb_Disconnected @ 0x140013CE4 (Usb_Disconnected.c)
 *     FdoExt @ 0x1400196E0 (FdoExt.c)
 *     UsbhException @ 0x14001B7DC (UsbhException.c)
 *     UsbhReleaseFdoPwrLock @ 0x14002B05C (UsbhReleaseFdoPwrLock.c)
 *     UsbhSetFdoPowerState @ 0x14002B0B8 (UsbhSetFdoPowerState.c)
 *     UsbhFdoUnblockAllPendedPdoD0Irps @ 0x14002B710 (UsbhFdoUnblockAllPendedPdoD0Irps.c)
 *     UsbhBusIoInvalidateDeviceRelations @ 0x1400333B4 (UsbhBusIoInvalidateDeviceRelations.c)
 *     UsbhReleasePowerContext @ 0x140039970 (UsbhReleasePowerContext.c)
 */

void __fastcall UsbhFdoPower_PowerFailureEntry(__int64 a1, unsigned int a2, int a3, __int64 a4)
{
  __int64 v5; // rsi
  _DWORD *v7; // rbx
  bool v8; // al
  __int64 v9; // r8
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  unsigned int v13; // [rsp+68h] [rbp+10h] BYREF

  v13 = a2;
  v5 = a3;
  v7 = FdoExt(a1);
  UsbhException(a1, 0, 85, &v13, 4u, v5, 0, usbfile_fdopwr_c, 1027, 0);
  v7[315] = v5;
  v8 = Usb_Disconnected(v5);
  v9 = 213LL;
  if ( !v8 )
    v9 = 212LL;
  UsbhSetFdoPowerState(a1, (unsigned int)v5, v9, v13);
  Log(a1, 16, 1934645025, v5, 0LL);
  UsbhFdoUnblockAllPendedPdoD0Irps(a1);
  UsbhReleaseFdoPwrLock(a1, *(_QWORD *)(a4 + 72));
  UsbhBusIoInvalidateDeviceRelations(a1, *(_QWORD *)(a4 + 72));
  UsbhReleasePowerContext(a1, a4);
  UsbhDisarmHubForWakeDetect(a1, v10, v11, v12);
}
