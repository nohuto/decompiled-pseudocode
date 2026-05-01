/*
 * XREFs of ??$Start@$$V@CortanaExperienceManager_PearlRectMayHaveChanged@CortanaProactiveTelemetry@@SA?AV01@XZ @ 0x1803C6BEC
 * Callers:
 *     ?OnPearlRectChanged@SearchAppDesktopExperienceView@@UEAAJXZ @ 0x1803CA7E0 (-OnPearlRectChanged@SearchAppDesktopExperienceView@@UEAAJXZ.c)
 *     ?OnPearlRectChanged@CortanaDesktopExperienceView@@UEAAJXZ @ 0x1803D4650 (-OnPearlRectChanged@CortanaDesktopExperienceView@@UEAAJXZ.c)
 * Callees:
 *     ??0?$ActivityBase@VCortanaProactiveLogging@@$0A@$0A@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x180371050 (--0-$ActivityBase@VCortanaProactiveLogging@@$0A@$0A@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProvi.c)
 *     ?StartActivity@CortanaExperienceManager_PearlRectMayHaveChanged@CortanaProactiveTelemetry@@QEAAXXZ @ 0x1803CCFDC (-StartActivity@CortanaExperienceManager_PearlRectMayHaveChanged@CortanaProactiveTelemetry@@QEAAX.c)
 */

CortanaProactiveTelemetry::CortanaExperienceManager_PearlRectMayHaveChanged *__fastcall CortanaProactiveTelemetry::CortanaExperienceManager_PearlRectMayHaveChanged::Start<>(
        CortanaProactiveTelemetry::CortanaExperienceManager_PearlRectMayHaveChanged *this)
{
  wil::ActivityBase<CortanaProactiveLogging,0,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<CortanaProactiveLogging,0,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>(
    this,
    (__int64)"CortanaExperienceManager_PearlRectMayHaveChanged");
  *(_QWORD *)this = &CortanaProactiveTelemetry::CortanaExperienceManager_PearlRectMayHaveChanged::`vftable';
  CortanaProactiveTelemetry::CortanaExperienceManager_PearlRectMayHaveChanged::StartActivity(this);
  return this;
}
