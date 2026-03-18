/*
 * XREFs of WPP_IFR_SF_qsd @ 0x140091A58
 * Callers:
 *     imp_WdfDeviceSetPnpCapabilities @ 0x140072F60 (imp_WdfDeviceSetPnpCapabilities.c)
 *     imp_WdfDeviceSetPowerCapabilities @ 0x14007AAE0 (imp_WdfDeviceSetPowerCapabilities.c)
 *     imp_WdfDeviceSetDeviceState @ 0x14007DCF0 (imp_WdfDeviceSetDeviceState.c)
 * Callees:
 *     FxIFR @ 0x140032A50 (FxIFR.c)
 *     FxWmiTraceMessage @ 0x140056738 (FxWmiTraceMessage.c)
 */

void __fastcall WPP_IFR_SF_qsd(
        _FX_DRIVER_GLOBALS *globals,
        unsigned __int8 id,
        unsigned int _a1,
        unsigned __int16 _a2,
        const _GUID *_a3,
        const void *globals_0,
        const char *level,
        int flags)
{
  const char *v8; // rbx
  __int64 v9; // rdi
  __int64 v12; // rsi
  __int64 v13; // rax
  __int64 v14; // rcx
  const char *v15; // rax
  bool v16; // zf

  v8 = level;
  v9 = -1LL;
  v12 = 5LL;
  if ( (WPP_GLOBAL_WDF_Control.Characteristics & 0x20000) != 0 && BYTE1(WPP_GLOBAL_WDF_Control.Flags) >= 2u )
  {
    if ( level )
    {
      v13 = -1LL;
      do
        ++v13;
      while ( level[v13] );
      v14 = v13 + 1;
    }
    else
    {
      v14 = 5LL;
    }
    v15 = level;
    if ( !level )
      v15 = "NULL";
    FxWmiTraceMessage(
      (unsigned __int64)WPP_GLOBAL_WDF_Control.CurrentIrp,
      43LL,
      WPP_FxDeviceApi_cpp_Traceguids,
      _a2,
      &globals_0,
      8LL,
      v15,
      v14,
      &flags,
      4LL,
      0LL);
  }
  v16 = v8 == 0LL;
  if ( v8 )
  {
    do
      ++v9;
    while ( v8[v9] );
    v12 = v9 + 1;
    v16 = v8 == 0LL;
  }
  if ( v16 )
    v8 = "NULL";
  FxIFR(globals, 2u, 0x12u, WPP_FxDeviceApi_cpp_Traceguids, _a2, &globals_0, 8LL, v8, v12, &flags, 4LL, 0LL);
}
