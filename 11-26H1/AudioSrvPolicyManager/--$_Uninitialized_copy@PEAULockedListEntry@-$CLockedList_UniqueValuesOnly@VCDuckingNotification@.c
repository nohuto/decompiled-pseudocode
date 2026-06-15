/*
 * XREFs of ??$_Uninitialized_copy@PEAULockedListEntry@?$CLockedList_UniqueValuesOnly@VCDuckingNotification@@$0A@@@PEAU12@V?$allocator@ULockedListEntry@?$CLockedList_UniqueValuesOnly@VCDuckingNotification@@$0A@@@@std@@@std@@YAPEAULockedListEntry@?$CLockedList_UniqueValuesOnly@VCDuckingNotification@@$0A@@@PEAU12@00AEAV?$allocator@ULockedListEntry@?$CLockedList_UniqueValuesOnly@VCDuckingNotification@@$0A@@@@0@@Z @ 0x18003EBF8
 * Callers:
 *     ??$_Emplace_reallocate@AEAVCDuckingNotification@@H@?$vector@ULockedListEntry@?$CLockedList_UniqueValuesOnly@VCDuckingNotification@@$0A@@@V?$allocator@ULockedListEntry@?$CLockedList_UniqueValuesOnly@VCDuckingNotification@@$0A@@@@std@@@std@@AEAAPEAULockedListEntry@?$CLockedList_UniqueValuesOnly@VCDuckingNotification@@$0A@@@QEAU23@AEAVCDuckingNotification@@$$QEAH@Z @ 0x18003EA50 (--$_Emplace_reallocate@AEAVCDuckingNotification@@H@-$vector@ULockedListEntry@-$CLockedList_Uniqu.c)
 * Callees:
 *     ??$_Destroy_range@V?$allocator@ULockedListEntry@?$CLockedList_UniqueValuesOnly@VCDuckingNotification@@$0A@@@@std@@@std@@YAXPEAULockedListEntry@?$CLockedList_UniqueValuesOnly@VCDuckingNotification@@$0A@@@QEAU12@AEAV?$allocator@ULockedListEntry@?$CLockedList_UniqueValuesOnly@VCDuckingNotification@@$0A@@@@0@@Z @ 0x180029A9C (--$_Destroy_range@V-$allocator@ULockedListEntry@-$CLockedList_UniqueValuesOnly@VCDuckingNotifica.c)
 *     ??$_Emplace_back@AEAULockedListEntry@?$CLockedList_UniqueValuesOnly@VCDuckingNotification@@$0A@@@@?$_Uninitialized_backout_al@V?$allocator@ULockedListEntry@?$CLockedList_UniqueValuesOnly@VCDuckingNotification@@$0A@@@@std@@@std@@QEAAXAEAULockedListEntry@?$CLockedList_UniqueValuesOnly@VCDuckingNotification@@$0A@@@@Z @ 0x18003EA0C (--$_Emplace_back@AEAULockedListEntry@-$CLockedList_UniqueValuesOnly@VCDuckingNotification@@$0A@@.c)
 */

// Hidden C++ exception states: #wind=1
CDuckingNotification *__fastcall std::_Uninitialized_copy<CLockedList_UniqueValuesOnly<CDuckingNotification,0>::LockedListEntry *,CLockedList_UniqueValuesOnly<CDuckingNotification,0>::LockedListEntry *,std::allocator<CLockedList_UniqueValuesOnly<CDuckingNotification,0>::LockedListEntry>>(
        unsigned int *a1,
        unsigned int *a2,
        CDuckingNotification *a3,
        __int64 a4)
{
  CDuckingNotification *v4; // rbx
  unsigned int *v6; // rdi
  CDuckingNotification *v8; // [rsp+20h] [rbp-28h] BYREF
  CDuckingNotification *v9; // [rsp+28h] [rbp-20h]
  __int64 v10; // [rsp+30h] [rbp-18h]

  v4 = a3;
  v6 = a1;
  v8 = a3;
  v9 = a3;
  v10 = a4;
  if ( a1 != a2 )
  {
    do
    {
      std::_Uninitialized_backout_al<std::allocator<CLockedList_UniqueValuesOnly<CDuckingNotification,0>::LockedListEntry>>::_Emplace_back<CLockedList_UniqueValuesOnly<CDuckingNotification,0>::LockedListEntry &>(
        (__int64)&v8,
        v6);
      v6 += 16;
    }
    while ( v6 != a2 );
    v4 = v9;
  }
  std::_Destroy_range<std::allocator<CLockedList_UniqueValuesOnly<CDuckingNotification,0>::LockedListEntry>>(v4, v4);
  return v4;
}
