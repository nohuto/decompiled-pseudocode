/*
 * XREFs of UsbhDisablePortIndicators @ 0x140038C64
 * Callers:
 *     UsbhBusPnpStop_Action @ 0x140011CAC (UsbhBusPnpStop_Action.c)
 * Callees:
 *     UsbhGetPortData @ 0x1400186A0 (UsbhGetPortData.c)
 *     FdoExt @ 0x1400196E0 (FdoExt.c)
 *     WPP_RECORDER_SF_ @ 0x14003E310 (WPP_RECORDER_SF_.c)
 *     UsbhDispatch_PindicatorEvent @ 0x14003EE00 (UsbhDispatch_PindicatorEvent.c)
 */

_DWORD *__fastcall UsbhDisablePortIndicators(__int64 a1)
{
  unsigned __int16 v2; // di
  _DWORD *result; // rax
  __int64 v4; // r8
  __int64 v5; // r9
  __int64 PortData; // rsi
  _DWORD *v7; // rax

  FdoExt(a1);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      14,
      (__int64)&WPP_346fba89075f3ddfe8308178e462e0c2_Traceguids);
  v2 = 1;
  result = FdoExt(a1);
  if ( *((_BYTE *)result + 2938) )
  {
    do
    {
      PortData = UsbhGetPortData(a1, v2, v4, v5);
      if ( PortData )
      {
        v7 = FdoExt(a1);
        UsbhDispatch_PindicatorEvent(a1, PortData, 2LL, v7 + 346);
      }
      ++v2;
      result = FdoExt(a1);
    }
    while ( v2 <= *((unsigned __int8 *)result + 2938) );
  }
  return result;
}
