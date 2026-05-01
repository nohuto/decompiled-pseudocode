/*
 * XREFs of ??0__abi_PointerToMemberWeakRefCapture@?1???$?0UIXamlMultitaskingViewController@@P80@E$AAAXPE$AAVSwitchItemContextMenuArgs@Switcher@Experiences@ComposableShell@WindowsInternal@@PE$AAUISwitcherViewModel@2345@@Z@ItemContextMenuRequestedHandler@Switcher@Experiences@ComposableShell@WindowsInternal@@QE$AAA@PE$AAUIXamlMultitaskingViewController@@P86@E$AAAXPE$AAVSwitchItemContextMenuArgs@2345@PE$AAUISwitcherViewModel@2345@@ZW4CallbackContext@Platform@@_N@Z@QEAA@03@Z @ 0x1806A0510
 * Callers:
 *     ??$?0UIXamlMultitaskingViewController@@P80@E$AAAXPE$AAVSwitchItemContextMenuArgs@Switcher@Experiences@ComposableShell@WindowsInternal@@PE$AAUISwitcherViewModel@2345@@Z@ItemContextMenuRequestedHandler@Switcher@Experiences@ComposableShell@WindowsInternal@@QE$AAA@PE$AAUIXamlMultitaskingViewController@@P85@E$AAAXPE$AAVSwitchItemContextMenuArgs@1234@PE$AAUISwitcherViewModel@1234@@ZW4CallbackContext@Platform@@_N@Z @ 0x1802B2128 (--$-0UIXamlMultitaskingViewController@@P80@E$AAAXPE$AAVSwitchItemContextMenuArgs@Switcher@Experi.c)
 * Callees:
 *     ??$__abi_winrt_ptrto_delegate_dtor@VItemContextMenuInvokedHandler@Switcher@Experiences@ComposableShell@WindowsInternal@@@@YAXPE$ADVItemContextMenuInvokedHandler@Switcher@Experiences@ComposableShell@WindowsInternal@@@Z @ 0x18009D964 (--$__abi_winrt_ptrto_delegate_dtor@VItemContextMenuInvokedHandler@Switcher@Experiences@Composabl.c)
 *     ?__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z @ 0x18009D9A4 (-__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z.c)
 *     ?GetWeakReference@IWeakReferenceSource@Details@Platform@@UE$AAAPE$AAUIWeakReference@23@XZ @ 0x18009E6AC (-GetWeakReference@IWeakReferenceSource@Details@Platform@@UE$AAAPE$AAUIWeakReference@23@XZ.c)
 *     ?__abi_winrt_cast_to@@YAPE$AAVObject@Platform@@_NPE$AAV12@AEBU_GUID@@@Z @ 0x1801A2AD0 (-__abi_winrt_cast_to@@YAPE$AAVObject@Platform@@_NPE$AAV12@AEBU_GUID@@@Z.c)
 */

_QWORD *__fastcall `WindowsInternal::ComposableShell::Experiences::Switcher::ItemContextMenuRequestedHandler::ItemContextMenuRequestedHandler'::`2'::__abi_PointerToMemberWeakRefCapture::__abi_PointerToMemberWeakRefCapture(
        _QWORD *a1,
        __int64 (__fastcall ***a2)(_QWORD, __int64, __int64 *))
{
  __int64 v4; // [rsp+50h] [rbp+18h]
  __int64 WeakReference; // [rsp+58h] [rbp+20h]

  *a1 = &`WindowsInternal::ComposableShell::Experiences::Switcher::ItemContextMenuRequestedHandler::ItemContextMenuRequestedHandler'::`2'::__abi_PointerToMemberWeakRefCapture::`vftable';
  v4 = __abi_winrt_cast_to(0, a2, (__int64)&_uuidof__AUIWeakReferenceSource_Details_Platform__);
  WeakReference = Platform::Details::IWeakReferenceSource::GetWeakReference(v4);
  a1[1] = __abi_winrt_ptr_ctor(WeakReference);
  __abi_winrt_ptrto_delegate_dtor<WindowsInternal::ComposableShell::Experiences::Switcher::ItemContextMenuInvokedHandler>(WeakReference);
  __abi_winrt_ptrto_delegate_dtor<WindowsInternal::ComposableShell::Experiences::Switcher::ItemContextMenuInvokedHandler>(v4);
  a1[2] = IXamlMultitaskingViewController::GetContextMenu;
  return a1;
}
