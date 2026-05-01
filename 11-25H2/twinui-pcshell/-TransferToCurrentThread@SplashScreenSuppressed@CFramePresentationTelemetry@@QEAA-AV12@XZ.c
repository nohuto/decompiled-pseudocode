/*
 * XREFs of ?TransferToCurrentThread@SplashScreenSuppressed@CFramePresentationTelemetry@@QEAA?AV12@XZ @ 0x1801C1C2C
 * Callers:
 *     ?ShowSplashScreen@FrameSystemVisual@CFrameApplicationPresentation@@QEAAXW4SplashScreenUnsuppressionReason@2@@Z @ 0x1802C5B7C (-ShowSplashScreen@FrameSystemVisual@CFrameApplicationPresentation@@QEAAXW4SplashScreenUnsuppress.c)
 * Callees:
 *     ??0?$ActivityBase@VCAppManagerLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@$$QEAV01@_N@Z @ 0x1801C1C68 (--0-$ActivityBase@VCAppManagerLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProvid.c)
 */

struct wil::details::IFailureCallback *__fastcall CFramePresentationTelemetry::SplashScreenSuppressed::TransferToCurrentThread(
        __int64 a1,
        struct wil::details::IFailureCallback *a2)
{
  wil::ActivityBase<CAppManagerLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<CAppManagerLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>(a2);
  *(_QWORD *)a2 = &CFramePresentationTelemetry::SplashScreenSuppressed::`vftable';
  return a2;
}
