/*
 * XREFs of CmpKeyEnumStackGetEntryAtLayerHeight @ 0x14094436C
 * Callers:
 *     CmpKeyEnumStackReset @ 0x1409437A4 (CmpKeyEnumStackReset.c)
 *     CmpKeyEnumStackBeginEnumerationForKeyNodeStack @ 0x140943F10 (CmpKeyEnumStackBeginEnumerationForKeyNodeStack.c)
 *     CmpKeyEnumStackAdvance @ 0x140943FD8 (CmpKeyEnumStackAdvance.c)
 *     CmpKeyEnumStackCleanup @ 0x1409441A0 (CmpKeyEnumStackCleanup.c)
 *     CmpKeyEnumStackAdvanceInternal @ 0x14094420C (CmpKeyEnumStackAdvanceInternal.c)
 *     CmpKeyEnumStackNotifyPromotion @ 0x140947320 (CmpKeyEnumStackNotifyPromotion.c)
 *     CmpKeyEnumStackCreateResumeContext @ 0x140AEB544 (CmpKeyEnumStackCreateResumeContext.c)
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
