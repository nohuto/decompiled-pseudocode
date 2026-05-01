/*
 * XREFs of ??$?0VXamlAltTabViewController@@P8IXamlSwitcherWindowInteractionEvents@@E$AAAXXZ@BecameEmptyEventHandler@Switcher@Experiences@ComposableShell@WindowsInternal@@QE$AAA@PE$AAVXamlAltTabViewController@@P8IXamlSwitcherWindowInteractionEvents@@E$AAAXXZW4CallbackContext@Platform@@_N@Z @ 0x1802BB430
 * Callers:
 *     ?RegisterForEvents@?QXamlBaseViewController@@XamlAltTabViewController@@UE$AAAXAEBUXamlExplorerHostWindow@XamlExplorerHost@Shell@Internal@Windows@winrt@@PE$AAVSwitcherControlBase@Switcher@Experiences@ComposableShell@WindowsInternal@@PE$AAUISwitcherViewModel@Switcher@Experiences@ComposableShell@WindowsInternal@@@Z @ 0x180104998 (-RegisterForEvents@-QXamlBaseViewController@@XamlAltTabViewController@@UE$AAAXAEBUXamlExplorerHo.c)
 * Callees:
 *     ??0__abi_FTMWeakRefData@@QEAA@PE$AAVObject@Platform@@W4CallbackContext@2@@Z @ 0x1800F9624 (--0__abi_FTMWeakRefData@@QEAA@PE$AAVObject@Platform@@W4CallbackContext@2@@Z.c)
 *     ??0__abi_PointerToMemberWeakRefCapture@?1???$?0VXamlAltTabViewController@@P8IXamlSwitcherWindowInteractionEvents@@E$AAAXXZ@BecameEmptyEventHandler@Switcher@Experiences@ComposableShell@WindowsInternal@@QE$AAA@PE$AAVXamlAltTabViewController@@P8IXamlSwitcherWindowInteractionEvents@@E$AAAXXZW4CallbackContext@Platform@@_N@Z@QEAA@0P86@E$AAAXXZ@Z @ 0x180689210 (--0__abi_PointerToMemberWeakRefCapture@-1---$-0VXamlAltTabViewController@@P8IXamlSw_ea_180689210.c)
 */

_QWORD *__fastcall WindowsInternal::ComposableShell::Experiences::Switcher::BecameEmptyEventHandler::BecameEmptyEventHandler(
        _QWORD *a1,
        __int64 a2)
{
  __int64 v4; // rax
  __int64 (__fastcall *v6)(); // [rsp+20h] [rbp-18h] BYREF
  int v7; // [rsp+28h] [rbp-10h]

  Platform::Delegate::Delegate(a1 + 2);
  *a1 = &WindowsInternal::ComposableShell::Experiences::Switcher::BecameEmptyEventHandler::`vftable'{for `__abi_IUnknown'};
  a1[1] = &WindowsInternal::ComposableShell::Experiences::Switcher::BecameEmptyEventHandler::`vftable'{for `Platform::Object'};
  a1[2] = &WindowsInternal::ComposableShell::Experiences::Switcher::BecameEmptyEventHandler::`vftable';
  __abi_FTMWeakRefData::__abi_FTMWeakRefData((__int64)(a1 + 3));
  a1[37] = a1 + 5;
  v4 = 0LL;
  if ( a1 != (_QWORD *)-40LL )
  {
    v6 = IXamlSwitcherWindowInteractionEvents::OnLightDismiss;
    v7 = 24;
    v4 = `WindowsInternal::ComposableShell::Experiences::Switcher::BecameEmptyEventHandler::BecameEmptyEventHandler'::`2'::__abi_PointerToMemberWeakRefCapture::__abi_PointerToMemberWeakRefCapture(
           a1 + 5,
           a2,
           &v6);
  }
  a1[37] = v4;
  return a1;
}
