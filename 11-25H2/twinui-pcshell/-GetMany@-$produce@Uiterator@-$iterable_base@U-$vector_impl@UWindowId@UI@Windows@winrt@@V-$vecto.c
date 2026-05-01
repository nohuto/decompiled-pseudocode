/*
 * XREFs of ?GetMany@?$produce@Uiterator@?$iterable_base@U?$vector_impl@UWindowId@UI@Windows@winrt@@V?$vector@UWindowId@UI@Windows@winrt@@V?$allocator@UWindowId@UI@Windows@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@4@@impl@winrt@@UWindowId@UI@Windows@3@Ucollection_version@23@@winrt@@U?$IIterator@UWindowId@UI@Windows@winrt@@@Collections@Foundation@Windows@3@@impl@winrt@@UEAAHIPEAUstruct_Windows_UI_WindowId@23@PEAI@Z @ 0x18063FD00
 * Callers:
 *     <none>
 * Callees:
 *     ??0abi_guard@?$root_implements@Uiterator@?$iterable_base@U?$map_impl@Uhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@V?$map@Uhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@U?$less@Uhstring@winrt@@@std@@V?$allocator@U?$pair@$$CBUhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@@std@@@8@@std@@Usingle_threaded_collection_base@impl@2@@impl@winrt@@U?$IKeyValuePair@Uhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@@Collections@Foundation@Windows@3@Ucollection_version@23@@winrt@@U?$IIterator@U?$IKeyValuePair@Uhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@@Collections@Foundation@Windows@winrt@@@Collections@Foundation@Windows@3@@impl@winrt@@QEAA@AEAUiterator@?$iterable_base@U?$map_impl@Uhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@V?$map@Uhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@U?$less@Uhstring@winrt@@@std@@V?$allocator@U?$pair@$$CBUhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@@std@@@8@@std@@Usingle_threaded_collection_base@impl@2@@impl@winrt@@U?$IKeyValuePair@Uhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@@Collections@Foundation@Windows@3@Ucollection_version@23@@3@@Z @ 0x18029F730 (--0abi_guard@-$root_implements@Uiterator@-$iterable_base@U-$map_impl@Uhstring@winrt@@URemoteSyst.c)
 *     ?check_version@iterator_type@collection_version@impl@winrt@@QEBAXAEBU234@@Z @ 0x18033A4C4 (-check_version@iterator_type@collection_version@impl@winrt@@QEBAXAEBU234@@Z.c)
 *     memmove_0 @ 0x1806A4B18 (memmove_0.c)
 */

__int64 __fastcall winrt::impl::produce<winrt::iterable_base<winrt::impl::vector_impl<winrt::Windows::UI::WindowId,std::vector<winrt::Windows::UI::WindowId>,winrt::impl::single_threaded_collection_base>,winrt::Windows::UI::WindowId,winrt::impl::collection_version>::iterator,winrt::Windows::Foundation::Collections::IIterator<winrt::Windows::UI::WindowId>>::GetMany(
        unsigned __int64 a1,
        unsigned int a2,
        void *a3,
        _DWORD *a4)
{
  __int64 v6; // rsi
  __int64 v8; // rax
  __int64 v9; // rcx
  const void **v10; // rdi
  __int64 v11; // rax
  __int64 v12; // rcx
  __int64 result; // rax
  __int64 v14; // [rsp+50h] [rbp+8h] BYREF
  int v15; // [rsp+58h] [rbp+10h] BYREF

  v6 = a2;
  winrt::impl::root_implements<winrt::iterable_base<winrt::impl::map_impl<winrt::hstring,winrt::Windows::Internal::Shell::RemoteSystem,std::map<winrt::hstring,winrt::Windows::Internal::Shell::RemoteSystem>,winrt::impl::single_threaded_collection_base>,winrt::Windows::Foundation::Collections::IKeyValuePair<winrt::hstring,winrt::Windows::Internal::Shell::RemoteSystem>,winrt::impl::collection_version>::iterator,winrt::Windows::Foundation::Collections::IIterator<winrt::Windows::Foundation::Collections::IKeyValuePair<winrt::hstring,winrt::Windows::Internal::Shell::RemoteSystem>>>::abi_guard::abi_guard(
    &v14,
    (a1 - 16) & ((unsigned __int128)-(__int128)a1 >> 64));
  v8 = a1 + 16;
  if ( !a1 )
    v8 = 32LL;
  v9 = a1 + 8;
  if ( !a1 )
    v9 = 24LL;
  try
  {
    winrt::impl::collection_version::iterator_type::check_version(
      (winrt::impl::collection_version::iterator_type *)v9,
      (const struct winrt::impl::collection_version *)(*(_QWORD *)v8 + 40LL));
    v10 = (const void **)(a1 + 24);
    if ( !a1 )
      v10 = (const void **)40;
    v11 = a1 + 32;
    if ( !a1 )
      v11 = 48LL;
    v12 = (__int64)(*(_QWORD *)v11 - (_QWORD)*v10) >> 3;
    if ( (unsigned int)v6 >= (unsigned int)v12 )
      v6 = (unsigned int)v12;
    if ( (_DWORD)v6 )
      memmove_0(a3, *v10, 8 * v6);
    *v10 = (char *)*v10 + 8 * v6;
    *a4 = v6;
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)*winrt::to_hresult(&v15);
  }
  return result;
}
