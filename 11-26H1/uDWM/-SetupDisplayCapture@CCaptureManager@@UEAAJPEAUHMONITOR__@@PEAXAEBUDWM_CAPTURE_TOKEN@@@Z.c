/*
 * XREFs of ?SetupDisplayCapture@CCaptureManager@@UEAAJPEAUHMONITOR__@@PEAXAEBUDWM_CAPTURE_TOKEN@@@Z @ 0x1800A1560
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCSpriteVisual@@@WRL@Microsoft@@IEAAKXZ @ 0x18001727C (-InternalRelease@-$ComPtr@VCSpriteVisual@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x18004ABD0 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ??1?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAA@XZ @ 0x180062A98 (--1-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@wil@.c)
 *     ?SetRootVisual@CCaptureControllerProxy@@QEAAJPEAVCVisualProxy@@@Z @ 0x18007AA20 (-SetRootVisual@CCaptureControllerProxy@@QEAAJPEAVCVisualProxy@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180083BD8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SetCaptureState@CCaptureControllerProxy@@QEAAJ_N@Z @ 0x18008A6BC (-SetCaptureState@CCaptureControllerProxy@@QEAAJ_N@Z.c)
 *     ?_AddDisplayCaptureEntry@CCaptureManager@@AEAAJPEAUHMONITOR__@@PEAVCCaptureControllerProxy@@AEBUDWM_CAPTURE_TOKEN@@@Z @ 0x1800A3B84 (-_AddDisplayCaptureEntry@CCaptureManager@@AEAAJPEAUHMONITOR__@@PEAVCCaptureControllerProxy@@AEBU.c)
 *     ?_GetDesktopRootVisual@CCaptureManager@@AEAAJPEAPEAVCVisualProxy@@@Z @ 0x1800A5270 (-_GetDesktopRootVisual@CCaptureManager@@AEAAJPEAPEAVCVisualProxy@@@Z.c)
 *     ?contains@?$_Hash@V?$_Umap_traits@T_LARGE_INTEGER@@UCAPTURE_WINDOW_MAP_ENTRY@CCaptureManager@@V?$_Uhash_compare@T_LARGE_INTEGER@@U?$hash@T_LARGE_INTEGER@@@std@@U?$equal_to@T_LARGE_INTEGER@@@3@@std@@V?$allocator@U?$pair@$$CBT_LARGE_INTEGER@@UCAPTURE_WINDOW_MAP_ENTRY@CCaptureManager@@@std@@@5@$0A@@std@@@std@@QEBA_NAEBT_LARGE_INTEGER@@@Z @ 0x1800A6AEC (-contains@-$_Hash@V-$_Umap_traits@T_LARGE_INTEGER@@UCAPTURE_WINDOW_MAP_ENTRY@CCaptureManager@@V-.c)
 *     ?CreateCaptureControllerProxyFromSharedHandle@CCompositor@@QEAAJPEAXPEAPEAVCCaptureControllerProxy@@@Z @ 0x1800A7F6C (-CreateCaptureControllerProxyFromSharedHandle@CCompositor@@QEAAJPEAXPEAPEAVCCaptureControllerPro.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CCaptureManager::SetupDisplayCapture(
        CCaptureManager *this,
        HMONITOR a2,
        void *a3,
        const struct DWM_CAPTURE_TOKEN *a4)
{
  unsigned int v8; // ebx
  __int64 v9; // r9
  __int64 v10; // rdx
  CCompositor *v11; // rbx
  int DesktopRootVisual; // eax
  CCaptureManager *v13; // rcx
  __int64 v14; // r8
  struct _RTL_CRITICAL_SECTION *v16; // [rsp+20h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+28h]
  CCaptureControllerProxy *v18; // [rsp+60h] [rbp+30h] BYREF
  struct CVisualProxy *v19; // [rsp+70h] [rbp+40h] BYREF
  void *v20; // [rsp+78h] [rbp+48h] BYREF

  v16 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v19 = 0LL;
  v18 = 0LL;
  v20 = a3;
  if ( (unsigned __int8)std::_Hash<std::_Umap_traits<_LARGE_INTEGER,CCaptureManager::CAPTURE_WINDOW_MAP_ENTRY,std::_Uhash_compare<_LARGE_INTEGER,std::hash<_LARGE_INTEGER>,std::equal_to<_LARGE_INTEGER>>,std::allocator<std::pair<_LARGE_INTEGER const,CCaptureManager::CAPTURE_WINDOW_MAP_ENTRY>>,0>>::contains(
                          (char *)this + 136,
                          a4) )
  {
    v8 = -2147418113;
    v9 = 2147549183LL;
    v10 = 364LL;
  }
  else
  {
    v11 = (CCompositor *)*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 6);
    Microsoft::WRL::ComPtr<CSpriteVisual>::InternalRelease(&v18);
    DesktopRootVisual = CCompositor::CreateCaptureControllerProxyFromSharedHandle(v11, a3, &v18);
    v8 = DesktopRootVisual;
    if ( DesktopRootVisual >= 0 )
    {
      DesktopRootVisual = CCaptureManager::_GetDesktopRootVisual(v13, &v19);
      v8 = DesktopRootVisual;
      if ( DesktopRootVisual >= 0 )
      {
        DesktopRootVisual = CCaptureControllerProxy::SetRootVisual(v18, v19);
        v8 = DesktopRootVisual;
        if ( DesktopRootVisual >= 0 )
        {
          DesktopRootVisual = CCaptureControllerProxy::SetCaptureState(v18, 0, v14);
          v8 = DesktopRootVisual;
          if ( DesktopRootVisual >= 0 )
          {
            DesktopRootVisual = CCaptureManager::_AddDisplayCaptureEntry(this, a2, v18, a4);
            v8 = DesktopRootVisual;
            if ( DesktopRootVisual >= 0 )
            {
              v8 = 0;
              goto LABEL_16;
            }
            v10 = 372LL;
          }
          else
          {
            v10 = 370LL;
          }
        }
        else
        {
          v10 = 369LL;
        }
      }
      else
      {
        v10 = 368LL;
      }
    }
    else
    {
      v10 = 366LL;
    }
    v9 = (unsigned int)DesktopRootVisual;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v10,
    (int)"clientcore\\windows\\dwm\\udwm\\capturemanager.cpp",
    (const char *)v9);
LABEL_16:
  wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::~unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>(&v20);
  Microsoft::WRL::ComPtr<CSpriteVisual>::InternalRelease(&v18);
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v16);
  return v8;
}
