/*
 * XREFs of ?_Bump_erased@_Range_eraser@?$_Hash@V?$_Umap_traits@PEAUHWND__@@UUserResizeVisual@Transitions@Udwm@winrt@@V?$_Uhash_compare@PEAUHWND__@@U?$hash@PEAUHWND__@@@std@@U?$equal_to@PEAUHWND__@@@3@@std@@V?$allocator@U?$pair@QEAUHWND__@@UUserResizeVisual@Transitions@Udwm@winrt@@@std@@@7@$0A@@std@@@std@@QEAAXXZ @ 0x1800D7A34
 * Callers:
 *     ?_Unchecked_erase@?$_Hash@V?$_Umap_traits@PEAUHWND__@@UITransition@Transitions@Udwm@winrt@@V?$_Uhash_compare@PEAUHWND__@@U?$hash@PEAUHWND__@@@std@@U?$equal_to@PEAUHWND__@@@3@@std@@V?$allocator@U?$pair@QEAUHWND__@@UITransition@Transitions@Udwm@winrt@@@std@@@7@$0A@@std@@@std@@AEAAPEAU?$_List_node@U?$pair@QEAUHWND__@@UITransition@Transitions@Udwm@winrt@@@std@@PEAX@2@PEAU32@QEAU32@@Z @ 0x1800D7D7C (-_Unchecked_erase@-$_Hash@V-$_Umap_traits@PEAUHWND__@@UITransition@Transitions@Udwm@winrt@@V-$_U.c)
 *     ?_Unchecked_erase@?$_Hash@V?$_Umap_traits@W4ShellTransitionType@Transitions@Udwm@winrt@@UITransition@234@V?$_Uhash_compare@W4ShellTransitionType@Transitions@Udwm@winrt@@U?$hash@W4ShellTransitionType@Transitions@Udwm@winrt@@@std@@U?$equal_to@W4ShellTransitionType@Transitions@Udwm@winrt@@@6@@std@@V?$allocator@U?$pair@$$CBW4ShellTransitionType@Transitions@Udwm@winrt@@UITransition@234@@std@@@7@$0A@@std@@@std@@AEAAPEAU?$_List_node@U?$pair@$$CBW4ShellTransitionType@Transitions@Udwm@winrt@@UITransition@234@@std@@PEAX@2@PEAU32@QEAU32@@Z @ 0x1800D94F0 (-_Unchecked_erase@-$_Hash@V-$_Umap_traits@W4ShellTransitionType@Transitions@Udwm@winrt@@UITransi.c)
 * Callees:
 *     ??$_Freenode@V?$allocator@U?$_List_node@U?$pair@QEAUHWND__@@UUserResizeVisual@Transitions@Udwm@winrt@@@std@@PEAX@std@@@std@@@?$_List_node@U?$pair@QEAUHWND__@@UUserResizeVisual@Transitions@Udwm@winrt@@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@U?$pair@QEAUHWND__@@UUserResizeVisual@Transitions@Udwm@winrt@@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x1800D6534 (--$_Freenode@V-$allocator@U-$_List_node@U-$pair@QEAUHWND__@@UUserResizeVisual@Transitions@Udwm@w.c)
 */

__int64 __fastcall std::_Hash<std::_Umap_traits<HWND__ *,winrt::Udwm::Transitions::UserResizeVisual,std::_Uhash_compare<HWND__ *,std::hash<HWND__ *>,std::equal_to<HWND__ *>>,std::allocator<std::pair<HWND__ * const,winrt::Udwm::Transitions::UserResizeVisual>>,0>>::_Range_eraser::_Bump_erased(
        _QWORD *a1)
{
  __int64 *v1; // rdx
  __int64 result; // rax

  v1 = (__int64 *)a1[2];
  a1[2] = *v1;
  std::_List_node<std::pair<HWND__ * const,winrt::Udwm::Transitions::UserResizeVisual>,void *>::_Freenode<std::allocator<std::_List_node<std::pair<HWND__ * const,winrt::Udwm::Transitions::UserResizeVisual>,void *>>>(
    (__int64)a1,
    v1);
  result = *a1;
  --*(_QWORD *)(*a1 + 8LL);
  return result;
}
