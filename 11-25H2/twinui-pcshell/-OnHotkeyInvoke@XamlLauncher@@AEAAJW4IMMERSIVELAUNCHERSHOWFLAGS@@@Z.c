/*
 * XREFs of ?OnHotkeyInvoke@XamlLauncher@@AEAAJW4IMMERSIVELAUNCHERSHOWFLAGS@@@Z @ 0x1801D6234
 * Callers:
 *     ?OnShellHookMessage@XamlLauncher@@UEAAJ_K_J@Z @ 0x1801D61F0 (-OnShellHookMessage@XamlLauncher@@UEAAJ_K_J@Z.c)
 *     Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_Windows::Foundation::ITypedEventHandler_impl_Windows::Foundation::Internal::AggregateType_Windows::Internal::Shell::WindowManagementEvents::ShellHotkeyRegistration___Windows::Internal::Shell::WindowManagementEvents::IShellHotkeyRegistration____Windows::Internal::Shell::WindowManagementEvents::ShellHotkeyEventArgs_::_)(Windows::Internal::Shell::WindowManagementEvents::IShellHotkeyRegistration___Windows::Internal::Shell::WindowManagementEvents::ShellHotkeyEventArgs)_::DelegateInvokeHelper_Windows::Foundation::ITypedEventHandler_Windows::Internal::Shell::WindowManagementEvents::ShellHotkeyRegistration___Windows::Internal::Shell::WindowManagementEvents::ShellHotkeyEventArgs___lambda_8e75d5ceee8df6aa2550c5605f7c9f99___1_Windows::Internal::Shell::WindowManagementEvents::IShellHotkeyRegistration___Windows::Internal::Shell::WindowManagementEvents::ShellHotkeyEventArgs_::Invoke @ 0x18044EB00 (Microsoft--WRL--Details--DelegateArgTraits_long_(__cdecl_Windows--Foundation--IType_ea_18044EB00.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ShowStartView@XamlLauncher@@UEAAJW4IMMERSIVELAUNCHERSHOWMETHOD@@W4IMMERSIVELAUNCHERSHOWFLAGS@@@Z @ 0x1801D62F0 (-ShowStartView@XamlLauncher@@UEAAJW4IMMERSIVELAUNCHERSHOWMETHOD@@W4IMMERSIVELAUNCHERSHOWFLAGS@@@.c)
 *     ?HandleInitialHShellEvent@XamlLauncher@@AEAAXXZ @ 0x1802C7260 (-HandleInitialHShellEvent@XamlLauncher@@AEAAXXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall XamlLauncher::OnHotkeyInvoke(__int64 a1, unsigned int a2)
{
  __int64 v4; // rcx
  __int64 v6; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v4 = *(_QWORD *)(a1 + 376);
  if ( !v4 )
    return 2147943568LL;
  if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v4 + 104LL))(v4) )
  {
    v6 = *(_QWORD *)(a1 + 376);
    if ( !v6 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x7C5,
        (int)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncher.cpp",
        (const char *)0x80070490LL);
      return 2147943568LL;
    }
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v6 + 64LL))(v6, 1LL);
  }
  else if ( *(_BYTE *)(a1 + 353) )
  {
    *(_BYTE *)(a1 + 353) = 0;
    XamlLauncher::HandleInitialHShellEvent((XamlLauncher *)a1);
  }
  else
  {
    XamlLauncher::ShowStartView(a1 + 24, 1LL, a2);
  }
  return 0LL;
}
