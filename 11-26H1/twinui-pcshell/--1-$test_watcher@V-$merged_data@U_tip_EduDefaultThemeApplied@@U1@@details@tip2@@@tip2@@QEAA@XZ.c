/*
 * XREFs of ??1?$test_watcher@V?$merged_data@U_tip_EduDefaultThemeApplied@@U1@@details@tip2@@@tip2@@QEAA@XZ @ 0x180605C6C
 * Callers:
 *     ?SetHaileyTheme@ThemeCoordinator@implementation@Themes@UI@Internal@Windows@winrt@@AEAAJXZ @ 0x1806071EC (-SetHaileyTheme@ThemeCoordinator@implementation@Themes@UI@Internal@Windows@winrt@@AEAAJXZ.c)
 *     _winrt::Windows::Internal::UI::Themes::implementation::ThemeCoordinator::SetHaileyTheme_::_1_::dtor$1 @ 0x180700AEB (_winrt--Windows--Internal--UI--Themes--implementation--ThemeCoordinator--SetHaileyTheme_--_1_--d.c)
 * Callees:
 *     ??1?$com_ptr_t@V?$merged_data@U_tip_EduDefaultThemeApplied@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180605AEC (--1-$com_ptr_t@V-$merged_data@U_tip_EduDefaultThemeApplied@@U1@@details@tip2@@Uerr_returncode_po.c)
 */

void __fastcall tip2::test_watcher<tip2::details::merged_data<_tip_EduDefaultThemeApplied,_tip_EduDefaultThemeApplied>>::~test_watcher<tip2::details::merged_data<_tip_EduDefaultThemeApplied,_tip_EduDefaultThemeApplied>>(
        __int64 a1)
{
  wil::com_ptr_t<tip2::details::merged_data<_tip_EduDefaultThemeApplied,_tip_EduDefaultThemeApplied>,wil::err_returncode_policy>::~com_ptr_t<tip2::details::merged_data<_tip_EduDefaultThemeApplied,_tip_EduDefaultThemeApplied>,wil::err_returncode_policy>((void **)(a1 + 48));
  wil::details::ThreadFailureCallbackHolder::~ThreadFailureCallbackHolder((wil::details::ThreadFailureCallbackHolder *)(a1 + 8));
}
