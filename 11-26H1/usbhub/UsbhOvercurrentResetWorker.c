/*
 * XREFs of UsbhOvercurrentResetWorker @ 0x14003FA80
 * Callers:
 *     UsbhAutoOvercurrentResetWorker @ 0x14003F880 (UsbhAutoOvercurrentResetWorker.c)
 *     UsbhWmiResetOvercurrent @ 0x140056640 (UsbhWmiResetOvercurrent.c)
 * Callees:
 *     Log @ 0x140009B80 (Log.c)
 *     UsbhWait @ 0x14000C584 (UsbhWait.c)
 *     UsbhPCE_Enable @ 0x140013680 (UsbhPCE_Enable.c)
 *     UsbhPCE_Resume @ 0x140013878 (UsbhPCE_Resume.c)
 *     Usb_Disconnected @ 0x140013CE4 (Usb_Disconnected.c)
 *     UsbhGetPortData @ 0x1400186A0 (UsbhGetPortData.c)
 *     FdoExt @ 0x1400196E0 (FdoExt.c)
 *     UsbhQueryPortState @ 0x1400199F0 (UsbhQueryPortState.c)
 *     UsbhDispatch_HardResetEvent @ 0x140037850 (UsbhDispatch_HardResetEvent.c)
 *     UsbhSetPortPower @ 0x14003DD14 (UsbhSetPortPower.c)
 *     UsbhDispatch_PindicatorEvent @ 0x14003EE00 (UsbhDispatch_PindicatorEvent.c)
 *     Usbh_OvercurrentDerefHubBusy @ 0x14003FFD0 (Usbh_OvercurrentDerefHubBusy.c)
 *     UsbhPCE_BusDisconnect @ 0x140043A00 (UsbhPCE_BusDisconnect.c)
 *     UsbhQueueSoftConnectChange @ 0x1400443D0 (UsbhQueueSoftConnectChange.c)
 */

__int64 __fastcall UsbhOvercurrentResetWorker(__int64 a1, unsigned int a2, __int64 a3, char a4)
{
  __int64 v5; // rbx
  __int64 v8; // rsi
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 PortData; // r14
  __int64 v12; // r15
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rax
  __int64 v16; // rbx
  int v17; // r10d
  __int64 v18; // r9
  int v19; // eax
  __int64 v20; // r8
  __int64 v21; // r10
  int v22; // r11d
  __int64 v23; // r10
  int v24; // r11d
  __int64 v25; // r9
  __int64 v27; // [rsp+20h] [rbp-48h]
  int v28; // [rsp+78h] [rbp+10h] BYREF
  int v29; // [rsp+80h] [rbp+18h] BYREF

  v5 = a2;
  v28 = 0;
  FdoExt(a1);
  v8 = (unsigned __int16)v5;
  PortData = UsbhGetPortData(a1, (unsigned __int16)v5, v9, v10);
  v12 = (unsigned int)v5;
  Log(a1, 0x4000, 1870033495, a3, v5);
  UsbhWait(a1, 0x1F4u);
  Log(a1, 0x4000, 1870016848, a3, (unsigned __int16)v5);
  v15 = UsbhGetPortData(a1, (unsigned __int16)v5, v13, v14);
  if ( v15 )
    UsbhDispatch_PindicatorEvent(a1, v15, 3, a3);
  UsbhPCE_BusDisconnect(a1, a3, (unsigned __int16)v5);
  v27 = (unsigned __int16)v5;
  v16 = (int)UsbhSetPortPower(a1, v5);
  Log(a1, 0x4000, 1870017104, v16, v27);
  if ( v17 < 0 )
  {
    if ( !Usb_Disconnected(v17) )
    {
      Log(a1, 0x4000, 1870017569, a3, v12);
      UsbhDispatch_HardResetEvent(a1, a3, 3);
    }
  }
  else
  {
    UsbhWait(a1, dword_1400705F4);
    UsbhPCE_Resume(a1, a3, (unsigned __int16)v8, v18);
    Log(a1, 0x4000, 1870025299, v16, v8);
    v19 = UsbhQueryPortState(a1, v8, (__int64)&v28, &v29);
    if ( !Usb_Disconnected(v19) )
    {
      Log(a1, 16, 1870017616, (unsigned __int16)v28, HIWORD(v28));
      Log(a1, v22, 1870017582, v21, v8);
      if ( (int)v23 >= 0 && (v28 & 1) != 0 && (v28 & 0x10000) == 0 )
      {
        Log(a1, v24, 1870017872, v8, v23);
        UsbhQueueSoftConnectChange(a1, (unsigned __int16)v8, a3, 0LL);
      }
      *(_DWORD *)(PortData + 2404) = 0;
      Log(a1, 0x4000, 1870017381, a3, v8);
      UsbhPCE_Enable(a1, a3, (unsigned __int16)v8, v25);
    }
  }
  LOBYTE(v20) = a4;
  return Usbh_OvercurrentDerefHubBusy(a1, PortData, v20);
}
