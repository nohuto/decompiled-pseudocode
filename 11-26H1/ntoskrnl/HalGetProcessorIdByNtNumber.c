/*
 * XREFs of HalGetProcessorIdByNtNumber @ 0x140432C50
 * Callers:
 *     HalpInterruptGenerateMessage @ 0x14057E07C (HalpInterruptGenerateMessage.c)
 *     PnprIsProcessorDevice @ 0x1407B275C (PnprIsProcessorDevice.c)
 *     KeRegisterProcessorChangeCallback @ 0x1407BD330 (KeRegisterProcessorChangeCallback.c)
 *     HalpInterruptReinitialize @ 0x140BF0368 (HalpInterruptReinitialize.c)
 *     HalpDpStartProcessor @ 0x140BF4634 (HalpDpStartProcessor.c)
 *     PnprQuiesceProcessorDpc @ 0x140BF8260 (PnprQuiesceProcessorDpc.c)
 * Callees:
 *     HalpGetProcessorStateByNtIndex @ 0x140432C88 (HalpGetProcessorStateByNtIndex.c)
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
