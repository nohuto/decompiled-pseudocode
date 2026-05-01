/*
 * XREFs of ??$_Erase_tree@V?$allocator@U?$_Tree_node@U?$pair@$$CBUhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@@std@@PEAX@std@@@std@@@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBUhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@@std@@@std@@@std@@QEAAXAEAV?$allocator@U?$_Tree_node@U?$pair@$$CBUhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@@std@@PEAX@std@@@1@PEAU?$_Tree_node@U?$pair@$$CBUhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@@std@@PEAX@1@@Z @ 0x18021E870
 * Callers:
 *     ??$_Erase_tree@V?$allocator@U?$_Tree_node@U?$pair@$$CBUhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@@std@@PEAX@std@@@std@@@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBUhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@@std@@@std@@@std@@QEAAXAEAV?$allocator@U?$_Tree_node@U?$pair@$$CBUhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@@std@@PEAX@std@@@1@PEAU?$_Tree_node@U?$pair@$$CBUhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@@std@@PEAX@1@@Z @ 0x18021E870 (--$_Erase_tree@V-$allocator@U-$_Tree_node@U-$pair@$$CBUhstring@winrt@@URemoteSystem@Shell@Intern.c)
 *     ??1?$_Tree@V?$_Tmap_traits@Uhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@U?$less@Uhstring@winrt@@@std@@V?$allocator@U?$pair@$$CBUhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@@std@@@8@$0A@@std@@@std@@QEAA@XZ @ 0x180649940 (--1-$_Tree@V-$_Tmap_traits@Uhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@U-$less@Uhstri.c)
 * Callees:
 *     ??$_Erase_tree@V?$allocator@U?$_Tree_node@U?$pair@$$CBUhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@@std@@PEAX@std@@@std@@@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBUhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@@std@@@std@@@std@@QEAAXAEAV?$allocator@U?$_Tree_node@U?$pair@$$CBUhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@@std@@PEAX@std@@@1@PEAU?$_Tree_node@U?$pair@$$CBUhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@@std@@PEAX@1@@Z @ 0x18021E870 (--$_Erase_tree@V-$allocator@U-$_Tree_node@U-$pair@$$CBUhstring@winrt@@URemoteSystem@Shell@Intern.c)
 *     ??$_Deallocate@$0BA@@std@@YAXPEAX_K@Z @ 0x180285A90 (--$_Deallocate@$0BA@@std@@YAXPEAX_K@Z.c)
 *     ??1?$pair@$$CBUhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@@std@@QEAA@XZ @ 0x180649E50 (--1-$pair@$$CBUhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@@std@@QEAA@XZ.c)
 */

__int64 __fastcall std::_Tree_val<std::_Tree_simple_types<std::pair<winrt::hstring const,winrt::Windows::Internal::Shell::RemoteSystem>>>::_Erase_tree<std::allocator<std::_Tree_node<std::pair<winrt::hstring const,winrt::Windows::Internal::Shell::RemoteSystem>,void *>>>(
        __int64 a1,
        __int64 a2,
        __int64 *a3)
{
  __int64 *i; // rdi
  __int64 *v6; // rbx
  __int64 result; // rax

  for ( i = a3; !*((_BYTE *)i + 25); result = std::_Deallocate<16>(v6, 48LL) )
  {
    std::_Tree_val<std::_Tree_simple_types<std::pair<winrt::hstring const,winrt::Windows::Internal::Shell::RemoteSystem>>>::_Erase_tree<std::allocator<std::_Tree_node<std::pair<winrt::hstring const,winrt::Windows::Internal::Shell::RemoteSystem>,void *>>>(
      a1,
      a2,
      i[2]);
    v6 = i;
    i = (__int64 *)*i;
    std::pair<winrt::hstring const,winrt::Windows::Internal::Shell::RemoteSystem>::~pair<winrt::hstring const,winrt::Windows::Internal::Shell::RemoteSystem>(v6 + 4);
  }
  return result;
}
