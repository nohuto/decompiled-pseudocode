/*
 * XREFs of ??1EM_PriorityUnboostRequested@ControlCenterTelemetry@ControlCenterUITelemetry@@QEAA@XZ @ 0x18036B2A8
 * Callers:
 *     ?OnPriorityUnboostRequested@CControlCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x18036D510 (-OnPriorityUnboostRequested@CControlCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience.c)
 *     _CControlCenterExperienceManager::OnPriorityUnboostRequested_::_1_::dtor$0 @ 0x1806E67C2 (_CControlCenterExperienceManager--OnPriorityUnboostRequested_--_1_--dtor$0.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VControlCenterLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x180114930 (-Destroy@-$ActivityBase@VControlCenterLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProvider.c)
 */

void __fastcall ControlCenterUITelemetry::ControlCenterTelemetry::EM_PriorityUnboostRequested::~EM_PriorityUnboostRequested(
        ControlCenterUITelemetry::ControlCenterTelemetry::EM_PriorityUnboostRequested *this)
{
  *(_QWORD *)this = &ControlCenterUITelemetry::ControlCenterTelemetry::EM_PriorityUnboostRequested::`vftable';
  wil::ActivityBase<ControlCenterLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Destroy(this);
  wil::ActivityBase<ControlCenterLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<ControlCenterLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>((__int64)this);
}
