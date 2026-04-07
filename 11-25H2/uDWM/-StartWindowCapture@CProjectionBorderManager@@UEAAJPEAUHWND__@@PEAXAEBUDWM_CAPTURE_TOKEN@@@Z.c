/*
 * XREFs of ?StartWindowCapture@CProjectionBorderManager@@UEAAJPEAUHWND__@@PEAXAEBUDWM_CAPTURE_TOKEN@@@Z @ 0x1800C1250
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCAtlasedImage@@@WRL@Microsoft@@IEAAKXZ @ 0x1800051C4 (-InternalRelease@-$ComPtr@VCAtlasedImage@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x1800086B0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180009204 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x180051910 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?SetRootVisual@CCaptureControllerProxy@@QEAAJPEAVCVisualProxy@@@Z @ 0x18008BE50 (-SetRootVisual@CCaptureControllerProxy@@QEAAJPEAVCVisualProxy@@@Z.c)
 *     ??0?$ActivityBase@VWindowFrameLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x180094CAC (--0-$ActivityBase@VWindowFrameLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProvid.c)
 *     ?FindElement@?$CGenericTableMap@T_LARGE_INTEGER@@UCAPTURE_TAB_GROUP_MAP_ENTRY@CProjectionBorderManager@@@@QEAAPEAUCAPTURE_TAB_GROUP_MAP_ENTRY@CProjectionBorderManager@@T_LARGE_INTEGER@@@Z @ 0x180098390 (-FindElement@-$CGenericTableMap@T_LARGE_INTEGER@@UCAPTURE_TAB_GROUP_MAP_ENTRY@CProjectionBorderM.c)
 *     __security_check_cookie @ 0x18009A7F0 (__security_check_cookie.c)
 *     ?SetReferenceVisual@CCaptureControllerProxy@@QEAAJPEAVCVisualProxy@@@Z @ 0x1800A8C88 (-SetReferenceVisual@CCaptureControllerProxy@@QEAAJPEAVCVisualProxy@@@Z.c)
 *     ?CreateCaptureControllerProxyFromSharedHandle@CCompositor@@QEAAJPEAXPEAPEAVCCaptureControllerProxy@@@Z @ 0x1800A9ECC (-CreateCaptureControllerProxyFromSharedHandle@CCompositor@@QEAAJPEAXPEAPEAVCCaptureControllerPro.c)
 *     ??1StartWindowCapture@WindowFrameLoggingTelemetry@@QEAA@XZ @ 0x1800BDBB0 (--1StartWindowCapture@WindowFrameLoggingTelemetry@@QEAA@XZ.c)
 *     ?StartActivity@StartWindowCapture@WindowFrameLoggingTelemetry@@QEAAXPEAUHWND__@@II@Z @ 0x1800C097C (-StartActivity@StartWindowCapture@WindowFrameLoggingTelemetry@@QEAAXPEAUHWND__@@II@Z.c)
 *     ?Stop@?$ActivityBase@VWindowFrameLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1800C15E0 (-Stop@-$ActivityBase@VWindowFrameLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsPro.c)
 *     ?_AddTabGroupCaptureEntry@CProjectionBorderManager@@AEAAJPEAUHWND__@@PEAVCapturedWindowRepresentation@@PEAVCCaptureControllerProxy@@AEBUDWM_CAPTURE_TOKEN@@@Z @ 0x1800C3490 (-_AddTabGroupCaptureEntry@CProjectionBorderManager@@AEAAJPEAUHWND__@@PEAVCapturedWindowRepresent.c)
 *     ?_GetCapturedItemRootVisual@CProjectionBorderManager@@AEAAJPEAUHWND__@@PEAPEAVCVisualProxy@@PEAPEAVCapturedWindowRepresentation@@1@Z @ 0x1800C3F00 (-_GetCapturedItemRootVisual@CProjectionBorderManager@@AEAAJPEAUHWND__@@PEAPEAVCVisualProxy@@PEAP.c)
 *     ?_GetHostWindowHandle@CProjectionBorderManager@@AEAAJPEAUHWND__@@PEAPEAU2@@Z @ 0x1800C4090 (-_GetHostWindowHandle@CProjectionBorderManager@@AEAAJPEAUHWND__@@PEAPEAU2@@Z.c)
 *     ?_GetProxyWindowHandle@CProjectionBorderManager@@AEAAJPEAUHWND__@@PEAPEAU2@@Z @ 0x1800C413C (-_GetProxyWindowHandle@CProjectionBorderManager@@AEAAJPEAUHWND__@@PEAPEAU2@@Z.c)
 *     ?_SetProjectionBorderForWindow@CProjectionBorderManager@@AEAAJPEAUHWND__@@_N@Z @ 0x1800C4668 (-_SetProjectionBorderForWindow@CProjectionBorderManager@@AEAAJPEAUHWND__@@_N@Z.c)
 *     ?_SetScreenCaptureForWindow@CProjectionBorderManager@@AEAAJPEAUHWND__@@_N@Z @ 0x1800C473C (-_SetScreenCaptureForWindow@CProjectionBorderManager@@AEAAJPEAUHWND__@@_N@Z.c)
 *     ?_UpdateCaptureControllerDefaultSDRBoost@CProjectionBorderManager@@AEAAJPEAUHWND__@@@Z @ 0x1800C4A2C (-_UpdateCaptureControllerDefaultSDRBoost@CProjectionBorderManager@@AEAAJPEAUHWND__@@@Z.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CProjectionBorderManager::StartWindowCapture(
        struct _RTL_GENERIC_TABLE *this,
        HWND a2,
        void *a3,
        const struct DWM_CAPTURE_TOKEN *a4)
{
  CCaptureControllerProxy *v8; // rsi
  int v9; // edi
  int v10; // ebx
  int v11; // ebx
  int v12; // r9d
  int v13; // eax
  CProjectionBorderManager *v14; // rcx
  int HostWindowHandle; // eax
  CProjectionBorderManager *v16; // rcx
  HWND v17; // r14
  int ProxyWindowHandle; // eax
  HWND v19; // rdi
  CProjectionBorderManager *v20; // rcx
  int CapturedItemRootVisual; // eax
  int updated; // eax
  struct CapturedWindowRepresentation *v23; // r8
  CProjectionBorderManager *v24; // rcx
  CProjectionBorderManager *v25; // rcx
  CProjectionBorderManager *v26; // rcx
  CProjectionBorderManager *v27; // rcx
  unsigned int v29; // [rsp+20h] [rbp-E0h]
  CCaptureControllerProxy *v30; // [rsp+30h] [rbp-D0h] BYREF
  struct CapturedWindowRepresentation *v31; // [rsp+38h] [rbp-C8h] BYREF
  HWND v32; // [rsp+40h] [rbp-C0h] BYREF
  HWND v33; // [rsp+48h] [rbp-B8h] BYREF
  struct CVisualProxy *v34; // [rsp+50h] [rbp-B0h] BYREF
  struct CVisualProxy *v35; // [rsp+58h] [rbp-A8h] BYREF
  struct _RTL_CRITICAL_SECTION *v36; // [rsp+60h] [rbp-A0h] BYREF
  _QWORD v37[42]; // [rsp+70h] [rbp-90h] BYREF

  v36 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v34 = 0LL;
  v8 = 0LL;
  v30 = 0LL;
  v31 = 0LL;
  v35 = 0LL;
  v9 = *(_DWORD *)a4;
  v10 = *((_DWORD *)a4 + 1);
  wil::ActivityBase<WindowFrameLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<WindowFrameLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>(
    (struct wil::details::IFailureCallback *)v37,
    (__int64)"StartWindowCapture");
  v37[0] = &WindowFrameLoggingTelemetry::StartWindowCapture::`vftable';
  WindowFrameLoggingTelemetry::StartWindowCapture::StartActivity(
    (WindowFrameLoggingTelemetry::StartWindowCapture *)v37,
    a2,
    v10,
    v9);
  if ( CGenericTableMap<_LARGE_INTEGER,CProjectionBorderManager::CAPTURE_TAB_GROUP_MAP_ENTRY>::FindElement(
         this + 6,
         *(_QWORD *)a4) )
  {
    v11 = -2147418113;
    v29 = 323;
    v12 = -2147418113;
LABEL_3:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v12, v29, 0LL);
    goto LABEL_33;
  }
  v13 = CCompositor::CreateCaptureControllerProxyFromSharedHandle(
          *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 6),
          (__int64)a3,
          &v30);
  v11 = v13;
  if ( v13 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v13, 0x146u, 0LL);
    goto LABEL_32;
  }
  v32 = 0LL;
  HostWindowHandle = CProjectionBorderManager::_GetHostWindowHandle(v14, a2, &v32);
  v11 = HostWindowHandle;
  if ( HostWindowHandle < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, HostWindowHandle, 0x14Du, 0LL);
    goto LABEL_32;
  }
  v33 = 0LL;
  v17 = v32;
  ProxyWindowHandle = CProjectionBorderManager::_GetProxyWindowHandle(v16, v32, &v33);
  v11 = ProxyWindowHandle;
  if ( ProxyWindowHandle < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, ProxyWindowHandle, 0x151u, 0LL);
    goto LABEL_32;
  }
  v19 = v33;
  if ( !v33 )
    v19 = v17;
  Microsoft::WRL::ComPtr<CAtlasedImage>::InternalRelease(&v31);
  CapturedItemRootVisual = CProjectionBorderManager::_GetCapturedItemRootVisual(v20, v19, &v34, &v31, &v35);
  v11 = CapturedItemRootVisual;
  if ( CapturedItemRootVisual < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, CapturedItemRootVisual, 0x159u, 0LL);
LABEL_32:
    v8 = v30;
    goto LABEL_33;
  }
  v8 = v30;
  updated = CCaptureControllerProxy::SetRootVisual(v30, v34);
  v11 = updated;
  if ( updated < 0 )
  {
    v29 = 347;
    goto LABEL_27;
  }
  updated = CCaptureControllerProxy::SetReferenceVisual(v8, v35);
  v11 = updated;
  if ( updated < 0 )
  {
    v29 = 348;
    goto LABEL_27;
  }
  v23 = v31;
  v31 = 0LL;
  updated = CProjectionBorderManager::_AddTabGroupCaptureEntry((CProjectionBorderManager *)this, v17, v23, v8, a4);
  v11 = updated;
  if ( updated < 0 )
  {
    v29 = 351;
    goto LABEL_27;
  }
  updated = CProjectionBorderManager::_SetProjectionBorderForWindow(v24, v19, 1);
  v11 = updated;
  if ( updated < 0 )
  {
    v29 = 353;
    goto LABEL_27;
  }
  updated = CProjectionBorderManager::_SetScreenCaptureForWindow(v25, v19, 1);
  v11 = updated;
  if ( updated < 0 )
  {
    v29 = 354;
    goto LABEL_27;
  }
  if ( v19 != v17 )
  {
    updated = CProjectionBorderManager::_SetProjectionBorderForWindow(v26, v17, 1);
    v11 = updated;
    if ( updated < 0 )
    {
      v29 = 357;
      goto LABEL_27;
    }
    updated = CProjectionBorderManager::_SetScreenCaptureForWindow(v27, v17, 1);
    v11 = updated;
    if ( updated < 0 )
    {
      v29 = 358;
LABEL_27:
      v12 = updated;
      goto LABEL_3;
    }
  }
  updated = CProjectionBorderManager::_UpdateCaptureControllerDefaultSDRBoost((CProjectionBorderManager *)this, v19);
  v11 = updated;
  if ( updated < 0 )
  {
    v29 = 360;
    goto LABEL_27;
  }
LABEL_33:
  if ( a3 )
    CloseHandle(a3);
  if ( v8 && v11 < 0 )
    CBaseObject::Release(v8);
  wil::ActivityBase<WindowFrameLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop(
    v37,
    (unsigned int)v11);
  WindowFrameLoggingTelemetry::StartWindowCapture::~StartWindowCapture((WindowFrameLoggingTelemetry::StartWindowCapture *)v37);
  Microsoft::WRL::ComPtr<CAtlasedImage>::InternalRelease(&v31);
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v36);
  return (unsigned int)v11;
}
