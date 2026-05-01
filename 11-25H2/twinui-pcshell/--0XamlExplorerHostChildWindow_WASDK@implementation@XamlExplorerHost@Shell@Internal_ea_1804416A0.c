/*
 * XREFs of ??0XamlExplorerHostChildWindow_WASDK@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@QEAA@_KAEBUhstring@6@@Z @ 0x1804416A0
 * Callers:
 *     ?CreateInstance@?$produce@UXamlExplorerHostChildWindow_WASDK@factory_implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@UIXamlExplorerHostChildWindow_WASDKFactory@34567@@impl@winrt@@UEAAH_KPEAXPEAPEAX@Z @ 0x180441B40 (-CreateInstance@-$produce@UXamlExplorerHostChildWindow_WASDK@factory_implementation@XamlExplorer.c)
 * Callees:
 *     ??0hstring@winrt@@QEAA@AEBU01@@Z @ 0x1800AD2D8 (--0hstring@winrt@@QEAA@AEBU01@@Z.c)
 *     ??0?$implements@UXamlExplorerHostChildWindow_WASDK@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@U134567@UIXamlExplorerHostChildWindow_WASDK2@34567@UIXamlExplorerHostChildWindow_WASDK3@34567@UIXamlExplorerHostChildWindow_WASDK4@34567@UIClosable@Foundation@67@Unon_agile@7@@winrt@@QEAA@XZ @ 0x1804413C4 (--0-$implements@UXamlExplorerHostChildWindow_WASDK@implementation@XamlExplorerHost@Shell@Interna.c)
 *     ?Initialize@XamlExplorerHostChildWindow_WASDK@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@QEAAXV?$optional@PEAUHWND__@@@std@@@Z @ 0x18044215C (-Initialize@XamlExplorerHostChildWindow_WASDK@implementation@XamlExplorerHost@Shell@Internal@Win.c)
 */

// Hidden C++ exception states: #wind=6
winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlExplorerHostChildWindow_WASDK *__fastcall winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlExplorerHostChildWindow_WASDK::XamlExplorerHostChildWindow_WASDK(
        winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlExplorerHostChildWindow_WASDK *this,
        __int64 a2,
        const struct winrt::hstring *a3)
{
  _QWORD *v5; // rcx
  const struct winrt::hstring *v6; // r8
  _BYTE v8[24]; // [rsp+20h] [rbp-18h] BYREF

  winrt::implements<winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlExplorerHostChildWindow_WASDK,winrt::Windows::Internal::Shell::XamlExplorerHost::XamlExplorerHostChildWindow_WASDK,winrt::Windows::Internal::Shell::XamlExplorerHost::IXamlExplorerHostChildWindow_WASDK2,winrt::Windows::Internal::Shell::XamlExplorerHost::IXamlExplorerHostChildWindow_WASDK3,winrt::Windows::Internal::Shell::XamlExplorerHost::IXamlExplorerHostChildWindow_WASDK4,winrt::Windows::Foundation::IClosable,winrt::non_agile>::implements<winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlExplorerHostChildWindow_WASDK,winrt::Windows::Internal::Shell::XamlExplorerHost::XamlExplorerHostChildWindow_WASDK,winrt::Windows::Internal::Shell::XamlExplorerHost::IXamlExplorerHostChildWindow_WASDK2,winrt::Windows::Internal::Shell::XamlExplorerHost::IXamlExplorerHostChildWindow_WASDK3,winrt::Windows::Internal::Shell::XamlExplorerHost::IXamlExplorerHostChildWindow_WASDK4,winrt::Windows::Foundation::IClosable,winrt::non_agile>(this);
  *v5 = &winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlExplorerHostChildWindow_WASDK::`vftable';
  v5[7] = 0LL;
  v5[8] = 0LL;
  v5[9] = 0LL;
  v5[10] = 0LL;
  winrt::hstring::hstring((winrt::hstring *)(v5 + 11), v6);
  *((_QWORD *)this + 12) = a2;
  *((_BYTE *)this + 104) = 0;
  *((_DWORD *)this + 27) = 0;
  *((_QWORD *)this + 14) = 0LL;
  *((_QWORD *)this + 15) = 0LL;
  *((_QWORD *)this + 16) = 0LL;
  *((_QWORD *)this + 17) = 0LL;
  *((_QWORD *)this + 18) = 0LL;
  v8[8] = 0;
  winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlExplorerHostChildWindow_WASDK::Initialize(
    this,
    v8);
  return this;
}
