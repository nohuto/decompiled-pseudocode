/*
 * XREFs of ??1ExperienceManager_OnViewPropertiesChanging@QuickConnectTelemetry@@QEAA@XZ @ 0x1803894A0
 * Callers:
 *     ?OnViewPropertiesChanging@CQuickConnectExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x18038B5C0 (-OnViewPropertiesChanging@CQuickConnectExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@.c)
 *     _CQuickConnectExperienceManager::OnViewPropertiesChanging_::_1_::dtor$0 @ 0x1806BF550 (_CQuickConnectExperienceManager--OnViewPropertiesChanging_--_1_--dtor$0.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VQuickConnectLoggingProvider@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x18038A168 (-Destroy@-$ActivityBase@VQuickConnectLoggingProvider@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag.c)
 */

void __fastcall QuickConnectTelemetry::ExperienceManager_OnViewPropertiesChanging::~ExperienceManager_OnViewPropertiesChanging(
        QuickConnectTelemetry::ExperienceManager_OnViewPropertiesChanging *this)
{
  *(_QWORD *)this = &QuickConnectTelemetry::ExperienceManager_OnViewPropertiesChanging::`vftable';
  wil::ActivityBase<QuickConnectLoggingProvider,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::Destroy();
  wil::ActivityBase<QuickConnectLoggingProvider,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<QuickConnectLoggingProvider,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>((__int64)this);
}
