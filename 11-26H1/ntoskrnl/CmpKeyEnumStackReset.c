/*
 * XREFs of CmpKeyEnumStackReset @ 0x1409437A4
 * Callers:
 *     CmRenameKey @ 0x14085DDCC (CmRenameKey.c)
 *     CmpSubtreeEnumeratorAdvance @ 0x140943D6C (CmpSubtreeEnumeratorAdvance.c)
 * Callees:
 *     CmpKeyEnumStackEntryInitialize @ 0x1409440B4 (CmpKeyEnumStackEntryInitialize.c)
 *     CmpKeyEnumStackGetEntryAtLayerHeight @ 0x14094436C (CmpKeyEnumStackGetEntryAtLayerHeight.c)
 *     CmpKeyEnumStackEntryCleanup @ 0x1409443C8 (CmpKeyEnumStackEntryCleanup.c)
 *     CmpResetKeyNodeStack @ 0x1409450CC (CmpResetKeyNodeStack.c)
 */

__int64 __fastcall CmpKeyEnumStackReset(__int64 a1)
{
  unsigned __int16 v1; // di
  __int64 result; // rax
  __int64 EntryAtLayerHeight; // rbx

  v1 = 0;
  *(_BYTE *)(a1 + 4) = 0;
  result = CmpResetKeyNodeStack(a1 + 8);
  while ( v1 <= *(_WORD *)a1 )
  {
    EntryAtLayerHeight = CmpKeyEnumStackGetEntryAtLayerHeight(a1, v1);
    CmpKeyEnumStackEntryCleanup(EntryAtLayerHeight);
    result = CmpKeyEnumStackEntryInitialize(EntryAtLayerHeight);
    ++v1;
  }
  return result;
}
