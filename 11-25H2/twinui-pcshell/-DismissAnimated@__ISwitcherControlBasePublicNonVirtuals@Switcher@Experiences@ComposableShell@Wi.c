/*
 * XREFs of ?DismissAnimated@__ISwitcherControlBasePublicNonVirtuals@Switcher@Experiences@ComposableShell@WindowsInternal@@UE$AAAXPE$AAVAnimationCompletedEventHandler@2345@@Z @ 0x18029EA40
 * Callers:
 *     ?AnimateDismissView@XamlSnapAssistViewHost@@UEAAJXZ @ 0x18029E810 (-AnimateDismissView@XamlSnapAssistViewHost@@UEAAJXZ.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall WindowsInternal::ComposableShell::Experiences::Switcher::__ISwitcherControlBasePublicNonVirtuals::DismissAnimated(
        __int64 a1)
{
  int v1; // eax

  v1 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 344LL))(a1);
  __abi_ThrowIfFailed(v1);
}
