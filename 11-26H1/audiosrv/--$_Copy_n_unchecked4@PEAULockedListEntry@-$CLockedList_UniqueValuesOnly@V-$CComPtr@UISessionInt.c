/*
 * XREFs of ??$_Copy_n_unchecked4@PEAULockedListEntry@?$CLockedList_UniqueValuesOnly@V?$CComPtr@UISessionInternalEvents@@@ATL@@$0A@@@_KPEAU12@@std@@YAPEAULockedListEntry@?$CLockedList_UniqueValuesOnly@V?$CComPtr@UISessionInternalEvents@@@ATL@@$0A@@@PEAU12@_K0@Z @ 0x1800CD050
 * Callers:
 *     ?ForEachEntry@?$CLockedList_UniqueValuesOnly@V?$CComPtr@UISessionInternalEvents@@@ATL@@$0A@@@QEAAJ$$QEAVCListWorker@1@@Z @ 0x180013780 (-ForEachEntry@-$CLockedList_UniqueValuesOnly@V-$CComPtr@UISessionInternalEvents@@@ATL@@$0A@@@QEA.c)
 * Callees:
 *     ??4?$CComPtr@UISessionInternalEvents@@@ATL@@QEAAPEAUISessionInternalEvents@@AEBV01@@Z @ 0x18005CFE4 (--4-$CComPtr@UISessionInternalEvents@@@ATL@@QEAAPEAUISessionInternalEvents@@AEBV01@@Z.c)
 */

__int64 __fastcall std::_Copy_n_unchecked4<CLockedList_UniqueValuesOnly<ATL::CComPtr<ISessionInternalEvents>,0>::LockedListEntry *,unsigned __int64,CLockedList_UniqueValuesOnly<ATL::CComPtr<ISessionInternalEvents>,0>::LockedListEntry *>(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v3; // rdi
  __int64 v4; // rbp
  __int64 v5; // rsi

  v3 = a3;
  v4 = a2;
  if ( a2 )
  {
    v5 = a1 - a3;
    do
    {
      ATL::CComPtr<ISessionInternalEvents>::operator=((_QWORD *)v3, (_QWORD *)(v5 + v3));
      *(_DWORD *)(v3 + 8) = *(_DWORD *)(v5 + v3 + 8);
      v3 += 16LL;
      --v4;
    }
    while ( v4 );
  }
  return v3;
}
