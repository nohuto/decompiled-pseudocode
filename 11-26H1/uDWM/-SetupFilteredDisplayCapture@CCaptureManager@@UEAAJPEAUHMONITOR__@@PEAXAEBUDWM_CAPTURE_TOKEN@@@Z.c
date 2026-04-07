/*
 * XREFs of ?SetupFilteredDisplayCapture@CCaptureManager@@UEAAJPEAUHMONITOR__@@PEAXAEBUDWM_CAPTURE_TOKEN@@@Z @ 0x1800A16B0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCSpriteVisual@@@WRL@Microsoft@@IEAAKXZ @ 0x18001727C (-InternalRelease@-$ComPtr@VCSpriteVisual@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x18004ABD0 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ??1?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAA@XZ @ 0x180062A98 (--1-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@wil@.c)
 *     ?SetRootVisual@CCaptureControllerProxy@@QEAAJPEAVCVisualProxy@@@Z @ 0x18007AA20 (-SetRootVisual@CCaptureControllerProxy@@QEAAJPEAVCVisualProxy@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180083BD8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CreateContainerVisualProxy@CCompositor@@QEAAJPEAPEAVCContainerVisualProxy@@@Z @ 0x18008424C (-CreateContainerVisualProxy@CCompositor@@QEAAJPEAPEAVCContainerVisualProxy@@@Z.c)
 *     ?SetCaptureState@CCaptureControllerProxy@@QEAAJ_N@Z @ 0x18008A6BC (-SetCaptureState@CCaptureControllerProxy@@QEAAJ_N@Z.c)
 *     ?SetReferenceVisual@CCaptureControllerProxy@@QEAAJPEAVCVisualProxy@@@Z @ 0x18009BE44 (-SetReferenceVisual@CCaptureControllerProxy@@QEAAJPEAVCVisualProxy@@@Z.c)
 *     ?SetSuspendOnScreenOff@CCaptureControllerProxy@@QEAAJ_N@Z @ 0x18009BE70 (-SetSuspendOnScreenOff@CCaptureControllerProxy@@QEAAJ_N@Z.c)
 *     ?_AddFilteredDisplayCaptureEntry@CCaptureManager@@AEAAJPEAUHMONITOR__@@PEAVCCaptureControllerProxy@@AEBUDWM_CAPTURE_TOKEN@@PEAVCContainerVisualProxy@@@Z @ 0x1800A3CF8 (-_AddFilteredDisplayCaptureEntry@CCaptureManager@@AEAAJPEAUHMONITOR__@@PEAVCCaptureControllerPro.c)
 *     ?_GetDesktopRootVisual@CCaptureManager@@AEAAJPEAPEAVCVisualProxy@@@Z @ 0x1800A5270 (-_GetDesktopRootVisual@CCaptureManager@@AEAAJPEAPEAVCVisualProxy@@@Z.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_ID45522024@@@details@wil@@QEAA_NXZ @ 0x1800A6894 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_ID45522024@@@details@wil@@QEAA_NX.c)
 *     ?contains@?$_Hash@V?$_Umap_traits@T_LARGE_INTEGER@@UCAPTURE_WINDOW_MAP_ENTRY@CCaptureManager@@V?$_Uhash_compare@T_LARGE_INTEGER@@U?$hash@T_LARGE_INTEGER@@@std@@U?$equal_to@T_LARGE_INTEGER@@@3@@std@@V?$allocator@U?$pair@$$CBT_LARGE_INTEGER@@UCAPTURE_WINDOW_MAP_ENTRY@CCaptureManager@@@std@@@5@$0A@@std@@@std@@QEBA_NAEBT_LARGE_INTEGER@@@Z @ 0x1800A6AEC (-contains@-$_Hash@V-$_Umap_traits@T_LARGE_INTEGER@@UCAPTURE_WINDOW_MAP_ENTRY@CCaptureManager@@V-.c)
 *     ?CreateCaptureControllerProxyFromSharedHandle@CCompositor@@QEAAJPEAXPEAPEAVCCaptureControllerProxy@@@Z @ 0x1800A7F6C (-CreateCaptureControllerProxyFromSharedHandle@CCompositor@@QEAAJPEAXPEAPEAVCCaptureControllerPro.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CCaptureManager::SetupFilteredDisplayCapture(
        CCaptureManager *this,
        HMONITOR a2,
        void *a3,
        const struct DWM_CAPTURE_TOKEN *a4)
{
  unsigned int v9; // ebx
  CCompositor *v10; // rdi
  int v11; // eax
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // rdx
  int DesktopRootVisual; // eax
  __int64 v16; // rdx
  CCaptureManager *v17; // rcx
  __int64 v18; // r8
  CCaptureControllerProxy *v19; // [rsp+30h] [rbp-30h] BYREF
  struct CVisualProxy *v20; // [rsp+38h] [rbp-28h] BYREF
  struct CVisualProxy *v21; // [rsp+40h] [rbp-20h] BYREF
  void *v22; // [rsp+48h] [rbp-18h] BYREF
  struct _RTL_CRITICAL_SECTION *v23; // [rsp+50h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+18h]

  if ( !(unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_ID45522024>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_ID45522024>::GetImpl'::`2'::impl) )
    return 2147942405LL;
  v23 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v22 = a3;
  if ( !(unsigned __int8)std::_Hash<std::_Umap_traits<_LARGE_INTEGER,CCaptureManager::CAPTURE_WINDOW_MAP_ENTRY,std::_Uhash_compare<_LARGE_INTEGER,std::hash<_LARGE_INTEGER>,std::equal_to<_LARGE_INTEGER>>,std::allocator<std::pair<_LARGE_INTEGER const,CCaptureManager::CAPTURE_WINDOW_MAP_ENTRY>>,0>>::contains(
                           (char *)this + 200,
                           a4) )
  {
    v10 = (CCompositor *)*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 6);
    v19 = 0LL;
    Microsoft::WRL::ComPtr<CSpriteVisual>::InternalRelease(&v19);
    v11 = CCompositor::CreateCaptureControllerProxyFromSharedHandle(v10, a3, &v19);
    v9 = v11;
    if ( v11 >= 0 )
    {
      v11 = CCaptureControllerProxy::SetSuspendOnScreenOff(v19, v12, v13);
      v9 = v11;
      if ( v11 >= 0 )
      {
        v20 = 0LL;
        Microsoft::WRL::ComPtr<CSpriteVisual>::InternalRelease(&v20);
        DesktopRootVisual = CCompositor::CreateContainerVisualProxy((struct IDwmChannel **)v10, &v20);
        v9 = DesktopRootVisual;
        if ( DesktopRootVisual >= 0 )
        {
          DesktopRootVisual = CCaptureControllerProxy::SetRootVisual(v19, v20);
          v9 = DesktopRootVisual;
          if ( DesktopRootVisual >= 0 )
          {
            v21 = 0LL;
            DesktopRootVisual = CCaptureManager::_GetDesktopRootVisual(v17, &v21);
            v9 = DesktopRootVisual;
            if ( DesktopRootVisual >= 0 )
            {
              DesktopRootVisual = CCaptureControllerProxy::SetReferenceVisual(v19, v21);
              v9 = DesktopRootVisual;
              if ( DesktopRootVisual >= 0 )
              {
                DesktopRootVisual = CCaptureControllerProxy::SetCaptureState(v19, 0, v18);
                v9 = DesktopRootVisual;
                if ( DesktopRootVisual >= 0 )
                {
                  DesktopRootVisual = CCaptureManager::_AddFilteredDisplayCaptureEntry(this, a2, v19, a4, v20);
                  v9 = DesktopRootVisual;
                  if ( DesktopRootVisual >= 0 )
                  {
                    Microsoft::WRL::ComPtr<CSpriteVisual>::InternalRelease(&v20);
                    Microsoft::WRL::ComPtr<CSpriteVisual>::InternalRelease(&v19);
                    v9 = 0;
                    goto LABEL_25;
                  }
                  v16 = 971LL;
                }
                else
                {
                  v16 = 969LL;
                }
              }
              else
              {
                v16 = 968LL;
              }
            }
            else
            {
              v16 = 967LL;
            }
          }
          else
          {
            v16 = 964LL;
          }
        }
        else
        {
          v16 = 963LL;
        }
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v16,
          (int)"clientcore\\windows\\dwm\\udwm\\capturemanager.cpp",
          (const char *)(unsigned int)DesktopRootVisual);
        Microsoft::WRL::ComPtr<CSpriteVisual>::InternalRelease(&v20);
        goto LABEL_8;
      }
      v14 = 960LL;
    }
    else
    {
      v14 = 957LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v14,
      (int)"clientcore\\windows\\dwm\\udwm\\capturemanager.cpp",
      (const char *)(unsigned int)v11);
LABEL_8:
    Microsoft::WRL::ComPtr<CSpriteVisual>::InternalRelease(&v19);
    goto LABEL_25;
  }
  v9 = -2147418113;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x3B8,
    (int)"clientcore\\windows\\dwm\\udwm\\capturemanager.cpp",
    (const char *)0x8000FFFFLL);
LABEL_25:
  wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::~unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>(&v22);
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v23);
  return v9;
}
