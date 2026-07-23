/*
 * XREFs of HvlpSetupPageListIteration @ 0x1405C4C48
 * Callers:
 *     HvlpStartPageListIteration @ 0x1405C4CD0 (HvlpStartPageListIteration.c)
 *     HvlpStartSecurePageListIteration @ 0x1405C4CF4 (HvlpStartSecurePageListIteration.c)
 * Callees:
 *     MmGetPhysicalAddress @ 0x14024F250 (MmGetPhysicalAddress.c)
 *     HvlpGetPageListIterator @ 0x1405C4B78 (HvlpGetPageListIterator.c)
 */

volatile __int64 *__fastcall HvlpSetupPageListIteration(int a1, char a2)
{
  volatile __int64 *PageListIterator; // rbx
  int v4; // ecx
  void *Blink; // rcx
  void *Affinity; // rax
  volatile __int64 *result; // rax

  PageListIterator = HvlpGetPageListIterator(a1);
  *(_DWORD *)PageListIterator = 0;
  *((_BYTE *)PageListIterator + 4) = 0;
  if ( v4 == 1 )
  {
    Blink = VslpReservedTransferLock.WaitListEntry.Blink;
    Affinity = VslpReservedTransferLock.Affinity;
  }
  else
  {
    Blink = VslpReservedTransferLock.Affinity;
    Affinity = VslpReservedTransferLock.WaitListEntry.Blink;
  }
  if ( !Blink )
    Blink = Affinity;
  *((_QWORD *)PageListIterator + 1) = Blink;
  if ( !Blink )
    return 0LL;
  *((PHYSICAL_ADDRESS *)PageListIterator + 2) = MmGetPhysicalAddress(Blink);
  *((_BYTE *)PageListIterator + 3) = a2 & 1;
  *((_BYTE *)PageListIterator + 4) = (a2 & 2) != 0;
  result = PageListIterator;
  *((_BYTE *)PageListIterator + 2) = 1;
  return result;
}
