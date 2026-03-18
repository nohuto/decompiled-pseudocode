/*
 * XREFs of WPP_IFR_SF_qqsd @ 0x140097EE4
 * Callers:
 *     ?CheckForAbandondedTags@FxTagTracker@@QEAAXXZ @ 0x140082B78 (-CheckForAbandondedTags@FxTagTracker@@QEAAXXZ.c)
 * Callees:
 *     FxIFR @ 0x140032A50 (FxIFR.c)
 *     FxWmiTraceMessage @ 0x140056738 (FxWmiTraceMessage.c)
 */

void __fastcall WPP_IFR_SF_qqsd(
        _FX_DRIVER_GLOBALS *globals,
        unsigned __int8 level,
        unsigned int id,
        unsigned __int16 _a1,
        const _GUID *_a2,
        const void *_a3,
        const void *_a4,
        const char *globals_0,
        int level_0)
{
  const char *v9; // rbx
  __int64 v10; // rdi
  __int64 v14; // rsi
  __int64 v15; // rax
  __int64 v16; // rcx
  const char *v17; // rax
  bool v18; // zf

  v9 = globals_0;
  v10 = -1LL;
  v14 = 5LL;
  if ( (WPP_GLOBAL_WDF_Control.Characteristics & 0x20000) != 0 && BYTE1(WPP_GLOBAL_WDF_Control.Flags) >= level )
  {
    if ( globals_0 )
    {
      v15 = -1LL;
      do
        ++v15;
      while ( globals_0[v15] );
      v16 = v15 + 1;
    }
    else
    {
      v16 = 5LL;
    }
    v17 = globals_0;
    if ( !globals_0 )
      v17 = "NULL";
    FxWmiTraceMessage(
      (unsigned __int64)WPP_GLOBAL_WDF_Control.CurrentIrp,
      43LL,
      WPP_fxtagtracker_cpp_Traceguids,
      _a1,
      &_a3,
      8LL,
      &_a4,
      8LL,
      v17,
      v16,
      &level_0,
      4LL,
      0LL);
  }
  v18 = v9 == 0LL;
  if ( v9 )
  {
    do
      ++v10;
    while ( v9[v10] );
    v14 = v10 + 1;
    v18 = v9 == 0LL;
  }
  if ( v18 )
    v9 = "NULL";
  FxIFR(globals, level, 0x12u, WPP_fxtagtracker_cpp_Traceguids, _a1, &_a3, 8LL, &_a4, 8LL, v9, v14, &level_0, 4LL, 0LL);
}
