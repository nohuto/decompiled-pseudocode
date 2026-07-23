/*
 * XREFs of CmpResetKeyNodeStack @ 0x1409450CC
 * Callers:
 *     CmRenameKey @ 0x14085DDCC (CmRenameKey.c)
 *     CmpKeyEnumStackReset @ 0x1409437A4 (CmpKeyEnumStackReset.c)
 * Callees:
 *     CmpKeyNodeStackEntryReset @ 0x140944114 (CmpKeyNodeStackEntryReset.c)
 *     CmpKeyNodeStackGetEntryAtLayerHeight @ 0x140944398 (CmpKeyNodeStackGetEntryAtLayerHeight.c)
 */

void __fastcall CmpResetKeyNodeStack(__int16 *a1)
{
  __int16 i; // bx
  __int64 EntryAtLayerHeight; // rax

  for ( i = 0; i <= *a1; ++i )
  {
    EntryAtLayerHeight = CmpKeyNodeStackGetEntryAtLayerHeight((__int64)a1, i);
    CmpKeyNodeStackEntryReset(EntryAtLayerHeight);
  }
}
