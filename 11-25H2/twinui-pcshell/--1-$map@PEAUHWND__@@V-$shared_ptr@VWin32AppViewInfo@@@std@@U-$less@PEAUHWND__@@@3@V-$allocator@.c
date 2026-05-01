/*
 * XREFs of ??1?$map@PEAUHWND__@@V?$shared_ptr@VWin32AppViewInfo@@@std@@U?$less@PEAUHWND__@@@3@V?$allocator@U?$pair@QEAUHWND__@@V?$shared_ptr@VWin32AppViewInfo@@@std@@@std@@@3@@std@@QEAA@XZ @ 0x18045C660
 * Callers:
 *     _TouchKeyboardExperienceManager::TouchKeyboardExperienceManager_::_1_::dtor$1 @ 0x1806C6BF4 (_TouchKeyboardExperienceManager--TouchKeyboardExperienceManager_--_1_--dtor$1.c)
 *     _std::make_shared_Win32ProcessInfo_unsigned_int_&_std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short____const_&__::_1_::dtor$2 @ 0x1806CCB10 (_std--make_shared_Win32ProcessInfo_unsigned_int_-_std--basic_string_unsigned_short__ea_1806CCB10.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall std::map<HWND__ *,std::shared_ptr<Win32AppViewInfo>>::~map<HWND__ *,std::shared_ptr<Win32AppViewInfo>>(
        void **a1)
{
  std::_Tree<std::_Tmap_traits<enum winrt::WindowsUdk::UI::Shell::ShellView,std::shared_ptr<InputAppViewCoodinatorHandler>,std::less<enum winrt::WindowsUdk::UI::Shell::ShellView>,std::allocator<std::pair<enum winrt::WindowsUdk::UI::Shell::ShellView const,std::shared_ptr<InputAppViewCoodinatorHandler>>>,0>>::~_Tree<std::_Tmap_traits<enum winrt::WindowsUdk::UI::Shell::ShellView,std::shared_ptr<InputAppViewCoodinatorHandler>,std::less<enum winrt::WindowsUdk::UI::Shell::ShellView>,std::allocator<std::pair<enum winrt::WindowsUdk::UI::Shell::ShellView const,std::shared_ptr<InputAppViewCoodinatorHandler>>>,0>>(a1);
}
