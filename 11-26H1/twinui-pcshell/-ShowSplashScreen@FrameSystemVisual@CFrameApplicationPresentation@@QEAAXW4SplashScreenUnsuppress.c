/*
 * XREFs of ?ShowSplashScreen@FrameSystemVisual@CFrameApplicationPresentation@@QEAAXW4SplashScreenUnsuppressionReason@2@@Z @ 0x1802BC76C
 * Callers:
 *     ?_SuppressSplashScreenIfAppropriate@CFrameApplicationPresentation@@AEAAXXZ @ 0x1800A8B98 (-_SuppressSplashScreenIfAppropriate@CFrameApplicationPresentation@@AEAAXXZ.c)
 *     ?SetSystemVisual@CFrameApplicationPresentation@@UEAAJW4FRAME_SYSTEM_VISUAL@@@Z @ 0x1800B0A80 (-SetSystemVisual@CFrameApplicationPresentation@@UEAAJW4FRAME_SYSTEM_VISUAL@@@Z.c)
 *     ?SetChromeOptions@CFrameApplicationPresentation@@UEAAJUAPPLICATION_FRAME_CHROME_CHANGE_DATA@@@Z @ 0x18020F390 (-SetChromeOptions@CFrameApplicationPresentation@@UEAAJUAPPLICATION_FRAME_CHROME_CHANGE_DATA@@@Z.c)
 *     _lambda_d2fa7908b891c12cbb1669318d2d4613_::operator() @ 0x180223D74 (_lambda_d2fa7908b891c12cbb1669318d2d4613_--operator().c)
 * Callees:
 *     ??1SplashScreenSuppressed@CFramePresentationTelemetry@@QEAA@XZ @ 0x180077710 (--1SplashScreenSuppressed@CFramePresentationTelemetry@@QEAA@XZ.c)
 *     ?TransferToCurrentThread@SplashScreenSuppressed@CFramePresentationTelemetry@@QEAA?AV12@XZ @ 0x18021006C (-TransferToCurrentThread@SplashScreenSuppressed@CFramePresentationTelemetry@@QEAA-AV12@XZ.c)
 *     ?Stop@SplashScreenSuppressed@CFramePresentationTelemetry@@QEAAXK@Z @ 0x1802B362C (-Stop@SplashScreenSuppressed@CFramePresentationTelemetry@@QEAAXK@Z.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 */

void __fastcall CFrameApplicationPresentation::FrameSystemVisual::ShowSplashScreen(__int64 a1, int a2)
{
  CFramePresentationTelemetry::SplashScreenSuppressed *v4; // rax
  _BYTE v5[336]; // [rsp+20h] [rbp-168h] BYREF

  if ( *(_DWORD *)(a1 + 4) == 1 )
  {
    v4 = CFramePresentationTelemetry::SplashScreenSuppressed::TransferToCurrentThread(
           a1 + 8,
           (struct wil::details::IFailureCallback *)v5);
    CFramePresentationTelemetry::SplashScreenSuppressed::Stop(v4, a2);
    CFramePresentationTelemetry::SplashScreenSuppressed::~SplashScreenSuppressed((CFramePresentationTelemetry::SplashScreenSuppressed *)v5);
  }
  *(_DWORD *)(a1 + 4) = 2;
}
