/*
 * XREFs of ??R?$_Func_class@XUDashboardExtension@Dashboard@Shell@UI@WindowsUdk@winrt@@@std@@QEBAXUDashboardExtension@Dashboard@Shell@UI@WindowsUdk@winrt@@@Z @ 0x1801F2B44
 * Callers:
 *     _lambda_706d5b32740c4da4e698be21c17b442a_::operator() @ 0x1805A8AD8 (_lambda_706d5b32740c4da4e698be21c17b442a_--operator().c)
 *     _lambda_a5f5a1685009109eb237b395fe0f8e38_::operator() @ 0x1805A935C (_lambda_a5f5a1685009109eb237b395fe0f8e38_--operator().c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
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
    JUMPOUT(0x1801F2B81LL);
  }
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension(a2);
}
