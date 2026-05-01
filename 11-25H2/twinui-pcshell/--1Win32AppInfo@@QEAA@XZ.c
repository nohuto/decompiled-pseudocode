/*
 * XREFs of ??1Win32AppInfo@@QEAA@XZ @ 0x18055058C
 * Callers:
 *     ?_Destroy@?$_Ref_count_obj2@VWin32AppInfo@@@std@@EEAAXXZ @ 0x180552240 (-_Destroy@-$_Ref_count_obj2@VWin32AppInfo@@@std@@EEAAXXZ.c)
 * Callees:
 *     ??1?$_Tree@V?$_Tmap_traits@W4ShellView@Shell@UI@WindowsUdk@winrt@@V?$shared_ptr@VInputAppViewCoodinatorHandler@@@std@@U?$less@W4ShellView@Shell@UI@WindowsUdk@winrt@@@7@V?$allocator@U?$pair@$$CBW4ShellView@Shell@UI@WindowsUdk@winrt@@V?$shared_ptr@VInputAppViewCoodinatorHandler@@@std@@@std@@@7@$0A@@std@@@std@@QEAA@XZ @ 0x18045C5C0 (--1-$_Tree@V-$_Tmap_traits@W4ShellView@Shell@UI@WindowsUdk@winrt@@V-$shared_ptr@VInputAppViewCoo.c)
 */

void __fastcall Win32AppInfo::~Win32AppInfo(void **this)
{
  std::_Tree<std::_Tmap_traits<enum winrt::WindowsUdk::UI::Shell::ShellView,std::shared_ptr<InputAppViewCoodinatorHandler>,std::less<enum winrt::WindowsUdk::UI::Shell::ShellView>,std::allocator<std::pair<enum winrt::WindowsUdk::UI::Shell::ShellView const,std::shared_ptr<InputAppViewCoodinatorHandler>>>,0>>::~_Tree<std::_Tmap_traits<enum winrt::WindowsUdk::UI::Shell::ShellView,std::shared_ptr<InputAppViewCoodinatorHandler>,std::less<enum winrt::WindowsUdk::UI::Shell::ShellView>,std::allocator<std::pair<enum winrt::WindowsUdk::UI::Shell::ShellView const,std::shared_ptr<InputAppViewCoodinatorHandler>>>,0>>(this + 4);
  std::wstring::_Tidy_deallocate(this);
}
