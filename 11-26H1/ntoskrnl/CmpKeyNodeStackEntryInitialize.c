/*
 * XREFs of CmpKeyNodeStackEntryInitialize @ 0x140982164
 * Callers:
 *     CmpStartKeyNodeStack @ 0x140981CC8 (CmpStartKeyNodeStack.c)
 *     CmpKeyNodeStackEntryReset @ 0x140982104 (CmpKeyNodeStackEntryReset.c)
 *     CmpInitializeKeyNodeStack @ 0x140982128 (CmpInitializeKeyNodeStack.c)
 *     CmpKeyEnumStackStartFromKcbStack @ 0x140984E0C (CmpKeyEnumStackStartFromKcbStack.c)
 *     CmpPromoteSingleKeyFromKcbStacks @ 0x1409859F4 (CmpPromoteSingleKeyFromKcbStacks.c)
 *     CmSaveKey @ 0x140A7626C (CmSaveKey.c)
 *     CmpGetSubKeyCountForKcbStack @ 0x140AE4934 (CmpGetSubKeyCountForKcbStack.c)
 *     CmpValueEnumStackStartFromKcbStack @ 0x140AF9D60 (CmpValueEnumStackStartFromKcbStack.c)
 * Callees:
 *     HvpGetCellContextInitialize @ 0x1408D9320 (HvpGetCellContextInitialize.c)
 */

__int64 __fastcall CmpKeyNodeStackEntryInitialize(__int64 a1)
{
  *(_OWORD *)a1 = 0LL;
  *(_OWORD *)(a1 + 16) = 0LL;
  *(_DWORD *)(a1 + 8) = -1;
  return HvpGetCellContextInitialize((_QWORD *)(a1 + 24));
}
