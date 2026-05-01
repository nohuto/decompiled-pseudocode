/*
 * XREFs of ?StaticWndProc@GamingOverlayExperienceManager@@CA_JPEAUHWND__@@I_K_J@Z @ 0x1803502F0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalAddRef@?$ComPtr@VGamingOverlayExperienceManager@@@WRL@Microsoft@@IEBAXXZ @ 0x180241DBC (-InternalAddRef@-$ComPtr@VGamingOverlayExperienceManager@@@WRL@Microsoft@@IEBAXXZ.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCImmersiveShellComponentWithGITSite@@UIImmersiveLayoutChanges@@UIApplicationFrameEventHandler@@UIGamingOverlayExperienceManager@GamingOverlay@Internal@Windows@@UIGameBarWindowManager@89Windows@@UIGameBarGameLauncher@89Windows@@UIGameBarProtocolForResultsLauncher@89Windows@@UIImmersiveWindowMessageNotification@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18034DAA0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCImm_ea_18034DAA0.c)
 *     ?WndProc@GamingOverlayExperienceManager@@AEAA_JPEAUHWND__@@I_K_J@Z @ 0x1803513DC (-WndProc@GamingOverlayExperienceManager@@AEAA_JPEAUHWND__@@I_K_J@Z.c)
 */

// Hidden C++ exception states: #wind=1
LRESULT __fastcall GamingOverlayExperienceManager::StaticWndProc(HWND hWnd, UINT Msg, WPARAM wParam, LPARAM lParam)
{
  LONG_PTR WindowLongPtrW; // rax
  GamingOverlayExperienceManager *v9; // rbx
  __int64 v10; // rdi
  LONG_PTR v12; // [rsp+30h] [rbp-38h] BYREF

  WindowLongPtrW = GetWindowLongPtrW(hWnd, 0);
  v9 = (GamingOverlayExperienceManager *)WindowLongPtrW;
  if ( Msg == 2 )
  {
    SetWindowLongPtrW(hWnd, 0, 0LL);
  }
  else if ( WindowLongPtrW )
  {
    v12 = WindowLongPtrW;
    Microsoft::WRL::ComPtr<GamingOverlayExperienceManager>::InternalAddRef(&v12);
    v10 = GamingOverlayExperienceManager::WndProc(v9, hWnd, Msg, wParam, lParam);
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,CImmersiveShellComponentWithGITSite,IImmersiveLayoutChanges,IApplicationFrameEventHandler,Windows::Internal::GamingOverlay::IGamingOverlayExperienceManager,Windows::Internal::GamingOverlay::IGameBarWindowManager,Windows::Internal::GamingOverlay::IGameBarGameLauncher,Windows::Internal::GamingOverlay::IGameBarProtocolForResultsLauncher,IImmersiveWindowMessageNotification,Microsoft::WRL::FtmBase>::Release((__int64)v9);
    return v10;
  }
  return DefWindowProcW(hWnd, Msg, wParam, lParam);
}
