/*
 * XREFs of ??1EM_CompleteHide@ControlCenterTelemetry@ControlCenterUITelemetry@@QEAA@XZ @ 0x18036B27C
 * Callers:
 *     ?CompleteHide@CControlCenterExperienceManager@@AEAAJXZ @ 0x18036BC80 (-CompleteHide@CControlCenterExperienceManager@@AEAAJXZ.c)
 *     _CControlCenterExperienceManager::CompleteHide_::_1_::dtor$0 @ 0x1806E67B0 (_CControlCenterExperienceManager--CompleteHide_--_1_--dtor$0.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VControlCenterLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x180114930 (-Destroy@-$ActivityBase@VControlCenterLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProvider.c)
 */

void __fastcall ControlCenterUITelemetry::ControlCenterTelemetry::EM_CompleteHide::~EM_CompleteHide(
        ControlCenterUITelemetry::ControlCenterTelemetry::EM_CompleteHide *this)
{
  *(_QWORD *)this = &ControlCenterUITelemetry::ControlCenterTelemetry::EM_CompleteHide::`vftable';
  wil::ActivityBase<ControlCenterLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Destroy(this);
  wil::ActivityBase<ControlCenterLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<ControlCenterLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>((__int64)this);
}
