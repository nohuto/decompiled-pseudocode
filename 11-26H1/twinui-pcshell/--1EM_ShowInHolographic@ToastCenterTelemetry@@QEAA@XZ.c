/*
 * XREFs of ??1EM_ShowInHolographic@ToastCenterTelemetry@@QEAA@XZ @ 0x18037BB70
 * Callers:
 *     ?ShowInHolographic@CToastCenterExperienceManager@@AEAAJXZ @ 0x18037DB1C (-ShowInHolographic@CToastCenterExperienceManager@@AEAAJXZ.c)
 *     _CToastCenterExperienceManager::ShowInHolographic_::_1_::dtor$0 @ 0x1806E6BAE (_CToastCenterExperienceManager--ShowInHolographic_--_1_--dtor$0.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VToastCenterLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x18037C244 (-Destroy@-$ActivityBase@VToastCenterLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0Is.c)
 */

void __fastcall ToastCenterTelemetry::EM_ShowInHolographic::~EM_ShowInHolographic(
        ToastCenterTelemetry::EM_ShowInHolographic *this)
{
  *(_QWORD *)this = &ToastCenterTelemetry::EM_ShowInHolographic::`vftable';
  wil::ActivityBase<ToastCenterLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::Destroy();
  wil::ActivityBase<ToastCenterLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<ToastCenterLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>((__int64)this);
}
