/*
 * XREFs of ??1EM_ReturnFocusActivity@ControlCenterTelemetry@ControlCenterUITelemetry@@QEAA@XZ @ 0x1803640D0
 * Callers:
 *     ?ReturnFocus@CControlCenterExperienceManager@@AEAAJXZ @ 0x180366FD0 (-ReturnFocus@CControlCenterExperienceManager@@AEAAJXZ.c)
 *     _CControlCenterExperienceManager::ReturnFocus_::_1_::dtor$0 @ 0x1806BEA51 (_CControlCenterExperienceManager--ReturnFocus_--_1_--dtor$0.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VControlCenterLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x180043DCC (-Destroy@-$ActivityBase@VControlCenterLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProvider.c)
 */

void __fastcall ControlCenterUITelemetry::ControlCenterTelemetry::EM_ReturnFocusActivity::~EM_ReturnFocusActivity(
        volatile signed __int32 **this)
{
  *this = (volatile signed __int32 *)&ControlCenterUITelemetry::ControlCenterTelemetry::EM_ReturnFocusActivity::`vftable';
  wil::ActivityBase<ControlCenterLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Destroy(this);
  wil::ActivityBase<ControlCenterLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<ControlCenterLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>((__int64)this);
}
