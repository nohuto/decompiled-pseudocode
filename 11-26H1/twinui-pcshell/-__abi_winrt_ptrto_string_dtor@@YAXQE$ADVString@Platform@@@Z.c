/*
 * XREFs of ?__abi_winrt_ptrto_string_dtor@@YAXQE$ADVString@Platform@@@Z @ 0x1802B3448
 * Callers:
 *     _XamlAllUpViewController::CreateVirtualDesktopContextMenuItems_::_1_::dtor$10 @ 0x1806D116E (_XamlAllUpViewController--CreateVirtualDesktopContextMenuItems_--_1_--dtor$10.c)
 *     _Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop::Name::get_::_1_::dtor$0 @ 0x1806D14E9 (_Windows--Internal--ComposableShell--Multitasking--IVirtualDesktop--Name--get_--_1_--dtor$0.c)
 *     _XamlAllUpViewController::[IXamlMultitaskingViewController]::GetContextMenu_::_1_::dtor$9 @ 0x1806DC7CE (_XamlAllUpViewController--[IXamlMultitaskingViewController]--GetContextMenu_--_1_--dtor$9.c)
 *     _XamlGamingTaskViewHost::CreateGamingTaskBarViewModelAsync$_ResumeCoro$1_::_1_::dtor$4 @ 0x1807065D0 (_XamlGamingTaskViewHost--CreateGamingTaskBarViewModelAsync$_ResumeCoro$1_--_1_--dtor$4.c)
 *     _VirtualDesktopSwitcherHost::CreateXaml_::_1_::dtor$3 @ 0x180707457 (_VirtualDesktopSwitcherHost--CreateXaml_--_1_--dtor$3.c)
 *     _XamlAllUpViewController::CreateVirtualDesktopContextMenuItems_::_1_::dtor$20 @ 0x180707490 (_XamlAllUpViewController--CreateVirtualDesktopContextMenuItems_--_1_--dtor$20.c)
 *     _VirtualDesktopSwitcherHost::CreateXaml_::_1_::dtor$11 @ 0x1807074ED (_VirtualDesktopSwitcherHost--CreateXaml_--_1_--dtor$11.c)
 *     _VirtualDesktopSwitcherHost::CreateXaml_::_1_::dtor$16 @ 0x180707520 (_VirtualDesktopSwitcherHost--CreateXaml_--_1_--dtor$16.c)
 *     _XamlAllUpViewController::[IXamlMultitaskingViewController]::GetContextMenu_::_1_::dtor$10 @ 0x180707C79 (_XamlAllUpViewController--[IXamlMultitaskingViewController]--GetContextMenu_--_1_--dtor$10.c)
 *     _XamlAllUpViewController::GetResourceString_::_1_::dtor$1 @ 0x180707CE8 (_XamlAllUpViewController--GetResourceString_--_1_--dtor$1.c)
 *     _XamlAllUpViewController::GetTabletModeContextMenuItemString_::_1_::dtor$3 @ 0x180707D45 (_XamlAllUpViewController--GetTabletModeContextMenuItemString_--_1_--dtor$3.c)
 *     _TaskViewFrame::CreateTaskViewTimelineControl_::_1_::dtor$19 @ 0x180708144 (_TaskViewFrame--CreateTaskViewTimelineControl_--_1_--dtor$19.c)
 *     _TaskViewFrame::CreateTaskViewTimelineControl_::_1_::dtor$8 @ 0x180708180 (_TaskViewFrame--CreateTaskViewTimelineControl_--_1_--dtor$8.c)
 *     _TaskViewFrame::CreateTaskViewTimelineControl_::_1_::dtor$14 @ 0x1807081BC (_TaskViewFrame--CreateTaskViewTimelineControl_--_1_--dtor$14.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
HRESULT __stdcall __abi_winrt_ptrto_string_dtor(HSTRING string)
{
  return WindowsDeleteString_0(string);
}
