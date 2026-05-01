/*
 * XREFs of ?PinUnPinSwitchItemToAllDesktops@IVirtualDesktopController@Multitasking@ComposableShell@Internal@Windows@@UE$AAAXPE$AAUISwitchItem@2345@@Z @ 0x1802C69E4
 * Callers:
 *     ?HandlePinningCommand@XamlAllUpViewController@@AE$AAAXPE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@I@Z @ 0x1806B5D34 (-HandlePinningCommand@XamlAllUpViewController@@AE$AAAXPE$AAUISwitchItem@Multitasking@ComposableS.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall Windows::Internal::ComposableShell::Multitasking::IVirtualDesktopController::PinUnPinSwitchItemToAllDesktops(
        __int64 a1)
{
  int v1; // eax

  v1 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 128LL))(a1);
  __abi_ThrowIfFailed(v1);
}
