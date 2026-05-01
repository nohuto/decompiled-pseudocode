/*
 * XREFs of ?Clear@?$produce@U?$map_impl@Uhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@V?$map@Uhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@U?$less@Uhstring@winrt@@@std@@V?$allocator@U?$pair@$$CBUhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@@std@@@8@@std@@Usingle_threaded_collection_base@impl@2@@impl@winrt@@U?$IMap@Uhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@@Collections@Foundation@Windows@3@@impl@winrt@@UEAAHXZ @ 0x180624DC0
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$map@IUhstring@winrt@@U?$less@I@std@@V?$allocator@U?$pair@$$CBIUhstring@winrt@@@std@@@4@@std@@QEAA@XZ @ 0x180622C10 (--0-$map@IUhstring@winrt@@U-$less@I@std@@V-$allocator@U-$pair@$$CBIUhstring@winrt@@@std@@@4@@std.c)
 *     ??1?$_Tree@V?$_Tmap_traits@Uhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@U?$less@Uhstring@winrt@@@std@@V?$allocator@U?$pair@$$CBUhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@@std@@@8@$0A@@std@@@std@@QEAA@XZ @ 0x180623C64 (--1-$_Tree@V-$_Tmap_traits@Uhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@U-$less@Uhstri.c)
 */

__int64 __fastcall winrt::impl::produce<winrt::impl::map_impl<winrt::hstring,winrt::Windows::Internal::Shell::RemoteSystem,std::map<winrt::hstring,winrt::Windows::Internal::Shell::RemoteSystem>,winrt::impl::single_threaded_collection_base>,winrt::Windows::Foundation::Collections::IMap<winrt::hstring,winrt::Windows::Internal::Shell::RemoteSystem>>::Clear(
        __int64 a1)
{
  __int64 v1; // rdi
  void *v2; // rcx
  __int64 v3; // rcx
  void *v5; // [rsp+20h] [rbp-18h] BYREF
  __int64 v6; // [rsp+28h] [rbp-10h]

  v1 = (a1 - 16) & -(__int64)(a1 != 0);
  std::map<unsigned int,winrt::hstring>::map<unsigned int,winrt::hstring>(&v5);
  _InterlockedIncrement((volatile signed __int32 *)(v1 + 40));
  if ( &v5 != (void **)((v1 & -(__int64)(v1 != -40)) + 48) )
  {
    v2 = v5;
    v5 = *(void **)((v1 & -(__int64)(v1 != -40)) + 0x30);
    *(_QWORD *)((v1 & -(__int64)(v1 != -40)) + 0x30) = v2;
    v3 = v6;
    v6 = *(_QWORD *)((v1 & -(__int64)(v1 != -40)) + 0x38);
    *(_QWORD *)((v1 & -(__int64)(v1 != -40)) + 0x38) = v3;
  }
  std::_Tree<std::_Tmap_traits<winrt::hstring,winrt::Windows::Internal::Shell::RemoteSystem,std::less<winrt::hstring>,std::allocator<std::pair<winrt::hstring const,winrt::Windows::Internal::Shell::RemoteSystem>>,0>>::~_Tree<std::_Tmap_traits<winrt::hstring,winrt::Windows::Internal::Shell::RemoteSystem,std::less<winrt::hstring>,std::allocator<std::pair<winrt::hstring const,winrt::Windows::Internal::Shell::RemoteSystem>>,0>>(&v5);
  return 0LL;
}
