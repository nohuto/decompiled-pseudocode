/*
 * XREFs of CmpKeyEnumStackGetEntryAtLayerHeight @ 0x14098235C
 * Callers:
 *     CmpKeyEnumStackReset @ 0x140981794 (CmpKeyEnumStackReset.c)
 *     CmpKeyEnumStackBeginEnumerationForKeyNodeStack @ 0x140981F00 (CmpKeyEnumStackBeginEnumerationForKeyNodeStack.c)
 *     CmpKeyEnumStackAdvance @ 0x140981FC8 (CmpKeyEnumStackAdvance.c)
 *     CmpKeyEnumStackCleanup @ 0x140982190 (CmpKeyEnumStackCleanup.c)
 *     CmpKeyEnumStackAdvanceInternal @ 0x1409821FC (CmpKeyEnumStackAdvanceInternal.c)
 *     CmpKeyEnumStackNotifyPromotion @ 0x140985318 (CmpKeyEnumStackNotifyPromotion.c)
 *     CmpKeyEnumStackCreateResumeContext @ 0x140AE9194 (CmpKeyEnumStackCreateResumeContext.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall CmpKeyEnumStackGetEntryAtLayerHeight(__int64 a1, __int16 a2)
{
  __int64 v2; // rax

  v2 = (unsigned int)a2;
  if ( a2 >= 2 )
    return *(_QWORD *)(a1 + 344) + ((unsigned __int64)(unsigned int)(v2 - 2) << 7);
  else
    return a1 + (v2 << 7) + 88;
}
