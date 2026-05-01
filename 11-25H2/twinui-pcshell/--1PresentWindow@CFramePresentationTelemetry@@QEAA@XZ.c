/*
 * XREFs of ??1PresentWindow@CFramePresentationTelemetry@@QEAA@XZ @ 0x18022FB10
 * Callers:
 *     _lambda_ffa95d5ea910b6ca98d895ec7ec1025e_::__lambda_ffa95d5ea910b6ca98d895ec7ec1025e_ @ 0x180308ADC (_lambda_ffa95d5ea910b6ca98d895ec7ec1025e_--__lambda_ffa95d5ea910b6ca98d895ec7ec1025e_.c)
 *     _CFrameApplicationPresentation::PresentWindow_::_1_::dtor$0 @ 0x1806A5FAC (_CFrameApplicationPresentation--PresentWindow_--_1_--dtor$0.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x18003F730 (-Destroy@-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderTy.c)
 */

void __fastcall CFramePresentationTelemetry::PresentWindow::~PresentWindow(
        CFramePresentationTelemetry::PresentWindow *this)
{
  *(_QWORD *)this = &CFramePresentationTelemetry::PresentWindow::`vftable';
  wil::ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Destroy(this);
  wil::ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>((__int64)this);
}
