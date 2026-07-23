/*
 * XREFs of CmpValueEnumStackEntryInitialize @ 0x1404C8430
 * Callers:
 *     CmpValueEnumStackStartFromKeyNodeStack @ 0x14048C7C0 (CmpValueEnumStackStartFromKeyNodeStack.c)
 *     CmEnumerateValueFromLayeredKey @ 0x1409426FC (CmEnumerateValueFromLayeredKey.c)
 *     CmpFullPromoteSingleKeyFromKeyNodeStacks @ 0x1409432C8 (CmpFullPromoteSingleKeyFromKeyNodeStacks.c)
 *     CmpValueEnumStackInitialize @ 0x140AEDC18 (CmpValueEnumStackInitialize.c)
 * Callees:
 *     HvpGetCellContextInitialize @ 0x1408DF8E0 (HvpGetCellContextInitialize.c)
 */

__int64 __fastcall CmpValueEnumStackEntryInitialize(_OWORD *a1)
{
  *a1 = 0LL;
  a1[1] = 0LL;
  return HvpGetCellContextInitialize(a1 + 1);
}
