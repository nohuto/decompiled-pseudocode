/*
 * XREFs of WPP_IFR_SF_sl @ 0x140092B54
 * Callers:
 *     imp_WdfVerifierDbgBreakPoint @ 0x140092D20 (imp_WdfVerifierDbgBreakPoint.c)
 * Callees:
 *     FxIFR @ 0x140032A50 (FxIFR.c)
 *     FxWmiTraceMessage @ 0x140056738 (FxWmiTraceMessage.c)
 */

void __fastcall WPP_IFR_SF_sl(
        _FX_DRIVER_GLOBALS *globals,
        unsigned __int8 _a1,
        unsigned int _a2,
        unsigned __int16 a4,
        const _GUID *level,
        const char *flags,
        int id)
{
  const char *v7; // rbx
  __int64 v8; // rdi
  __int64 v10; // rsi
  __int64 v11; // rax
  __int64 v12; // rcx
  const char *v13; // rax
  bool v14; // zf

  v7 = flags;
  v8 = -1LL;
  v10 = 5LL;
  if ( (WPP_GLOBAL_WDF_Control.Characteristics & 0x10000) != 0 && BYTE1(WPP_GLOBAL_WDF_Control.Flags) >= 3u )
  {
    if ( flags )
    {
      v11 = -1LL;
      do
        ++v11;
      while ( flags[v11] );
      v12 = v11 + 1;
    }
    else
    {
      v12 = 5LL;
    }
    v13 = flags;
    if ( !flags )
      v13 = "NULL";
    FxWmiTraceMessage(
      (unsigned __int64)WPP_GLOBAL_WDF_Control.CurrentIrp,
      43LL,
      WPP_VerifierAPI_cpp_Traceguids,
      0xAu,
      v13,
      v12,
      &id,
      4LL,
      0LL);
  }
  v14 = flags == 0LL;
  if ( flags )
  {
    do
      ++v8;
    while ( flags[v8] );
    v10 = v8 + 1;
    v14 = flags == 0LL;
  }
  if ( v14 )
    v7 = "NULL";
  FxIFR(globals, 3u, 0x11u, WPP_VerifierAPI_cpp_Traceguids, 0xAu, v7, v10, &id, 4LL, 0LL);
}
