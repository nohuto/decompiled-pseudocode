/*
 * XREFs of ??$_Try_emplace@AEBQEAUHWND__@@AEAIAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEBV23@@?$map@PEAUHWND__@@UExeData@@U?$less@PEAUHWND__@@@std@@V?$allocator@U?$pair@QEAUHWND__@@UExeData@@@std@@@4@@std@@AEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@QEAUHWND__@@UExeData@@@std@@PEAX@std@@_N@1@AEBQEAUHWND__@@AEAIAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@2@Z @ 0x1805742B4
 * Callers:
 *     ?SaveExeData@ExeDataCache@@QEAAXPEAUHWND__@@IAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@1@Z @ 0x180575510 (-SaveExeData@ExeDataCache@@QEAAXPEAUHWND__@@IAEBV-$basic_string@GU-$char_traits@G@std@@V-$alloca.c)
 * Callees:
 *     ?_Insert_node@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBUhstring@winrt@@U12@@std@@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBUhstring@winrt@@U12@@std@@PEAX@2@U?$_Tree_id@PEAU?$_Tree_node@U?$pair@$$CBUhstring@winrt@@U12@@std@@PEAX@std@@@2@QEAU32@@Z @ 0x1800CF550 (-_Insert_node@-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBUhstring@winrt@@U12@@std@@@std@@@std.c)
 *     ??$_Find_lower_bound@PEAUHWND__@@@?$_Tree@V?$_Tmap_traits@PEAUHWND__@@UExeData@@U?$less@PEAUHWND__@@@std@@V?$allocator@U?$pair@QEAUHWND__@@UExeData@@@std@@@4@$0A@@std@@@std@@IEBA?AU?$_Tree_find_result@PEAU?$_Tree_node@U?$pair@QEAUHWND__@@UExeData@@@std@@PEAX@std@@@1@AEBQEAUHWND__@@@Z @ 0x1801A74D4 (--$_Find_lower_bound@PEAUHWND__@@@-$_Tree@V-$_Tmap_traits@PEAUHWND__@@UExeData@@U-$less@PEAUHWND.c)
 *     ?_Throw_tree_length_error@std@@YAXXZ @ 0x1803151E4 (-_Throw_tree_length_error@std@@YAXXZ.c)
 *     ??$?0AEBUpiecewise_construct_t@std@@V?$tuple@AEBQEAUHWND__@@@1@V?$tuple@AEAIAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEBV12@@1@@?$_Tree_temp_node@V?$allocator@U?$_Tree_node@U?$pair@QEAUHWND__@@UExeData@@@std@@PEAX@std@@@std@@@std@@QEAA@AEAV?$allocator@U?$_Tree_node@U?$pair@QEAUHWND__@@UExeData@@@std@@PEAX@std@@@1@PEAU?$_Tree_node@U?$pair@QEAUHWND__@@UExeData@@@std@@PEAX@1@AEBUpiecewise_construct_t@1@$$QEAV?$tuple@AEBQEAUHWND__@@@1@$$QEAV?$tuple@AEAIAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEBV12@@1@@Z @ 0x18057362C (--$-0AEBUpiecewise_construct_t@std@@V-$tuple@AEBQEAUHWND__@@@1@V-$tuple@AEAIAEBV-$basic_string@G.c)
 *     ??1?$_Tree_temp_node@V?$allocator@U?$_Tree_node@U?$pair@QEAUHWND__@@UExeData@@@std@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x180574828 (--1-$_Tree_temp_node@V-$allocator@U-$_Tree_node@U-$pair@QEAUHWND__@@UExeData@@@std@@PEAX@std@@@s.c)
 */

__int64 __fastcall std::map<HWND__ *,ExeData>::_Try_emplace<HWND__ * const &,unsigned int &,std::wstring const &,std::wstring const &>(
        __int64 *a1,
        __int64 a2,
        _QWORD *a3,
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  _QWORD *v8; // r8
  __int64 v9; // r10
  __int64 v10; // r8
  _QWORD *v11; // rax
  __int64 v12; // rbx
  __int128 v14; // [rsp+30h] [rbp-50h] BYREF
  _QWORD v15[5]; // [rsp+40h] [rbp-40h] BYREF
  __int128 v16; // [rsp+68h] [rbp-18h] BYREF
  __int64 v17; // [rsp+78h] [rbp-8h]

  std::_Tree<std::_Tmap_traits<HWND__ *,ExeData,std::less<HWND__ *>,std::allocator<std::pair<HWND__ * const,ExeData>>,0>>::_Find_lower_bound<HWND__ *>(
    a1,
    &v16,
    a3);
  if ( *(_BYTE *)(v17 + 25) || *v8 < *(_QWORD *)(v17 + 32) )
  {
    if ( a1[1] == 0x249249249249249LL )
      std::_Throw_tree_length_error();
    v15[2] = a6;
    v15[3] = a5;
    *(_QWORD *)&v14 = v8;
    v10 = *a1;
    v15[4] = v9;
    v11 = std::_Tree_temp_node<std::allocator<std::_Tree_node<std::pair<HWND__ * const,ExeData>,void *>>>::_Tree_temp_node<std::allocator<std::_Tree_node<std::pair<HWND__ * const,ExeData>,void *>>>(
            v15,
            (__int64)a1,
            v10);
    v12 = v11[1];
    v11[1] = 0LL;
    std::_Tree_temp_node<std::allocator<std::_Tree_node<std::pair<HWND__ * const,ExeData>,void *>>>::~_Tree_temp_node<std::allocator<std::_Tree_node<std::pair<HWND__ * const,ExeData>,void *>>>(v15);
    v14 = v16;
    *(_QWORD *)a2 = std::_Tree_val<std::_Tree_simple_types<std::pair<winrt::hstring const,winrt::hstring>>>::_Insert_node(
                      (__int64)a1,
                      (__int64)&v14,
                      v12);
    *(_BYTE *)(a2 + 8) = 1;
  }
  else
  {
    *(_QWORD *)a2 = v17;
    *(_BYTE *)(a2 + 8) = 0;
  }
  return a2;
}
