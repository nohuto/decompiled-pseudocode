/*
 * XREFs of CmpResetKeyNodeStack @ 0x1409830BC
 * Callers:
 *     CmRenameKey @ 0x140857A3C (CmRenameKey.c)
 *     CmpKeyEnumStackReset @ 0x140981794 (CmpKeyEnumStackReset.c)
 * Callees:
 *     CmpKeyNodeStackEntryReset @ 0x140982104 (CmpKeyNodeStackEntryReset.c)
 *     CmpKeyNodeStackGetEntryAtLayerHeight @ 0x140982388 (CmpKeyNodeStackGetEntryAtLayerHeight.c)
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
