/*
 * XREFs of ??1?$_Tree_temp_node@V?$allocator@U?$_Tree_node@U?$pair@$$CBUhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@@std@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x1806499A0
 * Callers:
 *     ??$_Emplace@AEBUhstring@winrt@@AEBURemoteSystem@Shell@Internal@Windows@2@@?$_Tree@V?$_Tmap_traits@Uhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@U?$less@Uhstring@winrt@@@std@@V?$allocator@U?$pair@$$CBUhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@@std@@@8@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@$$CBUhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@@std@@PEAX@std@@_N@1@AEBUhstring@winrt@@AEBURemoteSystem@Shell@Internal@Windows@4@@Z @ 0x18064490C (--$_Emplace@AEBUhstring@winrt@@AEBURemoteSystem@Shell@Internal@Windows@2@@-$_Tree@V-$_Tmap_trait.c)
 * Callees:
 *     ??1?$pair@$$CBUhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@@std@@QEAA@XZ @ 0x180649E50 (--1-$pair@$$CBUhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@@std@@QEAA@XZ.c)
 */

__int64 __fastcall std::_Tree_temp_node<std::allocator<std::_Tree_node<std::pair<winrt::hstring const,winrt::Windows::Internal::Shell::RemoteSystem>,void *>>>::~_Tree_temp_node<std::allocator<std::_Tree_node<std::pair<winrt::hstring const,winrt::Windows::Internal::Shell::RemoteSystem>,void *>>>(
        __int64 a1)
{
  __int64 v2; // rcx

  v2 = *(_QWORD *)(a1 + 8);
  if ( v2 )
    std::pair<winrt::hstring const,winrt::Windows::Internal::Shell::RemoteSystem>::~pair<winrt::hstring const,winrt::Windows::Internal::Shell::RemoteSystem>(v2 + 32);
  return std::_Alloc_construct_ptr<std::allocator<std::_Tree_node<std::pair<unsigned long const,Microsoft::WRL::ComPtr<IApplicationFrame>>,void *>>>::~_Alloc_construct_ptr<std::allocator<std::_Tree_node<std::pair<unsigned long const,Microsoft::WRL::ComPtr<IApplicationFrame>>,void *>>>(a1);
}
