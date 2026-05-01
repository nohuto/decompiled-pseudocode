/*
 * XREFs of ??0?$producers_base@UTabProxyWindow@implementation@Shell@Internal@Windows@winrt@@V?$tuple@UITabProxyWindowInternal@Shell@Internal@Windows@@@std@@@impl@winrt@@QEAA@XZ @ 0x1802C4A34
 * Callers:
 *     ??0TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@QEAA@PEAUIWICImagingFactory@@PEAUITaskbarList4@@AEBUITileStore@Tiles@345@AEBUWindowTabDataModel@2UI@345@AEBUWindowTabView@2UI@345@_K@Z @ 0x18012B240 (--0TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@QEAA@PEAUIWICImagingFactory@@PEAU.c)
 * Callees:
 *     ??0?$IVectorView@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@@Collections@Foundation@Windows@@QEAA@XZ @ 0x1801290AC (--0-$IVectorView@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@@Collections@.c)
 */

_QWORD *__fastcall winrt::impl::producers_base<winrt::Windows::Internal::Shell::implementation::TabProxyWindow,std::tuple<Windows::Internal::Shell::ITabProxyWindowInternal>>::producers_base<winrt::Windows::Internal::Shell::implementation::TabProxyWindow,std::tuple<Windows::Internal::Shell::ITabProxyWindowInternal>>(
        _QWORD *a1)
{
  _QWORD *v1; // rcx
  _QWORD *result; // rax

  Windows::Foundation::Collections::IVectorView<Windows::UI::Internal::Text::Core::CoreKeyboardPositionAndSizeOption>::IVectorView<Windows::UI::Internal::Text::Core::CoreKeyboardPositionAndSizeOption>(a1);
  result = v1;
  *v1 = &IAppViewDataSourceAdapter::`vftable';
  return result;
}
