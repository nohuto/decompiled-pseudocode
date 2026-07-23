/*
 * XREFs of HvlpStartPageListIteration @ 0x1405C4CD0
 * Callers:
 *     HvlpMarkHypervisorPagesForHibernation @ 0x1405C2134 (HvlpMarkHypervisorPagesForHibernation.c)
 *     HvlAddPagesCallbackRoutine @ 0x1405C2600 (HvlAddPagesCallbackRoutine.c)
 *     HvlpGetEncryptedDataFromHypervisor @ 0x1405C3044 (HvlpGetEncryptedDataFromHypervisor.c)
 * Callees:
 *     HvlpInvokeGetPageListHypercall @ 0x1405C4B94 (HvlpInvokeGetPageListHypercall.c)
 *     HvlpSetupPageListIteration @ 0x1405C4C48 (HvlpSetupPageListIteration.c)
 */

volatile __int64 *__fastcall HvlpStartPageListIteration(int a1, char a2)
{
  volatile __int64 *result; // rax

  result = HvlpSetupPageListIteration(a1, a2);
  if ( result )
    return (volatile __int64 *)HvlpInvokeGetPageListHypercall((__int64)result, 0LL);
  return result;
}
