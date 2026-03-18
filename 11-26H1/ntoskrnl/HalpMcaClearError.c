/*
 * XREFs of HalpMcaClearError @ 0x140453EC4
 * Callers:
 *     HalpCmcPollProcessor @ 0x140453548 (HalpCmcPollProcessor.c)
 *     HalpMceHandlerCore @ 0x14057B360 (HalpMceHandlerCore.c)
 *     HalpHandlePreviousMcaErrorsOnProcessor @ 0x140BE9CC8 (HalpHandlePreviousMcaErrorsOnProcessor.c)
 * Callees:
 *     HalpWheaWriteMsrStatus @ 0x14045318C (HalpWheaWriteMsrStatus.c)
 *     HalpMcaProcessorBankClear @ 0x1404541BC (HalpMcaProcessorBankClear.c)
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
