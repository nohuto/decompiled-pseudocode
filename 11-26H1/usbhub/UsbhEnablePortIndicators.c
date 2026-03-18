/*
 * XREFs of UsbhEnablePortIndicators @ 0x14003EF00
 * Callers:
 *     UsbhFinishStart @ 0x140046A70 (UsbhFinishStart.c)
 * Callees:
 *     UsbhGetPortData @ 0x1400186A0 (UsbhGetPortData.c)
 *     FdoExt @ 0x1400196E0 (FdoExt.c)
 *     WPP_RECORDER_SF_ @ 0x14003E310 (WPP_RECORDER_SF_.c)
 *     UsbhDispatch_PindicatorEvent @ 0x14003EE00 (UsbhDispatch_PindicatorEvent.c)
 */

_UNKNOWN **__fastcall UsbhEnablePortIndicators(__int64 a1)
{
  _DWORD *v2; // rdi
  _UNKNOWN **result; // rax
  unsigned __int16 v4; // di
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 PortData; // rsi
  _DWORD *v8; // rax

  v2 = FdoExt(a1);
  result = &WPP_RECORDER_INITIALIZED;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    result = (_UNKNOWN **)WPP_RECORDER_SF_(
                            (__int64)WPP_GLOBAL_Control->DeviceExtension,
                            0,
                            1u,
                            0xDu,
                            (__int64)&WPP_346fba89075f3ddfe8308178e462e0c2_Traceguids);
  if ( *((_BYTE *)v2 + 3008) )
  {
    v4 = 1;
    result = (_UNKNOWN **)FdoExt(a1);
    if ( *((_BYTE *)result + 2938) )
    {
      do
      {
        PortData = UsbhGetPortData(a1, v4, v5, v6);
        if ( PortData )
        {
          v8 = FdoExt(a1);
          UsbhDispatch_PindicatorEvent(a1, PortData, 5, (__int64)(v8 + 346));
        }
        ++v4;
        result = (_UNKNOWN **)FdoExt(a1);
      }
      while ( v4 <= *((unsigned __int8 *)result + 2938) );
    }
  }
  return result;
}
