/*
 * XREFs of WPP_IFR_SF_qDqd @ 0x140080D24
 * Callers:
 *     ?GetMdl@FxRequest@@QEAAJPEAPEAU_MDL@@@Z @ 0x140008F68 (-GetMdl@FxRequest@@QEAAJPEAPEAU_MDL@@@Z.c)
 * Callees:
 *     FxIFR @ 0x140032A50 (FxIFR.c)
 *     FxWmiTraceMessage @ 0x140056738 (FxWmiTraceMessage.c)
 */

void __fastcall WPP_IFR_SF_qDqd(
        _FX_DRIVER_GLOBALS *globals,
        unsigned __int8 _a1,
        unsigned int _a2,
        unsigned __int16 _a3,
        const _GUID *globals_0,
        const void *level,
        unsigned int flags,
        const void *id)
{
  int _a4[4]; // [rsp+70h] [rbp-18h] BYREF

  _a4[0] = -1073741811;
  if ( (WPP_GLOBAL_WDF_Control.Characteristics & 0x8000) != 0 && BYTE1(WPP_GLOBAL_WDF_Control.Flags) >= 2u )
    FxWmiTraceMessage(
      (unsigned __int64)WPP_GLOBAL_WDF_Control.CurrentIrp,
      43LL,
      WPP_FxRequestKm_cpp_Traceguids,
      0xCu,
      &level,
      8LL,
      &flags,
      4LL,
      &id,
      8LL,
      _a4,
      4LL,
      0LL);
  FxIFR(globals, 2u, 0x10u, WPP_FxRequestKm_cpp_Traceguids, 0xCu, &level, 8LL, &flags, 4LL, &id, 8LL, _a4, 4LL, 0LL);
}
