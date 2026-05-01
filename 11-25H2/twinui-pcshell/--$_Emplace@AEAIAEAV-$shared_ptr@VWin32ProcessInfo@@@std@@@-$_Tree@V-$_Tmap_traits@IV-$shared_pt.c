/*
 * XREFs of ??$_Emplace@AEAIAEAV?$shared_ptr@VWin32ProcessInfo@@@std@@@?$_Tree@V?$_Tmap_traits@IV?$shared_ptr@VWin32ProcessInfo@@@std@@U?$less@I@2@V?$allocator@U?$pair@$$CBIV?$shared_ptr@VWin32ProcessInfo@@@std@@@std@@@2@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@$$CBIV?$shared_ptr@VWin32ProcessInfo@@@std@@@std@@PEAX@std@@_N@1@AEAIAEAV?$shared_ptr@VWin32ProcessInfo@@@1@@Z @ 0x18054FB54
 * Callers:
 *     ?UpdateView@Win32AppInfo@@QEAAXIAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEAUHWND__@@W4ViewState@AppLimits@FamilySafety@Internal@Windows@@@Z @ 0x1805520CC (-UpdateView@Win32AppInfo@@QEAAXIAEBV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@.c)
 * Callees:
 *     ?_Insert_node@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBUhstring@winrt@@U12@@std@@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBUhstring@winrt@@U12@@std@@PEAX@2@U?$_Tree_id@PEAU?$_Tree_node@U?$pair@$$CBUhstring@winrt@@U12@@std@@PEAX@std@@@2@QEAU32@@Z @ 0x1800F848C (-_Insert_node@-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBUhstring@winrt@@U12@@std@@@std@@@std.c)
 *     ??$_Find_lower_bound@I@?$_Tree@V?$_Tmap_traits@IV?$shared_ptr@VWin32ProcessInfo@@@std@@U?$less@I@2@V?$allocator@U?$pair@$$CBIV?$shared_ptr@VWin32ProcessInfo@@@std@@@std@@@2@$0A@@std@@@std@@IEBA?AU?$_Tree_find_result@PEAU?$_Tree_node@U?$pair@$$CBIV?$shared_ptr@VWin32ProcessInfo@@@std@@@std@@PEAX@std@@@1@AEBI@Z @ 0x1801B327C (--$_Find_lower_bound@I@-$_Tree@V-$_Tmap_traits@IV-$shared_ptr@VWin32ProcessInfo@@@std@@U-$less@I.c)
 *     ??1?$_Tree_temp_node@V?$allocator@U?$_Tree_node@U?$pair@$$CBW4ShellView@Shell@UI@WindowsUdk@winrt@@V?$shared_ptr@VInputAppViewCoodinatorHandler@@@std@@@std@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x1802C8DE0 (--1-$_Tree_temp_node@V-$allocator@U-$_Tree_node@U-$pair@$$CBW4ShellView@Shell@UI@WindowsUdk@winr.c)
 *     ?_Throw_tree_length_error@std@@YAXXZ @ 0x180318F84 (-_Throw_tree_length_error@std@@YAXXZ.c)
 *     ??$?0AEAIAEAV?$shared_ptr@VWin32ProcessInfo@@@std@@@?$_Tree_temp_node@V?$allocator@U?$_Tree_node@U?$pair@$$CBIV?$shared_ptr@VWin32ProcessInfo@@@std@@@std@@PEAX@std@@@std@@@std@@QEAA@AEAV?$allocator@U?$_Tree_node@U?$pair@$$CBIV?$shared_ptr@VWin32ProcessInfo@@@std@@@std@@PEAX@std@@@1@PEAU?$_Tree_node@U?$pair@$$CBIV?$shared_ptr@VWin32ProcessInfo@@@std@@@std@@PEAX@1@AEAIAEAV?$shared_ptr@VWin32ProcessInfo@@@1@@Z @ 0x18054F160 (--$-0AEAIAEAV-$shared_ptr@VWin32ProcessInfo@@@std@@@-$_Tree_temp_node@V-$allocator@U-$_Tree_node.c)
 */

__int64 __fastcall std::_Tree<std::_Tmap_traits<unsigned int,std::shared_ptr<Win32ProcessInfo>,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,std::shared_ptr<Win32ProcessInfo>>>,0>>::_Emplace<unsigned int &,std::shared_ptr<Win32ProcessInfo> &>(
        __int64 *a1,
        __int64 a2,
        _DWORD *a3)
{
  _QWORD *lower; // rax
  _DWORD *v6; // r8
  _QWORD *v7; // r10
  __int128 v8; // xmm6
  _QWORD *v9; // rax
  __int64 v10; // rbx
  _QWORD v12[2]; // [rsp+30h] [rbp-48h] BYREF
  __int128 v13; // [rsp+40h] [rbp-38h] BYREF
  __int64 v14; // [rsp+50h] [rbp-28h]

  lower = std::_Tree<std::_Tmap_traits<unsigned int,std::shared_ptr<Win32ProcessInfo>,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,std::shared_ptr<Win32ProcessInfo>>>,0>>::_Find_lower_bound<unsigned int>(
            a1,
            &v13,
            a3);
  v8 = *(_OWORD *)lower;
  v14 = lower[2];
  if ( *(_BYTE *)(v14 + 25) || *v6 < *(_DWORD *)(v14 + 32) )
  {
    if ( a1[1] == 0x492492492492492LL )
      std::_Throw_tree_length_error();
    v9 = std::_Tree_temp_node<std::allocator<std::_Tree_node<std::pair<unsigned int const,std::shared_ptr<Win32ProcessInfo>>,void *>>>::_Tree_temp_node<std::allocator<std::_Tree_node<std::pair<unsigned int const,std::shared_ptr<Win32ProcessInfo>>,void *>>>(
           v12,
           (__int64)a1,
           *a1,
           v6,
           v7);
    v10 = v9[1];
    v9[1] = 0LL;
    std::_Tree_temp_node<std::allocator<std::_Tree_node<std::pair<enum winrt::WindowsUdk::UI::Shell::ShellView const,std::shared_ptr<InputAppViewCoodinatorHandler>>,void *>>>::~_Tree_temp_node<std::allocator<std::_Tree_node<std::pair<enum winrt::WindowsUdk::UI::Shell::ShellView const,std::shared_ptr<InputAppViewCoodinatorHandler>>,void *>>>((__int64)v12);
    v13 = v8;
    *(_QWORD *)a2 = std::_Tree_val<std::_Tree_simple_types<std::pair<winrt::hstring const,winrt::hstring>>>::_Insert_node(
                      a1,
                      (__int64)&v13,
                      v10);
    *(_BYTE *)(a2 + 8) = 1;
  }
  else
  {
    *(_QWORD *)a2 = v14;
    *(_BYTE *)(a2 + 8) = 0;
  }
  return a2;
}
