/*
 * XREFs of ??0RdpShellExtensionHost@@QEAA@XZ @ 0x1806737E4
 * Callers:
 *     ??0?$heap_implements@V?$module_count_wrapper@VRdpShellExtensionHost@@@details@wil@@@impl@winrt@@QEAA@XZ @ 0x180673628 (--0-$heap_implements@V-$module_count_wrapper@VRdpShellExtensionHost@@@details@wil@@@impl@winrt@@.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180048294 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0immersive_shell_component@winrt@@QEAA@XZ @ 0x180188854 (--0immersive_shell_component@winrt@@QEAA@XZ.c)
 *     ??$register_service_information@$$CBU_GUID@@@immersive_shell_component@winrt@@IEAAXAEBU_GUID@@@Z @ 0x180188A40 (--$register_service_information@$$CBU_GUID@@@immersive_shell_component@winrt@@IEAAXAEBU_GUID@@@Z.c)
 *     memset_0 @ 0x1802C9ECC (memset_0.c)
 *     ?CreateShellSessionSubKey@@YAJPEBGKPEA_NPEAPEAUHKEY__@@@Z @ 0x1806740CC (-CreateShellSessionSubKey@@YAJPEBGKPEA_NPEAPEAUHKEY__@@@Z.c)
 */

// Hidden C++ exception states: #wind=3
RdpShellExtensionHost *__fastcall RdpShellExtensionHost::RdpShellExtensionHost(
        RdpShellExtensionHost *this,
        __int64 a2,
        __int64 a3)
{
  unsigned int v4; // edx
  const unsigned __int16 *v5; // rcx
  bool *v6; // r8
  HKEY *v7; // r9
  int ShellSessionSubKey; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  winrt::immersive_shell_component::immersive_shell_component(this, a2, a3);
  *(_QWORD *)this = &wil::details::module_count_wrapper<RdpShellExtensionHost>::`vftable'{for `winrt::impl::producer_convert<winrt::immersive_shell_component,IObjectWithSite,void>'};
  *((_QWORD *)this + 1) = &winrt::impl::heap_implements<wil::details::module_count_wrapper<winrt::Windows::Internal::Shell::implementation::DashboardTaskbarButtonSettingsManager>>::`vftable'{for `winrt::impl::producer_convert<winrt::immersive_shell_component,IServiceProvider,void>'};
  *((_QWORD *)this + 2) = &winrt::Windows::Internal::Shell::implementation::CloudPCComponent::`vftable'{for `winrt::impl::producer_convert<winrt::immersive_shell_component,IImmersiveShellComponent,void>'};
  *((_QWORD *)this + 4) = &RdpShellExtensionHost::`vftable';
  *((_QWORD *)this + 11) = 0LL;
  *((_DWORD *)this + 24) = 0;
  memset_0((char *)this + 104, 0, 0x48uLL);
  *((_QWORD *)this + 22) = 0LL;
  *((_QWORD *)this + 23) = 0LL;
  *((_QWORD *)this + 24) = 0LL;
  *((_QWORD *)this + 25) = 0LL;
  *((_QWORD *)this + 26) = 0LL;
  *((_QWORD *)this + 27) = 0LL;
  winrt::immersive_shell_component::register_service_information<_GUID const>(
    (RTL_SRWLOCK *)this,
    (__int128 *)&GUID_97203e53_3e7a_5424_c1b4_a4978b7e6ade);
  ShellSessionSubKey = CreateShellSessionSubKey(v5, v4, v6, v7);
  if ( ShellSessionSubKey < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x1F,
      (int)"pcshell\\twinui\\rdpshellextensionhost\\lib\\rdpshellextensionhost.cpp",
      (const char *)(unsigned int)ShellSessionSubKey);
  return this;
}
