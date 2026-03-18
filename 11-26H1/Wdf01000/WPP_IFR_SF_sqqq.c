/*
 * XREFs of WPP_IFR_SF_sqqq @ 0x140098080
 * Callers:
 *     ?UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEBDW4FxTagRefType@@K@Z @ 0x1400205B8 (-UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEBDW4FxTagRefType@@K@Z.c)
 * Callees:
 *     FxIFR @ 0x140032A50 (FxIFR.c)
 *     FxWmiTraceMessage @ 0x140056738 (FxWmiTraceMessage.c)
 */

void __fastcall WPP_IFR_SF_sqqq(
        _FX_DRIVER_GLOBALS *globals,
        unsigned __int8 _a1,
        unsigned int _a2,
        unsigned __int16 _a3,
        const _GUID *_a4,
        const char *globals_0,
        const void *level,
        const void *flags,
        const void *id)
{
  const char *v9; // rbx
  __int64 v10; // rdi
  __int64 v12; // rsi
  __int64 v13; // rax
  __int64 v14; // rcx
  const char *v15; // rax
  bool v16; // zf

  v9 = globals_0;
  v10 = -1LL;
  v12 = 5LL;
  if ( (WPP_GLOBAL_WDF_Control.Characteristics & 0x20000) != 0 && BYTE1(WPP_GLOBAL_WDF_Control.Flags) >= 2u )
  {
    if ( globals_0 )
    {
      v13 = -1LL;
      do
        ++v13;
      while ( globals_0[v13] );
      v14 = v13 + 1;
    }
    else
    {
      v14 = 5LL;
    }
    v15 = globals_0;
    if ( !globals_0 )
      v15 = "NULL";
    FxWmiTraceMessage(
      (unsigned __int64)WPP_GLOBAL_WDF_Control.CurrentIrp,
      43LL,
      WPP_fxtagtracker_cpp_Traceguids,
      0xAu,
      v15,
      v14,
      &level,
      8LL,
      &flags,
      8LL,
      &id,
      8LL,
      0LL);
  }
  v16 = globals_0 == 0LL;
  if ( globals_0 )
  {
    do
      ++v10;
    while ( globals_0[v10] );
    v12 = v10 + 1;
    v16 = globals_0 == 0LL;
  }
  if ( v16 )
    v9 = "NULL";
  FxIFR(globals, 2u, 0x12u, WPP_fxtagtracker_cpp_Traceguids, 0xAu, v9, v12, &level, 8LL, &flags, 8LL, &id, 8LL, 0LL);
}
