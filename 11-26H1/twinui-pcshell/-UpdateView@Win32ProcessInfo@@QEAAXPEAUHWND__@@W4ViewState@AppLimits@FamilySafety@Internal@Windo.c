/*
 * XREFs of ?UpdateView@Win32ProcessInfo@@QEAAXPEAUHWND__@@W4ViewState@AppLimits@FamilySafety@Internal@Windows@@@Z @ 0x18057633C
 * Callers:
 *     ?UpdateView@Win32AppInfo@@QEAAXIAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEAUHWND__@@W4ViewState@AppLimits@FamilySafety@Internal@Windows@@@Z @ 0x18057628C (-UpdateView@Win32AppInfo@@QEAAXIAEBV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x1800373AC (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??$_Find_lower_bound@PEAUHWND__@@@?$_Tree@V?$_Tmap_traits@PEAUHWND__@@UExeData@@U?$less@PEAUHWND__@@@std@@V?$allocator@U?$pair@QEAUHWND__@@UExeData@@@std@@@4@$0A@@std@@@std@@IEBA?AU?$_Tree_find_result@PEAU?$_Tree_node@U?$pair@QEAUHWND__@@UExeData@@@std@@PEAX@std@@@1@AEBQEAUHWND__@@@Z @ 0x1801A74D4 (--$_Find_lower_bound@PEAUHWND__@@@-$_Tree@V-$_Tmap_traits@PEAUHWND__@@UExeData@@U-$less@PEAUHWND.c)
 *     ??2@YAPEAX_K@Z @ 0x1802C9924 (--2@YAPEAX_K@Z.c)
 *     ??$_Emplace@AEAPEAUHWND__@@AEAV?$shared_ptr@VWin32AppViewInfo@@@std@@@?$_Tree@V?$_Tmap_traits@PEAUHWND__@@V?$shared_ptr@VWin32AppViewInfo@@@std@@U?$less@PEAUHWND__@@@3@V?$allocator@U?$pair@QEAUHWND__@@V?$shared_ptr@VWin32AppViewInfo@@@std@@@std@@@3@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@QEAUHWND__@@V?$shared_ptr@VWin32AppViewInfo@@@std@@@std@@PEAX@std@@_N@1@AEAPEAUHWND__@@AEAV?$shared_ptr@VWin32AppViewInfo@@@1@@Z @ 0x180573ECC (--$_Emplace@AEAPEAUHWND__@@AEAV-$shared_ptr@VWin32AppViewInfo@@@std@@@-$_Tree@V-$_Tmap_traits@PE.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall Win32ProcessInfo::UpdateView(__int64 *a1, __int64 a2, int a3)
{
  unsigned __int64 v5; // r10
  _QWORD v6[2]; // [rsp+30h] [rbp-28h] BYREF
  __int64 v7; // [rsp+40h] [rbp-18h]
  std::_Ref_count_base *v8; // [rsp+60h] [rbp+8h]
  __int64 v9; // [rsp+68h] [rbp+10h] BYREF

  v9 = a2;
  std::_Tree<std::_Tmap_traits<HWND__ *,ExeData,std::less<HWND__ *>,std::allocator<std::pair<HWND__ * const,ExeData>>,0>>::_Find_lower_bound<HWND__ *>(
    a1,
    v6,
    &v9);
  if ( *(_BYTE *)(v7 + 25) || v5 < *(_QWORD *)(v7 + 32) || v7 == *a1 )
  {
    v8 = (std::_Ref_count_base *)operator new(0x18uLL);
    *(_OWORD *)v8 = 0LL;
    *((_DWORD *)v8 + 2) = 1;
    *((_DWORD *)v8 + 3) = 1;
    *(_QWORD *)v8 = &std::_Ref_count_obj2<winrt::Windows::Internal::Shell::implementation::BootConnectingState>::`vftable';
    *((_DWORD *)v8 + 4) = a3;
    std::_Tree<std::_Tmap_traits<HWND__ *,std::shared_ptr<Win32AppViewInfo>,std::less<HWND__ *>,std::allocator<std::pair<HWND__ * const,std::shared_ptr<Win32AppViewInfo>>>,0>>::_Emplace<HWND__ * &,std::shared_ptr<Win32AppViewInfo> &>(
      a1,
      (__int64)v6,
      &v9);
    if ( v8 )
      std::_Ref_count_base::_Decref(v8);
  }
  else
  {
    **(_DWORD **)(v7 + 40) = a3;
  }
}
