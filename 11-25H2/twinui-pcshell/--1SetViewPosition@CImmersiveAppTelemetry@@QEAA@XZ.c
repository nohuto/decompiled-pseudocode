/*
 * XREFs of ??1SetViewPosition@CImmersiveAppTelemetry@@QEAA@XZ @ 0x18021E8D4
 * Callers:
 *     _CImmersiveApp::SetViewPosition_::_1_::dtor$0 @ 0x1806A5F88 (_CImmersiveApp--SetViewPosition_--_1_--dtor$0.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x18003F730 (-Destroy@-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderTy.c)
 */

void __fastcall CImmersiveAppTelemetry::SetViewPosition::~SetViewPosition(
        CImmersiveAppTelemetry::SetViewPosition *this)
{
  *(_QWORD *)this = &CImmersiveAppTelemetry::SetViewPosition::`vftable';
  wil::ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Destroy(this);
  wil::ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>((__int64)this);
}
