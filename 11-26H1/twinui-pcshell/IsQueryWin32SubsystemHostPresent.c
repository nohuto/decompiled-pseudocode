/*
 * XREFs of IsQueryWin32SubsystemHostPresent @ 0x1802D1504
 * Callers:
 *     ?SubscribeToServices@TouchKeyboardExperienceManager@@UEAAJPEAUIServiceProvider@@@Z @ 0x180056430 (-SubscribeToServices@TouchKeyboardExperienceManager@@UEAAJPEAUIServiceProvider@@@Z.c)
 *     ?IsTouchEdgeGestureAllowed@TouchEdgeGestureProcessor@@AEAA_NXZ @ 0x1800B619C (-IsTouchEdgeGestureAllowed@TouchEdgeGestureProcessor@@AEAA_NXZ.c)
 *     ??0XamlLauncher@@QEAA@XZ @ 0x180243430 (--0XamlLauncher@@QEAA@XZ.c)
 *     ?PerformDelayedInitialization@TouchKeyboardExperienceManager@@UEAAJXZ @ 0x18024C550 (-PerformDelayedInitialization@TouchKeyboardExperienceManager@@UEAAJXZ.c)
 *     ?ComputeMaskAndFeaturesForScenarios@ViewPresentationMediator@@CA?AUBehaviorMaskAndFeatures@1@W4WINDOW_MANAGEMENT_BEHAVIOR_SCENARIO@@@Z @ 0x1802B95A4 (-ComputeMaskAndFeaturesForScenarios@ViewPresentationMediator@@CA-AUBehaviorMaskAndFeatures@1@W4W.c)
 * Callees:
 *     ApiSetQueryApiSetPresence_0 @ 0x1802D32A9 (ApiSetQueryApiSetPresence_0.c)
 */

char IsQueryWin32SubsystemHostPresent()
{
  char result; // al
  char v1; // [rsp+30h] [rbp+8h] BYREF

  if ( dword_1808D99D0 == 1 )
    return 1;
  if ( dword_1808D99D0 == 2 )
    return 0;
  v1 = 0;
  if ( (int)ApiSetQueryApiSetPresence_0(L"FH", &v1) < 0 )
    return 0;
  result = v1;
  dword_1808D99D0 = 2 - (v1 != 0);
  return result;
}
