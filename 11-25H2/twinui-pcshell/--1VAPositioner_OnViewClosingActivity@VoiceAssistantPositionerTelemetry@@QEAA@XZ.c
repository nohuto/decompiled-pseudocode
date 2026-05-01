/*
 * XREFs of ??1VAPositioner_OnViewClosingActivity@VoiceAssistantPositionerTelemetry@@QEAA@XZ @ 0x1804E61E8
 * Callers:
 *     ?OnViewClosing@VoiceAssistantPositioner@@UEAAJPEAUIApplicationView@@H@Z @ 0x1804E86A0 (-OnViewClosing@VoiceAssistantPositioner@@UEAAJPEAUIApplicationView@@H@Z.c)
 *     _VoiceAssistantPositioner::OnViewClosing_::_1_::dtor$0 @ 0x1806CAEC5 (_VoiceAssistantPositioner--OnViewClosing_--_1_--dtor$0.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$03$0DAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x1804E7340 (-Destroy@-$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$03$0DAAAAAA@U_TlgReflectorT.c)
 */

void __fastcall VoiceAssistantPositionerTelemetry::VAPositioner_OnViewClosingActivity::~VAPositioner_OnViewClosingActivity(
        VoiceAssistantPositionerTelemetry::VAPositioner_OnViewClosingActivity *this)
{
  *(_QWORD *)this = &VoiceAssistantPositionerTelemetry::VAPositioner_OnViewClosingActivity::`vftable';
  wil::ActivityBase<WindowManagementLogging,1,70368744177664,4,50331648,_TlgReflectorTag_Param0IsProviderType>::Destroy();
  wil::ActivityBase<WindowManagementLogging,1,70368744177664,4,50331648,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<WindowManagementLogging,1,70368744177664,4,50331648,_TlgReflectorTag_Param0IsProviderType>((__int64)this);
}
