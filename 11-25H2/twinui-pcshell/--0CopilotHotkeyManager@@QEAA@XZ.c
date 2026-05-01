/*
 * XREFs of ??0CopilotHotkeyManager@@QEAA@XZ @ 0x1805FD9D0
 * Callers:
 *     ??0?$heap_implements@V?$module_count_wrapper@VCopilotHotkeyManager@@@details@wil@@@impl@winrt@@QEAA@XZ @ 0x1805FD57C (--0-$heap_implements@V-$module_count_wrapper@VCopilotHotkeyManager@@@details@wil@@@impl@winrt@@Q.c)
 * Callees:
 *     ??0immersive_shell_component@winrt@@QEAA@XZ @ 0x180151C9C (--0immersive_shell_component@winrt@@QEAA@XZ.c)
 *     ??$register_service_information@$$CBU_GUID@@@immersive_shell_component@winrt@@IEAAXAEBU_GUID@@@Z @ 0x1801522D0 (--$register_service_information@$$CBU_GUID@@@immersive_shell_component@winrt@@IEAAXAEBU_GUID@@@Z.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=12
CopilotHotkeyManager *__fastcall CopilotHotkeyManager::CopilotHotkeyManager(CopilotHotkeyManager *this, __int64 a2)
{
  RTL_SRWLOCK *v3; // r9

  *(_QWORD *)this = &Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::IBaseExperienceManager *,Windows::Internal::Shell::Experience::IVisibilityChangedEventArgs *>::`vftable';
  *((_QWORD *)this + 1) = &Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::IBaseExperienceManager *,Windows::Internal::Shell::Experience::IVisibilityChangedEventArgs *>::`vftable';
  winrt::immersive_shell_component::immersive_shell_component((CopilotHotkeyManager *)((char *)this + 16), a2);
  *((_QWORD *)this + 14) = 0LL;
  *(_QWORD *)this = &wil::details::module_count_wrapper<CopilotHotkeyManager>::`vftable'{for `winrt::impl::producer_convert<CopilotHotkeyManager,IImmersiveWindowMessageNotification,void>'};
  *((_QWORD *)this + 1) = &CopilotHotkeyManager::`vftable'{for `winrt::impl::producer_convert<CopilotHotkeyManager,IApplicationViewChangeListener,void>'};
  v3->Ptr = &winrt::impl::heap_implements<wil::details::module_count_wrapper<CopilotHotkeyManager>>::`vftable'{for `winrt::impl::producer_convert<winrt::immersive_shell_component,IObjectWithSite,void>'};
  *((_QWORD *)this + 3) = &winrt::impl::heap_implements<TouchGestureComponent>::`vftable'{for `winrt::impl::producer_convert<winrt::immersive_shell_component,IServiceProvider,void>'};
  *((_QWORD *)this + 4) = &TouchGestureComponent::`vftable'{for `winrt::impl::producer_convert<winrt::immersive_shell_component,IImmersiveShellComponent,void>'};
  *((_QWORD *)this + 6) = &CopilotHotkeyManager::`vftable'{for `winrt::implements<CopilotHotkeyManager,winrt::immersive_shell_component,IImmersiveWindowMessageNotification,IApplicationViewChangeListener>'};
  *((_QWORD *)this + 13) = &CopilotHotkeyManager::`vftable'{for `CWRLImpWndProc<CopilotHotkeyManager>'};
  *((_QWORD *)this + 15) = 0LL;
  *((_QWORD *)this + 16) = 0LL;
  *((_QWORD *)this + 17) = 0LL;
  *((_QWORD *)this + 18) = 0LL;
  *((_BYTE *)this + 153) = 0;
  *((_QWORD *)this + 20) = 0LL;
  *((_QWORD *)this + 21) = 0LL;
  *((_DWORD *)this + 44) = 16842752;
  *((_QWORD *)this + 23) = 0LL;
  *((_OWORD *)this + 12) = 0LL;
  *((_QWORD *)this + 26) = 0LL;
  *((_QWORD *)this + 27) = 7LL;
  *((_WORD *)this + 96) = 0;
  *((_OWORD *)this + 14) = 0LL;
  *((_QWORD *)this + 30) = 0LL;
  *((_QWORD *)this + 31) = 7LL;
  *((_WORD *)this + 112) = 0;
  *((_OWORD *)this + 16) = 0LL;
  *((_QWORD *)this + 34) = 0LL;
  *((_QWORD *)this + 35) = 7LL;
  *((_WORD *)this + 128) = 0;
  *(_OWORD *)((char *)this + 296) = 0LL;
  *((_QWORD *)this + 39) = 0LL;
  *((_QWORD *)this + 40) = 7LL;
  *((_WORD *)this + 148) = 0;
  *((_OWORD *)this + 21) = 0LL;
  *((_QWORD *)this + 44) = 0LL;
  *((_QWORD *)this + 45) = 7LL;
  *((_WORD *)this + 168) = 0;
  *((_DWORD *)this + 94) = 0;
  *((_OWORD *)this + 24) = 0LL;
  *((_QWORD *)this + 50) = 0LL;
  *((_QWORD *)this + 51) = 7LL;
  *((_WORD *)this + 192) = 0;
  *((_QWORD *)this + 54) = 0LL;
  *((_QWORD *)this + 56) = 0LL;
  *((_QWORD *)this + 57) = 0LL;
  *((_QWORD *)this + 58) = 0LL;
  *((_QWORD *)this + 59) = 0LL;
  *((_QWORD *)this + 60) = 0LL;
  winrt::immersive_shell_component::register_service_information<_GUID const>(v3, &xmmword_180795190);
  return this;
}
