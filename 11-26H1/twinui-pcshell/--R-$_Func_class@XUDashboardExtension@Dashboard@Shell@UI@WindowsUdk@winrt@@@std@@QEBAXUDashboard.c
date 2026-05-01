/*
 * XREFs of ??R?$_Func_class@XUDashboardExtension@Dashboard@Shell@UI@WindowsUdk@winrt@@@std@@QEBAXUDashboardExtension@Dashboard@Shell@UI@WindowsUdk@winrt@@@Z @ 0x1801E03E8
 * Callers:
 *     _lambda_684357928b11216b6941a1297d217b63_::operator() @ 0x1805CCB58 (_lambda_684357928b11216b6941a1297d217b63_--operator().c)
 *     _lambda_a05c3887e986835b884f6c40c22d2f9d_::operator() @ 0x1805CD5C4 (_lambda_a05c3887e986835b884f6c40c22d2f9d_--operator().c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall std::_Func_class<void,winrt::WindowsUdk::UI::Shell::Dashboard::DashboardExtension>::operator()(
        __int64 a1,
        winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *a2)
{
  __int64 v3; // rcx

  v3 = *(_QWORD *)(a1 + 56);
  if ( !v3 )
  {
    std::_Xbad_function_call();
    JUMPOUT(0x1801E0425LL);
  }
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension(a2);
}
