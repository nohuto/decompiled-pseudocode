/*
 * XREFs of HvlpSetupPageListIteration @ 0x1405C23D8
 * Callers:
 *     HvlpStartPageListIteration @ 0x1405C2460 (HvlpStartPageListIteration.c)
 *     HvlpStartSecurePageListIteration @ 0x1405C2484 (HvlpStartSecurePageListIteration.c)
 * Callees:
 *     MmGetPhysicalAddress @ 0x14024D8F0 (MmGetPhysicalAddress.c)
 *     HvlpGetPageListIterator @ 0x1405C2308 (HvlpGetPageListIterator.c)
 */

$7A85BAF4F1FA08634C1C4A3E45B775B3 *__fastcall HvlpSetupPageListIteration(int a1, char a2)
{
  $7A85BAF4F1FA08634C1C4A3E45B775B3 *PageListIterator; // rbx
  int v4; // ecx
  struct _LIST_ENTRY *Blink; // rcx
  struct _LIST_ENTRY *v6; // rax
  $7A85BAF4F1FA08634C1C4A3E45B775B3 *result; // rax

  PageListIterator = HvlpGetPageListIterator(a1);
  LODWORD(PageListIterator->ApcState.ApcListHead[0].Flink) = 0;
  PageListIterator->ApcStateFill[4] = 0;
  if ( v4 == 1 )
  {
    Blink = VslpReservedTransferLock.ApcState.ApcListHead[1].Blink;
    v6 = VslpReservedTransferLock.QueueListEntry.Blink;
  }
  else
  {
    Blink = VslpReservedTransferLock.QueueListEntry.Blink;
    v6 = VslpReservedTransferLock.ApcState.ApcListHead[1].Blink;
  }
  if ( !Blink )
    Blink = v6;
  PageListIterator->ApcState.ApcListHead[0].Blink = Blink;
  if ( !Blink )
    return 0LL;
  PageListIterator->ApcState.ApcListHead[1].Flink = (struct _LIST_ENTRY *)MmGetPhysicalAddress(Blink).QuadPart;
  PageListIterator->ApcStateFill[3] = a2 & 1;
  PageListIterator->ApcStateFill[4] = (a2 & 2) != 0;
  result = PageListIterator;
  PageListIterator->ApcStateFill[2] = 1;
  return result;
}
