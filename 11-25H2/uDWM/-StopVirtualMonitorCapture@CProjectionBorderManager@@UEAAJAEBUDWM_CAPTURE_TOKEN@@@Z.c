/*
 * XREFs of ?StopVirtualMonitorCapture@CProjectionBorderManager@@UEAAJAEBUDWM_CAPTURE_TOKEN@@@Z @ 0x1800C25A0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCAtlasedImage@@@WRL@Microsoft@@IEAAKXZ @ 0x1800051C4 (-InternalRelease@-$ComPtr@VCAtlasedImage@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x180051910 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?SetRootVisual@CCaptureControllerProxy@@QEAAJPEAVCVisualProxy@@@Z @ 0x18008BE50 (-SetRootVisual@CCaptureControllerProxy@@QEAAJPEAVCVisualProxy@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180094210 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?FindElement@?$CGenericTableMap@T_LARGE_INTEGER@@UCAPTURE_DISPLAY_MAP_ENTRY@CProjectionBorderManager@@@@QEAAPEAUCAPTURE_DISPLAY_MAP_ENTRY@CProjectionBorderManager@@T_LARGE_INTEGER@@@Z @ 0x1800979D0 (-FindElement@-$CGenericTableMap@T_LARGE_INTEGER@@UCAPTURE_DISPLAY_MAP_ENTRY@CProjectionBorderMan.c)
 *     __security_check_cookie @ 0x18009A7F0 (__security_check_cookie.c)
 *     ?RemoveElement@?$CGenericTableMap@T_LARGE_INTEGER@@UCAPTURE_DISPLAY_MAP_ENTRY@CProjectionBorderManager@@@@QEAAHPEAUCAPTURE_DISPLAY_MAP_ENTRY@CProjectionBorderManager@@@Z @ 0x1800AD740 (-RemoveElement@-$CGenericTableMap@T_LARGE_INTEGER@@UCAPTURE_DISPLAY_MAP_ENTRY@CProjectionBorderM.c)
 *     ??$Start@II@StopDisplayCapture@WindowFrameLoggingTelemetry@@SA?AV01@$$QEAI0@Z @ 0x1800BD70C (--$Start@II@StopDisplayCapture@WindowFrameLoggingTelemetry@@SA-AV01@$$QEAI0@Z.c)
 *     ??1StopDisplayCapture@WindowFrameLoggingTelemetry@@QEAA@XZ @ 0x1800BDBDC (--1StopDisplayCapture@WindowFrameLoggingTelemetry@@QEAA@XZ.c)
 *     ?Stop@?$ActivityBase@VWindowFrameLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1800C15E0 (-Stop@-$ActivityBase@VWindowFrameLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsPro.c)
 *     ?_EnsureCursorStateForCapture@CProjectionBorderManager@@AEAAXXZ @ 0x1800C3B24 (-_EnsureCursorStateForCapture@CProjectionBorderManager@@AEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CProjectionBorderManager::StopVirtualMonitorCapture(
        struct _RTL_GENERIC_TABLE *this,
        const struct DWM_CAPTURE_TOKEN *a2)
{
  CBaseObject **Element; // rax
  CBaseObject **v5; // rsi
  int v6; // eax
  unsigned int v7; // ebx
  int v9; // [rsp+20h] [rbp-E0h] BYREF
  unsigned int v10; // [rsp+24h] [rbp-DCh] BYREF
  struct _RTL_CRITICAL_SECTION *v11; // [rsp+28h] [rbp-D8h] BYREF
  __int64 v12[42]; // [rsp+30h] [rbp-D0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1B8h] [rbp+B8h]

  v11 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v9 = *(_DWORD *)a2;
  v10 = *((_DWORD *)a2 + 1);
  WindowFrameLoggingTelemetry::StopDisplayCapture::Start<unsigned int,unsigned int>(
    (WindowFrameLoggingTelemetry::StopDisplayCapture *)v12,
    &v10,
    (unsigned int *)&v9);
  Element = (CBaseObject **)CGenericTableMap<_LARGE_INTEGER,CProjectionBorderManager::CAPTURE_DISPLAY_MAP_ENTRY>::FindElement();
  v5 = Element;
  if ( Element )
  {
    v6 = CCaptureControllerProxy::SetRootVisual(Element[1], 0LL);
    v7 = v6;
    if ( v6 >= 0 )
    {
      Microsoft::WRL::ComPtr<CAtlasedImage>::InternalRelease(v5 + 1);
      CGenericTableMap<_LARGE_INTEGER,CProjectionBorderManager::CAPTURE_DISPLAY_MAP_ENTRY>::RemoveElement(
        this + 7,
        (CProjectionBorderManager::CAPTURE_DISPLAY_MAP_ENTRY *)v5);
      CProjectionBorderManager::_EnsureCursorStateForCapture((CProjectionBorderManager *)this);
      wil::ActivityBase<WindowFrameLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop(v12, 0);
      WindowFrameLoggingTelemetry::StopDisplayCapture::~StopDisplayCapture((WindowFrameLoggingTelemetry::StopDisplayCapture *)v12);
      CGuard<CDwmCS>::~CGuard<CDwmCS>(&v11);
      return 0LL;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x277,
        (__int64)"clientcore\\windows\\dwm\\udwm\\projectionbordermanager.cpp",
        (const char *)(unsigned int)v6);
      WindowFrameLoggingTelemetry::StopDisplayCapture::~StopDisplayCapture((WindowFrameLoggingTelemetry::StopDisplayCapture *)v12);
      CGuard<CDwmCS>::~CGuard<CDwmCS>(&v11);
      return v7;
    }
  }
  else
  {
    WindowFrameLoggingTelemetry::StopDisplayCapture::~StopDisplayCapture((WindowFrameLoggingTelemetry::StopDisplayCapture *)v12);
    CGuard<CDwmCS>::~CGuard<CDwmCS>(&v11);
    return 2147549183LL;
  }
}
