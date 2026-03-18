/*
 * XREFs of UsbhFinishStart @ 0x140046F2C
 * Callers:
 *     UsbhAsyncStartComplete @ 0x14004F6D0 (UsbhAsyncStartComplete.c)
 *     UsbhHubStart @ 0x140050830 (UsbhHubStart.c)
 * Callees:
 *     UsbhException @ 0x140006C1C (UsbhException.c)
 *     UsbhQueryPortState @ 0x140007140 (UsbhQueryPortState.c)
 *     UsbhGetPortData @ 0x140008540 (UsbhGetPortData.c)
 *     FdoExt @ 0x140009560 (FdoExt.c)
 *     Usb_Disconnected @ 0x14000F810 (Usb_Disconnected.c)
 *     Log @ 0x14001C5D0 (Log.c)
 *     UsbhDisablePort @ 0x14001C650 (UsbhDisablePort.c)
 *     UsbhSyncPowerOnPorts @ 0x14002D264 (UsbhSyncPowerOnPorts.c)
 *     UsbhDispatch_HardResetEvent @ 0x1400329CC (UsbhDispatch_HardResetEvent.c)
 *     UsbhLogStartFailure @ 0x14003DDC8 (UsbhLogStartFailure.c)
 *     WPP_RECORDER_SF_ @ 0x14003E860 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x14003E938 (WPP_RECORDER_SF_d.c)
 *     UsbhEnablePortIndicators @ 0x14003F418 (UsbhEnablePortIndicators.c)
 *     UsbhQueueSoftConnectChange @ 0x1400448AC (UsbhQueueSoftConnectChange.c)
 */

__int64 __fastcall UsbhFinishStart(__int64 a1, __int64 a2)
{
  int v4; // edi
  unsigned __int16 i; // si
  int v6; // eax
  __int64 PortData; // rax
  void *Src; // [rsp+28h] [rbp-60h]
  int v10; // [rsp+A0h] [rbp+18h] BYREF
  int v11; // [rsp+A8h] [rbp+20h] BYREF

  Log(a1, 16, 1715622740, a1, 0LL);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      0,
      1u,
      0xCu,
      (__int64)&WPP_e45bf104894738235e8d472f481bb2e2_Traceguids);
  v4 = UsbhSyncPowerOnPorts(a1);
  if ( (v4 & 0xC0000000) == 0xC0000000 )
  {
    UsbhLogStartFailure(a1, v4, 3u, 482LL, (__int64)"onecore\\drivers\\wdm\\usb\\hub\\usbhub\\bus.c", "PowerOnPorts");
  }
  else
  {
    UsbhEnablePortIndicators(a1);
    for ( i = 1; i <= *((unsigned __int8 *)FdoExt(a1) + 2938); ++i )
    {
      v10 = 0;
      v11 = 0;
      v6 = UsbhQueryPortState(a1, i, (__int64)&v10, &v11);
      v4 = v6;
      if ( (v6 & 0xC0000000) == 0xC0000000 )
      {
        Log(a1, 16, 1768843569, i + 1LL, v6);
        if ( !Usb_Disconnected(v4) )
          UsbhException(a1, i, 23, 0LL, 0, v4, v11, usbfile_bus_c, 511, 0);
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
        {
          LODWORD(Src) = v4;
          WPP_RECORDER_SF_d(
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            0,
            1u,
            0xDu,
            (__int64)&WPP_e45bf104894738235e8d472f481bb2e2_Traceguids,
            Src);
        }
        break;
      }
      if ( (v10 & 1) != 0 && (v10 & 0x10000) == 0 )
      {
        Log(a1, 16, 1768843570, i, v6);
        if ( (v10 & 2) != 0 )
        {
          PortData = UsbhGetPortData(a1, i);
          if ( PortData )
            UsbhDisablePort(a1, PortData);
        }
        UsbhQueueSoftConnectChange(a1, i, a2, 0);
      }
    }
  }
  if ( v4 >= 0 )
  {
    Log(a1, 8, 1381192747, 0LL, 0LL);
    UsbhDispatch_HardResetEvent(a1, a2, 1);
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LODWORD(Src) = v4;
    WPP_RECORDER_SF_d(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      0,
      1u,
      0xEu,
      (__int64)&WPP_e45bf104894738235e8d472f481bb2e2_Traceguids,
      Src);
  }
  Log(a1, 16, 1718514515, a1, v4);
  return (unsigned int)v4;
}
