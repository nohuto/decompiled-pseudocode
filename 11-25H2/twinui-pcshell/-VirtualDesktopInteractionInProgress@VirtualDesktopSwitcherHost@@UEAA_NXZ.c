/*
 * XREFs of ?VirtualDesktopInteractionInProgress@VirtualDesktopSwitcherHost@@UEAA_NXZ @ 0x1806887F0
 * Callers:
 *     <none>
 * Callees:
 *     ?VirtualDesktopShowingContextMenu@__IVirtualDesktopBarElementPublicNonVirtuals@Switcher@Experiences@ComposableShell@WindowsInternal@@UE$AAA_NXZ @ 0x180688848 (-VirtualDesktopShowingContextMenu@__IVirtualDesktopBarElementPublicNonVirtuals@Switcher@Experien.c)
 *     ?get@VirtualDesktopRenameInProgress@__IVirtualDesktopBarElementViewModelPublicNonVirtuals@Switcher@Experiences@ComposableShell@WindowsInternal@@UE$AAA_NXZ @ 0x180688D60 (-get@VirtualDesktopRenameInProgress@__IVirtualDesktopBarElementViewModelPublicNonVirtuals@Switch.c)
 */

char __fastcall VirtualDesktopSwitcherHost::VirtualDesktopInteractionInProgress(VirtualDesktopSwitcherHost *this)
{
  char v1; // bl

  v1 = 0;
  if ( !*((_QWORD *)this + 5) || !*((_QWORD *)this + 4) )
    return 0;
  if ( (unsigned __int8)WindowsInternal::ComposableShell::Experiences::Switcher::__IVirtualDesktopBarElementPublicNonVirtuals::VirtualDesktopShowingContextMenu()
    || *((_BYTE *)this + 322)
    || (unsigned __int8)WindowsInternal::ComposableShell::Experiences::Switcher::__IVirtualDesktopBarElementViewModelPublicNonVirtuals::VirtualDesktopRenameInProgress::get(*((_QWORD *)this + 5)) )
  {
    return 1;
  }
  return v1;
}
