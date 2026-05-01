/*
 * XREFs of ??$_Emplace@AEB_KAEBUhstring@winrt@@@?$_Tree@V?$_Tmap_traits@_KUhstring@winrt@@U?$less@_K@std@@V?$allocator@U?$pair@$$CB_KUhstring@winrt@@@std@@@4@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@$$CB_KUhstring@winrt@@@std@@PEAX@std@@_N@1@AEB_KAEBUhstring@winrt@@@Z @ 0x1806449F4
 * Callers:
 *     ?Insert@?$produce@U?$map_impl@_KUhstring@winrt@@V?$map@_KUhstring@winrt@@U?$less@_K@std@@V?$allocator@U?$pair@$$CB_KUhstring@winrt@@@std@@@4@@std@@Usingle_threaded_collection_base@impl@2@@impl@winrt@@U?$IMap@_KUhstring@winrt@@@Collections@Foundation@Windows@3@@impl@winrt@@UEAAH_KPEAXPEA_N@Z @ 0x18064DF90 (-Insert@-$produce@U-$map_impl@_KUhstring@winrt@@V-$map@_KUhstring@winrt@@U-$less@_K@std@@V-$allo.c)
 * Callees:
 *     ??0hstring@winrt@@QEAA@AEBU01@@Z @ 0x18002C9CC (--0hstring@winrt@@QEAA@AEBU01@@Z.c)
 *     ??$_Get_size_of_n@$0DA@@std@@YA_K_K@Z @ 0x1800CDD58 (--$_Get_size_of_n@$0DA@@std@@YA_K_K@Z.c)
 *     ?_Insert_node@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBUhstring@winrt@@U12@@std@@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBUhstring@winrt@@U12@@std@@PEAX@2@U?$_Tree_id@PEAU?$_Tree_node@U?$pair@$$CBUhstring@winrt@@U12@@std@@PEAX@std@@@2@QEAU32@@Z @ 0x1800CF550 (-_Insert_node@-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBUhstring@winrt@@U12@@std@@@std@@@std.c)
 *     ??$_Find_lower_bound@PEAUHWND__@@@?$_Tree@V?$_Tmap_traits@PEAUHWND__@@UExeData@@U?$less@PEAUHWND__@@@std@@V?$allocator@U?$pair@QEAUHWND__@@UExeData@@@std@@@4@$0A@@std@@@std@@IEBA?AU?$_Tree_find_result@PEAU?$_Tree_node@U?$pair@QEAUHWND__@@UExeData@@@std@@PEAX@std@@@1@AEBQEAUHWND__@@@Z @ 0x1801A74D4 (--$_Find_lower_bound@PEAUHWND__@@@-$_Tree@V-$_Tmap_traits@PEAUHWND__@@UExeData@@U-$less@PEAUHWND.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z @ 0x180285C68 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z.c)
 *     ?_Throw_tree_length_error@std@@YAXXZ @ 0x1803151E4 (-_Throw_tree_length_error@std@@YAXXZ.c)
 *     ??1?$_Tree_temp_node@V?$allocator@U?$_Tree_node@U?$pair@$$CB_KUhstring@winrt@@@std@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x180649970 (--1-$_Tree_temp_node@V-$allocator@U-$_Tree_node@U-$pair@$$CB_KUhstring@winrt@@@std@@PEAX@std@@@s.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall std::_Tree<std::_Tmap_traits<unsigned __int64,winrt::hstring,std::less<unsigned __int64>,std::allocator<std::pair<unsigned __int64 const,winrt::hstring>>,0>>::_Emplace<unsigned __int64 const &,winrt::hstring const &>(
        __int64 *a1,
        __int64 a2,
        _QWORD *a3,
        const struct winrt::hstring *a4)
{
  _QWORD *lower; // rax
  _QWORD *v9; // r8
  __int128 v10; // xmm6
  __int64 v11; // rdi
  unsigned __int64 size_of; // rax
  _QWORD *v13; // rbx
  unsigned int v14; // r8d
  __int128 v16; // [rsp+20h] [rbp-48h] BYREF
  __int64 v17; // [rsp+30h] [rbp-38h]

  lower = std::_Tree<std::_Tmap_traits<HWND__ *,ExeData,std::less<HWND__ *>,std::allocator<std::pair<HWND__ * const,ExeData>>,0>>::_Find_lower_bound<HWND__ *>(
            a1,
            &v16,
            a3);
  v10 = *(_OWORD *)lower;
  v17 = lower[2];
  if ( *(_BYTE *)(v17 + 25) || *v9 < *(_QWORD *)(v17 + 32) )
  {
    if ( a1[1] == 0x555555555555555LL )
      std::_Throw_tree_length_error();
    v11 = *a1;
    v16 = (unsigned __int64)a1;
    size_of = std::_Get_size_of_n<48>(1uLL);
    v13 = std::_Allocate<16,std::_Default_allocate_traits>(size_of);
    *((_QWORD *)&v16 + 1) = v13;
    v13[4] = *a3;
    winrt::hstring::hstring((winrt::hstring *)(v13 + 5), a4, v14);
    *v13 = v11;
    v13[1] = v11;
    v13[2] = v11;
    *((_WORD *)v13 + 12) = 0;
    *((_QWORD *)&v16 + 1) = 0LL;
    std::_Tree_temp_node<std::allocator<std::_Tree_node<std::pair<unsigned __int64 const,winrt::hstring>,void *>>>::~_Tree_temp_node<std::allocator<std::_Tree_node<std::pair<unsigned __int64 const,winrt::hstring>,void *>>>(&v16);
    v16 = v10;
    *(_QWORD *)a2 = std::_Tree_val<std::_Tree_simple_types<std::pair<winrt::hstring const,winrt::hstring>>>::_Insert_node(
                      (__int64)a1,
                      (__int64)&v16,
                      (__int64)v13);
    *(_BYTE *)(a2 + 8) = 1;
  }
  else
  {
    *(_QWORD *)a2 = v17;
    *(_BYTE *)(a2 + 8) = 0;
  }
  return a2;
}
