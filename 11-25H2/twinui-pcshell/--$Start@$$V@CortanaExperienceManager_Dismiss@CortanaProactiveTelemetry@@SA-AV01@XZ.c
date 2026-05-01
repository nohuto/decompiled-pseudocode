/*
 * XREFs of ??$Start@$$V@CortanaExperienceManager_Dismiss@CortanaProactiveTelemetry@@SA?AV01@XZ @ 0x1803BDA68
 * Callers:
 *     ?MinimizeToBoxMode@SearchAppDesktopExperienceView@@UEAAJXZ @ 0x1803C0CB0 (-MinimizeToBoxMode@SearchAppDesktopExperienceView@@UEAAJXZ.c)
 *     ?MinimizeToBoxMode@CortanaDesktopExperienceView@@UEAAJXZ @ 0x1803CA1A0 (-MinimizeToBoxMode@CortanaDesktopExperienceView@@UEAAJXZ.c)
 * Callees:
 *     ??0?$ActivityBase@VCortanaProactiveLogging@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x1802A4CC4 (--0-$ActivityBase@VCortanaProactiveLogging@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Par.c)
 *     ?StartActivity@CortanaExperienceManager_Dismiss@CortanaProactiveTelemetry@@QEAAXXZ @ 0x1803C3CA4 (-StartActivity@CortanaExperienceManager_Dismiss@CortanaProactiveTelemetry@@QEAAXXZ.c)
 */

CortanaProactiveTelemetry::CortanaExperienceManager_Dismiss *__fastcall CortanaProactiveTelemetry::CortanaExperienceManager_Dismiss::Start<>(
        CortanaProactiveTelemetry::CortanaExperienceManager_Dismiss *this)
{
  wil::ActivityBase<CortanaProactiveLogging,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<CortanaProactiveLogging,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>(
    this,
    (__int64)"CortanaExperienceManager_Dismiss");
  *(_QWORD *)this = &CortanaProactiveTelemetry::CortanaExperienceManager_Dismiss::`vftable';
  CortanaProactiveTelemetry::CortanaExperienceManager_Dismiss::StartActivity(this);
  return this;
}
