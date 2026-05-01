/*
 * XREFs of ??0?$producers_base@UInputViewOptions@implementation@KeyboardHosting@Shell@Internal@Windows@winrt@@V?$tuple@UInputViewOptions@KeyboardHosting@Shell@Internal@Windows@winrt@@UIViewOptions@Text@3456@@std@@@impl@winrt@@QEAA@XZ @ 0x1800A9700
 * Callers:
 *     ?InvokeInputAppRequestedShow@TabTipAdapter@KeyboardHosting@@AEAAJIAEBUtagRECT@@UViewOptions@@@Z @ 0x1800A935C (-InvokeInputAppRequestedShow@TabTipAdapter@KeyboardHosting@@AEAAJIAEBUtagRECT@@UViewOptions@@@Z.c)
 * Callees:
 *     ??0?$producer_convert@USnapMigrationHandler@@UIInspectable@Foundation@Windows@winrt@@X@impl@winrt@@QEAA@XZ @ 0x1800AA7EC (--0-$producer_convert@USnapMigrationHandler@@UIInspectable@Foundation@Windows@winrt@@X@impl@winr.c)
 *     ??0?$producer_convert@UInputViewOptions@implementation@KeyboardHosting@Shell@Internal@Windows@winrt@@UIViewOptions@Text@4567@X@impl@winrt@@QEAA@XZ @ 0x1800AA804 (--0-$producer_convert@UInputViewOptions@implementation@KeyboardHosting@Shell@Internal@Windows@wi.c)
 */

__int64 __fastcall winrt::impl::producers_base<winrt::Windows::Internal::Shell::KeyboardHosting::implementation::InputViewOptions,std::tuple<winrt::Windows::Internal::Shell::KeyboardHosting::InputViewOptions,winrt::Windows::Internal::Shell::Text::IViewOptions>>::producers_base<winrt::Windows::Internal::Shell::KeyboardHosting::implementation::InputViewOptions,std::tuple<winrt::Windows::Internal::Shell::KeyboardHosting::InputViewOptions,winrt::Windows::Internal::Shell::Text::IViewOptions>>(
        __int64 a1,
        __int64 a2)
{
  __int64 v2; // rcx
  __int64 v3; // r8

  winrt::impl::producer_convert<SnapMigrationHandler,winrt::Windows::Foundation::IInspectable,void>::producer_convert<SnapMigrationHandler,winrt::Windows::Foundation::IInspectable,void>(
    a1,
    a2,
    a1);
  winrt::impl::producer_convert<winrt::Windows::Internal::Shell::KeyboardHosting::implementation::InputViewOptions,winrt::Windows::Internal::Shell::Text::IViewOptions,void>::producer_convert<winrt::Windows::Internal::Shell::KeyboardHosting::implementation::InputViewOptions,winrt::Windows::Internal::Shell::Text::IViewOptions,void>(v2 + 8);
  return v3;
}
