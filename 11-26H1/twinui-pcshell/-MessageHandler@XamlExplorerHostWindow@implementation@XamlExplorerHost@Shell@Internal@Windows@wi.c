/*
 * XREFs of ?MessageHandler@XamlExplorerHostWindow@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@AEAA_JI_K_J@Z @ 0x18002643C
 * Callers:
 *     ?WndProc@XamlExplorerHostWindow@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@SA_JQEAUHWND__@@I_K_J@Z @ 0x180026360 (-WndProc@XamlExplorerHostWindow@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@SA.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x180026574 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 *     ??$?RUXamlExplorerHostWindow@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@UActivationChangedEventArgs@23456@@?$event@U?$TypedEventHandler@UXamlExplorerHostWindow@XamlExplorerHost@Shell@Internal@Windows@winrt@@UActivationChangedEventArgs@23456@@Foundation@Windows@winrt@@@winrt@@QEAAXAEBUXamlExplorerHostWindow@implementation@XamlExplorerHost@Shell@Internal@Windows@1@AEBUActivationChangedEventArgs@45671@@Z @ 0x180026594 (--$-RUXamlExplorerHostWindow@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@UActi.c)
 *     ??0?$producers_base@UActivationChangedEventArgs@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@V?$tuple@UActivationChangedEventArgs@XamlExplorerHost@Shell@Internal@Windows@winrt@@@std@@@impl@winrt@@QEAA@XZ @ 0x180026750 (--0-$producers_base@UActivationChangedEventArgs@implementation@XamlExplorerHost@Shell@Internal@W.c)
 *     ??0?$atomic@_K@std@@QEAA@_K@Z @ 0x180032450 (--0-$atomic@_K@std@@QEAA@_K@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x1802C9924 (--2@YAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=1
LRESULT __fastcall winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlExplorerHostWindow::MessageHandler(
        winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlExplorerHostWindow *this,
        UINT a2,
        WPARAM a3,
        LPARAM a4)
{
  char v9; // r14
  LPARAM v10; // r15
  char *v11; // rax
  __int64 v12; // rdx
  __int64 v13; // r9
  __int64 v14; // r9
  __int64 v15; // r8
  const char *v16; // r9
  _QWORD v17[9]; // [rsp+30h] [rbp-48h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]

  if ( a2 == 6 )
  {
    if ( a3 )
    {
      v9 = 1;
      v10 = *((_QWORD *)this + 5);
    }
    else
    {
      v9 = 0;
      v10 = a4;
    }
    try
    {
      v11 = (char *)operator new(0x28uLL);
      winrt::impl::producers_base<winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::ActivationChangedEventArgs,std::tuple<winrt::Windows::Internal::Shell::XamlExplorerHost::ActivationChangedEventArgs>>::producers_base<winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::ActivationChangedEventArgs,std::tuple<winrt::Windows::Internal::Shell::XamlExplorerHost::ActivationChangedEventArgs>>(
        v11 + 16,
        v12,
        v11 + 16,
        v11);
      _InterlockedIncrement(&`winrt::get_module_lock'::`2'::s_lock);
      std::atomic<unsigned __int64>::atomic<unsigned __int64>(v13 + 8, 1LL);
      *(_BYTE *)(v14 + 24) = v9;
      *(_QWORD *)(v14 + 32) = v10;
      *(_QWORD *)v14 = &winrt::impl::heap_implements<winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::ActivationChangedEventArgs>::`vftable';
      v17[0] = v15 & -(__int64)(v14 != 0);
      winrt::event<winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Internal::Shell::XamlExplorerHost::XamlExplorerHostWindow,winrt::Windows::Internal::Shell::XamlExplorerHost::ActivationChangedEventArgs>>::operator()<winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlExplorerHostWindow,winrt::Windows::Internal::Shell::XamlExplorerHost::ActivationChangedEventArgs>(
        (char *)this + 72,
        this,
        v17);
      if ( v17[0] )
        winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(v17);
    }
    catch ( ... )
    {
      return (int)wil::details::in1diag3::Return_CaughtException(
                    retaddr,
                    (void *)0x5E,
                    (unsigned int)"pcshell\\twinui\\xamlexplorerhost\\lib\\XamlExplorerHostIslandWindow.cpp",
                    v16);
    }
    return DefWindowProcW(*((HWND *)this + 5), a2, a3, a4);
  }
  if ( a2 != 16 )
  {
    if ( a2 == 70 && (*(_BYTE *)(a4 + 32) & 1) == 0 )
      MoveWindow(*((HWND *)this + 7), 0, 0, *(_DWORD *)(a4 + 24), *(_DWORD *)(a4 + 28), 1);
    return DefWindowProcW(*((HWND *)this + 5), a2, a3, a4);
  }
  return 0LL;
}
