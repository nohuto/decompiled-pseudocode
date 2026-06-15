/*
 * XREFs of ??4?$CComPtr@UISessionInternalEvents@@@ATL@@QEAAPEAUISessionInternalEvents@@AEBV01@@Z @ 0x18005CFE4
 * Callers:
 *     ??$_Copy_n_unchecked4@PEAULockedListEntry@?$CLockedList_UniqueValuesOnly@V?$CComPtr@UISessionInternalEvents@@@ATL@@$0A@@@_KPEAU12@@std@@YAPEAULockedListEntry@?$CLockedList_UniqueValuesOnly@V?$CComPtr@UISessionInternalEvents@@@ATL@@$0A@@@PEAU12@_K0@Z @ 0x1800CD050 (--$_Copy_n_unchecked4@PEAULockedListEntry@-$CLockedList_UniqueValuesOnly@V-$CComPtr@UISessionInt.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall ATL::CComPtr<ISessionInternalEvents>::operator=(_QWORD *a1, _QWORD *a2)
{
  __int64 v3; // rbx

  v3 = *a2;
  if ( *a1 == *a2 )
    return *a1;
  if ( v3 )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v3 + 8LL))(*a2);
  if ( *a1 )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*a1 + 16LL))(*a1);
  *a1 = v3;
  return v3;
}
