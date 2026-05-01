/*
 * XREFs of ??1EM_RegisterHolographicExecutor@ToastCenterTelemetry@@QEAA@XZ @ 0x180373F0C
 * Callers:
 *     ?RegisterHolographicExecutor@CToastCenterExperienceManager@@UEAAJPEAUIHolographicCoreExperienceExecutor@Holographic@Shell@Internal@Windows@@@Z @ 0x1803758A0 (-RegisterHolographicExecutor@CToastCenterExperienceManager@@UEAAJPEAUIHolographicCoreExperienceE.c)
 *     _CToastCenterExperienceManager::RegisterHolographicExecutor_::_1_::dtor$0 @ 0x1806BED3E (_CToastCenterExperienceManager--RegisterHolographicExecutor_--_1_--dtor$0.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VToastCenterLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x1803745EC (-Destroy@-$ActivityBase@VToastCenterLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0Is.c)
 */

void __fastcall ToastCenterTelemetry::EM_RegisterHolographicExecutor::~EM_RegisterHolographicExecutor(
        ToastCenterTelemetry::EM_RegisterHolographicExecutor *this)
{
  *(_QWORD *)this = &ToastCenterTelemetry::EM_RegisterHolographicExecutor::`vftable';
  wil::ActivityBase<ToastCenterLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::Destroy();
  wil::ActivityBase<ToastCenterLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<ToastCenterLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>((__int64)this);
}
