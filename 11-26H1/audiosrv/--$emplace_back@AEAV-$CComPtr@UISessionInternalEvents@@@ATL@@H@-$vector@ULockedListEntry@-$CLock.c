/*
 * XREFs of ??$emplace_back@AEAV?$CComPtr@UISessionInternalEvents@@@ATL@@H@?$vector@ULockedListEntry@?$CLockedList_UniqueValuesOnly@V?$CComPtr@UISessionInternalEvents@@@ATL@@$0A@@@V?$allocator@ULockedListEntry@?$CLockedList_UniqueValuesOnly@V?$CComPtr@UISessionInternalEvents@@@ATL@@$0A@@@@std@@@std@@QEAAAEAULockedListEntry@?$CLockedList_UniqueValuesOnly@V?$CComPtr@UISessionInternalEvents@@@ATL@@$0A@@@AEAV?$CComPtr@UISessionInternalEvents@@@ATL@@$$QEAH@Z @ 0x1800CD22C
 * Callers:
 *     ?AddInterface@?$CLockedList_UniqueValuesOnly@V?$CComPtr@UISessionInternalEvents@@@ATL@@$0A@@@QEAAJV?$CComPtr@UISessionInternalEvents@@@ATL@@@Z @ 0x18004ED40 (-AddInterface@-$CLockedList_UniqueValuesOnly@V-$CComPtr@UISessionInternalEvents@@@ATL@@$0A@@@QEA.c)
 * Callees:
 *     <none>
 */

char *__fastcall std::vector<CLockedList_UniqueValuesOnly<ATL::CComPtr<ISessionInternalEvents>,0>::LockedListEntry,std::allocator<CLockedList_UniqueValuesOnly<ATL::CComPtr<ISessionInternalEvents>,0>::LockedListEntry>>::emplace_back<ATL::CComPtr<ISessionInternalEvents> &,int>(
        __int64 a1,
        _QWORD *a2,
        int *a3)
{
  if ( *(_QWORD *)(a1 + 8) == *(_QWORD *)(a1 + 16) )
    return std::vector<CLockedList_UniqueValuesOnly<ATL::CComPtr<ISessionInternalEvents>,0>::LockedListEntry,std::allocator<CLockedList_UniqueValuesOnly<ATL::CComPtr<ISessionInternalEvents>,0>::LockedListEntry>>::_Emplace_reallocate<ATL::CComPtr<ISessionInternalEvents> &,int>(
             (char **)a1,
             *(char **)(a1 + 8),
             (__int64)a2,
             (__int64)a3);
  else
    return (char *)std::vector<CLockedList_UniqueValuesOnly<ATL::CComPtr<ISessionInternalEvents>,0>::LockedListEntry,std::allocator<CLockedList_UniqueValuesOnly<ATL::CComPtr<ISessionInternalEvents>,0>::LockedListEntry>>::_Emplace_back_with_unused_capacity<ATL::CComPtr<ISessionInternalEvents> &,int>(
                     a1,
                     a2,
                     a3);
}
