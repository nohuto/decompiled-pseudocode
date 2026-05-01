/*
 * XREFs of ??1?$_Hash@V?$_Umap_traits@IV?$unique_ptr@UProcessInfo@ProcessTracker@implementation@Shell@Internal@Windows@winrt@@U?$default_delete@UProcessInfo@ProcessTracker@implementation@Shell@Internal@Windows@winrt@@@std@@@std@@V?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@2@V?$allocator@U?$pair@$$CBIV?$unique_ptr@UProcessInfo@ProcessTracker@implementation@Shell@Internal@Windows@winrt@@U?$default_delete@UProcessInfo@ProcessTracker@implementation@Shell@Internal@Windows@winrt@@@std@@@std@@@std@@@2@$0A@@std@@@std@@QEAA@XZ @ 0x18063A818
 * Callers:
 *     ??1ProcessTracker@implementation@Shell@Internal@Windows@winrt@@UEAA@XZ @ 0x18063A94C (--1ProcessTracker@implementation@Shell@Internal@Windows@winrt@@UEAA@XZ.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180029B4C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Free_non_head@V?$allocator@U?$_List_node@U?$pair@$$CBIV?$unique_ptr@UProcessInfo@ProcessTracker@implementation@Shell@Internal@Windows@winrt@@U?$default_delete@UProcessInfo@ProcessTracker@implementation@Shell@Internal@Windows@winrt@@@std@@@std@@@std@@PEAX@std@@@std@@@?$_List_node@U?$pair@$$CBIV?$unique_ptr@UProcessInfo@ProcessTracker@implementation@Shell@Internal@Windows@winrt@@U?$default_delete@UProcessInfo@ProcessTracker@implementation@Shell@Internal@Windows@winrt@@@std@@@std@@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@U?$pair@$$CBIV?$unique_ptr@UProcessInfo@ProcessTracker@implementation@Shell@Internal@Windows@winrt@@U?$default_delete@UProcessInfo@ProcessTracker@implementation@Shell@Internal@Windows@winrt@@@std@@@std@@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x180639F68 (--$_Free_non_head@V-$allocator@U-$_List_node@U-$pair@$$CBIV-$unique_ptr@UProcessInfo@ProcessTrac.c)
 */

void __fastcall std::_Hash<std::_Umap_traits<unsigned int,std::unique_ptr<winrt::Windows::Internal::Shell::implementation::ProcessTracker::ProcessInfo>,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<std::pair<unsigned int const,std::unique_ptr<winrt::Windows::Internal::Shell::implementation::ProcessTracker::ProcessInfo>>>,0>>::~_Hash<std::_Umap_traits<unsigned int,std::unique_ptr<winrt::Windows::Internal::Shell::implementation::ProcessTracker::ProcessInfo>,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<std::pair<unsigned int const,std::unique_ptr<winrt::Windows::Internal::Shell::implementation::ProcessTracker::ProcessInfo>>>,0>>(
        __int64 *a1)
{
  void *v2; // rcx

  v2 = (void *)a1[3];
  if ( v2 )
  {
    std::_Deallocate<16,0>(v2, (const struct std::nothrow_t *)((a1[5] - (_QWORD)v2) & 0xFFFFFFFFFFFFFFF8uLL));
    a1[3] = 0LL;
    a1[4] = 0LL;
    a1[5] = 0LL;
  }
  std::_List_node<std::pair<unsigned int const,std::unique_ptr<winrt::Windows::Internal::Shell::implementation::ProcessTracker::ProcessInfo>>,void *>::_Free_non_head<std::allocator<std::_List_node<std::pair<unsigned int const,std::unique_ptr<winrt::Windows::Internal::Shell::implementation::ProcessTracker::ProcessInfo>>,void *>>>(
    (__int64)v2,
    a1[1]);
  std::_Deallocate<16,0>((void *)a1[1], (const struct std::nothrow_t *)0x20);
}
