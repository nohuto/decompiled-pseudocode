/*
 * XREFs of _lambda_1a4613c3767b380bb1c3edf448000594_::operator() @ 0x180446494
 * Callers:
 *     std::call_once__lambda_1a4613c3767b380bb1c3edf448000594___ @ 0x180445CC0 (std--call_once__lambda_1a4613c3767b380bb1c3edf448000594___.c)
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18005D244 (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ??4ShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@QEAAAEAU01234@$$QEAU01234@@Z @ 0x1800AA2B4 (--4ShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@QEAAAEAU01234@$$QEAU01234@@Z.c)
 *     ?WinAppSDKCohabitation_UnregisterWASDKThreadWrapper@WinUICohabitationFunctions@@QEBAXXZ @ 0x18021461C (-WinAppSDKCohabitation_UnregisterWASDKThreadWrapper@WinUICohabitationFunctions@@QEBAXXZ.c)
 *     ??0XamlApplication_WASDK@implementation@WASDK@XamlExplorerHost@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x180288360 (--0XamlApplication_WASDK@implementation@WASDK@XamlExplorerHost@Shell@Internal@Windows@winrt@@QEA.c)
 *     ?WinAppSDKCohabitation_EnsureWASDKFrameworkPackageRegisteredWrapper@WinUICohabitationFunctions@@QEBAXXZ @ 0x1802892C0 (-WinAppSDKCohabitation_EnsureWASDKFrameworkPackageRegisteredWrapper@WinUICohabitationFunctions@@.c)
 *     ?Instance@WinUICohabitationFunctions@@SAPEAV1@XZ @ 0x1802893F8 (-Instance@WinUICohabitationFunctions@@SAPEAV1@XZ.c)
 *     ?WinAppSDKCohabitation_RegisterWASDKThreadWrapper@WinUICohabitationFunctions@@QEBAXXZ @ 0x1802C0B30 (-WinAppSDKCohabitation_RegisterWASDKThreadWrapper@WinUICohabitationFunctions@@QEBAXXZ.c)
 *     ??2@YAPEAX_K@Z @ 0x1802D2B34 (--2@YAPEAX_K@Z.c)
 *     memset_0 @ 0x1802D2FFC (memset_0.c)
 *     _Init_thread_footer @ 0x1802D5898 (_Init_thread_footer.c)
 *     _Init_thread_header @ 0x1802D5900 (_Init_thread_header.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall lambda_1a4613c3767b380bb1c3edf448000594_::operator()(__int64 a1)
{
  HMODULE *v2; // rax
  HMODULE *v3; // rax
  _QWORD *v4; // rbx
  HMODULE *v5; // rax
  _QWORD *v6; // [rsp+40h] [rbp+8h] BYREF
  _QWORD *v7; // [rsp+48h] [rbp+10h]

  v2 = (HMODULE *)WinUICohabitationFunctions::Instance();
  WinUICohabitationFunctions::WinAppSDKCohabitation_EnsureWASDKFrameworkPackageRegisteredWrapper(v2);
  v3 = (HMODULE *)WinUICohabitationFunctions::Instance();
  WinUICohabitationFunctions::WinAppSDKCohabitation_RegisterWASDKThreadWrapper(v3);
  BYTE1(v6) = 1;
  v4 = operator new(0x58uLL);
  v7 = v4;
  memset_0(v4, 0, 0x58uLL);
  winrt::Windows::Internal::Shell::XamlExplorerHost::WASDK::implementation::XamlApplication_WASDK::XamlApplication_WASDK((winrt::Windows::Internal::Shell::XamlExplorerHost::WASDK::implementation::XamlApplication_WASDK *)v4);
  *v4 = &winrt::Windows::Internal::Shell::XamlExplorerHost::WASDK::implementation::XamlApplication_WASDK::`vftable';
  v6 = v4 + 3;
  winrt::WindowsUdk::UI::Shell::ShellViewCoordinator::operator=((__int64 *)(*(_QWORD *)a1 + 40LL), (__int64 *)&v6);
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v6);
  if ( dword_18089DF58 > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)tls_index)
                                   + 16LL) )
  {
    Init_thread_header(&dword_18089DF58);
    if ( dword_18089DF58 == -1 )
    {
      qword_18089DF60 = (__int64)CreateThread(0LL, 0LL, WindowsXamlManagerThread::ThreadProc, &qword_18089DF60, 0, 0LL);
      Init_thread_footer(&dword_18089DF58);
    }
  }
  v5 = (HMODULE *)WinUICohabitationFunctions::Instance();
  WinUICohabitationFunctions::WinAppSDKCohabitation_UnregisterWASDKThreadWrapper(v5);
}
