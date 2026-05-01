/*
 * XREFs of ??1EM_UnregisterHolographicExecutor@ToastCenterTelemetry@@QEAA@XZ @ 0x180373F64
 * Callers:
 *     ?UnregisterHolographicExecutor@CToastCenterExperienceManager@@UEAAJXZ @ 0x180377740 (-UnregisterHolographicExecutor@CToastCenterExperienceManager@@UEAAJXZ.c)
 *     _CToastCenterExperienceManager::UnregisterHolographicExecutor_::_1_::dtor$0 @ 0x1806BED62 (_CToastCenterExperienceManager--UnregisterHolographicExecutor_--_1_--dtor$0.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VToastCenterLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x1803745EC (-Destroy@-$ActivityBase@VToastCenterLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0Is.c)
 */

void __fastcall ToastCenterTelemetry::EM_UnregisterHolographicExecutor::~EM_UnregisterHolographicExecutor(
        ToastCenterTelemetry::EM_UnregisterHolographicExecutor *this)
{
  *(_QWORD *)this = &ToastCenterTelemetry::EM_UnregisterHolographicExecutor::`vftable';
  wil::ActivityBase<ToastCenterLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::Destroy();
  wil::ActivityBase<ToastCenterLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<ToastCenterLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>((__int64)this);
}
