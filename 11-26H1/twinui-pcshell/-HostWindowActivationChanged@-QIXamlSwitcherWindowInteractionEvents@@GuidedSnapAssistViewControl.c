/*
 * XREFs of ?HostWindowActivationChanged@?QIXamlSwitcherWindowInteractionEvents@@GuidedSnapAssistViewController@@UE$AAAX_N_K@Z @ 0x1806BEE50
 * Callers:
 *     ?HostWindowActivationChanged@?QIXamlSwitcherWindowInteractionEvents@@GuidedSnapAssistViewController@@WBI@E$AAAX_N_K@Z @ 0x1806BEE90 (-HostWindowActivationChanged@-QIXamlSwitcherWindowInteractionEvents@@GuidedSnapAssi_ea_1806BEE90.c)
 * Callees:
 *     ?DismissViewAnimated@GuidedSnapAssistViewController@@QE$AAAXW4DismissOptions@@@Z @ 0x18021CA6C (-DismissViewAnimated@GuidedSnapAssistViewController@@QE$AAAXW4DismissOptions@@@Z.c)
 *     ?SnapAssistDismissed@SnapAssistState@@QEAA?AW4SnapAssistStateTransition@@XZ @ 0x1806C06A8 (-SnapAssistDismissed@SnapAssistState@@QEAA-AW4SnapAssistStateTransition@@XZ.c)
 */

__int64 __fastcall _HostWindowActivationChanged__QIXamlSwitcherWindowInteractionEvents__GuidedSnapAssistViewController__UE_AAAX_N_K_Z(
        __int64 a1,
        char a2)
{
  __int64 result; // rax

  if ( !a2 && !*(_BYTE *)(*(_QWORD *)(a1 + 384) + 176LL) )
  {
    SnapAssistState::SnapAssistDismissed();
    return GuidedSnapAssistViewController::DismissViewAnimated(a1, 0);
  }
  return result;
}
