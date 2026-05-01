/*
 * XREFs of ?DismissAnimated@__ISwitcherControlBasePublicNonVirtuals@Switcher@Experiences@ComposableShell@WindowsInternal@@UE$AAAXPE$AAVAnimationCompletedEventHandler@2345@@Z @ 0x1802973B0
 * Callers:
 *     ?AnimateDismissView@XamlSnapAssistViewHost@@UEAAJXZ @ 0x180297180 (-AnimateDismissView@XamlSnapAssistViewHost@@UEAAJXZ.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall WindowsInternal::ComposableShell::Experiences::Switcher::__ISwitcherControlBasePublicNonVirtuals::DismissAnimated(
        __int64 a1)
{
  int v1; // eax

  v1 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 344LL))(a1);
  __abi_ThrowIfFailed(v1);
}
