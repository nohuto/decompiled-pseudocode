/*
 * XREFs of VfSuspectDriversAllocateEntry @ 0x140C264A0
 * Callers:
 *     VfVolatileApplyDifVerification @ 0x14064B4D4 (VfVolatileApplyDifVerification.c)
 *     VfSuspectDriversLoadCallback @ 0x140C3EA60 (VfSuspectDriversLoadCallback.c)
 *     VfAddVerifierEntry @ 0x140C4C6A8 (VfAddVerifierEntry.c)
 *     VfSuspectDriversParseRegistryString @ 0x140CE5798 (VfSuspectDriversParseRegistryString.c)
 * Callees:
 *     memmove @ 0x140742080 (memmove.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 */

ULONG_PTR __fastcall VfSuspectDriversAllocateEntry(const void **a1)
{
  unsigned __int16 v2; // dx
  ULONG_PTR Pool2; // rax
  ULONG_PTR v4; // rbx

  v2 = *(_WORD *)a1 + 4;
  if ( v2 < (unsigned __int16)(*(_WORD *)a1 + 2) )
    v2 = -1;
  Pool2 = ExAllocatePool2(64LL, v2 + 56LL, 0x44536656u);
  v4 = Pool2;
  if ( Pool2 )
  {
    *(_QWORD *)(Pool2 + 16) = 0LL;
    *(_QWORD *)(Pool2 + 48) = Pool2 + 56;
    *(_WORD *)(Pool2 + 40) = *(_WORD *)a1;
    *(_WORD *)(Pool2 + 42) = *((_WORD *)a1 + 1);
    memmove((void *)(Pool2 + 56), a1[1], *(unsigned __int16 *)a1);
  }
  return v4;
}
