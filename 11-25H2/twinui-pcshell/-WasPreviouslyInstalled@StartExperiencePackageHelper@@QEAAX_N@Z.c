/*
 * XREFs of ?WasPreviouslyInstalled@StartExperiencePackageHelper@@QEAAX_N@Z @ 0x1805B6788
 * Callers:
 *     _lambda_7017635d5b356f6d3f79dc972349e24e_::operator() @ 0x1805A8A10 (_lambda_7017635d5b356f6d3f79dc972349e24e_--operator().c)
 *     winrt::Windows::Internal::Shell::implementation::DashboardManager::RunWidgetCanvasDelayedInitializeAsync$_ResumeCoro$1 @ 0x1805B2880 (winrt--Windows--Internal--Shell--implementation--DashboardManager--RunWidgetCanvasD_ea_1805B2880.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180039744 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?WasPreviouslyInstalled@LockScreenWidgetPackageHelperBase@@IEAAJPEBG_N@Z @ 0x1805B66E8 (-WasPreviouslyInstalled@LockScreenWidgetPackageHelperBase@@IEAAJPEBG_N@Z.c)
 */

void __fastcall StartExperiencePackageHelper::WasPreviouslyInstalled(
        StartExperiencePackageHelper *this,
        unsigned __int8 a2)
{
  int v2; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = LockScreenWidgetPackageHelperBase::WasPreviouslyInstalled(this, L"StartExperiencesInstalled", a2);
  if ( v2 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x3B5,
      (int)"shellcommon\\internal\\shell\\inc\\LockScreenWidgetPackageHelper.h",
      (const char *)(unsigned int)v2);
}
