/*
 * XREFs of ??$_Erase@Uhstring@winrt@@@?$_Hash@V?$_Umap_traits@Uhstring@winrt@@_NV?$_Uhash_compare@Uhstring@winrt@@U?$hash@Uhstring@winrt@@@std@@U?$equal_to@Uhstring@winrt@@@4@@std@@V?$allocator@U?$pair@$$CBUhstring@winrt@@_N@std@@@4@$0A@@std@@@std@@AEAA_KAEBUhstring@winrt@@@Z @ 0x1805EC9AC
 * Callers:
 *     ?HandlePackageUninstallEvent@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAAXUPackageCatalog@ApplicationModel@56@UPackageUninstallingEventArgs@856@@Z @ 0x1801ACF30 (-HandlePackageUninstallEvent@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAA.c)
 * Callees:
 *     ??$?RUhstring@winrt@@@?$_Uhash_compare@Uhstring@winrt@@U?$hash@Uhstring@winrt@@@std@@U?$equal_to@Uhstring@winrt@@@4@@std@@QEBA_KAEBUhstring@winrt@@@Z @ 0x1801AD370 (--$-RUhstring@winrt@@@-$_Uhash_compare@Uhstring@winrt@@U-$hash@Uhstring@winrt@@@std@@U-$equal_to.c)
 *     ??$_Find_last@Uhstring@winrt@@@?$_Hash@V?$_Umap_traits@Uhstring@winrt@@_NV?$_Uhash_compare@Uhstring@winrt@@U?$hash@Uhstring@winrt@@@std@@U?$equal_to@Uhstring@winrt@@@4@@std@@V?$allocator@U?$pair@$$CBUhstring@winrt@@_N@std@@@4@$0A@@std@@@std@@IEBA?AU?$_Hash_find_last_result@PEAU?$_List_node@U?$pair@$$CBUhstring@winrt@@_N@std@@PEAX@std@@@1@AEBUhstring@winrt@@_K@Z @ 0x1801AD3CC (--$_Find_last@Uhstring@winrt@@@-$_Hash@V-$_Umap_traits@Uhstring@winrt@@_NV-$_Uhash_compare@Uhstr.c)
 *     ??$_Freenode@V?$allocator@U?$_List_node@U?$pair@$$CBUhstring@winrt@@_N@std@@PEAX@std@@@std@@@?$_List_node@U?$pair@$$CBUhstring@winrt@@_N@std@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@U?$pair@$$CBUhstring@winrt@@_N@std@@PEAX@std@@@1@PEAU01@@Z @ 0x1805ECA84 (--$_Freenode@V-$allocator@U-$_List_node@U-$pair@$$CBUhstring@winrt@@_N@std@@PEAX@std@@@std@@@-$_.c)
 */

__int64 __fastcall std::_Hash<std::_Umap_traits<winrt::hstring,bool,std::_Uhash_compare<winrt::hstring,std::hash<winrt::hstring>,std::equal_to<winrt::hstring>>,std::allocator<std::pair<winrt::hstring const,bool>>,0>>::_Erase<winrt::hstring>(
        __int64 a1,
        __int64 *a2)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rcx
  __int64 v4; // r11
  _QWORD *v5; // rdx
  __int64 v6; // r8
  __int64 v7; // rcx
  __int64 v8; // rax
  __int64 v9; // r8
  __int64 v11[3]; // [rsp+20h] [rbp-18h] BYREF

  v2 = std::_Uhash_compare<winrt::hstring,std::hash<winrt::hstring>,std::equal_to<winrt::hstring>>::operator()<winrt::hstring>(
         a1,
         a2);
  v5 = (_QWORD *)std::_Hash<std::_Umap_traits<winrt::hstring,bool,std::_Uhash_compare<winrt::hstring,std::hash<winrt::hstring>,std::equal_to<winrt::hstring>>,std::allocator<std::pair<winrt::hstring const,bool>>,0>>::_Find_last<winrt::hstring>(
                   v3,
                   v11,
                   v4,
                   v2)[1];
  if ( !v5 )
    return 0LL;
  v6 = qword_18089E798;
  v7 = 2 * (v2 & qword_18089E7B0);
  if ( *(_QWORD **)(qword_18089E798 + 16 * (v2 & qword_18089E7B0) + 8) == v5 )
  {
    if ( *(_QWORD **)(qword_18089E798 + 16 * (v2 & qword_18089E7B0)) == v5 )
    {
      v8 = qword_18089E788;
      *(_QWORD *)(qword_18089E798 + 16 * (v2 & qword_18089E7B0)) = qword_18089E788;
    }
    else
    {
      v8 = v5[1];
    }
    *(_QWORD *)(v6 + 8 * v7 + 8) = v8;
  }
  else if ( *(_QWORD **)(qword_18089E798 + 16 * (v2 & qword_18089E7B0)) == v5 )
  {
    *(_QWORD *)(qword_18089E798 + 16 * (v2 & qword_18089E7B0)) = *v5;
  }
  v9 = *v5;
  --qword_18089E790;
  *(_QWORD *)v5[1] = v9;
  *(_QWORD *)(v9 + 8) = v5[1];
  std::_List_node<std::pair<winrt::hstring const,bool>,void *>::_Freenode<std::allocator<std::_List_node<std::pair<winrt::hstring const,bool>,void *>>>();
  return 1LL;
}
