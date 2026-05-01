/*
 * XREFs of ?ShellViewToCoreKeyboardViewType@TouchKeyboardExperienceManager@@AEAA?AW4CoreKeyboardViewType@Core@Text@Internal@UI@Windows@@W4ShellView@Shell@6WindowsUdk@winrt@@@Z @ 0x18047042C
 * Callers:
 *     _lambda_4ce12a90e81ea4b4c570078f6f58eac4_::operator()_winrt::WindowsUdk::UI::Shell::ShellViewCoordinator$_ResumeCoro$1_const_&_winrt::WindowsUdk::UI::Shell::ShowShellViewRequestedEventArgs_ @ 0x180463F20 (_lambda_4ce12a90e81ea4b4c570078f6f58eac4_--operator()_winrt--WindowsUdk--UI--Shell--ShellViewCoo.c)
 *     _lambda_945e3f99e324f0975fc3b8cf1a6859ea_::operator()_winrt::WindowsUdk::UI::Shell::ShellViewCoordinator_const_&_winrt::WindowsUdk::UI::Shell::DismissShellViewRequestedEventArgs_const_&_ @ 0x1804644EC (_lambda_945e3f99e324f0975fc3b8cf1a6859ea_--operator()_winrt--WindowsUdk--UI--Shell--ShellViewCoo.c)
 * Callees:
 *     ?FailFast_UnexpectedMsg@in1diag3@details@wil@@YAXPEAXIPEBD1ZZ @ 0x18029C58C (-FailFast_UnexpectedMsg@in1diag3@details@wil@@YAXPEAXIPEBD1ZZ.c)
 */

__int64 __fastcall TouchKeyboardExperienceManager::ShellViewToCoreKeyboardViewType(__int64 a1, int a2)
{
  int v2; // edx
  int v3; // edx
  int v4; // edx
  const char *v6; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = a2 - 12;
  if ( !v2 )
    return 0LL;
  v3 = v2 - 1;
  if ( !v3 )
    return 4LL;
  v4 = v3 - 1;
  if ( !v4 )
    return 2LL;
  if ( v4 != 5 )
    wil::details::in1diag3::FailFast_UnexpectedMsg(
      retaddr,
      (void *)0xD6B,
      (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
      "Unexpected ShellView",
      v6);
  return 13LL;
}
