/*
 * XREFs of ??0CopilotHotkeyManager@@QEAA@XZ @ 0x180622918
 * Callers:
 *     ??0?$heap_implements@V?$module_count_wrapper@VCopilotHotkeyManager@@@details@wil@@@impl@winrt@@QEAA@XZ @ 0x18062258C (--0-$heap_implements@V-$module_count_wrapper@VCopilotHotkeyManager@@@details@wil@@@impl@winrt@@Q.c)
 * Callees:
 *     ??0immersive_shell_component@winrt@@QEAA@XZ @ 0x180188854 (--0immersive_shell_component@winrt@@QEAA@XZ.c)
 *     ??$register_service_information@$$CBU_GUID@@@immersive_shell_component@winrt@@IEAAXAEBU_GUID@@@Z @ 0x180188A40 (--$register_service_information@$$CBU_GUID@@@immersive_shell_component@winrt@@IEAAXAEBU_GUID@@@Z.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=13
CopilotHotkeyManager *__fastcall CopilotHotkeyManager::CopilotHotkeyManager(
        CopilotHotkeyManager *this,
        __int64 a2,
        __int64 a3)
{
  RTL_SRWLOCK *v4; // rbx

  *(_QWORD *)this = &Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::IBaseExperienceManager *,Windows::Internal::Shell::Experience::IVisibilityChangedEventArgs *>::`vftable';
  *((_QWORD *)this + 1) = &Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::IBaseExperienceManager *,Windows::Internal::Shell::Experience::IVisibilityChangedEventArgs *>::`vftable';
  v4 = (RTL_SRWLOCK *)((char *)this + 16);
  winrt::immersive_shell_component::immersive_shell_component((CopilotHotkeyManager *)((char *)this + 16), a2, a3);
  *((_QWORD *)this + 14) = 0LL;
  *(_QWORD *)this = &wil::details::module_count_wrapper<CopilotHotkeyManager>::`vftable'{for `winrt::impl::producer_convert<CopilotHotkeyManager,IImmersiveWindowMessageNotification,void>'};
  *((_QWORD *)this + 1) = &CopilotHotkeyManager::`vftable'{for `winrt::impl::producer_convert<CopilotHotkeyManager,IApplicationViewChangeListener,void>'};
  v4->Ptr = &winrt::impl::heap_implements<wil::details::module_count_wrapper<CopilotHotkeyManager>>::`vftable'{for `winrt::impl::producer_convert<winrt::immersive_shell_component,IObjectWithSite,void>'};
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
  *(_OWORD *)((char *)this + 180) = 0LL;
  *((_QWORD *)this + 25) = 0LL;
  *((_OWORD *)this + 13) = 0LL;
  *((_QWORD *)this + 28) = 0LL;
  *((_QWORD *)this + 29) = 7LL;
  *((_WORD *)this + 104) = 0;
  *((_OWORD *)this + 15) = 0LL;
  *((_QWORD *)this + 32) = 0LL;
  *((_QWORD *)this + 33) = 7LL;
  *((_WORD *)this + 120) = 0;
  *((_OWORD *)this + 17) = 0LL;
  *((_QWORD *)this + 36) = 0LL;
  *((_QWORD *)this + 37) = 7LL;
  *((_WORD *)this + 136) = 0;
  *(_OWORD *)((char *)this + 312) = 0LL;
  *((_QWORD *)this + 41) = 0LL;
  *((_QWORD *)this + 42) = 7LL;
  *((_WORD *)this + 156) = 0;
  *((_OWORD *)this + 22) = 0LL;
  *((_QWORD *)this + 46) = 0LL;
  *((_QWORD *)this + 47) = 7LL;
  *((_WORD *)this + 176) = 0;
  *(_OWORD *)((char *)this + 392) = 0LL;
  *((_QWORD *)this + 51) = 0LL;
  *((_QWORD *)this + 52) = 7LL;
  *((_WORD *)this + 196) = 0;
  *((_OWORD *)this + 27) = 0LL;
  *((_QWORD *)this + 56) = 0LL;
  *((_QWORD *)this + 57) = 7LL;
  *((_WORD *)this + 216) = 0;
  *(_OWORD *)((char *)this + 472) = 0LL;
  *((_QWORD *)this + 61) = 0LL;
  *((_QWORD *)this + 62) = 7LL;
  *((_WORD *)this + 236) = 0;
  *((_DWORD *)this + 128) = 0;
  *(_OWORD *)((char *)this + 520) = 0LL;
  *((_QWORD *)this + 67) = 0LL;
  *((_QWORD *)this + 68) = 7LL;
  *((_WORD *)this + 260) = 0;
  *((_QWORD *)this + 71) = 0LL;
  *((_QWORD *)this + 73) = 0LL;
  *((_QWORD *)this + 74) = 0LL;
  *((_QWORD *)this + 75) = 0LL;
  *((_QWORD *)this + 76) = 0LL;
  *((_QWORD *)this + 77) = 0LL;
  *((_BYTE *)this + 624) = 0;
  *((_DWORD *)this + 157) = 0;
  *((_QWORD *)this + 79) = 0LL;
  winrt::immersive_shell_component::register_service_information<_GUID const>(v4, &xmmword_1807C1800);
  return this;
}
