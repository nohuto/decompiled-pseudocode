/*
 * XREFs of ?get@Id@__ISnapAssistRegionViewModelPublicNonVirtuals@Switcher@Experiences@ComposableShell@WindowsInternal@@UE$AAA_KXZ @ 0x1806BFB90
 * Callers:
 *     ?OnRegionInvoked@GuidedSnapAssistViewController@@QE$AAAXPE$AAVObject@Platform@@PE$AAVSnapAssistRegionViewModel@Switcher@Experiences@ComposableShell@WindowsInternal@@@Z @ 0x1806BF380 (-OnRegionInvoked@GuidedSnapAssistViewController@@QE$AAAXPE$AAVObject@Platform@@PE$AAVSnapAssistR.c)
 * Callees:
 *     ?__abi_ThrowIfFailed@@YAXJ@Z @ 0x18009D988 (-__abi_ThrowIfFailed@@YAXJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall WindowsInternal::ComposableShell::Experiences::Switcher::__ISnapAssistRegionViewModelPublicNonVirtuals::Id::get(
        __int64 *a1)
{
  __int64 v1; // rax
  int v2; // eax
  __int64 v4; // [rsp+30h] [rbp+8h] BYREF

  v1 = *a1;
  v4 = 0LL;
  v2 = (*(__int64 (__fastcall **)(__int64 *, __int64 *))(v1 + 56))(a1, &v4);
  __abi_ThrowIfFailed(v2);
  return v4;
}
