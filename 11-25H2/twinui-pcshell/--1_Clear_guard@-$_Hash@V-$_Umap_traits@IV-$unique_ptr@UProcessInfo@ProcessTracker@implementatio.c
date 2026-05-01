/*
 * XREFs of ??1_Clear_guard@?$_Hash@V?$_Umap_traits@IV?$unique_ptr@UProcessInfo@ProcessTracker@implementation@Shell@Internal@Windows@winrt@@U?$default_delete@UProcessInfo@ProcessTracker@implementation@Shell@Internal@Windows@winrt@@@std@@@std@@V?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@2@V?$allocator@U?$pair@$$CBIV?$unique_ptr@UProcessInfo@ProcessTracker@implementation@Shell@Internal@Windows@winrt@@U?$default_delete@UProcessInfo@ProcessTracker@implementation@Shell@Internal@Windows@winrt@@@std@@@std@@@std@@@2@$0A@@std@@@std@@QEAA@XZ @ 0x18063A980
 * Callers:
 *     ?_Forced_rehash@?$_Hash@V?$_Umap_traits@IV?$unique_ptr@UProcessInfo@ProcessTracker@implementation@Shell@Internal@Windows@winrt@@U?$default_delete@UProcessInfo@ProcessTracker@implementation@Shell@Internal@Windows@winrt@@@std@@@std@@V?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@2@V?$allocator@U?$pair@$$CBIV?$unique_ptr@UProcessInfo@ProcessTracker@implementation@Shell@Internal@Windows@winrt@@U?$default_delete@UProcessInfo@ProcessTracker@implementation@Shell@Internal@Windows@winrt@@@std@@@std@@@std@@@2@$0A@@std@@@std@@IEAAX_K@Z @ 0x18063AEA8 (-_Forced_rehash@-$_Hash@V-$_Umap_traits@IV-$unique_ptr@UProcessInfo@ProcessTracker@implementatio.c)
 * Callees:
 *     ?clear@?$_Hash@V?$_Umap_traits@IV?$unique_ptr@UProcessInfo@ProcessTracker@implementation@Shell@Internal@Windows@winrt@@U?$default_delete@UProcessInfo@ProcessTracker@implementation@Shell@Internal@Windows@winrt@@@std@@@std@@V?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@2@V?$allocator@U?$pair@$$CBIV?$unique_ptr@UProcessInfo@ProcessTracker@implementation@Shell@Internal@Windows@winrt@@U?$default_delete@UProcessInfo@ProcessTracker@implementation@Shell@Internal@Windows@winrt@@@std@@@std@@@std@@@2@$0A@@std@@@std@@QEAAXXZ @ 0x18063B20C (-clear@-$_Hash@V-$_Umap_traits@IV-$unique_ptr@UProcessInfo@ProcessTracker@implementation@Shell@I.c)
 */

__int64 __fastcall std::_Hash<std::_Umap_traits<unsigned int,std::unique_ptr<winrt::Windows::Internal::Shell::implementation::ProcessTracker::ProcessInfo>,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<std::pair<unsigned int const,std::unique_ptr<winrt::Windows::Internal::Shell::implementation::ProcessTracker::ProcessInfo>>>,0>>::_Clear_guard::~_Clear_guard(
        _QWORD *a1)
{
  __int64 result; // rax

  if ( *a1 )
    return std::_Hash<std::_Umap_traits<unsigned int,std::unique_ptr<winrt::Windows::Internal::Shell::implementation::ProcessTracker::ProcessInfo>,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<std::pair<unsigned int const,std::unique_ptr<winrt::Windows::Internal::Shell::implementation::ProcessTracker::ProcessInfo>>>,0>>::clear();
  return result;
}
