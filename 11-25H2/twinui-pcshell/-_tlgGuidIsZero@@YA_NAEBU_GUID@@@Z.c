/*
 * XREFs of ?_tlgGuidIsZero@@YA_NAEBU_GUID@@@Z @ 0x180018878
 * Callers:
 *     ?zInternalRelatedId@?$ActivityBase@VCortanaProactiveLogging@@$00$0A@$03$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEBAPEBU_GUID@@XZ @ 0x180016A80 (-zInternalRelatedId@-$ActivityBase@VCortanaProactiveLogging@@$00$0A@$03$0BAAAAAA@U_TlgReflectorT.c)
 *     ?zInternalRelatedId@?$ActivityBase@VCAppManagerLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEBAPEBU_GUID@@XZ @ 0x180205898 (-zInternalRelatedId@-$ActivityBase@VCAppManagerLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorT.c)
 *     ?StartActivity@InputAppActivation@TouchKeyboardExperienceTelemetryLogger@@QEAAXPEBGHI@Z @ 0x1802A2A0C (-StartActivity@InputAppActivation@TouchKeyboardExperienceTelemetryLogger@@QEAAXPEBGHI@Z.c)
 *     ?StartActivity@SetGamingPostureStateActivity@GamingPostureCoreTelemetryProvider@@QEAAX_N0@Z @ 0x18033048C (-StartActivity@SetGamingPostureStateActivity@GamingPostureCoreTelemetryProvider@@QEAAX_N0@Z.c)
 *     ??$StartActivity@K@SetConfigurationValueActivity@GamingPostureCoreTelemetryProvider@@QEAAXPEBGK@Z @ 0x180334BC8 (--$StartActivity@K@SetConfigurationValueActivity@GamingPostureCoreTelemetryProvider@@QEAAXPEBGK@.c)
 *     ??$StartActivity@PEBG@SetConfigurationValueActivity@GamingPostureCoreTelemetryProvider@@QEAAXPEBG0@Z @ 0x180334C90 (--$StartActivity@PEBG@SetConfigurationValueActivity@GamingPostureCoreTelemetryProvider@@QEAAXPEB.c)
 *     ??$StartActivity@_N@SetConfigurationValueActivity@GamingPostureCoreTelemetryProvider@@QEAAXPEBG_N@Z @ 0x180334D58 (--$StartActivity@_N@SetConfigurationValueActivity@GamingPostureCoreTelemetryProvider@@QEAAXPEBG_.c)
 *     ?StartActivity@GetConfigurationValueActivity@GamingPostureCoreTelemetryProvider@@QEAAXPEBG@Z @ 0x180336CA0 (-StartActivity@GetConfigurationValueActivity@GamingPostureCoreTelemetryProvider@@QEAAXPEBG@Z.c)
 *     ?StartActivity@UndockedSearchExperienceManager_TrySetWebSearchEnabledStateOnUpdate@SearchAppExperienceManagerTelemetry@@QEAAXXZ @ 0x1803B0A78 (-StartActivity@UndockedSearchExperienceManager_TrySetWebSearchEnabledStateOnUpdate@SearchAppExpe.c)
 *     ?StartActivity@LauncherInvokeActivity@CommonStartTelemetry@@QEAAXW4Mode@LauncherTelemetry@@IPEBG@Z @ 0x180456610 (-StartActivity@LauncherInvokeActivity@CommonStartTelemetry@@QEAAXW4Mode@LauncherTelemetry@@IPEBG.c)
 *     ?StartActivity@CreateGamingTaskViewControl@XamlSwitcherTelemetry@@QEAAXXZ @ 0x18067C038 (-StartActivity@CreateGamingTaskViewControl@XamlSwitcherTelemetry@@QEAAXXZ.c)
 *     ?StartActivity@ShowGamingTaskView@XamlSwitcherTelemetry@@QEAAXI@Z @ 0x18067C0D0 (-StartActivity@ShowGamingTaskView@XamlSwitcherTelemetry@@QEAAXI@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall _tlgGuidIsZero(const struct _GUID *a1)
{
  char result; // al

  result = 0;
  if ( !a1->Data1 && !*(_DWORD *)&a1->Data2 && !*(_DWORD *)a1->Data4 && !*(_DWORD *)&a1->Data4[4] )
    return 1;
  return result;
}
