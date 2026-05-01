/*
 * XREFs of ??1?$ComPtr@VCSplashScreen@@@WRL@Microsoft@@QEAA@XZ @ 0x1802C5E20
 * Callers:
 *     _CSplashScreen::OnSystemVisualChanged_::_1_::dtor$0 @ 0x1806B0A96 (_CSplashScreen--OnSystemVisualChanged_--_1_--dtor$0.c)
 *     _CSplashScreen::OnSystemVisualChanged_::_1_::dtor$1 @ 0x1806B0AA8 (_CSplashScreen--OnSystemVisualChanged_--_1_--dtor$1.c)
 *     _CImmersiveApp::CImmersiveWindowCollection::RemoveSystemVisual_::_1_::dtor$0 @ 0x1806B0ABA (_CImmersiveApp--CImmersiveWindowCollection--RemoveSystemVisual_--_1_--dtor$0.c)
 *     _CImmersiveApp::CImmersiveWindowCollection::RemoveSystemVisual_::_1_::dtor$1 @ 0x1806B0ACC (_CImmersiveApp--CImmersiveWindowCollection--RemoveSystemVisual_--_1_--dtor$1.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall Microsoft::WRL::ComPtr<CSplashScreen>::~ComPtr<CSplashScreen>(__int64 *a1)
{
  return Microsoft::WRL::ComPtr<CSplashScreen>::InternalRelease(a1);
}
