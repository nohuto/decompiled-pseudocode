/*
 * XREFs of ??$emplace_back@AEAVCDuckingNotification@@H@?$vector@ULockedListEntry@?$CLockedList_UniqueValuesOnly@VCDuckingNotification@@$0A@@@V?$allocator@ULockedListEntry@?$CLockedList_UniqueValuesOnly@VCDuckingNotification@@$0A@@@@std@@@std@@QEAAAEAULockedListEntry@?$CLockedList_UniqueValuesOnly@VCDuckingNotification@@$0A@@@AEAVCDuckingNotification@@$$QEAH@Z @ 0x18003ED44
 * Callers:
 *     ?AddInterface@?$CLockedList_UniqueValuesOnly@VCDuckingNotification@@$0A@@@QEAAJVCDuckingNotification@@@Z @ 0x18001B6B8 (-AddInterface@-$CLockedList_UniqueValuesOnly@VCDuckingNotification@@$0A@@@QEAAJVCDuckingNotifica.c)
 * Callees:
 *     <none>
 */

CDuckingNotification *__fastcall std::vector<CLockedList_UniqueValuesOnly<CDuckingNotification,0>::LockedListEntry,std::allocator<CLockedList_UniqueValuesOnly<CDuckingNotification,0>::LockedListEntry>>::emplace_back<CDuckingNotification &,int>(
        __int64 a1,
        const struct CDuckingNotification *a2,
        int *a3)
{
  if ( *(_QWORD *)(a1 + 8) == *(_QWORD *)(a1 + 16) )
    return std::vector<CLockedList_UniqueValuesOnly<CDuckingNotification,0>::LockedListEntry,std::allocator<CLockedList_UniqueValuesOnly<CDuckingNotification,0>::LockedListEntry>>::_Emplace_reallocate<CDuckingNotification &,int>(
             (struct CDuckingNotification **)a1,
             *(struct CDuckingNotification **)(a1 + 8),
             a2,
             a3);
  else
    return (CDuckingNotification *)std::vector<CLockedList_UniqueValuesOnly<CDuckingNotification,0>::LockedListEntry,std::allocator<CLockedList_UniqueValuesOnly<CDuckingNotification,0>::LockedListEntry>>::_Emplace_back_with_unused_capacity<CDuckingNotification &,int>(
                                     a1,
                                     a2,
                                     a3);
}
