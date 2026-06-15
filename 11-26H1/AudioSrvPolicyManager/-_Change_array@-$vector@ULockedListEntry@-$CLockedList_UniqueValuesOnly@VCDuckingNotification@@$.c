/*
 * XREFs of ?_Change_array@?$vector@ULockedListEntry@?$CLockedList_UniqueValuesOnly@VCDuckingNotification@@$0A@@@V?$allocator@ULockedListEntry@?$CLockedList_UniqueValuesOnly@VCDuckingNotification@@$0A@@@@std@@@std@@AEAAXQEAULockedListEntry@?$CLockedList_UniqueValuesOnly@VCDuckingNotification@@$0A@@@_K1@Z @ 0x180040800
 * Callers:
 *     ??$_Emplace_reallocate@AEAVCDuckingNotification@@H@?$vector@ULockedListEntry@?$CLockedList_UniqueValuesOnly@VCDuckingNotification@@$0A@@@V?$allocator@ULockedListEntry@?$CLockedList_UniqueValuesOnly@VCDuckingNotification@@$0A@@@@std@@@std@@AEAAPEAULockedListEntry@?$CLockedList_UniqueValuesOnly@VCDuckingNotification@@$0A@@@QEAU23@AEAVCDuckingNotification@@$$QEAH@Z @ 0x18003EA50 (--$_Emplace_reallocate@AEAVCDuckingNotification@@H@-$vector@ULockedListEntry@-$CLockedList_Uniqu.c)
 * Callees:
 *     ??$_Deallocate@$0BA@@std@@YAXPEAX_K@Z @ 0x18001ADA0 (--$_Deallocate@$0BA@@std@@YAXPEAX_K@Z.c)
 *     ??$_Destroy_range@V?$allocator@ULockedListEntry@?$CLockedList_UniqueValuesOnly@VCDuckingNotification@@$0A@@@@std@@@std@@YAXPEAULockedListEntry@?$CLockedList_UniqueValuesOnly@VCDuckingNotification@@$0A@@@QEAU12@AEAV?$allocator@ULockedListEntry@?$CLockedList_UniqueValuesOnly@VCDuckingNotification@@$0A@@@@0@@Z @ 0x180029A9C (--$_Destroy_range@V-$allocator@ULockedListEntry@-$CLockedList_UniqueValuesOnly@VCDuckingNotifica.c)
 */

void __fastcall std::vector<CLockedList_UniqueValuesOnly<CDuckingNotification,0>::LockedListEntry,std::allocator<CLockedList_UniqueValuesOnly<CDuckingNotification,0>::LockedListEntry>>::_Change_array(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  CDuckingNotification *v6; // rcx

  v6 = *(CDuckingNotification **)a1;
  if ( v6 )
  {
    std::_Destroy_range<std::allocator<CLockedList_UniqueValuesOnly<CDuckingNotification,0>::LockedListEntry>>(
      v6,
      *(CDuckingNotification **)(a1 + 8));
    std::_Deallocate<16>(
      *(void **)a1,
      (const struct std::nothrow_t *)((*(_QWORD *)(a1 + 16) - *(_QWORD *)a1) & 0xFFFFFFFFFFFFFFC0uLL));
  }
  *(_QWORD *)a1 = a2;
  *(_QWORD *)(a1 + 8) = a2 + (a3 << 6);
  *(_QWORD *)(a1 + 16) = a2 + (a4 << 6);
}
