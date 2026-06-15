/*
 * XREFs of ??$_Assign_counted_range@PEAULockedListEntry@?$CLockedList_UniqueValuesOnly@VCDuckingNotification@@$0A@@@@?$vector@ULockedListEntry@?$CLockedList_UniqueValuesOnly@VCDuckingNotification@@$0A@@@V?$allocator@ULockedListEntry@?$CLockedList_UniqueValuesOnly@VCDuckingNotification@@$0A@@@@std@@@std@@AEAAXPEAULockedListEntry@?$CLockedList_UniqueValuesOnly@VCDuckingNotification@@$0A@@@_K@Z @ 0x18003E87C
 * Callers:
 *     ?ForEachEntry@?$CLockedList_UniqueValuesOnly@VCDuckingNotification@@$0A@@@QEAAJ$$QEAVCListWorker@1@@Z @ 0x18003F8EC (-ForEachEntry@-$CLockedList_UniqueValuesOnly@VCDuckingNotification@@$0A@@@QEAAJ$$QEAVCListWorker.c)
 * Callees:
 *     ??$_Destroy_range@V?$allocator@ULockedListEntry@?$CLockedList_UniqueValuesOnly@VCDuckingNotification@@$0A@@@@std@@@std@@YAXPEAULockedListEntry@?$CLockedList_UniqueValuesOnly@VCDuckingNotification@@$0A@@@QEAU12@AEAV?$allocator@ULockedListEntry@?$CLockedList_UniqueValuesOnly@VCDuckingNotification@@$0A@@@@0@@Z @ 0x180029A9C (--$_Destroy_range@V-$allocator@ULockedListEntry@-$CLockedList_UniqueValuesOnly@VCDuckingNotifica.c)
 *     ??4CDuckingNotification@@QEAAAEAV0@AEBV0@@Z @ 0x18002D120 (--4CDuckingNotification@@QEAAAEAV0@AEBV0@@Z.c)
 *     ??$_Uninitialized_copy_n@PEAULockedListEntry@?$CLockedList_UniqueValuesOnly@VCDuckingNotification@@$0A@@@V?$allocator@ULockedListEntry@?$CLockedList_UniqueValuesOnly@VCDuckingNotification@@$0A@@@@std@@@std@@YAPEAULockedListEntry@?$CLockedList_UniqueValuesOnly@VCDuckingNotification@@$0A@@@PEAU12@_K0AEAV?$allocator@ULockedListEntry@?$CLockedList_UniqueValuesOnly@VCDuckingNotification@@$0A@@@@0@@Z @ 0x18003EC64 (--$_Uninitialized_copy_n@PEAULockedListEntry@-$CLockedList_UniqueValuesOnly@VCDuckingNotificatio.c)
 *     ?_Clear_and_reserve_geometric@?$vector@ULockedListEntry@?$CLockedList_UniqueValuesOnly@VCDuckingNotification@@$0A@@@V?$allocator@ULockedListEntry@?$CLockedList_UniqueValuesOnly@VCDuckingNotification@@$0A@@@@std@@@std@@AEAAX_K@Z @ 0x18004087C (-_Clear_and_reserve_geometric@-$vector@ULockedListEntry@-$CLockedList_UniqueValuesOnly@VCDucking.c)
 */

void __fastcall std::vector<CLockedList_UniqueValuesOnly<CDuckingNotification,0>::LockedListEntry,std::allocator<CLockedList_UniqueValuesOnly<CDuckingNotification,0>::LockedListEntry>>::_Assign_counted_range<CLockedList_UniqueValuesOnly<CDuckingNotification,0>::LockedListEntry *>(
        __int64 *a1,
        __int64 a2,
        unsigned __int64 a3)
{
  __int64 v3; // rbx
  unsigned __int64 v4; // rbp
  __int64 v7; // r8
  unsigned __int64 v8; // rdi
  CDuckingNotification *locked; // rdi
  int v10; // eax

  v3 = *a1;
  v4 = a3;
  if ( a3 > (a1[2] - *a1) >> 6 )
  {
    std::vector<CLockedList_UniqueValuesOnly<CDuckingNotification,0>::LockedListEntry,std::allocator<CLockedList_UniqueValuesOnly<CDuckingNotification,0>::LockedListEntry>>::_Clear_and_reserve_geometric(
      a1,
      a3);
    v7 = *a1;
LABEL_11:
    locked = (CDuckingNotification *)std::_Uninitialized_copy_n<CLockedList_UniqueValuesOnly<CDuckingNotification,0>::LockedListEntry *,std::allocator<CLockedList_UniqueValuesOnly<CDuckingNotification,0>::LockedListEntry>>(
                                       a2,
                                       v4,
                                       v7,
                                       a1);
    goto LABEL_7;
  }
  v7 = a1[1];
  v8 = (v7 - v3) >> 6;
  if ( v4 > v8 )
  {
    while ( v3 != v7 )
    {
      CDuckingNotification::operator=(v3, a2);
      *(_DWORD *)(v3 + 56) = *(_DWORD *)(a2 + 56);
      v3 += 64LL;
      v7 = a1[1];
      a2 += 64LL;
    }
    v4 -= v8;
    goto LABEL_11;
  }
  for ( locked = (CDuckingNotification *)(v3 + (v4 << 6)); v4; --v4 )
  {
    CDuckingNotification::operator=(v3, a2);
    v10 = *(_DWORD *)(a2 + 56);
    a2 += 64LL;
    *(_DWORD *)(v3 + 56) = v10;
    v3 += 64LL;
  }
  std::_Destroy_range<std::allocator<CLockedList_UniqueValuesOnly<CDuckingNotification,0>::LockedListEntry>>(
    locked,
    (CDuckingNotification *)a1[1]);
LABEL_7:
  a1[1] = (__int64)locked;
}
