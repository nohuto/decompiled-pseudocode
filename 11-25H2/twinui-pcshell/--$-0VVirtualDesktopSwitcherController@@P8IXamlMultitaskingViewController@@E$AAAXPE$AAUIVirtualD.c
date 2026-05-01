/*
 * XREFs of ??$?0VVirtualDesktopSwitcherController@@P8IXamlMultitaskingViewController@@E$AAAXPE$AAUIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@0@Z@VirtualDesktopInvokedEventHandler@Switcher@Experiences@ComposableShell@WindowsInternal@@QE$AAA@PE$AAVVirtualDesktopSwitcherController@@P8IXamlMultitaskingViewController@@E$AAAXPE$AAUIVirtualDesktop@Multitasking@3Internal@Windows@@1@ZW4CallbackContext@Platform@@_N@Z @ 0x180698E80
 * Callers:
 *     ?Initialize@VirtualDesktopSwitcherController@@AE$AAAXXZ @ 0x1806991E0 (-Initialize@VirtualDesktopSwitcherController@@AE$AAAXXZ.c)
 * Callees:
 *     ?__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z @ 0x180021A7C (-__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z.c)
 *     ??$__abi_winrt_ptrto_delegate_dtor@VItemContextMenuInvokedHandler@Switcher@Experiences@ComposableShell@WindowsInternal@@@@YAXPE$ADVItemContextMenuInvokedHandler@Switcher@Experiences@ComposableShell@WindowsInternal@@@Z @ 0x180021D28 (--$__abi_winrt_ptrto_delegate_dtor@VItemContextMenuInvokedHandler@Switcher@Experiences@Composabl.c)
 *     ??0__abi_FTMWeakRefData@@QEAA@PE$AAVObject@Platform@@W4CallbackContext@2@@Z @ 0x1800F9624 (--0__abi_FTMWeakRefData@@QEAA@PE$AAVObject@Platform@@W4CallbackContext@2@@Z.c)
 *     ?GetWeakReference@IWeakReferenceSource@Details@Platform@@UE$AAAPE$AAUIWeakReference@23@XZ @ 0x1801054E4 (-GetWeakReference@IWeakReferenceSource@Details@Platform@@UE$AAAPE$AAUIWeakReference@23@XZ.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall WindowsInternal::ComposableShell::Experiences::Switcher::VirtualDesktopInvokedEventHandler::VirtualDesktopInvokedEventHandler(
        __int64 a1,
        __int64 a2)
{
  _QWORD *v4; // rdi
  __int64 WeakReference; // [rsp+20h] [rbp-38h]
  __int128 v7; // [rsp+28h] [rbp-30h]

  Platform::Delegate::Delegate(a1 + 16);
  *(_QWORD *)a1 = &WindowsInternal::ComposableShell::Experiences::Switcher::VirtualDesktopInvokedEventHandler::`vftable'{for `__abi_IUnknown'};
  *(_QWORD *)(a1 + 8) = &WindowsInternal::ComposableShell::Experiences::Switcher::VirtualDesktopInvokedEventHandler::`vftable'{for `Platform::Object'};
  *(_QWORD *)(a1 + 16) = &WindowsInternal::ComposableShell::Experiences::Switcher::VirtualDesktopInvokedEventHandler::`vftable';
  __abi_FTMWeakRefData::__abi_FTMWeakRefData(a1 + 24);
  v4 = (_QWORD *)(a1 + 40);
  *(_QWORD *)(a1 + 296) = a1 + 40;
  if ( a1 != -40 )
  {
    *(_QWORD *)&v7 = IXamlMultitaskingViewController::VirtualDesktopInvoked;
    DWORD2(v7) = 16;
    *v4 = &`WindowsInternal::ComposableShell::Experiences::Switcher::VirtualDesktopInvokedEventHandler::VirtualDesktopInvokedEventHandler'::`2'::__abi_PointerToMemberWeakRefCapture::`vftable';
    WeakReference = Platform::Details::IWeakReferenceSource::GetWeakReference((a2 + 152) & -(__int64)(a2 != 0));
    *(_QWORD *)(a1 + 48) = __abi_winrt_ptr_ctor(WeakReference);
    __abi_winrt_ptrto_delegate_dtor<WindowsInternal::ComposableShell::Experiences::Switcher::ItemContextMenuInvokedHandler>(WeakReference);
    *(_OWORD *)(a1 + 56) = v7;
  }
  *(_QWORD *)(a1 + 296) = v4;
  return a1;
}
