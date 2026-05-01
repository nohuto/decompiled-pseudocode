/*
 * XREFs of ??1?$_Hash@V?$_Umap_traits@IV?$shared_ptr@UHostProcessData@implementation@Shell@Internal@Windows@winrt@@@std@@V?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@2@V?$allocator@U?$pair@$$CBIV?$shared_ptr@UHostProcessData@implementation@Shell@Internal@Windows@winrt@@@std@@@std@@@2@$0A@@std@@@std@@QEAA@XZ @ 0x1806497B4
 * Callers:
 *     ??1?$unordered_map@IV?$shared_ptr@UHostProcessData@implementation@Shell@Internal@Windows@winrt@@@std@@U?$hash@I@2@U?$equal_to@I@2@V?$allocator@U?$pair@$$CBIV?$shared_ptr@UHostProcessData@implementation@Shell@Internal@Windows@winrt@@@std@@@std@@@2@@std@@QEAA@XZ @ 0x18064A16C (--1-$unordered_map@IV-$shared_ptr@UHostProcessData@implementation@Shell@Internal@Windows@winrt@@.c)
 *     ??1RemoteSessionPersistenceHelper@implementation@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18064A20C (--1RemoteSessionPersistenceHelper@implementation@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ??1ConnectionHandler@implementation@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x180655410 (--1ConnectionHandler@implementation@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ??1SwitchConnectionHandler@implementation@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x1806554DC (--1SwitchConnectionHandler@implementation@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?_Destroy@?$_Ref_count_obj2@UBootConnectionHandler@implementation@Shell@Internal@Windows@winrt@@@std@@EEAAXXZ @ 0x180655940 (-_Destroy@-$_Ref_count_obj2@UBootConnectionHandler@implementation@Shell@Internal@Windows@winrt@@.c)
 * Callees:
 *     ??$_Deallocate@$0BA@@std@@YAXPEAX_K@Z @ 0x180285A90 (--$_Deallocate@$0BA@@std@@YAXPEAX_K@Z.c)
 *     ??$_Free_non_head@V?$allocator@U?$_List_node@U?$pair@$$CBIV?$shared_ptr@UHostProcessData@implementation@Shell@Internal@Windows@winrt@@@std@@@std@@PEAX@std@@@std@@@?$_List_node@U?$pair@$$CBIV?$shared_ptr@UHostProcessData@implementation@Shell@Internal@Windows@winrt@@@std@@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@U?$pair@$$CBIV?$shared_ptr@UHostProcessData@implementation@Shell@Internal@Windows@winrt@@@std@@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x180644DE4 (--$_Free_non_head@V-$allocator@U-$_List_node@U-$pair@$$CBIV-$shared_ptr@UHostProcessData@impleme.c)
 */

void __fastcall std::_Hash<std::_Umap_traits<unsigned int,std::shared_ptr<winrt::Windows::Internal::Shell::implementation::HostProcessData>,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<std::pair<unsigned int const,std::shared_ptr<winrt::Windows::Internal::Shell::implementation::HostProcessData>>>,0>>::~_Hash<std::_Umap_traits<unsigned int,std::shared_ptr<winrt::Windows::Internal::Shell::implementation::HostProcessData>,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<std::pair<unsigned int const,std::shared_ptr<winrt::Windows::Internal::Shell::implementation::HostProcessData>>>,0>>(
        __int64 *a1)
{
  void *v2; // rcx

  v2 = (void *)a1[3];
  if ( v2 )
  {
    std::_Deallocate<16>(v2, (struct std::nothrow_t *)((a1[5] - (_QWORD)v2) & 0xFFFFFFFFFFFFFFF8uLL));
    a1[3] = 0LL;
    a1[4] = 0LL;
    a1[5] = 0LL;
  }
  std::_List_node<std::pair<unsigned int const,std::shared_ptr<winrt::Windows::Internal::Shell::implementation::HostProcessData>>,void *>::_Free_non_head<std::allocator<std::_List_node<std::pair<unsigned int const,std::shared_ptr<winrt::Windows::Internal::Shell::implementation::HostProcessData>>,void *>>>(
    (__int64)v2,
    a1[1]);
  std::_Deallocate<16>((void *)a1[1], (struct std::nothrow_t *)0x28);
}
