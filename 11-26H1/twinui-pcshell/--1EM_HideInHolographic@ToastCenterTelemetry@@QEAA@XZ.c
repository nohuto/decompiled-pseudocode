/*
 * XREFs of ??1EM_HideInHolographic@ToastCenterTelemetry@@QEAA@XZ @ 0x18037BB18
 * Callers:
 *     ?HideInHolographic@CToastCenterExperienceManager@@AEAAJXZ @ 0x18037C490 (-HideInHolographic@CToastCenterExperienceManager@@AEAAJXZ.c)
 *     _CToastCenterExperienceManager::HideInHolographic_::_1_::dtor$0 @ 0x1806E69AB (_CToastCenterExperienceManager--HideInHolographic_--_1_--dtor$0.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VToastCenterLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x18037C244 (-Destroy@-$ActivityBase@VToastCenterLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0Is.c)
 */

void __fastcall ToastCenterTelemetry::EM_HideInHolographic::~EM_HideInHolographic(
        ToastCenterTelemetry::EM_HideInHolographic *this)
{
  *(_QWORD *)this = &ToastCenterTelemetry::EM_HideInHolographic::`vftable';
  wil::ActivityBase<ToastCenterLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::Destroy();
  wil::ActivityBase<ToastCenterLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<ToastCenterLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>((__int64)this);
}
