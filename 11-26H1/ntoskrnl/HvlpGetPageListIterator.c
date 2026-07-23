/*
 * XREFs of HvlpGetPageListIterator @ 0x1405C4B78
 * Callers:
 *     HvlpMarkHypervisorPagesForHibernation @ 0x1405C2134 (HvlpMarkHypervisorPagesForHibernation.c)
 *     HvlAddPagesCallbackRoutine @ 0x1405C2600 (HvlAddPagesCallbackRoutine.c)
 *     HvlpGetEncryptedDataFromHypervisor @ 0x1405C3044 (HvlpGetEncryptedDataFromHypervisor.c)
 *     HvlpEndSecurePageListIteration @ 0x1405C49F8 (HvlpEndSecurePageListIteration.c)
 *     HvlpGetPageList @ 0x1405C4AC0 (HvlpGetPageList.c)
 *     HvlpSetupPageListIteration @ 0x1405C4C48 (HvlpSetupPageListIteration.c)
 *     HvlpStartSecurePageListIteration @ 0x1405C4CF4 (HvlpStartSecurePageListIteration.c)
 * Callees:
 *     <none>
 */

volatile __int64 *__fastcall HvlpGetPageListIterator(int a1)
{
  volatile __int64 *result; // rax

  result = &VslpReservedTransferLock.WaitStatus;
  if ( !a1 )
    return (volatile __int64 *)&VslpReservedTransferLock.ApcState.ApcListHead[1];
  return result;
}
