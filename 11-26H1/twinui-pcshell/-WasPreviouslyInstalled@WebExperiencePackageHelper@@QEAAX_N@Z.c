/*
 * XREFs of ?WasPreviouslyInstalled@WebExperiencePackageHelper@@QEAAX_N@Z @ 0x1805DA10C
 * Callers:
 *     _lambda_eee19e414dd6f5105c1576905e54cebc_::operator() @ 0x1805CDD24 (_lambda_eee19e414dd6f5105c1576905e54cebc_--operator().c)
 *     winrt::Windows::Internal::Shell::implementation::DashboardManager::RunWidgetCanvasDelayedInitializeAsync$_ResumeCoro$1 @ 0x1805D6690 (winrt--Windows--Internal--Shell--implementation--DashboardManager--RunWidgetCanvasDelayedInitial.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180048294 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?WasPreviouslyInstalled@LockScreenWidgetPackageHelperBase@@IEAAJPEBG_N@Z @ 0x1805DA02C (-WasPreviouslyInstalled@LockScreenWidgetPackageHelperBase@@IEAAJPEBG_N@Z.c)
 */

void __fastcall WebExperiencePackageHelper::WasPreviouslyInstalled(
        WebExperiencePackageHelper *this,
        unsigned __int8 a2)
{
  int v2; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = LockScreenWidgetPackageHelperBase::WasPreviouslyInstalled(this, L"WebExperienceInstalled", a2);
  if ( v2 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x386,
      (int)"shellcommon\\internal\\shell\\inc\\LockScreenWidgetPackageHelper.h",
      (const char *)(unsigned int)v2);
}
