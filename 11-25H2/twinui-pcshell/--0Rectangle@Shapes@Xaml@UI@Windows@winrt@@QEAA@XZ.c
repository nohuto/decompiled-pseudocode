/*
 * XREFs of ??0Rectangle@Shapes@Xaml@UI@Windows@winrt@@QEAA@XZ @ 0x180574E14
 * Callers:
 *     ?CreateXamlContent@TouchEdgeGripperWindow@@AEAAXW4TouchEdgeGestureType@@@Z @ 0x1805758D4 (-CreateXamlContent@TouchEdgeGripperWindow@@AEAAXW4TouchEdgeGestureType@@@Z.c)
 * Callees:
 *     ??$ActivateInstance@URectangle@Shapes@Xaml@UI@Windows@winrt@@@IActivationFactory@Foundation@Windows@winrt@@QEBA?AURectangle@Shapes@Xaml@UI@23@XZ @ 0x180573D18 (--$ActivateInstance@URectangle@Shapes@Xaml@UI@Windows@winrt@@@IActivationFactory@Foundation@Wind.c)
 *     ??$call@P6A?AURectangle@Shapes@Xaml@UI@Windows@winrt@@AEBUIActivationFactory@Foundation@56@@Z@?$factory_cache_entry@URectangle@Shapes@Xaml@UI@Windows@winrt@@UIActivationFactory@Foundation@56@@impl@winrt@@QEAA?A_P$$QEAP6A?AURectangle@Shapes@Xaml@UI@Windows@2@AEBUIActivationFactory@Foundation@72@@Z@Z @ 0x1805747AC (--$call@P6A-AURectangle@Shapes@Xaml@UI@Windows@winrt@@AEBUIActivationFactory@Foundation@56@@Z@-$.c)
 */

struct IUnknown *__fastcall winrt::Windows::UI::Xaml::Shapes::Rectangle::Rectangle(struct IUnknown *this)
{
  const struct winrt::Windows::Foundation::IActivationFactory *(__fastcall *v3)(const struct winrt::Windows::Foundation::IActivationFactory *, __int64); // [rsp+38h] [rbp+10h] BYREF

  _InterlockedIncrement64(&qword_18089CE48);
  if ( winrt::impl::factory_cache_entry_v<winrt::Windows::UI::Xaml::Shapes::Rectangle,winrt::Windows::Foundation::IActivationFactory> )
  {
    winrt::Windows::Foundation::IActivationFactory::ActivateInstance<winrt::Windows::UI::Xaml::Shapes::Rectangle>(
      &winrt::impl::factory_cache_entry_v<winrt::Windows::UI::Xaml::Shapes::Rectangle,winrt::Windows::Foundation::IActivationFactory>,
      this);
    _InterlockedDecrement64(&qword_18089CE48);
  }
  else
  {
    _InterlockedDecrement64(&qword_18089CE48);
    v3 = _lambda_d9e9c424cde1bb067c1645bccadee844_::_lambda_invoker_cdecl_;
    winrt::impl::factory_cache_entry<winrt::Windows::UI::Xaml::Shapes::Rectangle,winrt::Windows::Foundation::IActivationFactory>::call<winrt::Windows::UI::Xaml::Shapes::Rectangle (*)(winrt::Windows::Foundation::IActivationFactory const &)>(
      this,
      (__int64)this,
      (void (__fastcall **)(__int64, __int64 *))&v3);
  }
  return this;
}
