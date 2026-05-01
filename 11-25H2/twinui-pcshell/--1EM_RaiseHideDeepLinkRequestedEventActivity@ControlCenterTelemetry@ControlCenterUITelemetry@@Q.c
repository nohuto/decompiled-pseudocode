/*
 * XREFs of ??1EM_RaiseHideDeepLinkRequestedEventActivity@ControlCenterTelemetry@ControlCenterUITelemetry@@QEAA@XZ @ 0x1802CD914
 * Callers:
 *     ?RaiseHideDeepLinkRequestedEvent@CControlCenterExperienceManager@@AEAAJPEAUHSTRING__@@_N@Z @ 0x1802150D8 (-RaiseHideDeepLinkRequestedEvent@CControlCenterExperienceManager@@AEAAJPEAUHSTRING__@@_N@Z.c)
 *     _CControlCenterExperienceManager::RaiseHideDeepLinkRequestedEvent_::_1_::dtor$0 @ 0x1806B54A2 (_CControlCenterExperienceManager--RaiseHideDeepLinkRequestedEvent_--_1_--dtor$0.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VControlCenterLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x180043DCC (-Destroy@-$ActivityBase@VControlCenterLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProvider.c)
 */

void __fastcall ControlCenterUITelemetry::ControlCenterTelemetry::EM_RaiseHideDeepLinkRequestedEventActivity::~EM_RaiseHideDeepLinkRequestedEventActivity(
        volatile signed __int32 **this)
{
  *this = (volatile signed __int32 *)&ControlCenterUITelemetry::ControlCenterTelemetry::EM_RaiseHideDeepLinkRequestedEventActivity::`vftable';
  wil::ActivityBase<ControlCenterLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Destroy(this);
  wil::ActivityBase<ControlCenterLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<ControlCenterLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>((__int64)this);
}
