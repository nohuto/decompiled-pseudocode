/*
 * XREFs of ?get@IsClosable@ISwitchItem@Multitasking@ComposableShell@Internal@Windows@@UE$AAA_NXZ @ 0x1806BB4DC
 * Callers:
 *     ?GetContextMenu@?QIXamlMultitaskingViewController@@XamlAllUpViewController@@UE$AAAXPE$AAVSwitchItemContextMenuArgs@Switcher@Experiences@ComposableShell@WindowsInternal@@PE$AAUISwitcherViewModel@4567@@Z @ 0x1806B4DE8 (-GetContextMenu@-QIXamlMultitaskingViewController@@XamlAllUpViewController@@UE$AAAXPE$AAVSwitchI.c)
 * Callees:
 *     ?__abi_ThrowIfFailed@@YAXJ@Z @ 0x18009D988 (-__abi_ThrowIfFailed@@YAXJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

char __fastcall Windows::Internal::ComposableShell::Multitasking::ISwitchItem::IsClosable::get(__int64 *a1)
{
  __int64 v1; // rax
  int v2; // eax
  char v4; // [rsp+30h] [rbp+8h] BYREF

  v1 = *a1;
  v4 = 0;
  v2 = (*(__int64 (__fastcall **)(__int64 *, char *))(v1 + 88))(a1, &v4);
  __abi_ThrowIfFailed(v2);
  return v4;
}
