/*
 * XREFs of ?get@VirtualDesktopRenameInProgress@__IVirtualDesktopBarElementViewModelPublicNonVirtuals@Switcher@Experiences@ComposableShell@WindowsInternal@@UE$AAA_NXZ @ 0x180688D60
 * Callers:
 *     ?VirtualDesktopInteractionInProgress@VirtualDesktopSwitcherHost@@UEAA_NXZ @ 0x1806887F0 (-VirtualDesktopInteractionInProgress@VirtualDesktopSwitcherHost@@UEAA_NXZ.c)
 * Callees:
 *     ?__abi_ThrowIfFailed@@YAXJ@Z @ 0x180021A28 (-__abi_ThrowIfFailed@@YAXJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

char __fastcall WindowsInternal::ComposableShell::Experiences::Switcher::__IVirtualDesktopBarElementViewModelPublicNonVirtuals::VirtualDesktopRenameInProgress::get(
        __int64 *a1)
{
  __int64 v1; // rax
  int v2; // eax
  char v4; // [rsp+30h] [rbp+8h] BYREF

  v1 = *a1;
  v4 = 0;
  v2 = (*(__int64 (__fastcall **)(__int64 *, char *))(v1 + 232))(a1, &v4);
  __abi_ThrowIfFailed(v2);
  return v4;
}
