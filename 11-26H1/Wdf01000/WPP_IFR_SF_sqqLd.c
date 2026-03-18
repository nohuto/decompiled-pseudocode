/*
 * XREFs of WPP_IFR_SF_sqqLd @ 0x1400A5074
 * Callers:
 *     ?InvokeCxCallback@FxPnpDeviceD0Entry@@MEAAJPEAVFxCxPnpPowerCallbackContext@@W4FxCxInvokeCallbackSubType@@@Z @ 0x140071120 (-InvokeCxCallback@FxPnpDeviceD0Entry@@MEAAJPEAVFxCxPnpPowerCallbackContext@@W4FxCxInvokeCallback.c)
 *     ?InvokeCxCallback@FxPnpDeviceD0Exit@@MEAAJPEAVFxCxPnpPowerCallbackContext@@W4FxCxInvokeCallbackSubType@@@Z @ 0x140071A90 (-InvokeCxCallback@FxPnpDeviceD0Exit@@MEAAJPEAVFxCxPnpPowerCallbackContext@@W4FxCxInvokeCallbackS.c)
 *     ?InvokeCxCallback@FxPnpDeviceD0EntryPostHwEnabled@@MEAAJPEAVFxCxPnpPowerCallbackContext@@W4FxCxInvokeCallbackSubType@@@Z @ 0x14007B820 (-InvokeCxCallback@FxPnpDeviceD0EntryPostHwEnabled@@MEAAJPEAVFxCxPnpPowerCallbackContext@@W4FxCxI.c)
 *     ?InvokeCxCallback@FxPnpDeviceD0ExitPreHwDisabled@@MEAAJPEAVFxCxPnpPowerCallbackContext@@W4FxCxInvokeCallbackSubType@@@Z @ 0x14007E140 (-InvokeCxCallback@FxPnpDeviceD0ExitPreHwDisabled@@MEAAJPEAVFxCxPnpPowerCallbackContext@@W4FxCxIn.c)
 * Callees:
 *     FxIFR @ 0x140032A50 (FxIFR.c)
 *     FxWmiTraceMessage @ 0x140056738 (FxWmiTraceMessage.c)
 */

void __fastcall WPP_IFR_SF_sqqLd(
        _FX_DRIVER_GLOBALS *globals,
        unsigned __int8 id,
        unsigned int _a1,
        unsigned __int16 _a2,
        const _GUID *_a3,
        const char *_a4,
        const void *_a5,
        const void *globals_0,
        unsigned int level,
        int flags)
{
  const char *v10; // rbx
  __int64 v11; // rdi
  __int64 v14; // rsi
  __int64 v15; // rax
  __int64 v16; // rcx
  const char *v17; // rax
  bool v18; // zf

  v10 = _a4;
  v11 = -1LL;
  v14 = 5LL;
  if ( (WPP_GLOBAL_WDF_Control.Characteristics & 0x800) != 0 && BYTE1(WPP_GLOBAL_WDF_Control.Flags) >= 2u )
  {
    if ( _a4 )
    {
      v15 = -1LL;
      do
        ++v15;
      while ( _a4[v15] );
      v16 = v15 + 1;
    }
    else
    {
      v16 = 5LL;
    }
    v17 = _a4;
    if ( !_a4 )
      v17 = "NULL";
    FxWmiTraceMessage(
      (unsigned __int64)WPP_GLOBAL_WDF_Control.CurrentIrp,
      43LL,
      WPP_PnpCallbacks_cpp_Traceguids,
      _a2,
      v17,
      v16,
      &_a5,
      8LL,
      &globals_0,
      8LL,
      &level,
      4LL,
      &flags,
      4LL,
      0LL);
  }
  v18 = _a4 == 0LL;
  if ( _a4 )
  {
    do
      ++v11;
    while ( _a4[v11] );
    v14 = v11 + 1;
    v18 = _a4 == 0LL;
  }
  if ( v18 )
    v10 = "NULL";
  FxIFR(
    globals,
    2u,
    0xCu,
    WPP_PnpCallbacks_cpp_Traceguids,
    _a2,
    v10,
    v14,
    &_a5,
    8LL,
    &globals_0,
    8LL,
    &level,
    4LL,
    &flags,
    4LL,
    0LL);
}
