/*
 * XREFs of ??$?0VXamlAltTabViewController@@P8IXamlMultitaskingViewController@@E$AAAXPE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@Z@ItemInvokedEventHandler@Switcher@Experiences@ComposableShell@WindowsInternal@@QE$AAA@PE$AAVXamlAltTabViewController@@P8IXamlMultitaskingViewController@@E$AAAXPE$AAUISwitchItem@Multitasking@3Internal@Windows@@@ZW4CallbackContext@Platform@@_N@Z @ 0x18009EEC4
 * Callers:
 *     ?RegisterForEvents@?QXamlBaseViewController@@XamlAltTabViewController@@UE$AAAXAEBUXamlExplorerHostWindow@XamlExplorerHost@Shell@Internal@Windows@winrt@@PE$AAVSwitcherControlBase@Switcher@Experiences@ComposableShell@WindowsInternal@@PE$AAUISwitcherViewModel@Switcher@Experiences@ComposableShell@WindowsInternal@@@Z @ 0x18009D1D0 (-RegisterForEvents@-QXamlBaseViewController@@XamlAltTabViewController@@UE$AAAXAEBUXamlExplorerHo.c)
 * Callees:
 *     ??0__abi_FTMWeakRefData@@QEAA@PE$AAVObject@Platform@@W4CallbackContext@2@@Z @ 0x180058228 (--0__abi_FTMWeakRefData@@QEAA@PE$AAVObject@Platform@@W4CallbackContext@2@@Z.c)
 *     ??$__abi_winrt_ptrto_delegate_dtor@VItemContextMenuInvokedHandler@Switcher@Experiences@ComposableShell@WindowsInternal@@@@YAXPE$ADVItemContextMenuInvokedHandler@Switcher@Experiences@ComposableShell@WindowsInternal@@@Z @ 0x18009D964 (--$__abi_winrt_ptrto_delegate_dtor@VItemContextMenuInvokedHandler@Switcher@Experiences@Composabl.c)
 *     ?__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z @ 0x18009D9A4 (-__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z.c)
 *     ?GetWeakReference@IWeakReferenceSource@Details@Platform@@UE$AAAPE$AAUIWeakReference@23@XZ @ 0x18009E6AC (-GetWeakReference@IWeakReferenceSource@Details@Platform@@UE$AAAPE$AAUIWeakReference@23@XZ.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall WindowsInternal::ComposableShell::Experiences::Switcher::ItemInvokedEventHandler::ItemInvokedEventHandler(
        __int64 a1,
        __int64 a2)
{
  _QWORD *v4; // rdi
  __int64 WeakReference; // [rsp+20h] [rbp-38h]
  __int128 v7; // [rsp+28h] [rbp-30h]

  Platform::Delegate::Delegate(a1 + 16);
  *(_QWORD *)a1 = &WindowsInternal::ComposableShell::Experiences::Switcher::ItemInvokedEventHandler::`vftable'{for `__abi_IUnknown'};
  *(_QWORD *)(a1 + 8) = &WindowsInternal::ComposableShell::Experiences::Switcher::ItemInvokedEventHandler::`vftable'{for `Platform::Object'};
  *(_QWORD *)(a1 + 16) = &WindowsInternal::ComposableShell::Experiences::Switcher::ItemInvokedEventHandler::`vftable';
  __abi_FTMWeakRefData::__abi_FTMWeakRefData(a1 + 24);
  v4 = (_QWORD *)(a1 + 40);
  *(_QWORD *)(a1 + 296) = a1 + 40;
  if ( a1 != -40 )
  {
    *(_QWORD *)&v7 = Platform::IDisposable::_Dispose_;
    DWORD2(v7) = 16;
    *v4 = &`WindowsInternal::ComposableShell::Experiences::Switcher::ItemInvokedEventHandler::ItemInvokedEventHandler'::`2'::__abi_PointerToMemberWeakRefCapture::`vftable';
    WeakReference = Platform::Details::IWeakReferenceSource::GetWeakReference((a2 + 152) & -(__int64)(a2 != 0));
    *(_QWORD *)(a1 + 48) = __abi_winrt_ptr_ctor(WeakReference);
    __abi_winrt_ptrto_delegate_dtor<WindowsInternal::ComposableShell::Experiences::Switcher::ItemContextMenuInvokedHandler>(WeakReference);
    *(_OWORD *)(a1 + 56) = v7;
  }
  *(_QWORD *)(a1 + 296) = v4;
  return a1;
}
