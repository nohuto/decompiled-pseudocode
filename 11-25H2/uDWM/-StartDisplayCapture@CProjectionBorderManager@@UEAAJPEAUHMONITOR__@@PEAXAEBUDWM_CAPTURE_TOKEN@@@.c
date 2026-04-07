/*
 * XREFs of ?StartDisplayCapture@CProjectionBorderManager@@UEAAJPEAUHMONITOR__@@PEAXAEBUDWM_CAPTURE_TOKEN@@@Z @ 0x1800C0C30
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x1800086B0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180009204 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x180051910 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?SetRootVisual@CCaptureControllerProxy@@QEAAJPEAVCVisualProxy@@@Z @ 0x18008BE50 (-SetRootVisual@CCaptureControllerProxy@@QEAAJPEAVCVisualProxy@@@Z.c)
 *     ?_GetDesktopRootVisual@CProjectionBorderManager@@AEAAJPEAPEAVCVisualProxy@@@Z @ 0x18008D6B0 (-_GetDesktopRootVisual@CProjectionBorderManager@@AEAAJPEAPEAVCVisualProxy@@@Z.c)
 *     ?FindElement@?$CGenericTableMap@T_LARGE_INTEGER@@UCAPTURE_DISPLAY_MAP_ENTRY@CProjectionBorderManager@@@@QEAAPEAUCAPTURE_DISPLAY_MAP_ENTRY@CProjectionBorderManager@@T_LARGE_INTEGER@@@Z @ 0x1800979D0 (-FindElement@-$CGenericTableMap@T_LARGE_INTEGER@@UCAPTURE_DISPLAY_MAP_ENTRY@CProjectionBorderMan.c)
 *     __security_check_cookie @ 0x18009A7F0 (__security_check_cookie.c)
 *     ?CreateCaptureControllerProxyFromSharedHandle@CCompositor@@QEAAJPEAXPEAPEAVCCaptureControllerProxy@@@Z @ 0x1800A9ECC (-CreateCaptureControllerProxyFromSharedHandle@CCompositor@@QEAAJPEAXPEAPEAVCCaptureControllerPro.c)
 *     ??$Start@AEAPEAUHMONITOR__@@II@StartDisplayCapture@WindowFrameLoggingTelemetry@@SA?AV01@AEAPEAUHMONITOR__@@$$QEAI1@Z @ 0x1800BD6A0 (--$Start@AEAPEAUHMONITOR__@@II@StartDisplayCapture@WindowFrameLoggingTelemetry@@SA-AV01@AEAPEAUH.c)
 *     ??1StartDisplayCapture@WindowFrameLoggingTelemetry@@QEAA@XZ @ 0x1800BDB84 (--1StartDisplayCapture@WindowFrameLoggingTelemetry@@QEAA@XZ.c)
 *     ?Stop@?$ActivityBase@VWindowFrameLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1800C15E0 (-Stop@-$ActivityBase@VWindowFrameLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsPro.c)
 *     ?_AddDisplayCaptureEntry@CProjectionBorderManager@@AEAAJPEAUHMONITOR__@@PEAVCCaptureControllerProxy@@AEBUDWM_CAPTURE_TOKEN@@_N@Z @ 0x1800C3078 (-_AddDisplayCaptureEntry@CProjectionBorderManager@@AEAAJPEAUHMONITOR__@@PEAVCCaptureControllerPr.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CProjectionBorderManager::StartDisplayCapture(
        CProjectionBorderManager *this,
        HMONITOR a2,
        void *a3,
        const struct DWM_CAPTURE_TOKEN *a4)
{
  struct CCaptureControllerProxy *v7; // rdi
  int v8; // ebx
  int v9; // r9d
  int v10; // eax
  CProjectionBorderManager *v11; // rcx
  int DesktopRootVisual; // eax
  int v13; // eax
  unsigned int v15; // [rsp+20h] [rbp-E0h]
  CCaptureControllerProxy *v16; // [rsp+30h] [rbp-D0h] BYREF
  unsigned int v17; // [rsp+38h] [rbp-C8h] BYREF
  unsigned int v18; // [rsp+3Ch] [rbp-C4h] BYREF
  struct CVisualProxy *v19; // [rsp+40h] [rbp-C0h] BYREF
  HMONITOR v20; // [rsp+48h] [rbp-B8h] BYREF
  struct _RTL_CRITICAL_SECTION *v21; // [rsp+50h] [rbp-B0h] BYREF
  _BYTE v22[336]; // [rsp+60h] [rbp-A0h] BYREF

  v20 = a2;
  v21 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v19 = 0LL;
  v7 = 0LL;
  v16 = 0LL;
  v17 = *(_DWORD *)a4;
  v18 = *((_DWORD *)a4 + 1);
  WindowFrameLoggingTelemetry::StartDisplayCapture::Start<HMONITOR__ * &,unsigned int,unsigned int>(
    (WindowFrameLoggingTelemetry::StartDisplayCapture *)v22,
    &v20,
    &v18,
    &v17);
  if ( CGenericTableMap<_LARGE_INTEGER,CProjectionBorderManager::CAPTURE_DISPLAY_MAP_ENTRY>::FindElement() )
  {
    v8 = -2147418113;
    v15 = 516;
    v9 = -2147418113;
LABEL_3:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v9, v15, 0LL);
    goto LABEL_14;
  }
  v10 = CCompositor::CreateCaptureControllerProxyFromSharedHandle(
          *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 6),
          (__int64)a3,
          &v16);
  v8 = v10;
  if ( v10 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v10, 0x207u, 0LL);
    goto LABEL_13;
  }
  DesktopRootVisual = CProjectionBorderManager::_GetDesktopRootVisual(v11, &v19);
  v8 = DesktopRootVisual;
  if ( DesktopRootVisual < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, DesktopRootVisual, 0x209u, 0LL);
LABEL_13:
    v7 = v16;
    goto LABEL_14;
  }
  v7 = v16;
  v13 = CCaptureControllerProxy::SetRootVisual(v16, v19);
  v8 = v13;
  if ( v13 < 0 )
  {
    v15 = 522;
    goto LABEL_10;
  }
  v13 = CProjectionBorderManager::_AddDisplayCaptureEntry(this, v20, v7, a4, 1);
  v8 = v13;
  if ( v13 < 0 )
  {
    v15 = 524;
LABEL_10:
    v9 = v13;
    goto LABEL_3;
  }
LABEL_14:
  if ( a3 )
    CloseHandle(a3);
  if ( v7 && v8 < 0 )
    CBaseObject::Release(v7);
  wil::ActivityBase<WindowFrameLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop(
    v22,
    (unsigned int)v8);
  WindowFrameLoggingTelemetry::StartDisplayCapture::~StartDisplayCapture((WindowFrameLoggingTelemetry::StartDisplayCapture *)v22);
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v21);
  return (unsigned int)v8;
}
