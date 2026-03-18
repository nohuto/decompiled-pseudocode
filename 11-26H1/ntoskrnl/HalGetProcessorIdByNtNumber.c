/*
 * XREFs of HalGetProcessorIdByNtNumber @ 0x140425B40
 * Callers:
 *     HalpInterruptGenerateMessage @ 0x14057BB4C (HalpInterruptGenerateMessage.c)
 *     PnprIsProcessorDevice @ 0x1407AF6FC (PnprIsProcessorDevice.c)
 *     KeRegisterProcessorChangeCallback @ 0x1407BA2D0 (KeRegisterProcessorChangeCallback.c)
 *     HalpInterruptReinitialize @ 0x140BEA368 (HalpInterruptReinitialize.c)
 *     HalpDpStartProcessor @ 0x140BEE634 (HalpDpStartProcessor.c)
 *     PnprQuiesceProcessorDpc @ 0x140BF2260 (PnprQuiesceProcessorDpc.c)
 * Callees:
 *     HalpGetProcessorStateByNtIndex @ 0x140425B78 (HalpGetProcessorStateByNtIndex.c)
 */

__int64 __fastcall HalGetProcessorIdByNtNumber(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  _DWORD *ProcessorStateByNtIndex; // rax
  _DWORD *v5; // rdx

  if ( (unsigned int)a1 >= (unsigned int)HalpInterruptProcessorCount )
    return 3221225485LL;
  ProcessorStateByNtIndex = (_DWORD *)HalpGetProcessorStateByNtIndex(a1, a2, a3, a4);
  if ( !ProcessorStateByNtIndex )
    return 3221226021LL;
  *v5 = *ProcessorStateByNtIndex;
  return 0LL;
}
