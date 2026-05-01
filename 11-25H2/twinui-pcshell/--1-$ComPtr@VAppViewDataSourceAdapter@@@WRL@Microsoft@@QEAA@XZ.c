/*
 * XREFs of ??1?$ComPtr@VAppViewDataSourceAdapter@@@WRL@Microsoft@@QEAA@XZ @ 0x1802D19F8
 * Callers:
 *     _AppViewDataSourceAdapter_CreateInstance_::_1_::dtor$3 @ 0x1806AFCBF (_AppViewDataSourceAdapter_CreateInstance_--_1_--dtor$3.c)
 *     _wil::MakeAndInitializeOrThrow_AppViewDataSourceAdapter_enum_DesktopSwitcherDataSourceScopeOptions_&_IApplicationViewCollection___&_IApplicationViewIconLoader___&_IImmersiveShellHookService___&_Windows::Internal::Shell::Multitasking::Desktop::IDesktopThumbnailDevice___winrt::Windows::Internal::UI::Shell::IWindowTabExtension_&__::_1_::dtor$0 @ 0x1806B7715 (_wil--MakeAndInitializeOrThrow_AppViewDataSourceAdapter_enum_DesktopSwitcherDataSourceScopeOptio.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall Microsoft::WRL::ComPtr<AppViewDataSourceAdapter>::~ComPtr<AppViewDataSourceAdapter>(
        volatile signed __int64 **a1)
{
  return Microsoft::WRL::ComPtr<AppViewDataSourceAdapter>::InternalRelease(a1);
}
