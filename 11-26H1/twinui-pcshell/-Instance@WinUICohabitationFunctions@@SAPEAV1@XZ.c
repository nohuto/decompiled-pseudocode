/*
 * XREFs of ?Instance@WinUICohabitationFunctions@@SAPEAV1@XZ @ 0x180281120
 * Callers:
 *     ?LoadMetadata@XamlApplication_WASDK@implementation@WASDK@XamlExplorerHost@Shell@Internal@Windows@winrt@@AEAAXXZ @ 0x1800A1A68 (-LoadMetadata@XamlApplication_WASDK@implementation@WASDK@XamlExplorerHost@Shell@Internal@Windows.c)
 *     ??0XamlExplorerHostWindow@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@QEAA@IAEBURect@Foundation@56@I@Z @ 0x1800A2034 (--0XamlExplorerHostWindow@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@QEAA@IAE.c)
 *     ?OnLaunched@XamlApplication@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@QEAAXULaunchActivatedEventArgs@Activation@ApplicationModel@67@@Z @ 0x180209A34 (-OnLaunched@XamlApplication@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@QEAAXU.c)
 *     winrt::Windows::Internal::Shell::XamlExplorerHost::WASDK::implementation::UseMrtShim_WASDK$_ResumeCoro$1 @ 0x180243100 (winrt--Windows--Internal--Shell--XamlExplorerHost--WASDK--implementation--UseMrtShim_WASDK$_Resu.c)
 *     ?LoadWinUIFrameworkPackage@XamlApplication_WASDK@implementation@WASDK@XamlExplorerHost@Shell@Internal@Windows@winrt@@AEAAXXZ @ 0x18028104C (-LoadWinUIFrameworkPackage@XamlApplication_WASDK@implementation@WASDK@XamlExplorerHost@Shell@Int.c)
 *     wil::details::lambda_call__lambda_c150d498e477500fab2efa2e3399f645___::_lambda_call__lambda_c150d498e477500fab2efa2e3399f645___ @ 0x1802C6AE0 (wil--details--lambda_call__lambda_c150d498e477500fab2efa2e3399f645___--_lambda_call__lambda_c150.c)
 *     _lambda_f5c7a19be5cc201203fc8ae0f408e847_::operator() @ 0x180452A90 (_lambda_f5c7a19be5cc201203fc8ae0f408e847_--operator().c)
 *     ?ThreadProc@WindowsXamlManagerThread@@SAKPEAX@Z @ 0x180453AC0 (-ThreadProc@WindowsXamlManagerThread@@SAKPEAX@Z.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x1802C9924 (--2@YAPEAX_K@Z.c)
 *     ??1?$unique_ptr@VWinUICohabitationFunctions@@U?$default_delete@VWinUICohabitationFunctions@@@std@@@std@@QEAA@XZ @ 0x18044AE60 (--1-$unique_ptr@VWinUICohabitationFunctions@@U-$default_delete@VWinUICohabitationFunctions@@@std.c)
 *     ??R?$default_delete@VWinUICohabitationFunctions@@@std@@QEBAXPEAVWinUICohabitationFunctions@@@Z @ 0x18044AF98 (--R-$default_delete@VWinUICohabitationFunctions@@@std@@QEBAXPEAVWinUICohabitationFunctions@@@Z.c)
 */

// Hidden C++ exception states: #wind=2
struct WinUICohabitationFunctions *WinUICohabitationFunctions::Instance(void)
{
  __int64 v0; // rbx
  HMODULE *v1; // rbx
  __int64 v2; // rdx
  RTL_SRWLOCK *v4; // [rsp+30h] [rbp+8h] BYREF
  HMODULE *v5; // [rsp+38h] [rbp+10h]

  AcquireSRWLockExclusive(&WinUICohabitationFunctions::s_lock);
  v4 = &WinUICohabitationFunctions::s_lock;
  v0 = WinUICohabitationFunctions::s_instance;
  if ( !WinUICohabitationFunctions::s_instance )
  {
    v1 = (HMODULE *)operator new(8uLL);
    v5 = v1;
    *v1 = LoadLibraryExW(L"WinUICohabitation.dll", 0LL, 0x800u);
    v4 = 0LL;
    v2 = WinUICohabitationFunctions::s_instance;
    WinUICohabitationFunctions::s_instance = (__int64)v1;
    if ( v2 )
      std::default_delete<WinUICohabitationFunctions>::operator()();
    std::unique_ptr<WinUICohabitationFunctions>::~unique_ptr<WinUICohabitationFunctions>(&v4);
    v0 = WinUICohabitationFunctions::s_instance;
  }
  ReleaseSRWLockExclusive(&WinUICohabitationFunctions::s_lock);
  return (struct WinUICohabitationFunctions *)v0;
}
