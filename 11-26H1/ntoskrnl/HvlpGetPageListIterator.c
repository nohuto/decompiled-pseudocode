/*
 * XREFs of HvlpGetPageListIterator @ 0x1405C2308
 * Callers:
 *     HvlpMarkHypervisorPagesForHibernation @ 0x1405BF8C4 (HvlpMarkHypervisorPagesForHibernation.c)
 *     HvlAddPagesCallbackRoutine @ 0x1405BFD90 (HvlAddPagesCallbackRoutine.c)
 *     HvlpGetEncryptedDataFromHypervisor @ 0x1405C07D4 (HvlpGetEncryptedDataFromHypervisor.c)
 *     HvlpEndSecurePageListIteration @ 0x1405C2188 (HvlpEndSecurePageListIteration.c)
 *     HvlpGetPageList @ 0x1405C2250 (HvlpGetPageList.c)
 *     HvlpSetupPageListIteration @ 0x1405C23D8 (HvlpSetupPageListIteration.c)
 *     HvlpStartSecurePageListIteration @ 0x1405C2484 (HvlpStartSecurePageListIteration.c)
 * Callees:
 *     <none>
 */

$7A85BAF4F1FA08634C1C4A3E45B775B3 *__fastcall HvlpGetPageListIterator(int a1)
{
  $7A85BAF4F1FA08634C1C4A3E45B775B3 *result; // rax

  result = &VslpReservedTransferLock.152;
  if ( !a1 )
    return ($7A85BAF4F1FA08634C1C4A3E45B775B3 *)((char *)&VslpReservedTransferLock.116 + 4);
  return result;
}
