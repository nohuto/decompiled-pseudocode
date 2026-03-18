/*
 * XREFs of ExpAllocateReservedAsids @ 0x1406D15F0
 * Callers:
 *     ExpAllocateAsid @ 0x1406D143C (ExpAllocateAsid.c)
 * Callees:
 *     <none>
 */

void __fastcall ExpAllocateReservedAsids(_QWORD *a1)
{
  *a1 = -1LL;
  a1[1] = 1LL;
  ++*(_DWORD *)&ExSaPageGroupDescriptorArrayLock.WaitBlockFill11[16];
}
