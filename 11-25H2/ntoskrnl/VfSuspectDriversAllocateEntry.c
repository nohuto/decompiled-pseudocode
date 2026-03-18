/*
 * XREFs of VfSuspectDriversAllocateEntry @ 0x140B8A6C0
 * Callers:
 *     VfVolatileApplyDifVerification @ 0x1406088A4 (VfVolatileApplyDifVerification.c)
 *     VfSuspectDriversLoadCallback @ 0x140B8AB5C (VfSuspectDriversLoadCallback.c)
 *     VfAddVerifierEntry @ 0x140B8C34C (VfAddVerifierEntry.c)
 *     VfSuspectDriversParseRegistryString @ 0x140C2AA74 (VfSuspectDriversParseRegistryString.c)
 * Callees:
 *     RtlUShortAdd @ 0x140472A24 (RtlUShortAdd.c)
 *     memmove @ 0x1406B4940 (memmove.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 */

ULONG_PTR __fastcall VfSuspectDriversAllocateEntry(const void **a1)
{
  USHORT v2; // ax
  ULONG_PTR Pool2; // rax
  ULONG_PTR v4; // rbx
  USHORT pusResult; // [rsp+30h] [rbp+8h] BYREF

  pusResult = *(_WORD *)a1 + 2;
  if ( RtlUShortAdd(pusResult, 2u, &pusResult) == -1073741675 )
    v2 = -1;
  else
    v2 = pusResult;
  Pool2 = ExAllocatePool2(0x40uLL, v2 + 56LL, 0x44536656uLL);
  v4 = Pool2;
  if ( Pool2 )
  {
    *(_DWORD *)(Pool2 + 16) = 0;
    *(_DWORD *)(Pool2 + 20) = 0;
    *(_QWORD *)(Pool2 + 48) = Pool2 + 56;
    *(_WORD *)(Pool2 + 40) = *(_WORD *)a1;
    *(_WORD *)(Pool2 + 42) = *((_WORD *)a1 + 1);
    memmove((void *)(Pool2 + 56), a1[1], *(unsigned __int16 *)a1);
  }
  return v4;
}
