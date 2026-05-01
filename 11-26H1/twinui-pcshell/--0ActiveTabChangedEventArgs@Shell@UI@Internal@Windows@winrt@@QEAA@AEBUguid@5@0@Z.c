/*
 * XREFs of ??0ActiveTabChangedEventArgs@Shell@UI@Internal@Windows@winrt@@QEAA@AEBUguid@5@0@Z @ 0x180299A60
 * Callers:
 *     ?OnActiveTabChanged@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEAAXAEBUWindowTabDataModel@3UI@456@AEBUWindowTabDataModelActiveTabChangedEventArgs@38456@@Z @ 0x180265390 (-OnActiveTabChanged@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEAAXAEBUWindowTa.c)
 * Callees:
 *     ??R_lambda_0f5d06b182220372552e751da5d9ab64_@@QEBA@AEBUIActiveTabChangedEventArgsFactory@Shell@UI@Internal@Windows@winrt@@@Z @ 0x180299AD8 (--R_lambda_0f5d06b182220372552e751da5d9ab64_@@QEBA@AEBUIActiveTabChangedEventArgsFactory@Shell@U.c)
 *     ??$call@AEAV_lambda_0f5d06b182220372552e751da5d9ab64_@@@?$factory_cache_entry@UActiveTabChangedEventArgs@Shell@UI@Internal@Windows@winrt@@UIActiveTabChangedEventArgsFactory@23456@@impl@winrt@@QEAA?A_PAEAV_lambda_0f5d06b182220372552e751da5d9ab64_@@@Z @ 0x18057C7D4 (--$call@AEAV_lambda_0f5d06b182220372552e751da5d9ab64_@@@-$factory_cache_entry@UActiveTabChangedE.c)
 */

// Hidden C++ exception states: #wind=1
winrt::Windows::Internal::UI::Shell::ActiveTabChangedEventArgs *__fastcall winrt::Windows::Internal::UI::Shell::ActiveTabChangedEventArgs::ActiveTabChangedEventArgs(
        winrt::Windows::Internal::UI::Shell::ActiveTabChangedEventArgs *this,
        const struct winrt::guid *a2,
        const struct winrt::guid *a3)
{
  _QWORD v5[3]; // [rsp+20h] [rbp-18h] BYREF

  v5[0] = a2;
  v5[1] = a3;
  _InterlockedIncrement64(&qword_1808DC448);
  if ( winrt::impl::factory_cache_entry_v<winrt::Windows::Internal::UI::Shell::ActiveTabChangedEventArgs,winrt::Windows::Internal::UI::Shell::IActiveTabChangedEventArgsFactory> )
  {
    _lambda_0f5d06b182220372552e751da5d9ab64_::operator()(
      v5,
      this,
      &winrt::impl::factory_cache_entry_v<winrt::Windows::Internal::UI::Shell::ActiveTabChangedEventArgs,winrt::Windows::Internal::UI::Shell::IActiveTabChangedEventArgsFactory>);
    _InterlockedDecrement64(&qword_1808DC448);
  }
  else
  {
    _InterlockedDecrement64(&qword_1808DC448);
    winrt::impl::factory_cache_entry<winrt::Windows::Internal::UI::Shell::ActiveTabChangedEventArgs,winrt::Windows::Internal::UI::Shell::IActiveTabChangedEventArgsFactory>::call<_lambda_0f5d06b182220372552e751da5d9ab64_ &>(
      this,
      this,
      v5);
  }
  return this;
}
