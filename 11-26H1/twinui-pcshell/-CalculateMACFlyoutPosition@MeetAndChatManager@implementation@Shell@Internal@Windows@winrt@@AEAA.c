/*
 * XREFs of ?CalculateMACFlyoutPosition@MeetAndChatManager@implementation@Shell@Internal@Windows@winrt@@AEAA?AU?$pair@URect@Foundation@Windows@winrt@@W4TaskbarLocation@Shell@UI@WindowsUdk@4@@std@@PEAUHWND__@@QEAU9@@Z @ 0x1805F3FDC
 * Callers:
 *     ?ShowMACFlyout@MeetAndChatManager@implementation@Shell@Internal@Windows@winrt@@AEAAXUShowShellViewRequestedEventArgs@3UI@WindowsUdk@6@W4LaunchSource@MeetAndChatTelemetry@@@Z @ 0x1805F6ED0 (-ShowMACFlyout@MeetAndChatManager@implementation@Shell@Internal@Windows@winrt@@AEAAXUShowShellVi.c)
 * Callees:
 *     ??1CAutoSRWExclusiveLock@@QEAA@XZ @ 0x18001C3D4 (--1CAutoSRWExclusiveLock@@QEAA@XZ.c)
 *     ?reset@?$com_ptr_t@UIUwpWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ @ 0x180024FF4 (-reset@-$com_ptr_t@UIUwpWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ.c)
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18002633C (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?unconditional_release_ref@?$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ @ 0x18002694C (-unconditional_release_ref@-$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ.c)
 *     ?View@?$consume_WindowsUdk_UI_Shell_IViewVisibilityChangedEventArgs@UIViewVisibilityChangedEventArgs@Shell@UI@WindowsUdk@winrt@@@impl@winrt@@QEBA@XZ @ 0x18002824C (-View@-$consume_WindowsUdk_UI_Shell_IViewVisibilityChangedEventArgs@UIViewVisibilityChangedEvent.c)
 *     ?GetDisplayMonitorInfoForMonitor@?$consume_WindowsUdk_UI_Shell_IDisplayMonitorInfoCollection@UIDisplayMonitorInfoCollection@Shell@UI@WindowsUdk@winrt@@@impl@winrt@@QEBA@_K@Z @ 0x180029AD8 (-GetDisplayMonitorInfoForMonitor@-$consume_WindowsUdk_UI_Shell_IDisplayMonitorInfoCollection@UID.c)
 *     ?Id@?$consume_Windows_Internal_Shell_TaskGroups_ITaskGroup@UITaskGroup@TaskGroups@Shell@Internal@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x18002A6D8 (-Id@-$consume_Windows_Internal_Shell_TaskGroups_ITaskGroup@UITaskGroup@TaskGroups@Shell@Internal.c)
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18004C280 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?AcquireSRWLockExclusive@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@1@PEAU_RTL_SRWLOCK@@@Z @ 0x1800584D8 (-AcquireSRWLockExclusive@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18006B898 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??9Foundation@Windows@winrt@@YA_NAEBUIUnknown@012@0@Z @ 0x1800CC1A4 (--9Foundation@Windows@winrt@@YA_NAEBUIUnknown@012@0@Z.c)
 *     ?Current@TaskbarLayout@Shell@UI@WindowsUdk@winrt@@SA@XZ @ 0x1801C6B60 (-Current@TaskbarLayout@Shell@UI@WindowsUdk@winrt@@SA@XZ.c)
 *     ?GetShellViewButtonBoundsInRawPixels@?$consume_WindowsUdk_UI_Shell_ITaskbarLayout@UITaskbarLayout@Shell@UI@WindowsUdk@winrt@@@impl@winrt@@QEBA@_KAEBW4ShellView@Shell@UI@WindowsUdk@3@@Z @ 0x1801C6BD8 (-GetShellViewButtonBoundsInRawPixels@-$consume_WindowsUdk_UI_Shell_ITaskbarLayout@UITaskbarLayou.c)
 *     ??$get_site@UIServiceProvider@@@immersive_shell_component@winrt@@IEAA?AU?$com_ptr@UIServiceProvider@@@1@XZ @ 0x1802A8468 (--$get_site@UIServiceProvider@@@immersive_shell_component@winrt@@IEAA-AU-$com_ptr@UIServiceProvi.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ?GetLocation@?$consume_WindowsUdk_UI_Shell_ITaskbarLayout@UITaskbarLayout@Shell@UI@WindowsUdk@winrt@@@impl@winrt@@QEBA@_K@Z @ 0x1805F5220 (-GetLocation@-$consume_WindowsUdk_UI_Shell_ITaskbarLayout@UITaskbarLayout@Shell@UI@WindowsUdk@wi.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=9
float *__fastcall winrt::Windows::Internal::Shell::implementation::MeetAndChatManager::CalculateMACFlyoutPosition(
        RTL_SRWLOCK *a1,
        float *a2,
        HWND a3,
        HWND a4)
{
  HMONITOR v6; // rax
  __int64 v7; // rsi
  int DpiForMonitor; // eax
  int v9; // r15d
  int v10; // r13d
  int v11; // r12d
  __int64 *v12; // rax
  __int64 v13; // rdi
  __int64 (__fastcall *v14)(__int64, SID *, GUID *, __int64 **); // rbx
  int v15; // eax
  __int64 v16; // rax
  int v17; // eax
  int v18; // eax
  __int64 v19; // rbx
  __int64 (__fastcall *v20)(__int64, __int64, __int128 *); // rdi
  int v21; // eax
  int v22; // eax
  int v23; // r9d
  int v24; // r8d
  int v25; // r11d
  int v26; // edi
  int v27; // r10d
  int v28; // ebx
  int v29; // ebx
  int v30; // r8d
  int v31; // r9d
  int v32; // edx
  int v33; // r10d
  int v34; // ecx
  int v35; // eax
  int v36; // r10d
  int v37; // r9d
  float v38; // xmm9_4
  float v39; // xmm8_4
  float v40; // xmm7_4
  float v41; // xmm6_4
  float *v42; // rbx
  __int64 *Location; // rax
  int v44; // eax
  float *v45; // rbx
  int v47; // [rsp+28h] [rbp-A9h]
  int nNumerator; // [rsp+38h] [rbp-99h] BYREF
  int v49; // [rsp+3Ch] [rbp-95h] BYREF
  __int64 v50; // [rsp+40h] [rbp-91h]
  __int128 v51; // [rsp+48h] [rbp-89h] BYREF
  void (__fastcall ***v52)(_QWORD, __int64 *, __int64 *); // [rsp+58h] [rbp-79h] BYREF
  __int64 *v53; // [rsp+60h] [rbp-71h] BYREF
  __int64 *v54; // [rsp+68h] [rbp-69h] BYREF
  RTL_SRWLOCK *v55; // [rsp+70h] [rbp-61h] BYREF
  __int64 v56; // [rsp+78h] [rbp-59h] BYREF
  float *v57; // [rsp+80h] [rbp-51h]
  __int128 v58; // [rsp+88h] [rbp-49h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+130h] [rbp+5Fh]

  v57 = a2;
  v55 = a1;
  if ( a3 )
  {
    v6 = MonitorFromWindow(a3, 2u);
  }
  else
  {
    v53 = 0LL;
    v6 = MonitorFromPoint(0LL, 1u);
  }
  v7 = (__int64)v6;
  nNumerator = 0;
  v49 = 0;
  DpiForMonitor = GetDpiForMonitor(v6, 0LL, &nNumerator, &v49);
  if ( DpiForMonitor < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x185,
      (int)"pcshell\\twinui\\meetandchatmanager\\lib\\meetandchatmanager.cpp",
      (const char *)(unsigned int)DpiForMonitor,
      v47);
  LODWORD(v50) = MulDiv(362, nNumerator, 96);
  v9 = MulDiv(658, v49, 96);
  v10 = MulDiv(12, nNumerator, 96);
  v11 = MulDiv(12, v49, 96);
  v54 = 0LL;
  v12 = winrt::immersive_shell_component::get_site<IServiceProvider>(a1 + 2, (__int64 *)&v52);
  v13 = *v12;
  v14 = *(__int64 (__fastcall **)(__int64, SID *, GUID *, __int64 **))(*(_QWORD *)*v12 + 24LL);
  wil::com_ptr_t<IUwpWindowWrapperInternal,wil::err_exception_policy>::reset((__int64 *)&v54);
  v15 = v14(v13, &SID_IImmersiveMonitorService, &GUID_4d4c1e64_e410_4faa_bafa_59ca069bfec2, &v54);
  if ( v15 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x18C,
      (int)"pcshell\\twinui\\meetandchatmanager\\lib\\meetandchatmanager.cpp",
      (const char *)(unsigned int)v15,
      v47);
  if ( v52 )
    winrt::com_ptr<ISnapComponent>::unconditional_release_ref((__int64 *)&v52);
  v58 = 0LL;
  if ( a4 && GetPropW(a4, L"IsAutoHideEnabled") )
  {
    *(_QWORD *)&v51 = 0LL;
    v16 = *v54;
    *(_QWORD *)&v51 = 0LL;
    v17 = (*(__int64 (__fastcall **)(__int64 *, __int64, SID *, GUID *))(v16 + 72))(
            v54,
            v7,
            &SID_EdgeUi,
            &GUID_6e6c3c52_5a5e_4b4b_a0f8_7fe12621a93e);
    if ( v17 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x194,
        (int)"pcshell\\twinui\\meetandchatmanager\\lib\\meetandchatmanager.cpp",
        (const char *)(unsigned int)v17,
        (int)&v51);
    v18 = (*(__int64 (__fastcall **)(_QWORD, __int128 *))(*(_QWORD *)v51 + 152LL))(v51, &v58);
    if ( v18 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x195,
        (int)"pcshell\\twinui\\meetandchatmanager\\lib\\meetandchatmanager.cpp",
        (const char *)(unsigned int)v18,
        (int)&v51);
  }
  else
  {
    *(_QWORD *)&v51 = 0LL;
    v19 = (__int64)v54;
    v20 = *(__int64 (__fastcall **)(__int64, __int64, __int128 *))(*v54 + 48);
    wil::com_ptr_t<IUwpWindowWrapperInternal,wil::err_exception_policy>::reset((__int64 *)&v51);
    v21 = v20(v19, v7, &v51);
    if ( v21 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x19B,
        (int)"pcshell\\twinui\\meetandchatmanager\\lib\\meetandchatmanager.cpp",
        (const char *)(unsigned int)v21,
        v47);
    v22 = (*(__int64 (__fastcall **)(_QWORD, __int128 *))(*(_QWORD *)v51 + 88LL))(v51, &v58);
    if ( v22 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x19C,
        (int)"pcshell\\twinui\\meetandchatmanager\\lib\\meetandchatmanager.cpp",
        (const char *)(unsigned int)v22,
        v47);
  }
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v51);
  winrt::WindowsUdk::UI::Shell::TaskbarLayout::Current(&v53);
  winrt::impl::consume_WindowsUdk_UI_Shell_IDisplayMonitorInfoCollection<winrt::WindowsUdk::UI::Shell::IDisplayMonitorInfoCollection>::GetDisplayMonitorInfoForMonitor(
    &v53,
    &v56,
    v7);
  if ( (unsigned int)winrt::impl::consume_WindowsUdk_UI_Shell_IViewVisibilityChangedEventArgs<winrt::WindowsUdk::UI::Shell::IViewVisibilityChangedEventArgs>::View(&v56) == 1 )
  {
    v23 = DWORD2(v58);
    v24 = v58;
    v25 = v50;
    v26 = v58 + (DWORD2(v58) - (int)v58) / 2 - (int)v50 / 2;
    v27 = HIDWORD(v58);
    v28 = HIDWORD(v58) - v11 - v9;
  }
  else
  {
    LODWORD(v51) = 5;
    winrt::impl::consume_WindowsUdk_UI_Shell_ITaskbarLayout<winrt::WindowsUdk::UI::Shell::ITaskbarLayout>::GetShellViewButtonBoundsInRawPixels(
      &v53,
      &v52,
      v7,
      (unsigned int *)&v51);
    *(_QWORD *)&v51 = 0LL;
    if ( winrt::Windows::Foundation::operator!=(&v52, (void (__fastcall ****)(_QWORD, __int64 *, __int64 *))&v51) )
    {
      v26 = (int)*(float *)winrt::impl::consume_Windows_Internal_Shell_TaskGroups_ITaskGroup<winrt::Windows::Internal::Shell::TaskGroups::ITaskGroup>::Id(
                             (__int64 *)&v52,
                             &v51);
      v29 = (int)*((float *)winrt::impl::consume_Windows_Internal_Shell_TaskGroups_ITaskGroup<winrt::Windows::Internal::Shell::TaskGroups::ITaskGroup>::Id(
                              (__int64 *)&v52,
                              &v51)
                 + 1);
    }
    else
    {
      if ( (GetWindowLongW(a4, -20) & 0x400000) != 0 )
        v26 = DWORD2(v58) - v10 - v50;
      else
        v26 = v10;
      v29 = HIDWORD(v58);
    }
    v28 = v29 - v11 - v9;
    winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v52);
    v27 = HIDWORD(v58);
    v23 = DWORD2(v58);
    v24 = v58;
    v25 = v50;
  }
  v30 = v10 + v24;
  LODWORD(v58) = v30;
  v31 = v23 - v10;
  DWORD2(v58) = v31;
  v32 = v11 + DWORD1(v58);
  DWORD1(v58) += v11;
  v33 = v27 - v11;
  HIDWORD(v58) = v33;
  v34 = v31 - v25;
  if ( v26 < v31 - v25 )
    v34 = v26;
  v35 = v33 - v9;
  if ( v28 < v33 - v9 )
    v35 = v28;
  v36 = v33 - v32;
  v37 = v31 - v30;
  if ( v34 > v30 )
    v30 = v34;
  v38 = (float)v30;
  if ( v35 > v32 )
    v32 = v35;
  v39 = (float)v32;
  if ( v9 < v36 )
    v36 = v9;
  v40 = (float)v36;
  if ( v25 < v37 )
    v37 = v25;
  v41 = (float)v37;
  v42 = (float *)v55;
  wil::AcquireSRWLockExclusive(&v55, v55 + 14);
  v42[53] = v38;
  v42[54] = v39;
  v42[55] = v41;
  v42[56] = v40;
  CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock(&v55);
  Location = (__int64 *)winrt::impl::consume_WindowsUdk_UI_Shell_ITaskbarLayout<winrt::WindowsUdk::UI::Shell::ITaskbarLayout>::GetLocation(
                          &v53,
                          &v55,
                          v7);
  v44 = winrt::impl::consume_WindowsUdk_UI_Shell_IViewVisibilityChangedEventArgs<winrt::WindowsUdk::UI::Shell::IViewVisibilityChangedEventArgs>::View(Location);
  v45 = v57;
  *v57 = v38;
  v45[1] = v39;
  v45[2] = v41;
  v45[3] = v40;
  *((_DWORD *)v45 + 4) = v44;
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v55);
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v56);
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v53);
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v54);
  return v45;
}
