/*
 * XREFs of ?_GetCapturedItemRootVisual@CCaptureManager@@AEAAJPEAUHWND__@@PEAPEAVCVisualProxy@@PEAPEAVCapturedWindowRepresentation@@1@Z @ 0x1800A50CC
 * Callers:
 *     ?SetupWindowCapture@CCaptureManager@@UEAAJPEAUHWND__@@PEAXAEBUDWM_CAPTURE_TOKEN@@@Z @ 0x1800A18E0 (-SetupWindowCapture@CCaptureManager@@UEAAJPEAUHWND__@@PEAXAEBUDWM_CAPTURE_TOKEN@@@Z.c)
 *     ?UpdateProxyWindowForCapture@CCaptureManager@@UEAAJPEAUHWND__@@00@Z @ 0x1800A3670 (-UpdateProxyWindowForCapture@CCaptureManager@@UEAAJPEAUHWND__@@00@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCSpriteVisual@@@WRL@Microsoft@@IEAAKXZ @ 0x18001727C (-InternalRelease@-$ComPtr@VCSpriteVisual@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?GetSyncedWindowDataByHwnd@CWindowList@@QEAAXPEAUHWND__@@PEAPEAVCWindowData@@@Z @ 0x180021870 (-GetSyncedWindowDataByHwnd@CWindowList@@QEAAXPEAUHWND__@@PEAPEAVCWindowData@@@Z.c)
 *     ??$?9UICompositionProjectedShadowReceiver@Composition@UI@Windows@@@WRL@Microsoft@@YA_NAEBV?$ComPtr@UICompositionProjectedShadowReceiver@Composition@UI@Windows@@@01@$$T@Z @ 0x1800357D0 (--$-9UICompositionProjectedShadowReceiver@Composition@UI@Windows@@@WRL@Microsoft@@YA_NAEBV-$ComP.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x18004ABD0 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180083BD8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180084EB4 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Create@CapturedWindowRepresentation@@SAJPEAVCWindowData@@PEAPEAV1@@Z @ 0x18009C1D0 (-Create@CapturedWindowRepresentation@@SAJPEAVCWindowData@@PEAPEAV1@@Z.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_Capture_Secondary_Windows@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800A0E54 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_Capture_Secondary_Windows@@@details@wil@@.c)
 *     ?_GetWindowRootVisual@CCaptureManager@@AEAAJPEAUHWND__@@_NPEAPEAVCVisualProxy@@@Z @ 0x1800A545C (-_GetWindowRootVisual@CCaptureManager@@AEAAJPEAUHWND__@@_NPEAPEAVCVisualProxy@@@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CCaptureManager::_GetCapturedItemRootVisual(
        CCaptureManager *this,
        HWND a2,
        struct CVisualProxy **a3,
        struct CapturedWindowRepresentation **a4,
        struct CVisualProxy **a5)
{
  struct CVisualProxy **v8; // rsi
  __int64 v9; // r8
  struct CWindowData *v10; // rbx
  int v11; // eax
  struct CVisualProxy *v12; // rcx
  int WindowRootVisual; // eax
  unsigned int v14; // ebx
  struct CapturedWindowRepresentation *v15; // rax
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+28h]
  struct CapturedWindowRepresentation *v18; // [rsp+50h] [rbp+30h] BYREF
  struct _RTL_CRITICAL_SECTION *v19; // [rsp+60h] [rbp+40h] BYREF

  v18 = this;
  v19 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  *a3 = 0LL;
  *a4 = 0LL;
  v8 = a5;
  *a5 = 0LL;
  v18 = 0LL;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_Capture_Secondary_Windows>::ReportUsage(
    `wil::Feature<__WilFeatureTraits_Feature_Capture_Secondary_Windows>::GetImpl'::`2'::impl,
    1u,
    v9);
  a5 = 0LL;
  CWindowList::GetSyncedWindowDataByHwnd(
    *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 53),
    a2,
    (struct CWindowData **)&a5);
  v10 = (struct CWindowData *)a5;
  if ( a5 )
  {
    Microsoft::WRL::ComPtr<CSpriteVisual>::InternalRelease(&v18);
    v11 = CapturedWindowRepresentation::Create(v10, &v18);
    if ( v11 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x5F5,
        (int)"clientcore\\windows\\dwm\\udwm\\capturemanager.cpp",
        (const char *)(unsigned int)v11);
  }
  if ( Microsoft::WRL::operator!=<Windows::UI::Composition::ICompositionProjectedShadowReceiver>(&v18) )
  {
    v12 = (struct CVisualProxy *)*((_QWORD *)v18 + 3);
    *a3 = v12;
  }
  WindowRootVisual = CCaptureManager::_GetWindowRootVisual(v12, a2, 1, v8);
  v14 = WindowRootVisual;
  if ( WindowRootVisual >= 0 )
  {
    if ( *a3 )
    {
      v15 = v18;
      v18 = 0LL;
      *a4 = v15;
    }
    else
    {
      *a3 = *v8;
    }
    v14 = 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x5FE,
      (int)"clientcore\\windows\\dwm\\udwm\\capturemanager.cpp",
      (const char *)(unsigned int)WindowRootVisual);
  }
  Microsoft::WRL::ComPtr<CSpriteVisual>::InternalRelease(&v18);
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v19);
  return v14;
}
