/*
 * XREFs of ?add@GamingNexusChordAccessibilityPressed@ISwitcherViewModel@Switcher@Experiences@ComposableShell@WindowsInternal@@UE$AAA?AVEventRegistrationToken@Foundation@Windows@@PE$AAVGamingNexusChordAccessibilityPressedEventHandler@3456@@Z @ 0x18067D8E8
 * Callers:
 *     ?RegisterForEvents@XamlGamingTaskViewHost@@AEAAXXZ @ 0x18067B1C0 (-RegisterForEvents@XamlGamingTaskViewHost@@AEAAXXZ.c)
 * Callees:
 *     ?__abi_ThrowIfFailed@@YAXJ@Z @ 0x180021A28 (-__abi_ThrowIfFailed@@YAXJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

_QWORD *__fastcall WindowsInternal::ComposableShell::Experiences::Switcher::ISwitcherViewModel::GamingNexusChordAccessibilityPressed::add(
        __int64 a1,
        _QWORD *a2,
        __int64 a3)
{
  int v4; // eax

  *a2 = 0LL;
  v4 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD *))(*(_QWORD *)a1 + 160LL))(a1, a3, a2);
  __abi_ThrowIfFailed(v4);
  return a2;
}
