/*
 * XREFs of HalpMcaClearError @ 0x14044BFF4
 * Callers:
 *     HalpCmcPollProcessor @ 0x14044B678 (HalpCmcPollProcessor.c)
 *     HalpMceHandlerCore @ 0x14057D890 (HalpMceHandlerCore.c)
 *     HalpHandlePreviousMcaErrorsOnProcessor @ 0x140BEFCC8 (HalpHandlePreviousMcaErrorsOnProcessor.c)
 * Callees:
 *     HalpWheaWriteMsrStatus @ 0x14044B2BC (HalpWheaWriteMsrStatus.c)
 *     HalpMcaProcessorBankClear @ 0x14044C2EC (HalpMcaProcessorBankClear.c)
 */

__int64 __fastcall HalpMcaClearError(__int64 a1, __int64 a2)
{
  __int64 v4; // r8
  __int64 result; // rax

  HalpMcaProcessorBankClear(a2, *(unsigned int *)(a1 + 36));
  result = HalpWheaWriteMsrStatus(a2, *(unsigned int *)(a1 + 36), v4);
  _mm_mfence();
  return result;
}
