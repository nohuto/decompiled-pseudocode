/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_c67ea327729698759a171a3f06b6a64f___::Run @ 0x1805E2590
 * Callers:
 *     <none>
 * Callees:
 *     ?complete_without_lock@?$shared_data@$00$0A@$0A@@details@tip2@@AEAAXXZ @ 0x18028AAC4 (-complete_without_lock@-$shared_data@$00$0A@$0A@@details@tip2@@AEAAXXZ.c)
 *     ?begin_update@?$shared_data@$00$0A@$0A@@details@tip2@@AEAA_NXZ @ 0x18028C87C (-begin_update@-$shared_data@$00$0A@$0A@@details@tip2@@AEAA_NXZ.c)
 *     ??$start_and_watch_errors@V?$tip_test@V?$merged_data@U_tip_EduThemeInstalled@@U1@@details@tip2@@@tip2@@@tip2@@YA?A_PXZ @ 0x1805E0B1C (--$start_and_watch_errors@V-$tip_test@V-$merged_data@U_tip_EduThemeInstalled@@U1@@details@tip2@@.c)
 *     ??1?$test_data_control@V?$merged_data@U_tip_EduThemeInstalled@@U1@@details@tip2@@@tip2@@QEAA@XZ @ 0x1805E1018 (--1-$test_data_control@V-$merged_data@U_tip_EduThemeInstalled@@U1@@details@tip2@@@tip2@@QEAA@XZ.c)
 *     ??1?$test_watcher@V?$merged_data@U_tip_EduThemeInstalled@@U1@@details@tip2@@@tip2@@QEAA@XZ @ 0x1805E1078 (--1-$test_watcher@V-$merged_data@U_tip_EduThemeInstalled@@U1@@details@tip2@@@tip2@@QEAA@XZ.c)
 *     ?SetHaileyTheme@ThemeCoordinator@implementation@Themes@UI@Internal@Windows@winrt@@AEAAJXZ @ 0x1805E261C (-SetHaileyTheme@ThemeCoordinator@implementation@Themes@UI@Internal@Windows@winrt@@AEAAJXZ.c)
 */

// Hidden C++ exception states: #wind=1
void Windows::Internal::ComTaskPool::CTaskWrapper__lambda_c67ea327729698759a171a3f06b6a64f___::Run()
{
  volatile signed __int32 *v0; // rbx
  winrt::Windows::Internal::UI::Themes::implementation::ThemeCoordinator *v1; // rcx
  _BYTE v2[48]; // [rsp+20h] [rbp-48h] BYREF
  volatile signed __int32 *v3; // [rsp+50h] [rbp-18h]
  volatile signed __int32 *v4; // [rsp+78h] [rbp+10h] BYREF

  tip2::start_and_watch_errors<tip2::tip_test<tip2::details::merged_data<_tip_EduThemeInstalled,_tip_EduThemeInstalled>>>((struct wil::details::IFailureCallback *)v2);
  CallInstallNewAppxThemes();
  v0 = v3;
  v4 = v3;
  if ( v3 )
    _InterlockedIncrement(v3 + 68);
  tip2::details::shared_data<1,0,0>::begin_update((__int64)(v0 + 2));
  *((_BYTE *)v0 + 264) = 1;
  tip2::test_data_control<tip2::details::merged_data<_tip_EduThemeInstalled,_tip_EduThemeInstalled>>::~test_data_control<tip2::details::merged_data<_tip_EduThemeInstalled,_tip_EduThemeInstalled>>((void **)&v4);
  tip2::details::shared_data<1,0,0>::complete_without_lock((__int64)(v3 + 2));
  winrt::Windows::Internal::UI::Themes::implementation::ThemeCoordinator::SetHaileyTheme(v1);
  tip2::test_watcher<tip2::details::merged_data<_tip_EduThemeInstalled,_tip_EduThemeInstalled>>::~test_watcher<tip2::details::merged_data<_tip_EduThemeInstalled,_tip_EduThemeInstalled>>((__int64)v2);
}
