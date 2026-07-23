/*
 * XREFs of ExpAllocateReservedAsids @ 0x1406D5620
 * Callers:
 *     ExpAllocateAsid @ 0x1406D546C (ExpAllocateAsid.c)
 * Callees:
 *     <none>
 */

void __fastcall ExpAllocateReservedAsids(_QWORD *a1)
{
  *a1 = -1LL;
  a1[1] = 1LL;
  ++*(_DWORD *)&ExSaPageGroupDescriptorArrayLock.Timer.Processor;
}
