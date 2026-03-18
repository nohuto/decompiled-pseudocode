/*
 * XREFs of HvlpStartPageListIteration @ 0x1405C2460
 * Callers:
 *     HvlpMarkHypervisorPagesForHibernation @ 0x1405BF8C4 (HvlpMarkHypervisorPagesForHibernation.c)
 *     HvlAddPagesCallbackRoutine @ 0x1405BFD90 (HvlAddPagesCallbackRoutine.c)
 *     HvlpGetEncryptedDataFromHypervisor @ 0x1405C07D4 (HvlpGetEncryptedDataFromHypervisor.c)
 * Callees:
 *     HvlpInvokeGetPageListHypercall @ 0x1405C2324 (HvlpInvokeGetPageListHypercall.c)
 *     HvlpSetupPageListIteration @ 0x1405C23D8 (HvlpSetupPageListIteration.c)
 */

$7A85BAF4F1FA08634C1C4A3E45B775B3 *__fastcall HvlpStartPageListIteration(int a1, char a2)
{
  $7A85BAF4F1FA08634C1C4A3E45B775B3 *result; // rax

  result = HvlpSetupPageListIteration(a1, a2);
  if ( result )
    return ($7A85BAF4F1FA08634C1C4A3E45B775B3 *)HvlpInvokeGetPageListHypercall((__int64)result, 0LL);
  return result;
}
