/*
 * XREFs of ?IsRunningOnServerSku@KeyboardHosting@@YA_NXZ @ 0x1802A6E34
 * Callers:
 *     ?TerminateStaleInputApp@TouchKeyboardExperienceManager@@AEAAJXZ @ 0x18024D2C4 (-TerminateStaleInputApp@TouchKeyboardExperienceManager@@AEAAJXZ.c)
 *     ??0InputAppPreloader@KeyboardHosting@@QEAA@PEAVTouchKeyboardExperienceManager@@@Z @ 0x1802A6CA4 (--0InputAppPreloader@KeyboardHosting@@QEAA@PEAVTouchKeyboardExperienceManager@@@Z.c)
 *     _lambda_4ce12a90e81ea4b4c570078f6f58eac4_::operator()_winrt::WindowsUdk::UI::Shell::ShellViewCoordinator$_ResumeCoro$1_const_&_winrt::WindowsUdk::UI::Shell::ShowShellViewRequestedEventArgs_ @ 0x180463F20 (_lambda_4ce12a90e81ea4b4c570078f6f58eac4_--operator()_winrt--WindowsUdk--UI--Shell--ShellViewCoo.c)
 *     _lambda_945e3f99e324f0975fc3b8cf1a6859ea_::operator()_winrt::WindowsUdk::UI::Shell::ShellViewCoordinator_const_&_winrt::WindowsUdk::UI::Shell::DismissShellViewRequestedEventArgs_const_&_ @ 0x1804644EC (_lambda_945e3f99e324f0975fc3b8cf1a6859ea_--operator()_winrt--WindowsUdk--UI--Shell--ShellViewCoo.c)
 *     ?PreloadInputApp@TouchKeyboardExperienceManager@@QEAAXXZ @ 0x18046F438 (-PreloadInputApp@TouchKeyboardExperienceManager@@QEAAXXZ.c)
 *     ?ToggleTabTip@KeyboardHosting@@YAJXZ @ 0x180481140 (-ToggleTabTip@KeyboardHosting@@YAJXZ.c)
 *     ?HandleInputPaneTryShow@TabTipAdapterPolicy@KeyboardHosting@@UEAAJIPEAW4ShellRequestType@Text@Shell@Internal@Windows@@@Z @ 0x1804838F0 (-HandleInputPaneTryShow@TabTipAdapterPolicy@KeyboardHosting@@UEAAJIPEAW4ShellRequestType@Text@Sh.c)
 * Callees:
 *     <none>
 */

char __fastcall KeyboardHosting::IsRunningOnServerSku(KeyboardHosting *this)
{
  if ( byte_1808DCDC9 )
    return KeyboardHosting::g_overrideIsServerSku;
  else
    return IsRunningOnServerSku();
}
