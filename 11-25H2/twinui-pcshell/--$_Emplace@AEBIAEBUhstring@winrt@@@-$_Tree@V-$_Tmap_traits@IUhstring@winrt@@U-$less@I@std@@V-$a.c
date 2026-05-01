/*
 * XREFs of ??$_Emplace@AEBIAEBUhstring@winrt@@@?$_Tree@V?$_Tmap_traits@IUhstring@winrt@@U?$less@I@std@@V?$allocator@U?$pair@$$CBIUhstring@winrt@@@std@@@4@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@$$CBIUhstring@winrt@@@std@@PEAX@std@@_N@1@AEBIAEBUhstring@winrt@@@Z @ 0x18061ED04
 * Callers:
 *     ?Insert@?$produce@U?$map_impl@IUhstring@winrt@@V?$map@IUhstring@winrt@@U?$less@I@std@@V?$allocator@U?$pair@$$CBIUhstring@winrt@@@std@@@4@@std@@Usingle_threaded_collection_base@impl@2@@impl@winrt@@U?$IMap@IUhstring@winrt@@@Collections@Foundation@Windows@3@@impl@winrt@@UEAAHIPEAXPEA_N@Z @ 0x1806283C0 (-Insert@-$produce@U-$map_impl@IUhstring@winrt@@V-$map@IUhstring@winrt@@U-$less@I@std@@V-$allocat.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180029F1C (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??0hstring@winrt@@QEAA@AEBU01@@Z @ 0x1800AD2D8 (--0hstring@winrt@@QEAA@AEBU01@@Z.c)
 *     ??$_Get_size_of_n@$0DA@@std@@YA_K_K@Z @ 0x1800F7124 (--$_Get_size_of_n@$0DA@@std@@YA_K_K@Z.c)
 *     ?_Insert_node@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBUhstring@winrt@@U12@@std@@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBUhstring@winrt@@U12@@std@@PEAX@2@U?$_Tree_id@PEAU?$_Tree_node@U?$pair@$$CBUhstring@winrt@@U12@@std@@PEAX@std@@@2@QEAU32@@Z @ 0x1800F848C (-_Insert_node@-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBUhstring@winrt@@U12@@std@@@std@@@std.c)
 *     ?_Throw_tree_length_error@std@@YAXXZ @ 0x180318F84 (-_Throw_tree_length_error@std@@YAXXZ.c)
 *     ??$_Find_lower_bound@I@?$_Tree@V?$_Tmap_traits@IV?$shared_ptr@ULaunchForResultsQueuedOperationData@GamingOverlayExperienceManager@@@std@@U?$less@I@2@V?$allocator@U?$pair@$$CBIV?$shared_ptr@ULaunchForResultsQueuedOperationData@GamingOverlayExperienceManager@@@std@@@std@@@2@$0A@@std@@@std@@IEBA?AU?$_Tree_find_result@PEAU?$_Tree_node@U?$pair@$$CBIV?$shared_ptr@ULaunchForResultsQueuedOperationData@GamingOverlayExperienceManager@@@std@@@std@@PEAX@std@@@1@AEBI@Z @ 0x18033DFF8 (--$_Find_lower_bound@I@-$_Tree@V-$_Tmap_traits@IV-$shared_ptr@ULaunchForResultsQueuedOperationDa.c)
 *     ??1?$_Tree_temp_node@V?$allocator@U?$_Tree_node@U?$pair@$$CB_KUhstring@winrt@@@std@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x180623C94 (--1-$_Tree_temp_node@V-$allocator@U-$_Tree_node@U-$pair@$$CB_KUhstring@winrt@@@std@@PEAX@std@@@s.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall std::_Tree<std::_Tmap_traits<unsigned int,winrt::hstring,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,winrt::hstring>>,0>>::_Emplace<unsigned int const &,winrt::hstring const &>(
        __int64 *a1,
        __int64 a2,
        _DWORD *a3,
        const struct winrt::hstring *a4)
{
  _QWORD *lower; // rax
  _DWORD *v9; // r8
  __int128 v10; // xmm6
  __int64 v11; // rdi
  size_t size_of; // rax
  _DWORD *v13; // rbx
  __int128 v15; // [rsp+20h] [rbp-48h] BYREF
  __int64 v16; // [rsp+30h] [rbp-38h]

  lower = std::_Tree<std::_Tmap_traits<unsigned int,std::shared_ptr<GamingOverlayExperienceManager::LaunchForResultsQueuedOperationData>,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,std::shared_ptr<GamingOverlayExperienceManager::LaunchForResultsQueuedOperationData>>>,0>>::_Find_lower_bound<unsigned int>(
            a1,
            &v15,
            a3);
  v10 = *(_OWORD *)lower;
  v16 = lower[2];
  if ( *(_BYTE *)(v16 + 25) || *v9 < *(_DWORD *)(v16 + 32) )
  {
    if ( a1[1] == 0x555555555555555LL )
      std::_Throw_tree_length_error();
    v11 = *a1;
    v15 = (unsigned __int64)a1;
    size_of = std::_Get_size_of_n<48>(1uLL);
    v13 = std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
    *((_QWORD *)&v15 + 1) = v13;
    v13[8] = *a3;
    winrt::hstring::hstring((winrt::hstring *)(v13 + 10), a4);
    *(_QWORD *)v13 = v11;
    *((_QWORD *)v13 + 1) = v11;
    *((_QWORD *)v13 + 2) = v11;
    *((_WORD *)v13 + 12) = 0;
    *((_QWORD *)&v15 + 1) = 0LL;
    std::_Tree_temp_node<std::allocator<std::_Tree_node<std::pair<unsigned __int64 const,winrt::hstring>,void *>>>::~_Tree_temp_node<std::allocator<std::_Tree_node<std::pair<unsigned __int64 const,winrt::hstring>,void *>>>(&v15);
    v15 = v10;
    *(_QWORD *)a2 = std::_Tree_val<std::_Tree_simple_types<std::pair<winrt::hstring const,winrt::hstring>>>::_Insert_node(
                      a1,
                      (__int64)&v15,
                      (__int64)v13);
    *(_BYTE *)(a2 + 8) = 1;
  }
  else
  {
    *(_QWORD *)a2 = v16;
    *(_BYTE *)(a2 + 8) = 0;
  }
  return a2;
}
