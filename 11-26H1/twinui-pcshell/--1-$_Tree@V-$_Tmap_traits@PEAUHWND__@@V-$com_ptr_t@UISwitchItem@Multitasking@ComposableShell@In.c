/*
 * XREFs of ??1?$_Tree@V?$_Tmap_traits@PEAUHWND__@@V?$com_ptr_t@UISwitchItem@Multitasking@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@U?$less@PEAUHWND__@@@std@@V?$allocator@U?$pair@QEAUHWND__@@V?$com_ptr_t@UISwitchItem@Multitasking@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@@std@@@5@$0A@@std@@@std@@QEAA@XZ @ 0x1802863B8
 * Callers:
 *     ?SortItems@AppViewSwitchItemZOrderSort@@UEAAJPEAU?$IVectorView@PEAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@Collections@Foundation@Windows@@PEAPEAU2345@@Z @ 0x1800CCB60 (-SortItems@AppViewSwitchItemZOrderSort@@UEAAJPEAU-$IVectorView@PEAUISwitchItem@Multitasking@Comp.c)
 *     _AppViewSwitchItemZOrderSort::SortItems_::_3_::EnumWindowsData::_EnumWindowsData @ 0x180286384 (_AppViewSwitchItemZOrderSort--SortItems_--_3_--EnumWindowsData--_EnumWindowsData.c)
 *     ??1?$map@PEAUHWND__@@V?$com_ptr_t@UISwitchItem@Multitasking@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@U?$less@PEAUHWND__@@@std@@V?$allocator@U?$pair@QEAUHWND__@@V?$com_ptr_t@UISwitchItem@Multitasking@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@@std@@@5@@std@@QEAA@XZ @ 0x1802863AC (--1-$map@PEAUHWND__@@V-$com_ptr_t@UISwitchItem@Multitasking@ComposableShell@Internal@Windows@@Ue.c)
 * Callees:
 *     ??$_Erase_tree@V?$allocator@U?$_Tree_node@U?$pair@QEAUHWND__@@V?$com_ptr_t@UISwitchItem@Multitasking@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@@std@@PEAX@std@@@std@@@?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEAUHWND__@@V?$com_ptr_t@UISwitchItem@Multitasking@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@@std@@QEAAXAEAV?$allocator@U?$_Tree_node@U?$pair@QEAUHWND__@@V?$com_ptr_t@UISwitchItem@Multitasking@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@@std@@PEAX@std@@@1@PEAU?$_Tree_node@U?$pair@QEAUHWND__@@V?$com_ptr_t@UISwitchItem@Multitasking@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@@std@@PEAX@1@@Z @ 0x18017FC8C (--$_Erase_tree@V-$allocator@U-$_Tree_node@U-$pair@QEAUHWND__@@V-$com_ptr_t@UISwitchItem@Multitas.c)
 */

void __fastcall std::_Tree<std::_Tmap_traits<HWND__ *,wil::com_ptr_t<Windows::Internal::ComposableShell::Multitasking::ISwitchItem,wil::err_exception_policy>,std::less<HWND__ *>,std::allocator<std::pair<HWND__ * const,wil::com_ptr_t<Windows::Internal::ComposableShell::Multitasking::ISwitchItem,wil::err_exception_policy>>>,0>>::~_Tree<std::_Tmap_traits<HWND__ *,wil::com_ptr_t<Windows::Internal::ComposableShell::Multitasking::ISwitchItem,wil::err_exception_policy>,std::less<HWND__ *>,std::allocator<std::pair<HWND__ * const,wil::com_ptr_t<Windows::Internal::ComposableShell::Multitasking::ISwitchItem,wil::err_exception_policy>>>,0>>(
        void **a1)
{
  std::_Tree_val<std::_Tree_simple_types<std::pair<HWND__ * const,wil::com_ptr_t<Windows::Internal::ComposableShell::Multitasking::ISwitchItem,wil::err_exception_policy>>>>::_Erase_tree<std::allocator<std::_Tree_node<std::pair<HWND__ * const,wil::com_ptr_t<Windows::Internal::ComposableShell::Multitasking::ISwitchItem,wil::err_exception_policy>>,void *>>>(
    (__int64)a1,
    (__int64)a1,
    *((__int64 **)*a1 + 1));
  std::_Deallocate<16>(*a1, (struct std::nothrow_t *)0x30);
}
