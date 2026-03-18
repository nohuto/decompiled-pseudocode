/*
 * XREFs of WPP_IFR_SF_qPPd @ 0x140089520
 * Callers:
 *     ?DmaCompleted@FxDmaTransactionBase@@QEAAE_KPEAJW4FxDmaCompletionType@@@Z @ 0x140063F3C (-DmaCompleted@FxDmaTransactionBase@@QEAAE_KPEAJW4FxDmaCompletionType@@@Z.c)
 *     ?PrepareForSingleTransfer@FxDmaTransactionBase@@AEAAJXZ @ 0x140088DF4 (-PrepareForSingleTransfer@FxDmaTransactionBase@@AEAAJXZ.c)
 * Callees:
 *     FxIFR @ 0x140032A50 (FxIFR.c)
 *     FxWmiTraceMessage @ 0x140056738 (FxWmiTraceMessage.c)
 */

void __fastcall WPP_IFR_SF_qPPd(
        _FX_DRIVER_GLOBALS *globals,
        unsigned __int8 id,
        unsigned int _a1,
        unsigned __int16 _a2,
        const _GUID *_a3,
        const void *globals_0,
        unsigned __int64 level,
        unsigned __int64 flags)
{
  int _a4[4]; // [rsp+70h] [rbp-18h] BYREF

  _a4[0] = -1071644141;
  if ( (WPP_GLOBAL_WDF_Control.Characteristics & 0x4000) != 0 && BYTE1(WPP_GLOBAL_WDF_Control.Flags) >= 2u )
    FxWmiTraceMessage(
      (unsigned __int64)WPP_GLOBAL_WDF_Control.CurrentIrp,
      43LL,
      WPP_FxDmaTransactionBase_cpp_Traceguids,
      _a2,
      &globals_0,
      8LL,
      &level,
      8LL,
      &flags,
      8LL,
      _a4,
      4LL,
      0LL);
  FxIFR(
    globals,
    2u,
    0xFu,
    WPP_FxDmaTransactionBase_cpp_Traceguids,
    _a2,
    &globals_0,
    8LL,
    &level,
    8LL,
    &flags,
    8LL,
    _a4,
    4LL,
    0LL);
}
