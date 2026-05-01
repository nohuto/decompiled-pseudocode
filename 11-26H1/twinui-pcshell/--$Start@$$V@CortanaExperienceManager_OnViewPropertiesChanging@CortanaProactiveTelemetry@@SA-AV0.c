/*
 * XREFs of ??$Start@$$V@CortanaExperienceManager_OnViewPropertiesChanging@CortanaProactiveTelemetry@@SA?AV01@XZ @ 0x180370B68
 * Callers:
 *     ?OnViewPropertiesChanging@SearchAppDesktopExperienceView@@AEAAJXZ @ 0x1803CB0BC (-OnViewPropertiesChanging@SearchAppDesktopExperienceView@@AEAAJXZ.c)
 *     ?OnViewPropertiesChanging@CortanaDesktopExperienceView@@AEAAJXZ @ 0x1803D55CC (-OnViewPropertiesChanging@CortanaDesktopExperienceView@@AEAAJXZ.c)
 * Callees:
 *     ??0?$ActivityBase@VCortanaProactiveLogging@@$00$0A@$03$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x180370ED8 (--0-$ActivityBase@VCortanaProactiveLogging@@$00$0A@$03$0BAAAAAA@U_TlgReflectorTag_Param0IsProvid.c)
 *     ?StartActivity@CortanaExperienceManager_OnViewPropertiesChanging@CortanaProactiveTelemetry@@QEAAXXZ @ 0x180375980 (-StartActivity@CortanaExperienceManager_OnViewPropertiesChanging@CortanaProactiveTelemetry@@QEAA.c)
 */

CortanaProactiveTelemetry::CortanaExperienceManager_OnViewPropertiesChanging *__fastcall CortanaProactiveTelemetry::CortanaExperienceManager_OnViewPropertiesChanging::Start<>(
        CortanaProactiveTelemetry::CortanaExperienceManager_OnViewPropertiesChanging *this)
{
  wil::ActivityBase<CortanaProactiveLogging,1,0,4,16777216,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<CortanaProactiveLogging,1,0,4,16777216,_TlgReflectorTag_Param0IsProviderType>(this);
  *(_QWORD *)this = &CortanaProactiveTelemetry::CortanaExperienceManager_OnViewPropertiesChanging::`vftable';
  CortanaProactiveTelemetry::CortanaExperienceManager_OnViewPropertiesChanging::StartActivity(this);
  return this;
}
