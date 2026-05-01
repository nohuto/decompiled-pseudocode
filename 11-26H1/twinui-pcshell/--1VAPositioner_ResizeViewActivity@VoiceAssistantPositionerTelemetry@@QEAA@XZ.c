/*
 * XREFs of ??1VAPositioner_ResizeViewActivity@VoiceAssistantPositionerTelemetry@@QEAA@XZ @ 0x1805069A0
 * Callers:
 *     ?ResizeView@VoiceAssistantPositioner@@UEAAJPEAUIApplicationView@@UtagSIZE@@1@Z @ 0x180509FC0 (-ResizeView@VoiceAssistantPositioner@@UEAAJPEAUIApplicationView@@UtagSIZE@@1@Z.c)
 *     _VoiceAssistantPositioner::ResizeView_::_1_::dtor$0 @ 0x1806F342E (_VoiceAssistantPositioner--ResizeView_--_1_--dtor$0.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x1801E39BC (-Destroy@-$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorT.c)
 */

void __fastcall VoiceAssistantPositionerTelemetry::VAPositioner_ResizeViewActivity::~VAPositioner_ResizeViewActivity(
        VoiceAssistantPositionerTelemetry::VAPositioner_ResizeViewActivity *this)
{
  *(_QWORD *)this = &VoiceAssistantPositionerTelemetry::VAPositioner_ResizeViewActivity::`vftable';
  wil::ActivityBase<WindowManagementLogging,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>::Destroy((__int64)this);
  wil::ActivityBase<WindowManagementLogging,1,70368744177664,5,50331648,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<WindowManagementLogging,1,70368744177664,5,50331648,_TlgReflectorTag_Param0IsProviderType>((__int64)this);
}
