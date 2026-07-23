/*
 * XREFs of CmpKeyNodeStackEntryReset @ 0x140944114
 * Callers:
 *     CmpKeyEnumStackAdvanceInternal @ 0x14094420C (CmpKeyEnumStackAdvanceInternal.c)
 *     CmpResetKeyNodeStack @ 0x1409450CC (CmpResetKeyNodeStack.c)
 *     CmpKeyEnumStackNotifyPromotion @ 0x140947320 (CmpKeyEnumStackNotifyPromotion.c)
 * Callees:
 *     CmpKeyNodeStackEntryInitialize @ 0x140944174 (CmpKeyNodeStackEntryInitialize.c)
 *     CmpKeyNodeStackEntryCleanup @ 0x1409444F8 (CmpKeyNodeStackEntryCleanup.c)
 */

__int64 __fastcall CmpKeyNodeStackEntryReset(__int64 a1)
{
  CmpKeyNodeStackEntryCleanup();
  return CmpKeyNodeStackEntryInitialize(a1);
}
