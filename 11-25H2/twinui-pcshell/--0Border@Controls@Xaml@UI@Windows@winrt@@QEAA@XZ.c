/*
 * XREFs of ??0Border@Controls@Xaml@UI@Windows@winrt@@QEAA@XZ @ 0x180574CD0
 * Callers:
 *     ?CreateXamlContent@TouchEdgeGripperWindow@@AEAAXW4TouchEdgeGestureType@@@Z @ 0x1805758D4 (-CreateXamlContent@TouchEdgeGripperWindow@@AEAAXW4TouchEdgeGestureType@@@Z.c)
 * Callees:
 *     ??$ActivateInstance@UBorder@Controls@Xaml@UI@Windows@winrt@@@IActivationFactory@Foundation@Windows@winrt@@QEBA?AUBorder@Controls@Xaml@UI@23@XZ @ 0x180573C60 (--$ActivateInstance@UBorder@Controls@Xaml@UI@Windows@winrt@@@IActivationFactory@Foundation@Windo.c)
 *     ??$call@P6A?AUBorder@Controls@Xaml@UI@Windows@winrt@@AEBUIActivationFactory@Foundation@56@@Z@?$factory_cache_entry@UBorder@Controls@Xaml@UI@Windows@winrt@@UIActivationFactory@Foundation@56@@impl@winrt@@QEAA?A_P$$QEAP6A?AUBorder@Controls@Xaml@UI@Windows@2@AEBUIActivationFactory@Foundation@72@@Z@Z @ 0x180574694 (--$call@P6A-AUBorder@Controls@Xaml@UI@Windows@winrt@@AEBUIActivationFactory@Foundation@56@@Z@-$f.c)
 */

struct IUnknown *__fastcall winrt::Windows::UI::Xaml::Controls::Border::Border(struct IUnknown *this)
{
  const struct winrt::Windows::Foundation::IActivationFactory *(__fastcall *v3)(const struct winrt::Windows::Foundation::IActivationFactory *, __int64); // [rsp+38h] [rbp+10h] BYREF

  _InterlockedIncrement64(&qword_18089C268);
  if ( winrt::impl::factory_cache_entry_v<winrt::Windows::UI::Xaml::Controls::Border,winrt::Windows::Foundation::IActivationFactory> )
  {
    winrt::Windows::Foundation::IActivationFactory::ActivateInstance<winrt::Windows::UI::Xaml::Controls::Border>(
      &winrt::impl::factory_cache_entry_v<winrt::Windows::UI::Xaml::Controls::Border,winrt::Windows::Foundation::IActivationFactory>,
      this);
    _InterlockedDecrement64(&qword_18089C268);
  }
  else
  {
    _InterlockedDecrement64(&qword_18089C268);
    v3 = _lambda_7aae303e005f6a87cfdeea1995a82529_::_lambda_invoker_cdecl_;
    winrt::impl::factory_cache_entry<winrt::Windows::UI::Xaml::Controls::Border,winrt::Windows::Foundation::IActivationFactory>::call<winrt::Windows::UI::Xaml::Controls::Border (*)(winrt::Windows::Foundation::IActivationFactory const &)>(
      this,
      (__int64)this,
      (void (__fastcall **)(__int64, __int64 *))&v3);
  }
  return this;
}
