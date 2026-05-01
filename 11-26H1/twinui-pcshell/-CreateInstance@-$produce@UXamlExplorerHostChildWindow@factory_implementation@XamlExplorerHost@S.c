/*
 * XREFs of ?CreateInstance@?$produce@UXamlExplorerHostChildWindow@factory_implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@UIXamlExplorerHostChildWindowFactory@34567@@impl@winrt@@UEAAH_KPEAXPEAPEAX@Z @ 0x1801B4C90
 * Callers:
 *     <none>
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x180026574 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 *     ?Current@XamlApplication@XamlExplorerHost@Shell@Internal@Windows@winrt@@SA?AU123456@XZ @ 0x1801B4D44 (-Current@XamlApplication@XamlExplorerHost@Shell@Internal@Windows@winrt@@SA-AU123456@XZ.c)
 *     ??0XamlExplorerHostChildWindow@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@QEAA@_KAEBUhstring@6@@Z @ 0x1801B4E40 (--0XamlExplorerHostChildWindow@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@QEA.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ??2@YAPEAX_K@Z @ 0x1802C9924 (--2@YAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=2 #try_helpers=1
__int64 __fastcall winrt::impl::produce<winrt::Windows::Internal::Shell::XamlExplorerHost::factory_implementation::XamlExplorerHostChildWindow,winrt::Windows::Internal::Shell::XamlExplorerHost::IXamlExplorerHostChildWindowFactory>::CreateInstance(
        __int64 a1,
        unsigned __int64 a2,
        __int64 a3,
        __int64 *a4)
{
  winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlExplorerHostChildWindow *v6; // rbx
  __int64 v7; // rbx
  __int64 v9[2]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v10; // [rsp+30h] [rbp-18h] BYREF

  v10 = a3;
  *a4 = 0LL;
  winrt::Windows::Internal::Shell::XamlExplorerHost::XamlApplication::Current(v9);
  v6 = (winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlExplorerHostChildWindow *)operator new(0x78uLL);
  v9[1] = (__int64)v6;
  winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlExplorerHostChildWindow::XamlExplorerHostChildWindow(
    v6,
    a2,
    (const struct winrt::hstring *)&v10);
  *(_QWORD *)v6 = &winrt::impl::heap_implements<winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlExplorerHostChildWindow>::`vftable';
  v7 = ((unsigned __int64)v6 + 16) & -(__int64)(v6 != 0LL);
  if ( v9[0] )
    winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(v9);
  *a4 = v7;
  return 0LL;
}
