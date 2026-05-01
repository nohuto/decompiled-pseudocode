/*
 * XREFs of ??1?$ActivityData@VCAppManagerLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VCAppManagerLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x180077814
 * Callers:
 *     ?reset@?$shared_object@V?$ActivityData@VCAppManagerLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VCAppManagerLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@@details@wil@@QEAAXXZ @ 0x1800765E4 (-reset@-$shared_object@V-$ActivityData@VCAppManagerLogging@@U_TlgReflectorTag_Param_ea_1800765E4.c)
 *     ??4SplashScreenSuppressed@CFramePresentationTelemetry@@QEAAAEAV01@$$QEAV01@@Z @ 0x180077654 (--4SplashScreenSuppressed@CFramePresentationTelemetry@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ??1?$ActivityBase@VCAppManagerLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x1800777DC (--1-$ActivityBase@VCAppManagerLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProvid.c)
 *     ?SuppressSplashScreen@FrameSystemVisual@CFrameApplicationPresentation@@QEAAXPEBGPEAUHWND__@@W4SplashScreenSuppressionReason@2@K@Z @ 0x180077848 (-SuppressSplashScreen@FrameSystemVisual@CFrameApplicationPresentation@@QEAAXPEBGPEAUHWND__@@W4Sp.c)
 *     ?SetDesiredSystemVisual@FrameSystemVisual@CFrameApplicationPresentation@@QEAAXPEAV2@W4FRAME_SYSTEM_VISUAL@@@Z @ 0x1800B213C (-SetDesiredSystemVisual@FrameSystemVisual@CFrameApplicationPresentation@@QEAAXPEAV2@W4FRAME_SYST.c)
 * Callees:
 *     ?ClearMessage@StoredCallContextInfo@details@wil@@QEAAXXZ @ 0x180040E10 (-ClearMessage@StoredCallContextInfo@details@wil@@QEAAXXZ.c)
 *     ?reset@shared_buffer@details@wil@@QEAAXXZ @ 0x18004226C (-reset@shared_buffer@details@wil@@QEAAXXZ.c)
 */

__int64 __fastcall wil::ActivityBase<CAppManagerLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<CAppManagerLogging,_TlgReflectorTag_Param0IsProviderType>::~ActivityData<CAppManagerLogging,_TlgReflectorTag_Param0IsProviderType>(
        __int64 a1)
{
  wil::details::shared_buffer::reset((volatile signed __int32 **)(a1 + 232));
  wil::details::StoredCallContextInfo::ClearMessage((wil::details::StoredCallContextInfo *)(a1 + 40));
  return _TlgActivityBase<wil::ActivityBase<CAppManagerLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<CAppManagerLogging,_TlgReflectorTag_Param0IsProviderType>,70368744177664,5>::~_TlgActivityBase<wil::ActivityBase<CAppManagerLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<CAppManagerLogging,_TlgReflectorTag_Param0IsProviderType>,70368744177664,5>(a1);
}
