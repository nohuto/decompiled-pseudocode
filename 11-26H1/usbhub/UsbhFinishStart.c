/*
 * XREFs of UsbhFinishStart @ 0x140046A70
 * Callers:
 *     UsbhAsyncStartComplete @ 0x14004FB94 (UsbhAsyncStartComplete.c)
 *     UsbhHubStart @ 0x140050D10 (UsbhHubStart.c)
 * Callees:
 *     Log @ 0x140009B80 (Log.c)
 *     Usb_Disconnected @ 0x140013CE4 (Usb_Disconnected.c)
 *     UsbhGetPortData @ 0x1400186A0 (UsbhGetPortData.c)
 *     FdoExt @ 0x1400196E0 (FdoExt.c)
 *     UsbhQueryPortState @ 0x1400199F0 (UsbhQueryPortState.c)
 *     UsbhException @ 0x14001B7DC (UsbhException.c)
 *     UsbhDisablePort @ 0x140024098 (UsbhDisablePort.c)
 *     UsbhSyncPowerOnPorts @ 0x140031538 (UsbhSyncPowerOnPorts.c)
 *     UsbhDispatch_HardResetEvent @ 0x140037850 (UsbhDispatch_HardResetEvent.c)
 *     UsbhLogStartFailure @ 0x14003D85C (UsbhLogStartFailure.c)
 *     WPP_RECORDER_SF_ @ 0x14003E310 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x14003E3EC (WPP_RECORDER_SF_d.c)
 *     UsbhEnablePortIndicators @ 0x14003EF00 (UsbhEnablePortIndicators.c)
 *     UsbhQueueSoftConnectChange @ 0x1400443D0 (UsbhQueueSoftConnectChange.c)
 */

__int64 __fastcall UsbhFinishStart(__int64 a1, __int64 a2)
{
  int v4; // edi
  unsigned __int16 i; // si
  int v6; // eax
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 PortData; // rax
  void *Src; // [rsp+28h] [rbp-60h]
  int v12; // [rsp+A0h] [rbp+18h] BYREF
  int v13; // [rsp+A8h] [rbp+20h] BYREF

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
    UsbhLogStartFailure(a1, v4, 3, 482LL, (__int64)"onecore\\drivers\\wdm\\usb\\hub\\usbhub\\bus.c", "PowerOnPorts");
  }
  else
  {
    UsbhEnablePortIndicators(a1);
    for ( i = 1; i <= *((unsigned __int8 *)FdoExt(a1) + 2938); ++i )
    {
      v12 = 0;
      v13 = 0;
      v6 = UsbhQueryPortState(a1, i, (__int64)&v12, &v13);
      v4 = v6;
      if ( (v6 & 0xC0000000) == 0xC0000000 )
      {
        Log(a1, 16, 1768843569, i + 1LL, v6);
        if ( !Usb_Disconnected(v4) )
          UsbhException(a1, i, 23, 0LL, 0, v4, v13, usbfile_bus_c, 511, 0);
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
      if ( (v12 & 1) != 0 && (v12 & 0x10000) == 0 )
      {
        Log(a1, 16, 1768843570, i, v6);
        if ( (v12 & 2) != 0 )
        {
          PortData = UsbhGetPortData(a1, i, v7, v8);
          if ( PortData )
            UsbhDisablePort(a1, PortData);
        }
        UsbhQueueSoftConnectChange(a1, i, a2, 0LL);
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
