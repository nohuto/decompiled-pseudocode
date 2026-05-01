/*
 * XREFs of ?FindUriSchemeHandlersAsync@Launcher@System@Windows@winrt@@SA@AEBUhstring@param@4@@Z @ 0x180640110
 * Callers:
 *     ?IsValidRegistrationData@CloudPCComponent@implementation@Shell@Internal@Windows@winrt@@AEAA_NAEBUhstring@6@@Z @ 0x18064137C (-IsValidRegistrationData@CloudPCComponent@implementation@Shell@Internal@Windows@winrt@@AEAA_NAEB.c)
 *     ?ActivateProvider@BootProviderActivator@implementation@Shell@Internal@Windows@winrt@@UEAA?AUTransitionScreenId@TransitionScreen@CloudDesktop@3456@AEBU8893456@AEBURemoteDesktopProviderInfo@3456@@Z @ 0x180668320 (-ActivateProvider@BootProviderActivator@implementation@Shell@Internal@Windows@winrt@@UEAA-AUTran.c)
 * Callees:
 *     ??$call@AEAV_lambda_adc4b1de82694fc8d054373ced810589_@@@?$factory_cache_entry@ULauncher@System@Windows@winrt@@UILauncherStatics2@234@@impl@winrt@@QEAA?A_PAEAV_lambda_adc4b1de82694fc8d054373ced810589_@@@Z @ 0x18063C7A8 (--$call@AEAV_lambda_adc4b1de82694fc8d054373ced810589_@@@-$factory_cache_entry@ULauncher@System@W.c)
 *     ??R_lambda_adc4b1de82694fc8d054373ced810589_@@QEBA@AEBUILauncherStatics2@System@Windows@winrt@@@Z @ 0x18063F6A4 (--R_lambda_adc4b1de82694fc8d054373ced810589_@@QEBA@AEBUILauncherStatics2@System@Windows@winrt@@@.c)
 */

const struct winrt::param::hstring *__fastcall winrt::Windows::System::Launcher::FindUriSchemeHandlersAsync(
        const struct winrt::param::hstring *a1,
        __int64 a2)
{
  __int64 v4; // [rsp+40h] [rbp+8h] BYREF
  __int64 *v5; // [rsp+48h] [rbp+10h]

  v4 = a2;
  v5 = &qword_1808DB658;
  _InterlockedIncrement64(&qword_1808DB658);
  if ( winrt::impl::factory_cache_entry_v<winrt::Windows::System::Launcher,winrt::Windows::System::ILauncherStatics2> )
  {
    _lambda_adc4b1de82694fc8d054373ced810589_::operator()(
      &v4,
      (__int64)a1,
      (__int64)&winrt::impl::factory_cache_entry_v<winrt::Windows::System::Launcher,winrt::Windows::System::ILauncherStatics2>);
    _InterlockedDecrement64(&qword_1808DB658);
  }
  else
  {
    _InterlockedDecrement64(&qword_1808DB658);
    winrt::impl::factory_cache_entry<winrt::Windows::System::Launcher,winrt::Windows::System::ILauncherStatics2>::call<_lambda_adc4b1de82694fc8d054373ced810589_ &>(
      (void (__fastcall ***)(_QWORD, __int64 *, __int64 **))a1,
      (__int64)a1,
      (__int64)&v4);
  }
  return a1;
}
