/*
 * XREFs of ??0__abi_PointerToMemberWeakRefCapture@?1???$?0VXamlAltTabViewController@@P8IXamlSwitcherWindowInteractionEvents@@E$AAAXXZ@BecameEmptyEventHandler@Switcher@Experiences@ComposableShell@WindowsInternal@@QE$AAA@PE$AAVXamlAltTabViewController@@P8IXamlSwitcherWindowInteractionEvents@@E$AAAXXZW4CallbackContext@Platform@@_N@Z@QEAA@0P86@E$AAAXXZ@Z @ 0x180689210
 * Callers:
 *     ??$?0VXamlAltTabViewController@@P8IXamlSwitcherWindowInteractionEvents@@E$AAAXXZ@BecameEmptyEventHandler@Switcher@Experiences@ComposableShell@WindowsInternal@@QE$AAA@PE$AAVXamlAltTabViewController@@P8IXamlSwitcherWindowInteractionEvents@@E$AAAXXZW4CallbackContext@Platform@@_N@Z @ 0x1802BB430 (--$-0VXamlAltTabViewController@@P8IXamlSwitcherWindowInteractionEvents@@E$AAAXXZ@BecameEmptyEven.c)
 * Callees:
 *     ?__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z @ 0x180021A7C (-__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z.c)
 *     ??$__abi_winrt_ptrto_delegate_dtor@VItemContextMenuInvokedHandler@Switcher@Experiences@ComposableShell@WindowsInternal@@@@YAXPE$ADVItemContextMenuInvokedHandler@Switcher@Experiences@ComposableShell@WindowsInternal@@@Z @ 0x180021D28 (--$__abi_winrt_ptrto_delegate_dtor@VItemContextMenuInvokedHandler@Switcher@Experiences@Composabl.c)
 *     ?GetWeakReference@IWeakReferenceSource@Details@Platform@@UE$AAAPE$AAUIWeakReference@23@XZ @ 0x1801054E4 (-GetWeakReference@IWeakReferenceSource@Details@Platform@@UE$AAAPE$AAUIWeakReference@23@XZ.c)
 */

__int64 __fastcall `WindowsInternal::ComposableShell::Experiences::Switcher::BecameEmptyEventHandler::BecameEmptyEventHandler'::`2'::__abi_PointerToMemberWeakRefCapture::__abi_PointerToMemberWeakRefCapture(
        __int64 a1,
        __int64 a2,
        _OWORD *a3)
{
  __int64 WeakReference; // [rsp+38h] [rbp+10h]

  *(_QWORD *)a1 = &`WindowsInternal::ComposableShell::Experiences::Switcher::BecameEmptyEventHandler::BecameEmptyEventHandler'::`2'::__abi_PointerToMemberWeakRefCapture::`vftable';
  WeakReference = Platform::Details::IWeakReferenceSource::GetWeakReference((a2 + 152) & -(__int64)(a2 != 0));
  *(_QWORD *)(a1 + 8) = __abi_winrt_ptr_ctor(WeakReference);
  __abi_winrt_ptrto_delegate_dtor<WindowsInternal::ComposableShell::Experiences::Switcher::ItemContextMenuInvokedHandler>(WeakReference);
  *(_OWORD *)(a1 + 16) = *a3;
  return a1;
}
