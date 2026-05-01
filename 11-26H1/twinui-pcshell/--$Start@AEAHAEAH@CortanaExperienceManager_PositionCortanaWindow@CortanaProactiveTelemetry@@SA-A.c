/*
 * XREFs of ??$Start@AEAHAEAH@CortanaExperienceManager_PositionCortanaWindow@CortanaProactiveTelemetry@@SA?AV01@AEAH0@Z @ 0x1803C6C5C
 * Callers:
 *     ?PositionCortanaWindow@SearchAppDesktopExperienceView@@AEAAJ_N0@Z @ 0x1803CB6B4 (-PositionCortanaWindow@SearchAppDesktopExperienceView@@AEAAJ_N0@Z.c)
 *     ?PositionCortanaWindow@CortanaDesktopExperienceView@@AEAAJ_N0@Z @ 0x1803D5B64 (-PositionCortanaWindow@CortanaDesktopExperienceView@@AEAAJ_N0@Z.c)
 * Callees:
 *     ??0?$ActivityBase@VCortanaProactiveLogging@@$0A@$0A@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x180371050 (--0-$ActivityBase@VCortanaProactiveLogging@@$0A@$0A@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProvi.c)
 *     ?StartActivity@CortanaExperienceManager_PositionCortanaWindow@CortanaProactiveTelemetry@@QEAAXHH@Z @ 0x1803CD078 (-StartActivity@CortanaExperienceManager_PositionCortanaWindow@CortanaProactiveTelemetry@@QEAAXHH.c)
 */

CortanaProactiveTelemetry::CortanaExperienceManager_PositionCortanaWindow *__fastcall CortanaProactiveTelemetry::CortanaExperienceManager_PositionCortanaWindow::Start<int &,int &>(
        CortanaProactiveTelemetry::CortanaExperienceManager_PositionCortanaWindow *this,
        int *a2,
        int *a3)
{
  wil::ActivityBase<CortanaProactiveLogging,0,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<CortanaProactiveLogging,0,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>(
    this,
    (__int64)"CortanaExperienceManager_PositionCortanaWindow");
  *(_QWORD *)this = &CortanaProactiveTelemetry::CortanaExperienceManager_PositionCortanaWindow::`vftable';
  CortanaProactiveTelemetry::CortanaExperienceManager_PositionCortanaWindow::StartActivity(this, *a2, *a3);
  return this;
}
