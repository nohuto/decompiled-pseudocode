/*
 * XREFs of ??1?$pair@V?$com_ptr_t@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@V?$com_ptr_t@UIWindowingEnvironmentSettings@ViewManagerInterop@Shell@Internal@Windows@@Uerr_exception_policy@wil@@@2@@std@@QEAA@XZ @ 0x1800F12C0
 * Callers:
 *     ??$_Destroy_range@V?$allocator@UPendingActivationResumeData@UwpWindowEventDispatcher@@@std@@@std@@YAXPEAUPendingActivationResumeData@UwpWindowEventDispatcher@@QEAU12@AEAV?$allocator@UPendingActivationResumeData@UwpWindowEventDispatcher@@@0@@Z @ 0x180064000 (--$_Destroy_range@V-$allocator@UPendingActivationResumeData@UwpWindowEventDispatcher@@@std@@@std.c)
 *     ??1?$_Tree_temp_node@V?$allocator@U?$_Tree_node@U?$pair@$$CBV?$com_ptr_t@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@V?$com_ptr_t@UIWindowingEnvironmentSettings@ViewManagerInterop@Shell@Internal@Windows@@Uerr_exception_policy@wil@@@2@@std@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x1800CF520 (--1-$_Tree_temp_node@V-$allocator@U-$_Tree_node@U-$pair@$$CBV-$com_ptr_t@UIViewWrapper@ViewManag.c)
 *     ?RemovePendingActivationResume@UwpWindowEventDispatcher@@AEAAXK@Z @ 0x1800F1304 (-RemovePendingActivationResume@UwpWindowEventDispatcher@@AEAAXK@Z.c)
 *     ??$_Freenode@V?$allocator@U?$_Tree_node@U?$pair@$$CBV?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@V?$com_ptr_t@UIRootSwitchItem@Multitasking@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@2@@std@@PEAX@std@@@std@@@?$_Tree_node@U?$pair@$$CBV?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@V?$com_ptr_t@UIRootSwitchItem@Multitasking@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@2@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_Tree_node@U?$pair@$$CBV?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@V?$com_ptr_t@UIRootSwitchItem@Multitasking@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@2@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x1800F1754 (--$_Freenode@V-$allocator@U-$_Tree_node@U-$pair@$$CBV-$com_ptr_t@UIApplicationView@@Uerr_excepti.c)
 *     ?_Change_array@?$vector@UPendingActivationResumeData@UwpWindowEventDispatcher@@V?$allocator@UPendingActivationResumeData@UwpWindowEventDispatcher@@@std@@@std@@AEAAXQEAUPendingActivationResumeData@UwpWindowEventDispatcher@@_K1@Z @ 0x1801F2190 (-_Change_array@-$vector@UPendingActivationResumeData@UwpWindowEventDispatcher@@V-$allocator@UPen.c)
 *     ?ApplyWindowingEnvironmentSettingsRequested@WindowEventDispatcher@@UEAAJPEAUIAppViewApplyWindowingEnvironmentSettingsRequestedEventArgs@WindowManagement@ApplicationModel@Internal@Windows@@@Z @ 0x180417410 (-ApplyWindowingEnvironmentSettingsRequested@WindowEventDispatcher@@UEAAJPEAUIAppViewApplyWindowi.c)
 *     _UwpWindowEventDispatcher::AddPendingActivationResumeWithLock_::_1_::dtor$8 @ 0x1806D0399 (_UwpWindowEventDispatcher--AddPendingActivationResumeWithLock_--_1_--dtor$8.c)
 *     _UwpWindowEventDispatcher::ApplyWindowingEnvironmentSettingsRequested_::_1_::dtor$21 @ 0x1806D2C80 (_UwpWindowEventDispatcher--ApplyWindowingEnvironmentSettingsRequested_--_1_--dtor$21.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18004C280 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 */

void __fastcall std::pair<wil::com_ptr_t<Windows::Internal::Shell::ViewManagerInterop::IViewWrapper,wil::err_exception_policy>,wil::com_ptr_t<Windows::Internal::Shell::ViewManagerInterop::IWindowingEnvironmentSettings,wil::err_exception_policy>>::~pair<wil::com_ptr_t<Windows::Internal::Shell::ViewManagerInterop::IViewWrapper,wil::err_exception_policy>,wil::com_ptr_t<Windows::Internal::Shell::ViewManagerInterop::IWindowingEnvironmentSettings,wil::err_exception_policy>>(
        __int64 *a1)
{
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(a1 + 1);
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(a1);
}
