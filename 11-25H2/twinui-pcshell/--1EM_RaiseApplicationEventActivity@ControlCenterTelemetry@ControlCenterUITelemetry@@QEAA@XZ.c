/*
 * XREFs of ??1EM_RaiseApplicationEventActivity@ControlCenterTelemetry@ControlCenterUITelemetry@@QEAA@XZ @ 0x18022D3A0
 * Callers:
 *     ?RaisePropertyChangedEvent@CControlCenterExperienceManager@@AEAAJPEBG_N@Z @ 0x18010BDC4 (-RaisePropertyChangedEvent@CControlCenterExperienceManager@@AEAAJPEBG_N@Z.c)
 *     _CControlCenterExperienceManager::RaisePropertyChangedEvent_::_1_::dtor$0 @ 0x1806AD85D (_CControlCenterExperienceManager--RaisePropertyChangedEvent_--_1_--dtor$0.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VControlCenterLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x180043DCC (-Destroy@-$ActivityBase@VControlCenterLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProvider.c)
 */

void __fastcall ControlCenterUITelemetry::ControlCenterTelemetry::EM_RaiseApplicationEventActivity::~EM_RaiseApplicationEventActivity(
        volatile signed __int32 **this)
{
  *this = (volatile signed __int32 *)&ControlCenterUITelemetry::ControlCenterTelemetry::EM_RaiseApplicationEventActivity::`vftable';
  wil::ActivityBase<ControlCenterLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Destroy(this);
  wil::ActivityBase<ControlCenterLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<ControlCenterLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>((__int64)this);
}
