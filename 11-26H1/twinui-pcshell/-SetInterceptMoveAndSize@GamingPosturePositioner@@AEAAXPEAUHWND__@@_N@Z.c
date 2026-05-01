/*
 * XREFs of ?SetInterceptMoveAndSize@GamingPosturePositioner@@AEAAXPEAUHWND__@@_N@Z @ 0x180503354
 * Callers:
 *     ?MakeViewPrimary@GamingPosturePositioner@@AEAAJPEAUIApplicationView@@@Z @ 0x1804FF4B8 (-MakeViewPrimary@GamingPosturePositioner@@AEAAJPEAUIApplicationView@@@Z.c)
 *     ?ReleasePrimaryView@GamingPosturePositioner@@AEAAX_N0@Z @ 0x180502408 (-ReleasePrimaryView@GamingPosturePositioner@@AEAAX_N0@Z.c)
 * Callees:
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_60149300@@@details@wil@@QEAA_NXZ @ 0x1803307AC (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_60149300@@@details@wil@@QEAA_NXZ.c)
 *     ??$DisabledInterceptingOfEventsForView@AEAPEAUHWND__@@@GamingPosturePositionerTelemetryProvider@@SAXAEAPEAUHWND__@@@Z @ 0x1804F3890 (--$DisabledInterceptingOfEventsForView@AEAPEAUHWND__@@@GamingPosturePositionerTelemetryProvider@.c)
 *     ??$EnabledInterceptingOfEventsForView@AEAPEAUHWND__@@@GamingPosturePositionerTelemetryProvider@@SAXAEAPEAUHWND__@@@Z @ 0x1804F38D4 (--$EnabledInterceptingOfEventsForView@AEAPEAUHWND__@@@GamingPosturePositionerTelemetryProvider@@.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall GamingPosturePositioner::SetInterceptMoveAndSize(GamingPosturePositioner *this, __int64 a2, char a3)
{
  __int64 v4; // rcx
  const char *v5; // r9
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v7; // [rsp+48h] [rbp+10h] BYREF

  v7 = a2;
  v4 = *((_QWORD *)this + 25);
  if ( v4 && a2 )
  {
    try
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 64LL))(v4);
      if ( wil::details::FeatureImpl<__WilFeatureTraits_Feature_60149300>::__private_IsEnabled((wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_60149300>::GetImpl'::`2'::impl) )
      {
        if ( a3 )
          GamingPosturePositionerTelemetryProvider::EnabledInterceptingOfEventsForView<HWND__ * &>(&v7);
        else
          GamingPosturePositionerTelemetryProvider::DisabledInterceptingOfEventsForView<HWND__ * &>(&v7);
      }
    }
    catch ( ... )
    {
      wil::details::in1diag3::Log_CaughtException(
        retaddr,
        (void *)0x4E7,
        (int)"pcshell\\twinui\\shellpositioners\\lib\\gamingposturepositioner.cpp",
        v5);
    }
  }
}
