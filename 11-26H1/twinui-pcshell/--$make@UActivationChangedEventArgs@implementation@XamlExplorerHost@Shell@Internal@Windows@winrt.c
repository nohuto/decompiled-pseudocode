/*
 * XREFs of ??$make@UActivationChangedEventArgs@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@AEB_NAEBQEAUHWND__@@@winrt@@YA?A_PAEB_NAEBQEAUHWND__@@@Z @ 0x1800266D0
 * Callers:
 *     ?MessageHandler@XamlExplorerHostWindow_WASDK@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@AEAA_JI_K_J@Z @ 0x1801A79EC (-MessageHandler@XamlExplorerHostWindow_WASDK@implementation@XamlExplorerHost@Shell@Internal@Wind.c)
 * Callees:
 *     ??0?$producers_base@UActivationChangedEventArgs@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@V?$tuple@UActivationChangedEventArgs@XamlExplorerHost@Shell@Internal@Windows@winrt@@@std@@@impl@winrt@@QEAA@XZ @ 0x180026750 (--0-$producers_base@UActivationChangedEventArgs@implementation@XamlExplorerHost@Shell@Internal@W.c)
 *     ??0?$atomic@_K@std@@QEAA@_K@Z @ 0x180032450 (--0-$atomic@_K@std@@QEAA@_K@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x1802C9924 (--2@YAPEAX_K@Z.c)
 */

_QWORD *__fastcall winrt::make<winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::ActivationChangedEventArgs,bool const &,HWND__ * const &>(
        _QWORD *a1,
        _BYTE *a2,
        _QWORD *a3)
{
  __int64 v6; // r8
  __int64 v7; // rdx
  __int64 v8; // r11
  __int64 v9; // r11
  _QWORD *result; // rax
  __int64 v11; // r10
  char v12; // r8
  __int64 v13; // r9
  char *v14; // [rsp+40h] [rbp+8h]

  v14 = (char *)operator new(0x28uLL);
  LOBYTE(v6) = *a2;
  winrt::impl::producers_base<winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::ActivationChangedEventArgs,std::tuple<winrt::Windows::Internal::Shell::XamlExplorerHost::ActivationChangedEventArgs>>::producers_base<winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::ActivationChangedEventArgs,std::tuple<winrt::Windows::Internal::Shell::XamlExplorerHost::ActivationChangedEventArgs>>(
    v14 + 16,
    v7,
    v6,
    *a3);
  _InterlockedIncrement(&`winrt::get_module_lock'::`2'::s_lock);
  std::atomic<unsigned __int64>::atomic<unsigned __int64>(v8 + 8, 1LL);
  *(_QWORD *)v9 = &winrt::impl::heap_implements<winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::ActivationChangedEventArgs>::`vftable';
  result = a1;
  *a1 = v11;
  *(_BYTE *)(v9 + 24) = v12;
  *(_QWORD *)(v9 + 32) = v13;
  return result;
}
