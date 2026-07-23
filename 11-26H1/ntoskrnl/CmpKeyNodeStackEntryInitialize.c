/*
 * XREFs of CmpKeyNodeStackEntryInitialize @ 0x140944174
 * Callers:
 *     CmpStartKeyNodeStack @ 0x140943CD8 (CmpStartKeyNodeStack.c)
 *     CmpKeyNodeStackEntryReset @ 0x140944114 (CmpKeyNodeStackEntryReset.c)
 *     CmpInitializeKeyNodeStack @ 0x140944138 (CmpInitializeKeyNodeStack.c)
 *     CmpKeyEnumStackStartFromKcbStack @ 0x140946E1C (CmpKeyEnumStackStartFromKcbStack.c)
 *     CmpPromoteSingleKeyFromKcbStacks @ 0x1409479F4 (CmpPromoteSingleKeyFromKcbStacks.c)
 *     CmSaveKey @ 0x140A7EF8C (CmSaveKey.c)
 *     CmpGetSubKeyCountForKcbStack @ 0x140AE2444 (CmpGetSubKeyCountForKcbStack.c)
 *     CmpValueEnumStackStartFromKcbStack @ 0x140AFC1F0 (CmpValueEnumStackStartFromKcbStack.c)
 * Callees:
 *     HvpGetCellContextInitialize @ 0x1408DF8E0 (HvpGetCellContextInitialize.c)
 */

__int64 __fastcall CmpKeyNodeStackEntryInitialize(__int64 a1)
{
  *(_OWORD *)a1 = 0LL;
  *(_OWORD *)(a1 + 16) = 0LL;
  *(_DWORD *)(a1 + 8) = -1;
  return HvpGetCellContextInitialize((_QWORD *)(a1 + 24));
}
