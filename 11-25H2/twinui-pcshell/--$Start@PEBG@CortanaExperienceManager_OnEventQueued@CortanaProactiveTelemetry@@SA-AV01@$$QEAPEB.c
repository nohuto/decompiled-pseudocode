/*
 * XREFs of ??$Start@PEBG@CortanaExperienceManager_OnEventQueued@CortanaProactiveTelemetry@@SA?AV01@$$QEAPEBG@Z @ 0x180369A88
 * Callers:
 *     ?_OnViewEvent@CortanaSharedExperienceManager@@AEAAJPEAUHSTRING__@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x180370488 (-_OnViewEvent@CortanaSharedExperienceManager@@AEAAJPEAUHSTRING__@@PEAUIPropertySet@Collections@F.c)
 *     ?_OnViewEvent@SearchAppExperienceManager@@AEAAJPEAUHSTRING__@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x18039C7E0 (-_OnViewEvent@SearchAppExperienceManager@@AEAAJPEAUHSTRING__@@PEAUIPropertySet@Collections@Found.c)
 *     ?OnViewEventQueued@SearchAppDesktopExperienceView@@AEAAJPEAUHSTRING__@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x1803C1B0C (-OnViewEventQueued@SearchAppDesktopExperienceView@@AEAAJPEAUHSTRING__@@PEAUIPropertySet@Collecti.c)
 *     ?OnViewEventQueued@CortanaDesktopExperienceView@@AEAAJPEAUHSTRING__@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x1803CB63C (-OnViewEventQueued@CortanaDesktopExperienceView@@AEAAJPEAUHSTRING__@@PEAUIPropertySet@Collection.c)
 * Callees:
 *     ??0?$ActivityBase@VCortanaProactiveLogging@@$0A@$0A@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x180369ED0 (--0-$ActivityBase@VCortanaProactiveLogging@@$0A@$0A@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProvi.c)
 *     ?StartActivity@CortanaExperienceManager_OnEventQueued@CortanaProactiveTelemetry@@QEAAXPEBG@Z @ 0x18036E17C (-StartActivity@CortanaExperienceManager_OnEventQueued@CortanaProactiveTelemetry@@QEAAXPEBG@Z.c)
 */

CortanaProactiveTelemetry::CortanaExperienceManager_OnEventQueued *__fastcall CortanaProactiveTelemetry::CortanaExperienceManager_OnEventQueued::Start<unsigned short const *>(
        CortanaProactiveTelemetry::CortanaExperienceManager_OnEventQueued *this,
        const unsigned __int16 **a2)
{
  wil::ActivityBase<CortanaProactiveLogging,0,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<CortanaProactiveLogging,0,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>(this);
  *(_QWORD *)this = &CortanaProactiveTelemetry::CortanaExperienceManager_OnEventQueued::`vftable';
  CortanaProactiveTelemetry::CortanaExperienceManager_OnEventQueued::StartActivity(this, *a2);
  return this;
}
