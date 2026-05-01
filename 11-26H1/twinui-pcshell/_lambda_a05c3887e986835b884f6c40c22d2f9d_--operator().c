/*
 * XREFs of _lambda_a05c3887e986835b884f6c40c22d2f9d_::operator() @ 0x1805CD5C4
 * Callers:
 *     wistd::__function::__func__lambda_a05c3887e986835b884f6c40c22d2f9d__long___cdecl(void)_::operator() @ 0x1805CDEC0 (wistd--__function--__func__lambda_a05c3887e986835b884f6c40c22d2f9d__long___cdecl(void)_--operato.c)
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18002633C (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?InternalAddRef@?$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@IEBAXXZ @ 0x1800276DC (-InternalAddRef@-$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??R?$_Func_class@XUDashboardExtension@Dashboard@Shell@UI@WindowsUdk@winrt@@@std@@QEBAXUDashboardExtension@Dashboard@Shell@UI@WindowsUdk@winrt@@@Z @ 0x1801E03E8 (--R-$_Func_class@XUDashboardExtension@Dashboard@Shell@UI@WindowsUdk@winrt@@@std@@QEBAXUDashboard.c)
 *     ?EnsureDashboardExtensionCreated@DashboardManager@implementation@Shell@Internal@Windows@winrt@@AEAA?AUDashboardExtension@Dashboard@3UI@WindowsUdk@6@AEAUguid@6@@Z @ 0x1805CF760 (-EnsureDashboardExtensionCreated@DashboardManager@implementation@Shell@Internal@Windows@winrt@@A.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall lambda_a05c3887e986835b884f6c40c22d2f9d_::operator()(__int64 a1)
{
  __int64 v2; // rdx
  __int128 v3; // xmm1
  __int64 v4; // rdi
  __int64 v5; // rcx
  __int64 v6; // rbx
  const char *v7; // r9
  __int64 result; // rax
  __int64 v9[2]; // [rsp+20h] [rbp-28h] BYREF
  _QWORD v10[3]; // [rsp+30h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v2 = *(_QWORD *)(*(_QWORD *)a1 + 48LL);
  v3 = *(_OWORD *)(v2 + 152);
  v4 = *(_QWORD *)(v2 + 160);
  LODWORD(v9[0]) = v3;
  WORD2(v9[0]) = WORD2(v3);
  HIWORD(v9[0]) = WORD3(v3);
  v9[1] = v4;
  v5 = *(_QWORD *)(a1 + 8);
  try
  {
    winrt::Windows::Internal::Shell::implementation::DashboardManager::EnsureDashboardExtensionCreated(v5, v10, v9);
    if ( v10[0] && (v6 = *(_QWORD *)(a1 + 16), *(_QWORD *)(v6 + 56)) )
    {
      v9[0] = v10[0];
      Microsoft::WRL::ComPtr<IAppLayoutOperationItem>::InternalAddRef(v9);
      std::_Func_class<void,winrt::WindowsUdk::UI::Shell::Dashboard::DashboardExtension>::operator()(
        v6,
        (winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)v9);
    }
    else
    {
      **(_DWORD **)(a1 + 24) = -2147023728;
    }
    winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)v10);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0xB98,
                           (int)"pcshell\\twinui\\dashboardmanager\\lib\\dashboardmanager.cpp",
                           v7);
  }
  return result;
}
