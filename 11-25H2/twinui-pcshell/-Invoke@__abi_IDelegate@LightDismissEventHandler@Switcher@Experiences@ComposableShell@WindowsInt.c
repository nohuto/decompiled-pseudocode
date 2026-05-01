/*
 * XREFs of ?Invoke@__abi_IDelegate@LightDismissEventHandler@Switcher@Experiences@ComposableShell@WindowsInternal@@UE$AAAXXZ @ 0x18067ACB4
 * Callers:
 *     ?Invoke@AnimationCompletedEventHandler@Switcher@Experiences@ComposableShell@WindowsInternal@@UE$AAAXXZ @ 0x180235CE0 (-Invoke@AnimationCompletedEventHandler@Switcher@Experiences@ComposableShell@WindowsInternal@@UE$.c)
 *     ?Invoke@LightDismissEventHandler@Switcher@Experiences@ComposableShell@WindowsInternal@@UE$AAAXXZ @ 0x18067AC40 (-Invoke@LightDismissEventHandler@Switcher@Experiences@ComposableShell@WindowsInternal@@UE$AAAXXZ.c)
 *     ?Invoke@BecameEmptyEventHandler@Switcher@Experiences@ComposableShell@WindowsInternal@@UE$AAAXXZ @ 0x1806894E0 (-Invoke@BecameEmptyEventHandler@Switcher@Experiences@ComposableShell@WindowsInternal@@UE$AAAXXZ.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall WindowsInternal::ComposableShell::Experiences::Switcher::LightDismissEventHandler::__abi_IDelegate::Invoke(
        __int64 a1)
{
  int v1; // eax

  v1 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 24LL))(a1);
  __abi_ThrowIfFailed(v1);
}
