/*
 * XREFs of WPP_IFR_SF_sqqd @ 0x1400A5234
 * Callers:
 *     ?InvokeCxCallback@FxPnpDeviceSelfManagedIoSuspend@@MEAAJPEAVFxCxPnpPowerCallbackContext@@W4FxCxInvokeCallbackSubType@@@Z @ 0x140076B70 (-InvokeCxCallback@FxPnpDeviceSelfManagedIoSuspend@@MEAAJPEAVFxCxPnpPowerCallbackContext@@W4FxCxI.c)
 *     ?InvokeCxCallback@FxPnpDeviceSelfManagedIoRestart@@MEAAJPEAVFxCxPnpPowerCallbackContext@@W4FxCxInvokeCallbackSubType@@@Z @ 0x1400791D0 (-InvokeCxCallback@FxPnpDeviceSelfManagedIoRestart@@MEAAJPEAVFxCxPnpPowerCallbackContext@@W4FxCxI.c)
 *     ?InvokeCxCallback@FxPnpDeviceReleaseHardware@@MEAAJPEAVFxCxPnpPowerCallbackContext@@W4FxCxInvokeCallbackSubType@@@Z @ 0x14007A320 (-InvokeCxCallback@FxPnpDeviceReleaseHardware@@MEAAJPEAVFxCxPnpPowerCallbackContext@@W4FxCxInvoke.c)
 *     ?InvokeCxCallback@FxPowerDeviceArmWakeFromS0@@MEAAJPEAVFxCxPnpPowerCallbackContext@@W4FxCxInvokeCallbackSubType@@@Z @ 0x14007B4F0 (-InvokeCxCallback@FxPowerDeviceArmWakeFromS0@@MEAAJPEAVFxCxPnpPowerCallbackContext@@W4FxCxInvoke.c)
 *     ?InvokeCxCallback@FxPnpDevicePrepareHardware@@MEAAJPEAVFxCxPnpPowerCallbackContext@@W4FxCxInvokeCallbackSubType@@@Z @ 0x1400A4D50 (-InvokeCxCallback@FxPnpDevicePrepareHardware@@MEAAJPEAVFxCxPnpPowerCallbackContext@@W4FxCxInvoke.c)
 *     ?InvokeCxCallback@FxPnpDeviceSelfManagedIoInit@@MEAAJPEAVFxCxPnpPowerCallbackContext@@W4FxCxInvokeCallbackSubType@@@Z @ 0x1400A4E00 (-InvokeCxCallback@FxPnpDeviceSelfManagedIoInit@@MEAAJPEAVFxCxPnpPowerCallbackContext@@W4FxCxInvo.c)
 *     ?InvokeCxCallback@FxPowerDeviceArmWakeFromSx@@MEAAJPEAVFxCxPnpPowerCallbackContext@@W4FxCxInvokeCallbackSubType@@@Z @ 0x1400A4EA0 (-InvokeCxCallback@FxPowerDeviceArmWakeFromSx@@MEAAJPEAVFxCxPnpPowerCallbackContext@@W4FxCxInvoke.c)
 * Callees:
 *     FxIFR @ 0x140032A50 (FxIFR.c)
 *     FxWmiTraceMessage @ 0x140056738 (FxWmiTraceMessage.c)
 */

void __fastcall WPP_IFR_SF_sqqd(
        _FX_DRIVER_GLOBALS *globals,
        unsigned __int8 level,
        unsigned int id,
        unsigned __int16 _a1,
        const _GUID *_a2,
        const char *_a3,
        const void *_a4,
        const void *globals_0,
        int level_0)
{
  const char *v9; // rbx
  __int64 v10; // rdi
  __int64 v14; // rsi
  __int64 v15; // rax
  __int64 v16; // rcx
  const char *v17; // rax
  bool v18; // zf

  v9 = _a3;
  v10 = -1LL;
  v14 = 5LL;
  if ( (WPP_GLOBAL_WDF_Control.Characteristics & 0x800) != 0 && BYTE1(WPP_GLOBAL_WDF_Control.Flags) >= level )
  {
    if ( _a3 )
    {
      v15 = -1LL;
      do
        ++v15;
      while ( _a3[v15] );
      v16 = v15 + 1;
    }
    else
    {
      v16 = 5LL;
    }
    v17 = _a3;
    if ( !_a3 )
      v17 = "NULL";
    FxWmiTraceMessage(
      (unsigned __int64)WPP_GLOBAL_WDF_Control.CurrentIrp,
      43LL,
      WPP_PnpCallbacks_cpp_Traceguids,
      _a1,
      v17,
      v16,
      &_a4,
      8LL,
      &globals_0,
      8LL,
      &level_0,
      4LL,
      0LL);
  }
  v18 = _a3 == 0LL;
  if ( _a3 )
  {
    do
      ++v10;
    while ( _a3[v10] );
    v14 = v10 + 1;
    v18 = _a3 == 0LL;
  }
  if ( v18 )
    v9 = "NULL";
  FxIFR(
    globals,
    level,
    0xCu,
    WPP_PnpCallbacks_cpp_Traceguids,
    _a1,
    v9,
    v14,
    &_a4,
    8LL,
    &globals_0,
    8LL,
    &level_0,
    4LL,
    0LL);
}
