/*
 * XREFs of CmpValueEnumStackGetCurrentValueHive @ 0x1404D3984
 * Callers:
 *     CmpFullPromoteSingleKeyFromKeyNodeStacks @ 0x1409432C8 (CmpFullPromoteSingleKeyFromKeyNodeStacks.c)
 * Callees:
 *     CmpValueEnumStackGetEntryAtLayerHeight @ 0x140942D30 (CmpValueEnumStackGetEntryAtLayerHeight.c)
 */

__int64 __fastcall CmpValueEnumStackGetCurrentValueHive(__int64 a1)
{
  return *(_QWORD *)CmpValueEnumStackGetEntryAtLayerHeight(a1, *(unsigned __int16 *)(a1 + 6));
}
