/*
 * XREFs of ??1OnClientWindowReadinessProcessed@SingleViewExperienceTelemetry@@QEAA@XZ @ 0x18022C568
 * Callers:
 *     _CSingleViewShellExperience::OnClientWindowReadyForPresentationChanged_::_1_::dtor$0 @ 0x1806A4F6C (_CSingleViewShellExperience--OnClientWindowReadyForPresentationChanged_--_1_--dtor$0.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VSingleViewExperienceLogging@@$00$0CAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x18001AE78 (-Destroy@-$ActivityBase@VSingleViewExperienceLogging@@$00$0CAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflec.c)
 */

void __fastcall SingleViewExperienceTelemetry::OnClientWindowReadinessProcessed::~OnClientWindowReadinessProcessed(
        SingleViewExperienceTelemetry::OnClientWindowReadinessProcessed *this)
{
  *(_QWORD *)this = &SingleViewExperienceTelemetry::OnClientWindowReadinessProcessed::`vftable';
  wil::ActivityBase<SingleViewExperienceLogging,1,35184372088832,5,16777216,_TlgReflectorTag_Param0IsProviderType>::Destroy(this);
  wil::ActivityBase<SingleViewExperienceLogging,1,35184372088832,5,16777216,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<SingleViewExperienceLogging,1,35184372088832,5,16777216,_TlgReflectorTag_Param0IsProviderType>((__int64)this);
}
