/*
 * XREFs of IsQueryWin32SubsystemHostPresent @ 0x1802D8D8C
 * Callers:
 *     ?SubscribeToServices@TouchKeyboardExperienceManager@@UEAAJPEAUIServiceProvider@@@Z @ 0x18004AFA0 (-SubscribeToServices@TouchKeyboardExperienceManager@@UEAAJPEAUIServiceProvider@@@Z.c)
 *     ?IsTouchEdgeGestureAllowed@TouchEdgeGestureProcessor@@AEAA_NXZ @ 0x1800FC1A0 (-IsTouchEdgeGestureAllowed@TouchEdgeGestureProcessor@@AEAA_NXZ.c)
 *     ??0XamlLauncher@@QEAA@XZ @ 0x18024EE7C (--0XamlLauncher@@QEAA@XZ.c)
 *     ?PerformDelayedInitialization@TouchKeyboardExperienceManager@@UEAAJXZ @ 0x180256E20 (-PerformDelayedInitialization@TouchKeyboardExperienceManager@@UEAAJXZ.c)
 *     ?ComputeMaskAndFeaturesForScenarios@ViewPresentationMediator@@CA?AUBehaviorMaskAndFeatures@1@W4WINDOW_MANAGEMENT_BEHAVIOR_SCENARIO@@@Z @ 0x1802C234C (-ComputeMaskAndFeaturesForScenarios@ViewPresentationMediator@@CA-AUBehaviorMaskAndFeatures@1@W4W.c)
 * Callees:
 *     ApiSetQueryApiSetPresence_0 @ 0x1802DAB39 (ApiSetQueryApiSetPresence_0.c)
 */

char IsQueryWin32SubsystemHostPresent()
{
  char result; // al
  char v1; // [rsp+30h] [rbp+8h] BYREF

  if ( dword_180899340 == 1 )
    return 1;
  if ( dword_180899340 == 2 )
    return 0;
  v1 = 0;
  if ( (int)ApiSetQueryApiSetPresence_0(L"FH", &v1) < 0 )
    return 0;
  result = v1;
  dword_180899340 = 2 - (v1 != 0);
  return result;
}
