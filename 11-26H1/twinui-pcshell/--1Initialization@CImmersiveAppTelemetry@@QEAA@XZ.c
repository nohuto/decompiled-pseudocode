/*
 * XREFs of ??1Initialization@CImmersiveAppTelemetry@@QEAA@XZ @ 0x1802272B8
 * Callers:
 *     _CImmersiveApp::RuntimeClassInitialize_::_1_::dtor$0 @ 0x1806D1F6A (_CImmersiveApp--RuntimeClassInitialize_--_1_--dtor$0.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x180041AA8 (-Destroy@-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderTy.c)
 */

void __fastcall CImmersiveAppTelemetry::Initialization::~Initialization(volatile signed __int32 **this)
{
  *this = (volatile signed __int32 *)&CImmersiveAppTelemetry::Initialization::`vftable';
  wil::ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Destroy(this);
  wil::ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>((__int64)this);
}
