/*
 * XREFs of ??1EM_PriorityBoostRequested@ControlCenterTelemetry@ControlCenterUITelemetry@@QEAA@XZ @ 0x18020B9FC
 * Callers:
 *     ?OnPriorityBoostRequested@CControlCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x18020B900 (-OnPriorityBoostRequested@CControlCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@.c)
 *     _CControlCenterExperienceManager::OnPriorityBoostRequested_::_1_::dtor$0 @ 0x1806B4F52 (_CControlCenterExperienceManager--OnPriorityBoostRequested_--_1_--dtor$0.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VControlCenterLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x180043DCC (-Destroy@-$ActivityBase@VControlCenterLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProvider.c)
 */

void __fastcall ControlCenterUITelemetry::ControlCenterTelemetry::EM_PriorityBoostRequested::~EM_PriorityBoostRequested(
        volatile signed __int32 **this)
{
  *this = (volatile signed __int32 *)&ControlCenterUITelemetry::ControlCenterTelemetry::EM_PriorityBoostRequested::`vftable';
  wil::ActivityBase<ControlCenterLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Destroy(this);
  wil::ActivityBase<ControlCenterLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<ControlCenterLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>((__int64)this);
}
