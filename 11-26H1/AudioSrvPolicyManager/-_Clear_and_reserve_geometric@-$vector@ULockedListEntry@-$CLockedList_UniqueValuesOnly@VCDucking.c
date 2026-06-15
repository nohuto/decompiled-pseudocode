/*
 * XREFs of ?_Clear_and_reserve_geometric@?$vector@ULockedListEntry@?$CLockedList_UniqueValuesOnly@VCDuckingNotification@@$0A@@@V?$allocator@ULockedListEntry@?$CLockedList_UniqueValuesOnly@VCDuckingNotification@@$0A@@@@std@@@std@@AEAAX_K@Z @ 0x18004087C
 * Callers:
 *     ??$_Assign_counted_range@PEAULockedListEntry@?$CLockedList_UniqueValuesOnly@VCDuckingNotification@@$0A@@@@?$vector@ULockedListEntry@?$CLockedList_UniqueValuesOnly@VCDuckingNotification@@$0A@@@V?$allocator@ULockedListEntry@?$CLockedList_UniqueValuesOnly@VCDuckingNotification@@$0A@@@@std@@@std@@AEAAXPEAULockedListEntry@?$CLockedList_UniqueValuesOnly@VCDuckingNotification@@$0A@@@_K@Z @ 0x18003E87C (--$_Assign_counted_range@PEAULockedListEntry@-$CLockedList_UniqueValuesOnly@VCDuckingNotificatio.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z @ 0x18000E6B0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z.c)
 *     ??$_Deallocate@$0BA@@std@@YAXPEAX_K@Z @ 0x18001ADA0 (--$_Deallocate@$0BA@@std@@YAXPEAX_K@Z.c)
 *     ??$_Destroy_range@V?$allocator@ULockedListEntry@?$CLockedList_UniqueValuesOnly@VCDuckingNotification@@$0A@@@@std@@@std@@YAXPEAULockedListEntry@?$CLockedList_UniqueValuesOnly@VCDuckingNotification@@$0A@@@QEAU12@AEAV?$allocator@ULockedListEntry@?$CLockedList_UniqueValuesOnly@VCDuckingNotification@@$0A@@@@0@@Z @ 0x180029A9C (--$_Destroy_range@V-$allocator@ULockedListEntry@-$CLockedList_UniqueValuesOnly@VCDuckingNotifica.c)
 *     ?_Throw_bad_array_new_length@std@@YAXXZ @ 0x18002EC28 (-_Throw_bad_array_new_length@std@@YAXXZ.c)
 *     ?_Calculate_growth@?$vector@ULockedListEntry@?$CLockedList_UniqueValuesOnly@VCDuckingNotification@@$0A@@@V?$allocator@ULockedListEntry@?$CLockedList_UniqueValuesOnly@VCDuckingNotification@@$0A@@@@std@@@std@@AEBA_K_K@Z @ 0x1800407C4 (-_Calculate_growth@-$vector@ULockedListEntry@-$CLockedList_UniqueValuesOnly@VCDuckingNotificatio.c)
 */

char *__fastcall std::vector<CLockedList_UniqueValuesOnly<CDuckingNotification,0>::LockedListEntry,std::allocator<CLockedList_UniqueValuesOnly<CDuckingNotification,0>::LockedListEntry>>::_Clear_and_reserve_geometric(
        __int64 a1,
        unsigned __int64 a2)
{
  unsigned __int64 v3; // rdi
  SIZE_T v4; // rdi
  char *v5; // rax
  char *result; // rax

  if ( a2 > 0x3FFFFFFFFFFFFFFLL )
    std::_Xlength_error("vector too long");
  v3 = std::vector<CLockedList_UniqueValuesOnly<CDuckingNotification,0>::LockedListEntry,std::allocator<CLockedList_UniqueValuesOnly<CDuckingNotification,0>::LockedListEntry>>::_Calculate_growth(
         (_QWORD *)a1,
         a2);
  if ( *(_QWORD *)a1 )
  {
    std::_Destroy_range<std::allocator<CLockedList_UniqueValuesOnly<CDuckingNotification,0>::LockedListEntry>>(
      *(CDuckingNotification **)a1,
      *(CDuckingNotification **)(a1 + 8));
    std::_Deallocate<16>(
      *(void **)a1,
      (const struct std::nothrow_t *)((*(_QWORD *)(a1 + 16) - *(_QWORD *)a1) & 0xFFFFFFFFFFFFFFC0uLL));
    *(_QWORD *)a1 = 0LL;
    *(_QWORD *)(a1 + 8) = 0LL;
    *(_QWORD *)(a1 + 16) = 0LL;
  }
  if ( v3 > 0x3FFFFFFFFFFFFFFLL )
    std::_Throw_bad_array_new_length();
  v4 = v3 << 6;
  v5 = (char *)std::_Allocate<16,std::_Default_allocate_traits>(v4);
  *(_QWORD *)a1 = v5;
  *(_QWORD *)(a1 + 8) = v5;
  result = &v5[v4];
  *(_QWORD *)(a1 + 16) = result;
  return result;
}
