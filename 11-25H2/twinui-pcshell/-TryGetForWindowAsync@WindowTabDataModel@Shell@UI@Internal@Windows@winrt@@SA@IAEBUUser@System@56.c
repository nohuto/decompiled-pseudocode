/*
 * XREFs of ?TryGetForWindowAsync@WindowTabDataModel@Shell@UI@Internal@Windows@winrt@@SA@IAEBUUser@System@56@@Z @ 0x18055A8B4
 * Callers:
 *     ?UpdateTabsForWindow@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@QEAAX_K@Z @ 0x1800A9ADC (-UpdateTabsForWindow@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@QEAAX_K@Z.c)
 * Callees:
 *     ??$call@AEAV_lambda_7591f65f5143d61a379239d524023c94_@@@?$factory_cache_entry@UWindowTabDataModel@Shell@UI@Internal@Windows@winrt@@UIWindowTabDataModelStatics@23456@@impl@winrt@@QEAA?A_PAEAV_lambda_7591f65f5143d61a379239d524023c94_@@@Z @ 0x1801FF6F8 (--$call@AEAV_lambda_7591f65f5143d61a379239d524023c94_@@@-$factory_cache_entry@UWindowTabDataMode.c)
 *     ??R_lambda_7591f65f5143d61a379239d524023c94_@@QEBA@AEBUIWindowTabDataModelStatics@Shell@UI@Internal@Windows@winrt@@@Z @ 0x1801FF820 (--R_lambda_7591f65f5143d61a379239d524023c94_@@QEBA@AEBUIWindowTabDataModelStatics@Shell@UI@Inter.c)
 */

// Hidden C++ exception states: #wind=1
void (__fastcall ***__fastcall winrt::Windows::Internal::UI::Shell::WindowTabDataModel::TryGetForWindowAsync(
        void (__fastcall ***a1)(_QWORD, __int64 *, __int64 *),
        const struct winrt::Windows::System::User *a2,
        unsigned int *a3))(_QWORD, __int64 *, __int64 *)
{
  unsigned int *v5[4]; // [rsp+28h] [rbp-20h] BYREF
  int v6; // [rsp+58h] [rbp+10h] BYREF

  v6 = (int)a2;
  v5[0] = (unsigned int *)&v6;
  v5[1] = a3;
  _InterlockedIncrement64(&qword_18089BD88);
  if ( winrt::impl::factory_cache_entry_v<winrt::Windows::Internal::UI::Shell::WindowTabDataModel,winrt::Windows::Internal::UI::Shell::IWindowTabDataModelStatics> )
  {
    _lambda_7591f65f5143d61a379239d524023c94_::operator()(
      v5,
      (__int64)a1,
      (__int64)&winrt::impl::factory_cache_entry_v<winrt::Windows::Internal::UI::Shell::WindowTabDataModel,winrt::Windows::Internal::UI::Shell::IWindowTabDataModelStatics>);
    _InterlockedDecrement64(&qword_18089BD88);
  }
  else
  {
    _InterlockedDecrement64(&qword_18089BD88);
    winrt::impl::factory_cache_entry<winrt::Windows::Internal::UI::Shell::WindowTabDataModel,winrt::Windows::Internal::UI::Shell::IWindowTabDataModelStatics>::call<_lambda_7591f65f5143d61a379239d524023c94_ &>(
      a1,
      (__int64)a1,
      (__int64)v5);
  }
  return a1;
}
