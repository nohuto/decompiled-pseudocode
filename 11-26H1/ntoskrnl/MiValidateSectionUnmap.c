/*
 * XREFs of MiValidateSectionUnmap @ 0x1408817F8
 * Callers:
 *     MiValidateSectionCreate @ 0x14099C8D4 (MiValidateSectionCreate.c)
 * Callees:
 *     MiFlushEntireTbDueToAttributeChange @ 0x1402516EC (MiFlushEntireTbDueToAttributeChange.c)
 *     PsRevertToUserPagePriorityThread @ 0x140481AA0 (PsRevertToUserPagePriorityThread.c)
 *     MiRemoveFromSystemSpace @ 0x140489AA8 (MiRemoveFromSystemSpace.c)
 *     MiDereferencePerSessionProtos @ 0x140A9AEB4 (MiDereferencePerSessionProtos.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

int __fastcall MiValidateSectionUnmap(__int64 a1, void *a2)
{
  int result; // eax

  if ( a2 != *(void **)(a1 + 64) && a2 )
    ExFreePoolWithTag(a2, 0);
  MiRemoveFromSystemSpace(*(_QWORD *)(a1 + 64));
  if ( (*(_DWORD *)(a1 + 36) & 2) != 0 )
  {
    MiDereferencePerSessionProtos(*(_QWORD *)(a1 + 8), 0xFFFFFFFFLL);
    *(_DWORD *)(a1 + 36) &= ~2u;
  }
  result = *(_DWORD *)(a1 + 40);
  if ( (result & 1) != 0 )
  {
    if ( (MiFlags & 0x80000) != 0 )
      MiFlushEntireTbDueToAttributeChange();
    return PsRevertToUserPagePriorityThread((__int64)KeGetCurrentThread(), *(unsigned int *)(a1 + 52));
  }
  return result;
}
