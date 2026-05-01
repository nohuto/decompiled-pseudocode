/*
 * XREFs of ?SnapAssistDismissed@SnapAssistState@@QEAA?AW4SnapAssistStateTransition@@XZ @ 0x180698C58
 * Callers:
 *     ?HostWindowActivationChanged@?QIXamlSwitcherWindowInteractionEvents@@GuidedSnapAssistViewController@@UE$AAAX_N_K@Z @ 0x1806976A0 (-HostWindowActivationChanged@-QIXamlSwitcherWindowInteractionEvents@@GuidedSnapAssistViewControl.c)
 *     ?OnLightDismiss@?QIXamlSwitcherWindowInteractionEvents@@GuidedSnapAssistViewController@@UE$AAAXXZ @ 0x180697BA0 (-OnLightDismiss@-QIXamlSwitcherWindowInteractionEvents@@GuidedSnapAssistViewController@@UE$AAAXX.c)
 *     ?OnRegionInvoked@GuidedSnapAssistViewController@@QE$AAAXPE$AAVObject@Platform@@PE$AAVSnapAssistRegionViewModel@Switcher@Experiences@ComposableShell@WindowsInternal@@@Z @ 0x180697BE0 (-OnRegionInvoked@GuidedSnapAssistViewController@@QE$AAAXPE$AAVObject@Platform@@PE$AAVSnapAssistR.c)
 * Callees:
 *     ??C?$tip_test@V?$merged_data@U_tip_GuidedSnapAssistTest@@U1@@details@tip2@@@tip2@@QEAA?AV?$test_data_control@V?$merged_data@U_tip_GuidedSnapAssistTest@@U1@@details@tip2@@@1@XZ @ 0x1802887E8 (--C-$tip_test@V-$merged_data@U_tip_GuidedSnapAssistTest@@U1@@details@tip2@@@tip2@@QEAA-AV-$test_.c)
 *     ??1?$test_data_control@V?$merged_data@U_tip_GuidedSnapAssistTest@@U1@@details@tip2@@@tip2@@QEAA@XZ @ 0x1802C9254 (--1-$test_data_control@V-$merged_data@U_tip_GuidedSnapAssistTest@@U1@@details@tip2@@@tip2@@QEAA@.c)
 */

__int64 __fastcall SnapAssistState::SnapAssistDismissed(__int64 a1)
{
  void *v2; // [rsp+30h] [rbp+8h] BYREF

  *(_BYTE *)(*(_QWORD *)tip2::tip_test<tip2::details::merged_data<_tip_GuidedSnapAssistTest,_tip_GuidedSnapAssistTest>>::operator->(
                          a1 + 176,
                          (__int64)&v2)
           + 277LL) = 1;
  tip2::test_data_control<tip2::details::merged_data<_tip_GuidedSnapAssistTest,_tip_GuidedSnapAssistTest>>::~test_data_control<tip2::details::merged_data<_tip_GuidedSnapAssistTest,_tip_GuidedSnapAssistTest>>(&v2);
  return 2LL;
}
