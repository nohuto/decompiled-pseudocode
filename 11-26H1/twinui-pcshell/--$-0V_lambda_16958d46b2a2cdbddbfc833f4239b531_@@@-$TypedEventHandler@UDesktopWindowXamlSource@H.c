/*
 * XREFs of ??$?0V_lambda_16958d46b2a2cdbddbfc833f4239b531_@@@?$TypedEventHandler@UDesktopWindowXamlSource@Hosting@Xaml@UI@Microsoft@winrt@@UDesktopWindowXamlSourceTakeFocusRequestedEventArgs@23456@@Foundation@Windows@winrt@@QEAA@V_lambda_16958d46b2a2cdbddbfc833f4239b531_@@@Z @ 0x18044D478
 * Callers:
 *     ?TakeFocusRequested@XamlExplorerHostChildWindow_WASDK@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@QEAA?AUevent_token@7@AEBU?$TypedEventHandler@UXamlExplorerHostChildWindow_WASDK@XamlExplorerHost@Shell@Internal@Windows@winrt@@UIInspectable@Foundation@56@@Foundation@67@@Z @ 0x180025CF0 (-TakeFocusRequested@XamlExplorerHostChildWindow_WASDK@implementation@XamlExplorerHost@Shell@Inte.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x1802C9924 (--2@YAPEAX_K@Z.c)
 */

_QWORD *__fastcall winrt::Windows::Foundation::TypedEventHandler<winrt::Microsoft::UI::Xaml::Hosting::DesktopWindowXamlSource,winrt::Microsoft::UI::Xaml::Hosting::DesktopWindowXamlSourceTakeFocusRequestedEventArgs>::TypedEventHandler<winrt::Microsoft::UI::Xaml::Hosting::DesktopWindowXamlSource,winrt::Microsoft::UI::Xaml::Hosting::DesktopWindowXamlSourceTakeFocusRequestedEventArgs>(
        _QWORD *a1,
        __int128 *a2)
{
  _DWORD *v4; // rax
  __int128 v5; // xmm0
  __int64 v6; // xmm1_8

  v4 = operator new(0x28uLL);
  v5 = *a2;
  v6 = *((_QWORD *)a2 + 2);
  v4[2] = 1;
  *((_OWORD *)v4 + 1) = v5;
  *((_QWORD *)v4 + 4) = v6;
  _InterlockedIncrement(&`winrt::get_module_lock'::`2'::s_lock);
  *(_QWORD *)v4 = &winrt::impl::delegate<winrt::Windows::Foundation::TypedEventHandler<winrt::Microsoft::UI::Xaml::Hosting::DesktopWindowXamlSource,winrt::Microsoft::UI::Xaml::Hosting::DesktopWindowXamlSourceTakeFocusRequestedEventArgs>,_lambda_16958d46b2a2cdbddbfc833f4239b531_>::`vftable';
  *a1 = v4;
  return a1;
}
