/*
 * XREFs of ?NumberOfVirtualDesktops@TaskViewFrame@@UEAAIXZ @ 0x1806BDE80
 * Callers:
 *     <none>
 * Callees:
 *     ??$__abi_winrt_ptrto_delegate_dtor@VItemContextMenuInvokedHandler@Switcher@Experiences@ComposableShell@WindowsInternal@@@@YAXPE$ADVItemContextMenuInvokedHandler@Switcher@Experiences@ComposableShell@WindowsInternal@@@Z @ 0x18009D964 (--$__abi_winrt_ptrto_delegate_dtor@VItemContextMenuInvokedHandler@Switcher@Experiences@Composabl.c)
 *     ?__abi_winrt_cast_to@@YAPE$AAVObject@Platform@@_NPE$AAV12@AEBU_GUID@@@Z @ 0x1801A2AD0 (-__abi_winrt_cast_to@@YAPE$AAVObject@Platform@@_NPE$AAV12@AEBU_GUID@@@Z.c)
 *     ?get@SwitchItem@__ISwitchItemContextMenuArgsPublicNonVirtuals@Switcher@Experiences@ComposableShell@WindowsInternal@@UE$AAAPE$AAUISwitchItem@Multitasking@5Internal@Windows@@XZ @ 0x1802BC440 (-get@SwitchItem@__ISwitchItemContextMenuArgsPublicNonVirtuals@Switcher@Experiences@ComposableShe.c)
 *     ?get@Size@IBindableVector@Interop@Xaml@UI@Windows@@UE$AAAIXZ @ 0x1806BB4A8 (-get@Size@IBindableVector@Interop@Xaml@UI@Windows@@UE$AAAIXZ.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall TaskViewFrame::NumberOfVirtualDesktops(TaskViewFrame *this)
{
  __int64 v1; // rcx
  unsigned int v2; // ebx
  __int64 (__fastcall ***v4)(_QWORD, __int64, __int64 *); // [rsp+30h] [rbp+8h]
  __int64 *v5; // [rsp+38h] [rbp+10h]

  v1 = *((_QWORD *)this + 20);
  if ( !v1 )
    return 0LL;
  v4 = (__int64 (__fastcall ***)(_QWORD, __int64, __int64 *))WindowsInternal::ComposableShell::Experiences::Switcher::__ISwitchItemContextMenuArgsPublicNonVirtuals::SwitchItem::get(v1);
  v5 = (__int64 *)__abi_winrt_cast_to(0, v4, (__int64)&_uuidof__AUIBindableVector_Interop_Xaml_UI_Windows__);
  v2 = Windows::UI::Xaml::Interop::IBindableVector::Size::get(v5) - 1;
  __abi_winrt_ptrto_delegate_dtor<WindowsInternal::ComposableShell::Experiences::Switcher::ItemContextMenuInvokedHandler>((__int64)v5);
  __abi_winrt_ptrto_delegate_dtor<WindowsInternal::ComposableShell::Experiences::Switcher::ItemContextMenuInvokedHandler>((__int64)v4);
  return v2;
}
