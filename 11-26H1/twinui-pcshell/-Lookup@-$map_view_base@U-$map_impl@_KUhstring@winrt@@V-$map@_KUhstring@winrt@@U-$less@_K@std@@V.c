/*
 * XREFs of ?Lookup@?$map_view_base@U?$map_impl@_KUhstring@winrt@@V?$map@_KUhstring@winrt@@U?$less@_K@std@@V?$allocator@U?$pair@$$CB_KUhstring@winrt@@@std@@@4@@std@@Usingle_threaded_collection_base@impl@2@@impl@winrt@@_KUhstring@3@Ucollection_version@23@@winrt@@QEBA?AUhstring@2@AEB_K@Z @ 0x18064E8A4
 * Callers:
 *     ?Lookup@?$produce@U?$map_impl@_KUhstring@winrt@@V?$map@_KUhstring@winrt@@U?$less@_K@std@@V?$allocator@U?$pair@$$CB_KUhstring@winrt@@@std@@@4@@std@@Usingle_threaded_collection_base@impl@2@@impl@winrt@@U?$IMap@_KUhstring@winrt@@@Collections@Foundation@Windows@3@@impl@winrt@@UEAAH_KPEAPEAX@Z @ 0x18064EAE0 (-Lookup@-$produce@U-$map_impl@_KUhstring@winrt@@V-$map@_KUhstring@winrt@@U-$less@_K@std@@V-$allo.c)
 *     ?Lookup@?$produce@U?$map_impl@_KUhstring@winrt@@V?$map@_KUhstring@winrt@@U?$less@_K@std@@V?$allocator@U?$pair@$$CB_KUhstring@winrt@@@std@@@4@@std@@Usingle_threaded_collection_base@impl@2@@impl@winrt@@U?$IMapView@_KUhstring@winrt@@@Collections@Foundation@Windows@3@@impl@winrt@@UEAAH_KPEAPEAX@Z @ 0x18064EB50 (-Lookup@-$produce@U-$map_impl@_KUhstring@winrt@@V-$map@_KUhstring@winrt@@U-$less@_K_ea_18064EB50.c)
 * Callees:
 *     ??0hstring@winrt@@QEAA@AEBU01@@Z @ 0x18002C9CC (--0hstring@winrt@@QEAA@AEBU01@@Z.c)
 *     _CxxThrowException_0 @ 0x1802C9ED8 (_CxxThrowException_0.c)
 *     ?current@slim_source_location@impl@winrt@@SA?AU123@IQEBD0@Z @ 0x1802D7924 (-current@slim_source_location@impl@winrt@@SA-AU123@IQEBD0@Z.c)
 *     ??0hresult_out_of_bounds@winrt@@QEAA@AEBUslim_source_location@impl@1@@Z @ 0x180338100 (--0hresult_out_of_bounds@winrt@@QEAA@AEBUslim_source_location@impl@1@@Z.c)
 *     ??$_Find@_K@?$_Tree@V?$_Tmap_traits@_KUhstring@winrt@@U?$less@_K@std@@V?$allocator@U?$pair@$$CB_KUhstring@winrt@@@std@@@4@$0A@@std@@@std@@AEBAPEAU?$_Tree_node@U?$pair@$$CB_KUhstring@winrt@@@std@@PEAX@1@AEB_K@Z @ 0x180644DA8 (--$_Find@_K@-$_Tree@V-$_Tmap_traits@_KUhstring@winrt@@U-$less@_K@std@@V-$allocator@U-$pair@$$CB_.c)
 */

winrt::hstring *__fastcall winrt::map_view_base<winrt::impl::map_impl<unsigned __int64,winrt::hstring,std::map<unsigned __int64,winrt::hstring>,winrt::impl::single_threaded_collection_base>,unsigned __int64,winrt::hstring,winrt::impl::collection_version>::Lookup(
        __int64 a1,
        winrt::hstring *a2,
        _QWORD *a3)
{
  __int64 v3; // rbx
  __int64 v5; // rax
  unsigned int v6; // r8d
  const struct winrt::impl::slim_source_location *v8; // rax
  _BYTE pExceptionObject[24]; // [rsp+28h] [rbp-40h] BYREF
  _BYTE v10[40]; // [rsp+40h] [rbp-28h] BYREF

  v3 = a1 + 8;
  if ( !a1 )
    v3 = 48LL;
  v5 = std::_Tree<std::_Tmap_traits<unsigned __int64,winrt::hstring,std::less<unsigned __int64>,std::allocator<std::pair<unsigned __int64 const,winrt::hstring>>,0>>::_Find<unsigned __int64>(
         (__int64 *)v3,
         a3);
  if ( v5 == *(_QWORD *)v3 )
  {
    v8 = (const struct winrt::impl::slim_source_location *)winrt::impl::slim_source_location::current((__int64)v10);
    winrt::hresult_out_of_bounds::hresult_out_of_bounds((winrt::hresult_out_of_bounds *)pExceptionObject, v8);
    throw (winrt::hresult_out_of_bounds *)pExceptionObject;
  }
  winrt::hstring::hstring(a2, (const struct winrt::hstring *)(v5 + 40), v6);
  return a2;
}
