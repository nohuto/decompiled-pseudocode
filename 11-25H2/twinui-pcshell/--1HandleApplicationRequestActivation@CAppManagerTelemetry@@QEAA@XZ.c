/*
 * XREFs of ??1HandleApplicationRequestActivation@CAppManagerTelemetry@@QEAA@XZ @ 0x1802E4318
 * Callers:
 *     ?_HandleApplicationRequestActivation@CApplicationManager@@AEAAJQEBUHSHELL_DATA@1@@Z @ 0x1802ECD3C (-_HandleApplicationRequestActivation@CApplicationManager@@AEAAJQEBUHSHELL_DATA@1@@Z.c)
 *     _CApplicationManager::_HandleApplicationRequestActivation_::_1_::dtor$1 @ 0x1806B9E0F (_CApplicationManager--_HandleApplicationRequestActivation_--_1_--dtor$1.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x18003F730 (-Destroy@-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderTy.c)
 */

void __fastcall CAppManagerTelemetry::HandleApplicationRequestActivation::~HandleApplicationRequestActivation(
        CAppManagerTelemetry::HandleApplicationRequestActivation *this)
{
  *(_QWORD *)this = &CAppManagerTelemetry::HandleApplicationRequestActivation::`vftable';
  wil::ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Destroy(this);
  wil::ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>((__int64)this);
}
