/*
 * XREFs of ??1?$ComPtr@VCSplashScreen@@@WRL@Microsoft@@QEAA@XZ @ 0x1802BCB54
 * Callers:
 *     _CSplashScreen::OnSystemVisualChanged_::_1_::dtor$0 @ 0x1806D0156 (_CSplashScreen--OnSystemVisualChanged_--_1_--dtor$0.c)
 *     _CSplashScreen::OnSystemVisualChanged_::_1_::dtor$1 @ 0x1806D0168 (_CSplashScreen--OnSystemVisualChanged_--_1_--dtor$1.c)
 *     _CImmersiveApp::CImmersiveWindowCollection::RemoveSystemVisual_::_1_::dtor$0 @ 0x1806D017A (_CImmersiveApp--CImmersiveWindowCollection--RemoveSystemVisual_--_1_--dtor$0.c)
 *     _CImmersiveApp::CImmersiveWindowCollection::RemoveSystemVisual_::_1_::dtor$1 @ 0x1806D018C (_CImmersiveApp--CImmersiveWindowCollection--RemoveSystemVisual_--_1_--dtor$1.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall Microsoft::WRL::ComPtr<CSplashScreen>::~ComPtr<CSplashScreen>(__int64 *a1)
{
  return Microsoft::WRL::ComPtr<CSplashScreen>::InternalRelease(a1);
}
