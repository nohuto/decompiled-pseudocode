/*
 * XREFs of WPP_IFR_SF_s @ 0x14008D908
 * Callers:
 *     ?FxIFRCreateSnapshot@@YAPEAU_WDF_IFR_HEADER@@PEBDPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x14008CE58 (-FxIFRCreateSnapshot@@YAPEAU_WDF_IFR_HEADER@@PEBDPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?FxIFRReplay@@YAX_K@Z @ 0x14008D21C (-FxIFRReplay@@YAX_K@Z.c)
 * Callees:
 *     FxIFR @ 0x140032A50 (FxIFR.c)
 *     FxWmiTraceMessage @ 0x140056738 (FxWmiTraceMessage.c)
 */

void __fastcall WPP_IFR_SF_s(
        _FX_DRIVER_GLOBALS *globals,
        unsigned __int8 level,
        unsigned int id,
        unsigned __int16 _a1,
        const _GUID *globals_0,
        const char *level_0)
{
  const char *v6; // rbx
  __int64 v7; // rdi
  __int64 v11; // rsi
  __int64 v12; // rax
  __int64 v13; // rcx
  const char *v14; // rax
  bool v15; // zf

  v6 = level_0;
  v7 = -1LL;
  v11 = 5LL;
  if ( (WPP_GLOBAL_WDF_Control.Characteristics & 0x200000) != 0 && BYTE1(WPP_GLOBAL_WDF_Control.Flags) >= level )
  {
    if ( level_0 )
    {
      v12 = -1LL;
      do
        ++v12;
      while ( level_0[v12] );
      v13 = v12 + 1;
    }
    else
    {
      v13 = 5LL;
    }
    v14 = level_0;
    if ( !level_0 )
      v14 = "NULL";
    FxWmiTraceMessage(
      (unsigned __int64)WPP_GLOBAL_WDF_Control.CurrentIrp,
      43LL,
      WPP_TracingIfrReplay_cpp_Traceguids,
      _a1,
      v14,
      v13,
      0LL);
  }
  v15 = level_0 == 0LL;
  if ( level_0 )
  {
    do
      ++v7;
    while ( level_0[v7] );
    v11 = v7 + 1;
    v15 = level_0 == 0LL;
  }
  if ( v15 )
    v6 = "NULL";
  FxIFR(globals, level, 0x16u, WPP_TracingIfrReplay_cpp_Traceguids, _a1, v6, v11, 0LL);
}
