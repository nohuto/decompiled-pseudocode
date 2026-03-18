/*
 * XREFs of PiDmaGuardQueueInsertEntry @ 0x140775870
 * Callers:
 *     PipDmgEnforceEnumerationPolicy @ 0x140B13278 (PipDmgEnforceEnumerationPolicy.c)
 *     PiDmaGuardProcessPostRemove @ 0x140B29F90 (PiDmaGuardProcessPostRemove.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x140278B30 (ObfReferenceObjectWithTag.c)
 *     PipDgqInsertEntry @ 0x1407B8B48 (PipDgqInsertEntry.c)
 *     ExAllocatePool2 @ 0x140C10430 (ExAllocatePool2.c)
 */

__int64 __fastcall PiDmaGuardQueueInsertEntry(PVOID Object, int a2)
{
  unsigned int v4; // ebx
  __int64 Pool2; // rdi

  v4 = 0;
  Pool2 = ExAllocatePool2(0x100uLL);
  if ( Pool2 )
  {
    ObfReferenceObjectWithTag(Object, 0x64706E50u);
    *(_QWORD *)(Pool2 + 16) = Object;
    *(_DWORD *)(Pool2 + 24) = a2;
    PipDgqInsertEntry(Pool2);
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return v4;
}
