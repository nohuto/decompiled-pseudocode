/*
 * XREFs of ?UpdateProxyWindowForCapture@CCaptureManager@@UEAAJPEAUHWND__@@00@Z @ 0x1800A3670
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCSpriteVisual@@@WRL@Microsoft@@IEAAKXZ @ 0x18001727C (-InternalRelease@-$ComPtr@VCSpriteVisual@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?GetSyncedWindowDataByHwnd@CWindowList@@QEAAXPEAUHWND__@@PEAPEAVCWindowData@@@Z @ 0x180021870 (-GetSyncedWindowDataByHwnd@CWindowList@@QEAAXPEAUHWND__@@PEAPEAVCWindowData@@@Z.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x18004ABD0 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?SetRootVisual@CCaptureControllerProxy@@QEAAJPEAVCVisualProxy@@@Z @ 0x18007AA20 (-SetRootVisual@CCaptureControllerProxy@@QEAAJPEAVCVisualProxy@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180083BD8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SetReferenceVisual@CCaptureControllerProxy@@QEAAJPEAVCVisualProxy@@@Z @ 0x18009BE44 (-SetReferenceVisual@CCaptureControllerProxy@@QEAAJPEAVCVisualProxy@@@Z.c)
 *     ?_AddRemoveWindowToFilteredDisplayCapture@CCaptureManager@@AEAAJPEAUHWND__@@_NPEAUCAPTURE_FILTERED_DISPLAY_MAP_ENTRY@1@@Z @ 0x1800A41D0 (-_AddRemoveWindowToFilteredDisplayCapture@CCaptureManager@@AEAAJPEAUHWND__@@_NPEAUCAPTURE_FILTER.c)
 *     ?_GetCapturedItemRootVisual@CCaptureManager@@AEAAJPEAUHWND__@@PEAPEAVCVisualProxy@@PEAPEAVCapturedWindowRepresentation@@1@Z @ 0x1800A50CC (-_GetCapturedItemRootVisual@CCaptureManager@@AEAAJPEAUHWND__@@PEAPEAVCVisualProxy@@PEAPEAVCaptur.c)
 *     ?_HasOngoingCapture@CCaptureManager@@AEAA_NPEAUHWND__@@@Z @ 0x1800A552C (-_HasOngoingCapture@CCaptureManager@@AEAA_NPEAUHWND__@@@Z.c)
 *     ?_SendBoundsToCaptureControllerFromWindow@CCaptureManager@@AEAAJPEAUHWND__@@_NPEAVCCaptureControllerProxy@@@Z @ 0x1800A55EC (-_SendBoundsToCaptureControllerFromWindow@CCaptureManager@@AEAAJPEAUHWND__@@_NPEAVCCaptureContro.c)
 *     ?_SetProjectionBorderForWindow@CCaptureManager@@AEAAJPEAUHWND__@@_N@Z @ 0x1800A5930 (-_SetProjectionBorderForWindow@CCaptureManager@@AEAAJPEAUHWND__@@_N@Z.c)
 *     ?_SetScreenCaptureForWindow@CCaptureManager@@AEAAJPEAUHWND__@@_N@Z @ 0x1800A5A08 (-_SetScreenCaptureForWindow@CCaptureManager@@AEAAJPEAUHWND__@@_N@Z.c)
 *     ?_UpdateCaptureControllerDefaultSDRBoost@CCaptureManager@@AEAAJPEAUHWND__@@@Z @ 0x1800A60F8 (-_UpdateCaptureControllerDefaultSDRBoost@CCaptureManager@@AEAAJPEAUHWND__@@@Z.c)
 *     ?_UpdateCaptureControllerTransformFromWindow@CCaptureManager@@AEAAJPEAUHWND__@@_NPEAVCCaptureControllerProxy@@@Z @ 0x1800A6558 (-_UpdateCaptureControllerTransformFromWindow@CCaptureManager@@AEAAJPEAUHWND__@@_NPEAVCCaptureCon.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_Capture_FilteredCaptureProxyWindows@@@details@wil@@QEAA_NXZ @ 0x1800A679C (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_Capture_FilteredCaptureProxyWindo.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CCaptureManager::UpdateProxyWindowForCapture(__int64 ***this, HWND a2, HWND a3, HWND a4)
{
  HWND v6; // rbx
  HWND v8; // r14
  CCaptureManager *v9; // rcx
  int CapturedItemRootVisual; // eax
  unsigned int v11; // esi
  __int64 **v12; // rdi
  __int64 *i; // rbx
  CCaptureManager *v14; // rcx
  CCaptureManager *v15; // rcx
  CCaptureManager *v16; // rcx
  __int64 v17; // rdx
  __int64 **v18; // rdi
  __int64 **j; // rbx
  struct CapturedWindowRepresentation *v21; // [rsp+30h] [rbp-20h] BYREF
  struct CVisualProxy *v22; // [rsp+38h] [rbp-18h] BYREF
  struct CVisualProxy *v23; // [rsp+40h] [rbp-10h] BYREF
  struct _RTL_CRITICAL_SECTION *v24; // [rsp+48h] [rbp-8h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+28h]

  v6 = a2;
  v24 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  if ( !CCaptureManager::_HasOngoingCapture((CCaptureManager *)this, v6) )
    goto LABEL_38;
  v22 = 0LL;
  v21 = 0LL;
  v23 = 0LL;
  v8 = v6;
  if ( a3 )
    v8 = a3;
  Microsoft::WRL::ComPtr<CSpriteVisual>::InternalRelease(&v21);
  CapturedItemRootVisual = CCaptureManager::_GetCapturedItemRootVisual(v9, v8, &v22, &v21, &v23);
  v11 = CapturedItemRootVisual;
  if ( CapturedItemRootVisual >= 0 )
  {
    v12 = this[2];
    for ( i = *v12; i != (__int64 *)v12; i = (__int64 *)*i )
    {
      if ( (HWND)i[5] == a2 )
      {
        CapturedItemRootVisual = CCaptureControllerProxy::SetRootVisual((CCaptureControllerProxy *)i[4], v22);
        v11 = CapturedItemRootVisual;
        if ( CapturedItemRootVisual < 0 )
        {
          v17 = 464LL;
          goto LABEL_35;
        }
        CapturedItemRootVisual = CCaptureControllerProxy::SetReferenceVisual((CCaptureControllerProxy *)i[4], v23);
        v11 = CapturedItemRootVisual;
        if ( CapturedItemRootVisual < 0 )
        {
          v17 = 465LL;
          goto LABEL_35;
        }
        CapturedItemRootVisual = CCaptureManager::_SendBoundsToCaptureControllerFromWindow(
                                   v14,
                                   v8,
                                   1,
                                   (struct CCaptureControllerProxy *)i[4]);
        v11 = CapturedItemRootVisual;
        if ( CapturedItemRootVisual < 0 )
        {
          v17 = 466LL;
          goto LABEL_35;
        }
        CapturedItemRootVisual = CCaptureManager::_UpdateCaptureControllerTransformFromWindow(
                                   v15,
                                   v8,
                                   1,
                                   (struct CCaptureControllerProxy *)i[4]);
        v11 = CapturedItemRootVisual;
        if ( CapturedItemRootVisual < 0 )
        {
          v17 = 467LL;
          goto LABEL_35;
        }
        CapturedItemRootVisual = CCaptureManager::_UpdateCaptureControllerDefaultSDRBoost((CCaptureManager *)this, v8);
        v11 = CapturedItemRootVisual;
        if ( CapturedItemRootVisual < 0 )
        {
          v17 = 468LL;
          goto LABEL_35;
        }
        if ( a4 )
        {
          if ( *((_BYTE *)i + 56) )
          {
            if ( *((_BYTE *)i + 57) )
            {
              CapturedItemRootVisual = CCaptureManager::_SetProjectionBorderForWindow(v16, a4, 0);
              v11 = CapturedItemRootVisual;
              if ( CapturedItemRootVisual < 0 )
              {
                v17 = 475LL;
                goto LABEL_35;
              }
            }
          }
          CapturedItemRootVisual = CCaptureManager::_SetScreenCaptureForWindow(v16, a4, 0);
          v11 = CapturedItemRootVisual;
          if ( CapturedItemRootVisual < 0 )
          {
            v17 = 477LL;
            goto LABEL_35;
          }
        }
        if ( v8 == a3 )
        {
          if ( *((_BYTE *)i + 56) )
          {
            if ( *((_BYTE *)i + 57) )
            {
              CapturedItemRootVisual = CCaptureManager::_SetProjectionBorderForWindow(v16, v8, 1);
              v11 = CapturedItemRootVisual;
              if ( CapturedItemRootVisual < 0 )
              {
                v17 = 485LL;
                goto LABEL_35;
              }
            }
          }
          CapturedItemRootVisual = CCaptureManager::_SetScreenCaptureForWindow(v16, v8, 1);
          v11 = CapturedItemRootVisual;
          if ( CapturedItemRootVisual < 0 )
          {
            v17 = 487LL;
            goto LABEL_35;
          }
        }
      }
    }
    v6 = a2;
    goto LABEL_37;
  }
  if ( CapturedItemRootVisual == -2147467261 )
  {
LABEL_37:
    Microsoft::WRL::ComPtr<CSpriteVisual>::InternalRelease(&v21);
LABEL_38:
    if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_Capture_FilteredCaptureProxyWindows>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_Capture_FilteredCaptureProxyWindows>::GetImpl'::`2'::impl) )
    {
      v23 = 0LL;
      CWindowList::GetSyncedWindowDataByHwnd(
        *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 53),
        v6,
        &v23);
      if ( v23 )
      {
        if ( *((_DWORD *)v23 + 115) )
        {
          v18 = this[26];
          for ( j = (__int64 **)*v18; j != v18; j = (__int64 **)*j )
          {
            if ( a4 )
              CCaptureManager::_AddRemoveWindowToFilteredDisplayCapture(
                (CCaptureManager *)this,
                a4,
                0,
                (struct CCaptureManager::CAPTURE_FILTERED_DISPLAY_MAP_ENTRY *)(j + 3));
            if ( a3 )
              CCaptureManager::_AddRemoveWindowToFilteredDisplayCapture(
                (CCaptureManager *)this,
                a3,
                1,
                (struct CCaptureManager::CAPTURE_FILTERED_DISPLAY_MAP_ENTRY *)(j + 3));
          }
        }
      }
    }
    v11 = 0;
    goto LABEL_49;
  }
  v17 = 536LL;
LABEL_35:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v17,
    (int)"clientcore\\windows\\dwm\\udwm\\capturemanager.cpp",
    (const char *)(unsigned int)CapturedItemRootVisual);
  Microsoft::WRL::ComPtr<CSpriteVisual>::InternalRelease(&v21);
LABEL_49:
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v24);
  return v11;
}
