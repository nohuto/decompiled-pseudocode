/*
 * XREFs of ??1?$test_data_control@V?$merged_data@U_tip_EduDefaultThemeApplied@@U1@@details@tip2@@@tip2@@QEAA@XZ @ 0x1805E0FE0
 * Callers:
 *     ?SetHaileyTheme@ThemeCoordinator@implementation@Themes@UI@Internal@Windows@winrt@@AEAAJXZ @ 0x1805E261C (-SetHaileyTheme@ThemeCoordinator@implementation@Themes@UI@Internal@Windows@winrt@@AEAAJXZ.c)
 * Callees:
 *     ?end_update@?$shared_data@$00$0A@$0A@@details@tip2@@AEAAXXZ @ 0x18028B08C (-end_update@-$shared_data@$00$0A@$0A@@details@tip2@@AEAAXXZ.c)
 *     ?reset@?$com_ptr_t@V?$merged_data@U_tip_EduDefaultThemeApplied@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1805E31A8 (-reset@-$com_ptr_t@V-$merged_data@U_tip_EduDefaultThemeApplied@@U1@@details@tip2@@Uerr_returncod.c)
 */

__int64 __fastcall tip2::test_data_control<tip2::details::merged_data<_tip_EduDefaultThemeApplied,_tip_EduDefaultThemeApplied>>::~test_data_control<tip2::details::merged_data<_tip_EduDefaultThemeApplied,_tip_EduDefaultThemeApplied>>(
        void **a1)
{
  void *v2; // rcx

  v2 = *a1;
  if ( v2 )
  {
    tip2::details::shared_data<1,0,0>::end_update((__int64)v2 + 8);
    wil::com_ptr_t<tip2::details::merged_data<_tip_EduDefaultThemeApplied,_tip_EduDefaultThemeApplied>,wil::err_returncode_policy>::reset(a1);
  }
  return wil::com_ptr_t<tip2::details::merged_data<_tip_EduDefaultThemeApplied,_tip_EduDefaultThemeApplied>,wil::err_returncode_policy>::~com_ptr_t<tip2::details::merged_data<_tip_EduDefaultThemeApplied,_tip_EduDefaultThemeApplied>,wil::err_returncode_policy>(a1);
}
