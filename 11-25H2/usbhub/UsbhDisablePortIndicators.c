/*
 * XREFs of UsbhDisablePortIndicators @ 0x1400010C0
 * Callers:
 *     UsbhBusPnpStop_Action @ 0x140001FCC (UsbhBusPnpStop_Action.c)
 * Callees:
 *     UsbhGetPortData @ 0x140008540 (UsbhGetPortData.c)
 *     FdoExt @ 0x140009560 (FdoExt.c)
 *     WPP_RECORDER_SF_ @ 0x14003E860 (WPP_RECORDER_SF_.c)
 *     UsbhDispatch_PindicatorEvent @ 0x14003F318 (UsbhDispatch_PindicatorEvent.c)
 */

__int64 __fastcall UsbhDisablePortIndicators(__int64 a1)
{
  unsigned __int16 v2; // di
  __int64 result; // rax
  __int64 PortData; // rsi
  __int64 v5; // rax

  ((void (*)(void))FdoExt)();
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      14,
      (__int64)&WPP_346fba89075f3ddfe8308178e462e0c2_Traceguids);
  v2 = 1;
  result = FdoExt(a1);
  if ( *(_BYTE *)(result + 2938) )
  {
    do
    {
      PortData = UsbhGetPortData(a1, v2);
      if ( PortData )
      {
        v5 = FdoExt(a1);
        UsbhDispatch_PindicatorEvent(a1, PortData, 2LL, v5 + 1384);
      }
      ++v2;
      result = FdoExt(a1);
    }
    while ( v2 <= *(unsigned __int8 *)(result + 2938) );
  }
  return result;
}
