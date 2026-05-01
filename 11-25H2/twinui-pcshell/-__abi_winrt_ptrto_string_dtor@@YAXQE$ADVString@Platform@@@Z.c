/*
 * XREFs of ?__abi_winrt_ptrto_string_dtor@@YAXQE$ADVString@Platform@@@Z @ 0x1802BC454
 * Callers:
 *     _XamlAllUpViewController::CreateVirtualDesktopContextMenuItems_::_1_::dtor$10 @ 0x1806B27BB (_XamlAllUpViewController--CreateVirtualDesktopContextMenuItems_--_1_--dtor$10.c)
 *     _Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop::Name::get_::_1_::dtor$0 @ 0x1806B27CD (_Windows--Internal--ComposableShell--Multitasking--IVirtualDesktop--Name--get_--_1_--dtor$0.c)
 *     _XamlAllUpViewController::[IXamlMultitaskingViewController]::GetContextMenu_::_1_::dtor$9 @ 0x1806B5809 (_XamlAllUpViewController--[IXamlMultitaskingViewController]--GetContextMenu_--_1_--dtor$9.c)
 *     _XamlGamingTaskViewHost::CreateGamingTaskBarViewModelAsync$_ResumeCoro$1_::_1_::dtor$4 @ 0x1806DDA64 (_XamlGamingTaskViewHost--CreateGamingTaskBarViewModelAsync$_ResumeCoro$1_--_1_--dtor$4.c)
 *     _VirtualDesktopSwitcherHost::CreateXaml_::_1_::dtor$3 @ 0x1806DE844 (_VirtualDesktopSwitcherHost--CreateXaml_--_1_--dtor$3.c)
 *     _XamlAllUpViewController::CreateVirtualDesktopContextMenuItems_::_1_::dtor$20 @ 0x1806DE87D (_XamlAllUpViewController--CreateVirtualDesktopContextMenuItems_--_1_--dtor$20.c)
 *     _VirtualDesktopSwitcherHost::CreateXaml_::_1_::dtor$11 @ 0x1806DE8DA (_VirtualDesktopSwitcherHost--CreateXaml_--_1_--dtor$11.c)
 *     _TaskViewFrame::CreateTaskViewTimelineControl_::_1_::dtor$14 @ 0x1806DE90D (_TaskViewFrame--CreateTaskViewTimelineControl_--_1_--dtor$14.c)
 *     _XamlAllUpViewController::[IXamlMultitaskingViewController]::GetContextMenu_::_1_::dtor$10 @ 0x1806DF08C (_XamlAllUpViewController--[IXamlMultitaskingViewController]--GetContextMenu_--_1_--dtor$10.c)
 *     _XamlAllUpViewController::GetResourceString_::_1_::dtor$1 @ 0x1806DF0FB (_XamlAllUpViewController--GetResourceString_--_1_--dtor$1.c)
 *     _XamlAllUpViewController::GetTabletModeContextMenuItemString_::_1_::dtor$3 @ 0x1806DF158 (_XamlAllUpViewController--GetTabletModeContextMenuItemString_--_1_--dtor$3.c)
 *     _TaskViewFrame::CreateTaskViewTimelineControl_::_1_::dtor$19 @ 0x1806DF578 (_TaskViewFrame--CreateTaskViewTimelineControl_--_1_--dtor$19.c)
 *     _TaskViewFrame::CreateTaskViewTimelineControl_::_1_::dtor$8 @ 0x1806DF5B4 (_TaskViewFrame--CreateTaskViewTimelineControl_--_1_--dtor$8.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
HRESULT __stdcall __abi_winrt_ptrto_string_dtor(HSTRING string)
{
  return WindowsDeleteString_0(string);
}
