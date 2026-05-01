/*
 * XREFs of ?NumberOfItems@TaskViewFrame@@UEAAIXZ @ 0x1806BDDF0
 * Callers:
 *     <none>
 * Callees:
 *     ?get@ListViewModel@__ITaskViewTimelineViewModelPublicNonVirtuals@Switcher@Experiences@ComposableShell@WindowsInternal@@UE$AAAPE$AAVSwitchItemListViewModel@3456@XZ @ 0x18009B4D4 (-get@ListViewModel@__ITaskViewTimelineViewModelPublicNonVirtuals@Switcher@Experiences@Composable.c)
 *     ??$__abi_winrt_ptrto_delegate_dtor@VItemContextMenuInvokedHandler@Switcher@Experiences@ComposableShell@WindowsInternal@@@@YAXPE$ADVItemContextMenuInvokedHandler@Switcher@Experiences@ComposableShell@WindowsInternal@@@Z @ 0x18009D964 (--$__abi_winrt_ptrto_delegate_dtor@VItemContextMenuInvokedHandler@Switcher@Experiences@Composabl.c)
 *     ?__abi_winrt_cast_to@@YAPE$AAVObject@Platform@@_NPE$AAV12@AEBU_GUID@@@Z @ 0x1801A2AD0 (-__abi_winrt_cast_to@@YAPE$AAVObject@Platform@@_NPE$AAV12@AEBU_GUID@@@Z.c)
 *     ?get@Size@IBindableVector@Interop@Xaml@UI@Windows@@UE$AAAIXZ @ 0x1806BB4A8 (-get@Size@IBindableVector@Interop@Xaml@UI@Windows@@UE$AAAIXZ.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall TaskViewFrame::NumberOfItems(TaskViewFrame *this)
{
  __int64 v1; // rcx
  unsigned int v2; // edi
  __int64 v4; // [rsp+40h] [rbp+8h]
  __int64 (__fastcall ***v5)(_QWORD, __int64, __int64 *); // [rsp+48h] [rbp+10h]
  __int64 *v6; // [rsp+50h] [rbp+18h]

  v1 = *((_QWORD *)this + 19);
  if ( !v1 )
    return 0LL;
  v4 = WindowsInternal::ComposableShell::Experiences::Switcher::__ITaskViewTimelineViewModelPublicNonVirtuals::ListViewModel::get(v1);
  v5 = (__int64 (__fastcall ***)(_QWORD, __int64, __int64 *))WindowsInternal::ComposableShell::Experiences::Switcher::__ITaskViewTimelineViewModelPublicNonVirtuals::ListViewModel::get(v4);
  v6 = (__int64 *)__abi_winrt_cast_to(0, v5, (__int64)&_uuidof__AUIBindableVector_Interop_Xaml_UI_Windows__);
  v2 = Windows::UI::Xaml::Interop::IBindableVector::Size::get(v6);
  __abi_winrt_ptrto_delegate_dtor<WindowsInternal::ComposableShell::Experiences::Switcher::ItemContextMenuInvokedHandler>((__int64)v6);
  __abi_winrt_ptrto_delegate_dtor<WindowsInternal::ComposableShell::Experiences::Switcher::ItemContextMenuInvokedHandler>((__int64)v5);
  __abi_winrt_ptrto_delegate_dtor<WindowsInternal::ComposableShell::Experiences::Switcher::ItemContextMenuInvokedHandler>(v4);
  return v2;
}
