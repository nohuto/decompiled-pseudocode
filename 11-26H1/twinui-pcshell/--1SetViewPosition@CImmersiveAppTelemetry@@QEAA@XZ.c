/*
 * XREFs of ??1SetViewPosition@CImmersiveAppTelemetry@@QEAA@XZ @ 0x180210264
 * Callers:
 *     _CImmersiveApp::SetViewPosition_::_1_::dtor$0 @ 0x1806CEC24 (_CImmersiveApp--SetViewPosition_--_1_--dtor$0.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x180041AA8 (-Destroy@-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderTy.c)
 */

void __fastcall CImmersiveAppTelemetry::SetViewPosition::~SetViewPosition(volatile signed __int32 **this)
{
  *this = (volatile signed __int32 *)&CImmersiveAppTelemetry::SetViewPosition::`vftable';
  wil::ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Destroy(this);
  wil::ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>((__int64)this);
}
