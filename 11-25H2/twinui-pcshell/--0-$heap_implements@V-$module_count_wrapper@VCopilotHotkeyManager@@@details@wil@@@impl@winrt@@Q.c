/*
 * XREFs of ??0?$heap_implements@V?$module_count_wrapper@VCopilotHotkeyManager@@@details@wil@@@impl@winrt@@QEAA@XZ @ 0x1805FD57C
 * Callers:
 *     ?CreateInstance@?$wrl_factory_for_winrt_com_class@VCopilotHotkeyManager@@@wil@@UEAAJPEAUIUnknown@@AEBU_GUID@@PEAPEAX@Z @ 0x1805FE9C0 (-CreateInstance@-$wrl_factory_for_winrt_com_class@VCopilotHotkeyManager@@@wil@@UEAAJPEAUIUnknown.c)
 * Callees:
 *     ??0CopilotHotkeyManager@@QEAA@XZ @ 0x1805FD9D0 (--0CopilotHotkeyManager@@QEAA@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
CopilotHotkeyManager *__fastcall winrt::impl::heap_implements<wil::details::module_count_wrapper<CopilotHotkeyManager>>::heap_implements<wil::details::module_count_wrapper<CopilotHotkeyManager>>(
        CopilotHotkeyManager *a1)
{
  CopilotHotkeyManager::CopilotHotkeyManager(a1);
  *(_QWORD *)a1 = &wil::details::module_count_wrapper<CopilotHotkeyManager>::`vftable'{for `winrt::impl::producer_convert<CopilotHotkeyManager,IImmersiveWindowMessageNotification,void>'};
  *((_QWORD *)a1 + 1) = &CopilotHotkeyManager::`vftable'{for `winrt::impl::producer_convert<CopilotHotkeyManager,IApplicationViewChangeListener,void>'};
  *((_QWORD *)a1 + 2) = &winrt::impl::heap_implements<wil::details::module_count_wrapper<CopilotHotkeyManager>>::`vftable'{for `winrt::impl::producer_convert<winrt::immersive_shell_component,IObjectWithSite,void>'};
  *((_QWORD *)a1 + 3) = &winrt::impl::heap_implements<TouchGestureComponent>::`vftable'{for `winrt::impl::producer_convert<winrt::immersive_shell_component,IServiceProvider,void>'};
  *((_QWORD *)a1 + 4) = &TouchGestureComponent::`vftable'{for `winrt::impl::producer_convert<winrt::immersive_shell_component,IImmersiveShellComponent,void>'};
  *((_QWORD *)a1 + 6) = &wil::details::module_count_wrapper<CopilotHotkeyManager>::`vftable'{for `winrt::implements<CopilotHotkeyManager,winrt::immersive_shell_component,IImmersiveWindowMessageNotification,IApplicationViewChangeListener>'};
  *((_QWORD *)a1 + 13) = &CopilotHotkeyManager::`vftable'{for `CWRLImpWndProc<CopilotHotkeyManager>'};
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  *(_QWORD *)a1 = &wil::details::module_count_wrapper<CopilotHotkeyManager>::`vftable'{for `winrt::impl::producer_convert<CopilotHotkeyManager,IImmersiveWindowMessageNotification,void>'};
  *((_QWORD *)a1 + 1) = &CopilotHotkeyManager::`vftable'{for `winrt::impl::producer_convert<CopilotHotkeyManager,IApplicationViewChangeListener,void>'};
  *((_QWORD *)a1 + 2) = &winrt::impl::heap_implements<wil::details::module_count_wrapper<CopilotHotkeyManager>>::`vftable'{for `winrt::impl::producer_convert<winrt::immersive_shell_component,IObjectWithSite,void>'};
  *((_QWORD *)a1 + 3) = &winrt::impl::heap_implements<TouchGestureComponent>::`vftable'{for `winrt::impl::producer_convert<winrt::immersive_shell_component,IServiceProvider,void>'};
  *((_QWORD *)a1 + 4) = &TouchGestureComponent::`vftable'{for `winrt::impl::producer_convert<winrt::immersive_shell_component,IImmersiveShellComponent,void>'};
  *((_QWORD *)a1 + 6) = &wil::details::module_count_wrapper<CopilotHotkeyManager>::`vftable'{for `winrt::implements<CopilotHotkeyManager,winrt::immersive_shell_component,IImmersiveWindowMessageNotification,IApplicationViewChangeListener>'};
  *((_QWORD *)a1 + 13) = &CopilotHotkeyManager::`vftable'{for `CWRLImpWndProc<CopilotHotkeyManager>'};
  return a1;
}
