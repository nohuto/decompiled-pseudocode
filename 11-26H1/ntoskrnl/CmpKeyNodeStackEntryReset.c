/*
 * XREFs of CmpKeyNodeStackEntryReset @ 0x140982104
 * Callers:
 *     CmpKeyEnumStackAdvanceInternal @ 0x1409821FC (CmpKeyEnumStackAdvanceInternal.c)
 *     CmpResetKeyNodeStack @ 0x1409830BC (CmpResetKeyNodeStack.c)
 *     CmpKeyEnumStackNotifyPromotion @ 0x140985318 (CmpKeyEnumStackNotifyPromotion.c)
 * Callees:
 *     CmpKeyNodeStackEntryInitialize @ 0x140982164 (CmpKeyNodeStackEntryInitialize.c)
 *     CmpKeyNodeStackEntryCleanup @ 0x1409824E8 (CmpKeyNodeStackEntryCleanup.c)
 */

__int64 __fastcall CmpKeyNodeStackEntryReset(__int64 a1)
{
  CmpKeyNodeStackEntryCleanup();
  return CmpKeyNodeStackEntryInitialize(a1);
}
