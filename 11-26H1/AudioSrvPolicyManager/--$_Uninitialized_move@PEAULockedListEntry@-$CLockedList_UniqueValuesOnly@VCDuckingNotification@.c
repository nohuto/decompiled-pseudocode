/*
 * XREFs of ??$_Uninitialized_move@PEAULockedListEntry@?$CLockedList_UniqueValuesOnly@VCDuckingNotification@@$0A@@@V?$allocator@ULockedListEntry@?$CLockedList_UniqueValuesOnly@VCDuckingNotification@@$0A@@@@std@@@std@@YAPEAULockedListEntry@?$CLockedList_UniqueValuesOnly@VCDuckingNotification@@$0A@@@QEAU12@0PEAU12@AEAV?$allocator@ULockedListEntry@?$CLockedList_UniqueValuesOnly@VCDuckingNotification@@$0A@@@@0@@Z @ 0x18003ECD0
 * Callers:
 *     ??$_Emplace_reallocate@AEAVCDuckingNotification@@H@?$vector@ULockedListEntry@?$CLockedList_UniqueValuesOnly@VCDuckingNotification@@$0A@@@V?$allocator@ULockedListEntry@?$CLockedList_UniqueValuesOnly@VCDuckingNotification@@$0A@@@@std@@@std@@AEAAPEAULockedListEntry@?$CLockedList_UniqueValuesOnly@VCDuckingNotification@@$0A@@@QEAU23@AEAVCDuckingNotification@@$$QEAH@Z @ 0x18003EA50 (--$_Emplace_reallocate@AEAVCDuckingNotification@@H@-$vector@ULockedListEntry@-$CLockedList_Uniqu.c)
 * Callees:
 *     ??0CDuckingNotification@@QEAA@AEBV0@@Z @ 0x1800083AC (--0CDuckingNotification@@QEAA@AEBV0@@Z.c)
 *     ??$_Destroy_range@V?$allocator@ULockedListEntry@?$CLockedList_UniqueValuesOnly@VCDuckingNotification@@$0A@@@@std@@@std@@YAXPEAULockedListEntry@?$CLockedList_UniqueValuesOnly@VCDuckingNotification@@$0A@@@QEAU12@AEAV?$allocator@ULockedListEntry@?$CLockedList_UniqueValuesOnly@VCDuckingNotification@@$0A@@@@0@@Z @ 0x180029A9C (--$_Destroy_range@V-$allocator@ULockedListEntry@-$CLockedList_UniqueValuesOnly@VCDuckingNotifica.c)
 */

// Hidden C++ exception states: #wind=1
CDuckingNotification *__fastcall std::_Uninitialized_move<CLockedList_UniqueValuesOnly<CDuckingNotification,0>::LockedListEntry *,std::allocator<CLockedList_UniqueValuesOnly<CDuckingNotification,0>::LockedListEntry>>(
        struct CDuckingNotification *a1,
        struct CDuckingNotification *a2,
        CDuckingNotification *a3)
{
  struct CDuckingNotification *i; // rdi

  for ( i = a1; i != a2; i = (struct CDuckingNotification *)((char *)i + 64) )
  {
    CDuckingNotification::CDuckingNotification(a3, i);
    *((_DWORD *)a3 + 14) = *((_DWORD *)i + 14);
    a3 = (CDuckingNotification *)((char *)a3 + 64);
  }
  std::_Destroy_range<std::allocator<CLockedList_UniqueValuesOnly<CDuckingNotification,0>::LockedListEntry>>(a3, a3);
  return a3;
}
