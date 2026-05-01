/*
 * XREFs of ??$find@X@?$_Hash@V?$_Umap_traits@IV?$unique_ptr@UProcessInfo@ProcessTracker@implementation@Shell@Internal@Windows@winrt@@U?$default_delete@UProcessInfo@ProcessTracker@implementation@Shell@Internal@Windows@winrt@@@std@@@std@@V?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@2@V?$allocator@U?$pair@$$CBIV?$unique_ptr@UProcessInfo@ProcessTracker@implementation@Shell@Internal@Windows@winrt@@U?$default_delete@UProcessInfo@ProcessTracker@implementation@Shell@Internal@Windows@winrt@@@std@@@std@@@std@@@2@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBIV?$unique_ptr@UProcessInfo@ProcessTracker@implementation@Shell@Internal@Windows@winrt@@U?$default_delete@UProcessInfo@ProcessTracker@implementation@Shell@Internal@Windows@winrt@@@std@@@std@@@std@@@std@@@std@@@1@AEBI@Z @ 0x18063A240
 * Callers:
 *     ?CheckAndRaiseEvent@ProcessTracker@implementation@Shell@Internal@Windows@winrt@@AEAAXI@Z @ 0x18063A9DC (-CheckAndRaiseEvent@ProcessTracker@implementation@Shell@Internal@Windows@winrt@@AEAAXI@Z.c)
 *     ?StartTrackingProcess@ProcessTracker@implementation@Shell@Internal@Windows@winrt@@QEAAXI@Z @ 0x18063AC9C (-StartTrackingProcess@ProcessTracker@implementation@Shell@Internal@Windows@winrt@@QEAAXI@Z.c)
 * Callees:
 *     ??$?RH@?$_Uhash_compare@HU?$hash@H@std@@U?$equal_to@H@2@@std@@QEBA_KAEBH@Z @ 0x1800988F4 (--$-RH@-$_Uhash_compare@HU-$hash@H@std@@U-$equal_to@H@2@@std@@QEBA_KAEBH@Z.c)
 *     ??$_Find_last@I@?$_Hash@V?$_Umap_traits@IV?$shared_ptr@UHostProcessData@implementation@Shell@Internal@Windows@winrt@@@std@@V?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@2@V?$allocator@U?$pair@$$CBIV?$shared_ptr@UHostProcessData@implementation@Shell@Internal@Windows@winrt@@@std@@@std@@@2@$0A@@std@@@std@@IEBA?AU?$_Hash_find_last_result@PEAU?$_List_node@U?$pair@$$CBIV?$shared_ptr@UHostProcessData@implementation@Shell@Internal@Windows@winrt@@@std@@@std@@PEAX@std@@@1@AEBI_K@Z @ 0x180297B78 (--$_Find_last@I@-$_Hash@V-$_Umap_traits@IV-$shared_ptr@UHostProcessData@implementation@Shell@Int.c)
 */

_QWORD *__fastcall std::_Hash<std::_Umap_traits<unsigned int,std::unique_ptr<winrt::Windows::Internal::Shell::implementation::ProcessTracker::ProcessInfo>,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<std::pair<unsigned int const,std::unique_ptr<winrt::Windows::Internal::Shell::implementation::ProcessTracker::ProcessInfo>>>,0>>::find<void>(
        _QWORD *a1,
        _QWORD *a2,
        __int64 a3)
{
  __int64 v5; // rax
  _DWORD *v6; // rdx
  __int64 v7; // r8
  _QWORD v9[3]; // [rsp+20h] [rbp-18h] BYREF

  v5 = std::_Uhash_compare<int,std::hash<int>,std::equal_to<int>>::operator()<int>((__int64)a1, a3);
  v7 = std::_Hash<std::_Umap_traits<unsigned int,std::shared_ptr<winrt::Windows::Internal::Shell::implementation::HostProcessData>,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<std::pair<unsigned int const,std::shared_ptr<winrt::Windows::Internal::Shell::implementation::HostProcessData>>>,0>>::_Find_last<unsigned int>(
         a1,
         v9,
         v6,
         v5)[1];
  if ( !v7 )
    v7 = a1[1];
  *a2 = v7;
  return a2;
}
