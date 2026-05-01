/*
 * XREFs of ?WinAppSDKCohabitation_RegisterWASDKThreadWrapper@WinUICohabitationFunctions@@QEBAXXZ @ 0x1802C0B30
 * Callers:
 *     ?LoadMetadata@XamlApplication_WASDK@implementation@WASDK@XamlExplorerHost@Shell@Internal@Windows@winrt@@AEAAXXZ @ 0x1801B51BC (-LoadMetadata@XamlApplication_WASDK@implementation@WASDK@XamlExplorerHost@Shell@Internal@Windows.c)
 *     winrt::Windows::Internal::Shell::XamlExplorerHost::WASDK::implementation::UseMrtShim_WASDK$_ResumeCoro$1 @ 0x18024EC20 (winrt--Windows--Internal--Shell--XamlExplorerHost--WASDK--implementation--UseMrtShim_WASDK$_Resu.c)
 *     _lambda_1a4613c3767b380bb1c3edf448000594_::operator() @ 0x180446494 (_lambda_1a4613c3767b380bb1c3edf448000594_--operator().c)
 *     ?ThreadProc@WindowsXamlManagerThread@@SAKPEAX@Z @ 0x180447410 (-ThreadProc@WindowsXamlManagerThread@@SAKPEAX@Z.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800934E8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Throw_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18031CCF0 (-_Throw_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall WinUICohabitationFunctions::WinAppSDKCohabitation_RegisterWASDKThreadWrapper(HMODULE *this)
{
  __int64 (*ProcAddress)(void); // rax
  const char *v2; // r9
  int v3; // eax
  int v4; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  ProcAddress = GetProcAddress(*this, "WinAppSDKCohabitation_RegisterWASDKThread");
  if ( !ProcAddress )
    wil::details::in1diag3::_Throw_GetLastError(
      retaddr,
      (void *)0x23,
      (unsigned int)"pcshell\\twinui\\XamlExplorerHost\\lib\\WinUICohabitationFunctions.h",
      v2);
  v3 = ProcAddress();
  if ( v3 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x24,
      (int)"pcshell\\twinui\\XamlExplorerHost\\lib\\WinUICohabitationFunctions.h",
      (const char *)(unsigned int)v3,
      v4);
}
