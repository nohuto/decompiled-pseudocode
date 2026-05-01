/*
 * XREFs of ?ResetViews@CSingleViewShellExperience@@AEAAXXZ @ 0x1802B4E60
 * Callers:
 *     ?OnViewCreatedBase@CSingleViewShellExperience@@AEAAJ$$QEAV?$ComPtr@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@WRL@Microsoft@@@Z @ 0x180011954 (-OnViewCreatedBase@CSingleViewShellExperience@@AEAAJ$$QEAV-$ComPtr@UIViewWrapper@ViewManagerInte.c)
 *     ?OnViewDestroyedBase@CSingleViewShellExperience@@AEAAJXZ @ 0x180013B48 (-OnViewDestroyedBase@CSingleViewShellExperience@@AEAAJXZ.c)
 *     wil::details::ScopeExitFn__lambda_4c551f96b4d47870eead9a7d5ac91a0d___::_ScopeExitFn__lambda_4c551f96b4d47870eead9a7d5ac91a0d___ @ 0x1802CD068 (wil--details--ScopeExitFn__lambda_4c551f96b4d47870eead9a7d5ac91a0d___--_ScopeExitFn__lambda_4c55.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?CancelWaitForWindowReadyForPresentation@CSingleViewShellExperience@@AEAAXXZ @ 0x18001D8D4 (-CancelWaitForWindowReadyForPresentation@CSingleViewShellExperience@@AEAAXXZ.c)
 */

void __fastcall CSingleViewShellExperience::ResetViews(CSingleViewShellExperience *this)
{
  __int64 v2; // rcx

  CSingleViewShellExperience::CancelWaitForWindowReadyForPresentation((HSTRING *)this);
  *((_DWORD *)this + 18) = 0;
  *((_DWORD *)this + 19) = 1;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 3);
  v2 = *((_QWORD *)this + 10);
  *((_DWORD *)this + 10) = 0;
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 32LL))(v2);
}
