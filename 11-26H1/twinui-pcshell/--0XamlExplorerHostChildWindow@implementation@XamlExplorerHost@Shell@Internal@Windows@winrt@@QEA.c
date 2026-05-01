/*
 * XREFs of ??0XamlExplorerHostChildWindow@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@QEAA@_KAEBUhstring@6@@Z @ 0x1801B4E40
 * Callers:
 *     ?CreateInstance@?$produce@UXamlExplorerHostChildWindow@factory_implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@UIXamlExplorerHostChildWindowFactory@34567@@impl@winrt@@UEAAH_KPEAXPEAPEAX@Z @ 0x1801B4C90 (-CreateInstance@-$produce@UXamlExplorerHostChildWindow@factory_implementation@XamlExplorerHost@S.c)
 *     ?CreateXamlHost@SharedDesktopBackgroundVisualHost@@AEAAJPEAUHWND__@@@Z @ 0x18060A450 (-CreateXamlHost@SharedDesktopBackgroundVisualHost@@AEAAJPEAUHWND__@@@Z.c)
 * Callees:
 *     ?duplicate_hstring@impl@winrt@@YAPEAUhstring_header@12@PEAU312@@Z @ 0x18002D174 (-duplicate_hstring@impl@winrt@@YAPEAUhstring_header@12@PEAU312@@Z.c)
 *     ??0?$atomic@_K@std@@QEAA@_K@Z @ 0x180032450 (--0-$atomic@_K@std@@QEAA@_K@Z.c)
 *     ??0?$producers_base@UXamlExplorerHostChildWindow@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@V?$tuple@UXamlExplorerHostChildWindow@XamlExplorerHost@Shell@Internal@Windows@winrt@@UIClosable@Foundation@56@@std@@@impl@winrt@@QEAA@XZ @ 0x1801B4F10 (--0-$producers_base@UXamlExplorerHostChildWindow@implementation@XamlExplorerHost@Shell@Internal@.c)
 *     ?Initialize@XamlExplorerHostChildWindow@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@QEAAXV?$optional@PEAUHWND__@@@std@@@Z @ 0x1801B4F34 (-Initialize@XamlExplorerHostChildWindow@implementation@XamlExplorerHost@Shell@Internal@Windows@w.c)
 */

// Hidden C++ exception states: #wind=6
winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlExplorerHostChildWindow *__fastcall winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlExplorerHostChildWindow::XamlExplorerHostChildWindow(
        winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlExplorerHostChildWindow *this,
        __int64 a2,
        const struct winrt::hstring *a3)
{
  winrt::impl **v5; // r9
  struct winrt::impl::hstring_header *v6; // rdx
  unsigned int v7; // r8d
  _BYTE v9[24]; // [rsp+20h] [rbp-18h] BYREF

  winrt::impl::producers_base<winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlExplorerHostChildWindow,std::tuple<winrt::Windows::Internal::Shell::XamlExplorerHost::XamlExplorerHostChildWindow,winrt::Windows::Foundation::IClosable>>::producers_base<winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlExplorerHostChildWindow,std::tuple<winrt::Windows::Internal::Shell::XamlExplorerHost::XamlExplorerHostChildWindow,winrt::Windows::Foundation::IClosable>>(
    (char *)this + 16,
    a2,
    a3,
    a3);
  _InterlockedIncrement(&`winrt::get_module_lock'::`2'::s_lock);
  std::atomic<unsigned __int64>::atomic<unsigned __int64>((__int64)this + 8, 1LL);
  *(_QWORD *)this = &winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlExplorerHostChildWindow::`vftable';
  *((_QWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  *((_QWORD *)this + 6) = 0LL;
  *((_QWORD *)this + 7) = 0LL;
  *((_QWORD *)this + 8) = 0LL;
  *((_QWORD *)this + 9) = winrt::impl::duplicate_hstring(*v5, v6, v7);
  *((_QWORD *)this + 10) = a2;
  *((_BYTE *)this + 88) = 0;
  *((_DWORD *)this + 23) = 0;
  *((_QWORD *)this + 12) = 0LL;
  *((_QWORD *)this + 13) = 0LL;
  *((_QWORD *)this + 14) = 0LL;
  v9[8] = 0;
  winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlExplorerHostChildWindow::Initialize(this, v9);
  return this;
}
