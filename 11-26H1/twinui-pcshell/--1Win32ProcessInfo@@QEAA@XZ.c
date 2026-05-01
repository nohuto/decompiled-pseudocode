/*
 * XREFs of ??1Win32ProcessInfo@@QEAA@XZ @ 0x1805748F4
 * Callers:
 *     ?_Destroy@?$_Ref_count_obj2@VWin32ProcessInfo@@@std@@EEAAXXZ @ 0x180576410 (-_Destroy@-$_Ref_count_obj2@VWin32ProcessInfo@@@std@@EEAAXXZ.c)
 * Callees:
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x180031D20 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 */

void __fastcall Win32ProcessInfo::~Win32ProcessInfo(Win32ProcessInfo *this)
{
  std::wstring::_Tidy_deallocate((_QWORD *)this + 3);
  std::_Tree<std::_Tmap_traits<enum winrt::WindowsUdk::UI::Shell::ShellView,std::shared_ptr<InputAppViewCoodinatorHandler>,std::less<enum winrt::WindowsUdk::UI::Shell::ShellView>,std::allocator<std::pair<enum winrt::WindowsUdk::UI::Shell::ShellView const,std::shared_ptr<InputAppViewCoodinatorHandler>>>,0>>::~_Tree<std::_Tmap_traits<enum winrt::WindowsUdk::UI::Shell::ShellView,std::shared_ptr<InputAppViewCoodinatorHandler>,std::less<enum winrt::WindowsUdk::UI::Shell::ShellView>,std::allocator<std::pair<enum winrt::WindowsUdk::UI::Shell::ShellView const,std::shared_ptr<InputAppViewCoodinatorHandler>>>,0>>((void **)this);
}
