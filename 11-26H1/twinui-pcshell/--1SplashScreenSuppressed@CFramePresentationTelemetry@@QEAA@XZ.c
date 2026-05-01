/*
 * XREFs of ??1SplashScreenSuppressed@CFramePresentationTelemetry@@QEAA@XZ @ 0x180077710
 * Callers:
 *     ?ShowSplashScreen@FrameSystemVisual@CFrameApplicationPresentation@@QEAAXW4SplashScreenUnsuppressionReason@2@@Z @ 0x1802BC76C (-ShowSplashScreen@FrameSystemVisual@CFrameApplicationPresentation@@QEAAXW4SplashScreenUnsuppress.c)
 *     ??1CFrameApplicationPresentation@@UEAA@XZ @ 0x18030489C (--1CFrameApplicationPresentation@@UEAA@XZ.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VCAppManagerLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x18007773C (-Destroy@-$ActivityBase@VCAppManagerLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0Is.c)
 */

void __fastcall CFramePresentationTelemetry::SplashScreenSuppressed::~SplashScreenSuppressed(
        CFramePresentationTelemetry::SplashScreenSuppressed *this)
{
  *(_QWORD *)this = &CFramePresentationTelemetry::SplashScreenSuppressed::`vftable';
  wil::ActivityBase<CAppManagerLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::Destroy(this);
  wil::ActivityBase<CAppManagerLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<CAppManagerLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>(this);
}
