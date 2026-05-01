/*
 * XREFs of ?OnLightDismiss@?QIXamlSwitcherWindowInteractionEvents@@GuidedSnapAssistViewController@@UE$AAAXXZ @ 0x180697BA0
 * Callers:
 *     ?OnLightDismiss@?QIXamlSwitcherWindowInteractionEvents@@GuidedSnapAssistViewController@@WBI@E$AAAXXZ @ 0x180697BD0 (-OnLightDismiss@-QIXamlSwitcherWindowInteractionEvents@@GuidedSnapAssistViewController@@WBI@E$AA.c)
 *     ?OnRegionInvoked@GuidedSnapAssistViewController@@QE$AAAXPE$AAVObject@Platform@@PE$AAVSnapAssistRegionViewModel@Switcher@Experiences@ComposableShell@WindowsInternal@@@Z @ 0x180697BE0 (-OnRegionInvoked@GuidedSnapAssistViewController@@QE$AAAXPE$AAVObject@Platform@@PE$AAVSnapAssistR.c)
 * Callees:
 *     ?SnapAssistDismissed@SnapAssistState@@QEAA?AW4SnapAssistStateTransition@@XZ @ 0x180698C58 (-SnapAssistDismissed@SnapAssistState@@QEAA-AW4SnapAssistStateTransition@@XZ.c)
 */

__int64 __fastcall _OnLightDismiss__QIXamlSwitcherWindowInteractionEvents__GuidedSnapAssistViewController__UE_AAAXXZ(
        __int64 a1)
{
  SnapAssistState::SnapAssistDismissed(*(_QWORD *)(a1 + 384));
  return GuidedSnapAssistViewController::DismissViewAnimated(a1, 1);
}
