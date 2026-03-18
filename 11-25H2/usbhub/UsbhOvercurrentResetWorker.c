/*
 * XREFs of UsbhOvercurrentResetWorker @ 0x14003FF90
 * Callers:
 *     UsbhAutoOvercurrentResetWorker @ 0x14003FD90 (UsbhAutoOvercurrentResetWorker.c)
 *     UsbhWmiResetOvercurrent @ 0x1400560E0 (UsbhWmiResetOvercurrent.c)
 * Callees:
 *     UsbhQueryPortState @ 0x140007140 (UsbhQueryPortState.c)
 *     UsbhGetPortData @ 0x140008540 (UsbhGetPortData.c)
 *     FdoExt @ 0x140009560 (FdoExt.c)
 *     UsbhPCE_Enable @ 0x14000D168 (UsbhPCE_Enable.c)
 *     UsbhPCE_Resume @ 0x14000D350 (UsbhPCE_Resume.c)
 *     Usb_Disconnected @ 0x14000F810 (Usb_Disconnected.c)
 *     UsbhWait @ 0x140014114 (UsbhWait.c)
 *     Log @ 0x14001C5D0 (Log.c)
 *     UsbhDispatch_HardResetEvent @ 0x1400329CC (UsbhDispatch_HardResetEvent.c)
 *     UsbhSetPortPower @ 0x14003E270 (UsbhSetPortPower.c)
 *     UsbhDispatch_PindicatorEvent @ 0x14003F318 (UsbhDispatch_PindicatorEvent.c)
 *     Usbh_OvercurrentDerefHubBusy @ 0x1400404F0 (Usbh_OvercurrentDerefHubBusy.c)
 *     UsbhPCE_BusDisconnect @ 0x140043EDC (UsbhPCE_BusDisconnect.c)
 *     UsbhQueueSoftConnectChange @ 0x1400448AC (UsbhQueueSoftConnectChange.c)
 */

__int64 __fastcall UsbhOvercurrentResetWorker(__int64 a1, unsigned int a2, __int64 a3, char a4)
{
  __int64 v6; // rsi
  __int64 PortData; // r15
  __int64 v9; // rax
  __int64 v10; // r14
  int v11; // r10d
  int v12; // eax
  __int64 v13; // r8
  __int64 v14; // r10
  int v15; // r11d
  __int64 v16; // r10
  int v17; // r11d
  int v18; // r11d
  int v20; // [rsp+78h] [rbp+10h] BYREF
  int v21; // [rsp+80h] [rbp+18h] BYREF

  v20 = 0;
  v6 = a2;
  FdoExt(a1);
  PortData = UsbhGetPortData(a1, v6);
  Log(a1, 0x4000, 1870033495, a3, v6);
  UsbhWait(a1, 0x1F4u);
  Log(a1, 0x4000, 1870016848, a3, (unsigned __int16)v6);
  v9 = UsbhGetPortData(a1, v6);
  if ( v9 )
    UsbhDispatch_PindicatorEvent(a1, v9, 3, a3);
  UsbhPCE_BusDisconnect(a1, a3, (unsigned __int16)v6);
  v10 = (int)UsbhSetPortPower(a1, v6);
  Log(a1, 0x4000, 1870017104, v10, (unsigned __int16)v6);
  if ( v11 < 0 )
  {
    if ( !Usb_Disconnected(v11) )
    {
      Log(a1, v18, 1870017569, a3, v6);
      UsbhDispatch_HardResetEvent(a1, a3, 3);
    }
  }
  else
  {
    UsbhWait(a1, dword_14006F594);
    UsbhPCE_Resume(a1, a3, v6);
    Log(a1, 0x4000, 1870025299, v10, (unsigned __int16)v6);
    v12 = UsbhQueryPortState(a1, v6, (__int64)&v20, &v21);
    if ( !Usb_Disconnected(v12) )
    {
      Log(a1, 16, 1870017616, (unsigned __int16)v20, HIWORD(v20));
      Log(a1, v15, 1870017582, v14, (unsigned __int16)v6);
      if ( (int)v16 >= 0 && (v20 & 1) != 0 && (v20 & 0x10000) == 0 )
      {
        Log(a1, v17, 1870017872, (unsigned __int16)v6, v16);
        UsbhQueueSoftConnectChange(a1, (unsigned __int16)v6, a3, 0LL);
      }
      *(_DWORD *)(PortData + 2404) = 0;
      Log(a1, 0x4000, 1870017381, a3, (unsigned __int16)v6);
      UsbhPCE_Enable(a1, a3, v6);
    }
  }
  LOBYTE(v13) = a4;
  return Usbh_OvercurrentDerefHubBusy(a1, PortData, v13);
}
