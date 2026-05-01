/*
 * XREFs of ?ExtractMonitorInfo@SearchAppPositionerHelpers@@YA?AUMonitorInfo@@AEBUtagRECT@@V?$ComPtr@UIServiceProvider@@@WRL@Microsoft@@@Z @ 0x18018A304
 * Callers:
 *     ?ExtractMonitorInfo@SearchBoxOnTaskbarSearchAppPositionerConfig@@UEAA?AUMonitorInfo@@AEBUtagRECT@@@Z @ 0x18018A280 (-ExtractMonitorInfo@SearchBoxOnTaskbarSearchAppPositionerConfig@@UEAA-AUMonitorInfo@@AEBUtagRECT.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x1800236F8 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18002633C (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?View@?$consume_WindowsUdk_UI_Shell_IViewVisibilityChangedEventArgs@UIViewVisibilityChangedEventArgs@Shell@UI@WindowsUdk@winrt@@@impl@winrt@@QEBA@XZ @ 0x18002824C (-View@-$consume_WindowsUdk_UI_Shell_IViewVisibilityChangedEventArgs@UIViewVisibilityChangedEvent.c)
 *     ?GetDisplayMonitorInfoForMonitor@?$consume_WindowsUdk_UI_Shell_IDisplayMonitorInfoCollection@UIDisplayMonitorInfoCollection@Shell@UI@WindowsUdk@winrt@@@impl@winrt@@QEBA@_K@Z @ 0x180029AD8 (-GetDisplayMonitorInfoForMonitor@-$consume_WindowsUdk_UI_Shell_IDisplayMonitorInfoCollection@UID.c)
 *     ?Id@?$consume_Windows_Internal_Shell_TaskGroups_ITaskGroup@UITaskGroup@TaskGroups@Shell@Internal@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x18002A6D8 (-Id@-$consume_Windows_Internal_Shell_TaskGroups_ITaskGroup@UITaskGroup@TaskGroups@Shell@Internal.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180048294 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??9Foundation@Windows@winrt@@YA_NAEBUIUnknown@012@0@Z @ 0x1800CC1A4 (--9Foundation@Windows@winrt@@YA_NAEBUIUnknown@012@0@Z.c)
 *     ?GetPerMonitorDpi@ExperienceManagerUtils@@YAHPEAUHMONITOR__@@@Z @ 0x1801B52E0 (-GetPerMonitorDpi@ExperienceManagerUtils@@YAHPEAUHMONITOR__@@@Z.c)
 *     ?Current@TaskbarLayout@Shell@UI@WindowsUdk@winrt@@SA@XZ @ 0x1801C6B60 (-Current@TaskbarLayout@Shell@UI@WindowsUdk@winrt@@SA@XZ.c)
 *     ?GetShellViewButtonBoundsInRawPixels@?$consume_WindowsUdk_UI_Shell_ITaskbarLayout@UITaskbarLayout@Shell@UI@WindowsUdk@winrt@@@impl@winrt@@QEBA@_KAEBW4ShellView@Shell@UI@WindowsUdk@3@@Z @ 0x1801C6BD8 (-GetShellViewButtonBoundsInRawPixels@-$consume_WindowsUdk_UI_Shell_ITaskbarLayout@UITaskbarLayou.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     memset_0 @ 0x1802C9ECC (memset_0.c)
 *     ?check_hresult@winrt@@YA?AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z @ 0x1802D92D0 (-check_hresult@winrt@@YA-AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z.c)
 *     ??$check_bool@H@winrt@@YAHHAEBUslim_source_location@impl@0@@Z @ 0x1803CECB0 (--$check_bool@H@winrt@@YAHHAEBUslim_source_location@impl@0@@Z.c)
 *     ??$check_bool@V?$ComPtr@UIServiceProvider@@@WRL@Microsoft@@@winrt@@YA?AV?$ComPtr@UIServiceProvider@@@WRL@Microsoft@@V123@AEBUslim_source_location@impl@0@@Z @ 0x1803CECD0 (--$check_bool@V-$ComPtr@UIServiceProvider@@@WRL@Microsoft@@@winrt@@YA-AV-$ComPtr@UIServiceProvid.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall SearchAppPositionerHelpers::ExtractMonitorInfo(__int64 a1, const RECT *a2, __int64 **a3)
{
  __int64 *v3; // r12
  __int64 v5; // r14
  HMONITOR v6; // r15
  unsigned int MonitorInfoW; // eax
  __int64 v8; // rdi
  __int64 (__fastcall *v9)(__int64, SID *, GUID *, __int64 *); // rbx
  unsigned int v10; // eax
  __int64 v11; // rbx
  int (__fastcall *v12)(__int64, HMONITOR, SID *, GUID *, int *); // rdi
  HMONITOR v13; // rdx
  HWND WindowW; // rax
  RECT v15; // xmm0
  int v16; // eax
  int v17; // eax
  unsigned int v18; // eax
  unsigned int v19; // eax
  float *v20; // rax
  float v21; // xmm2_4
  float v22; // xmm0_4
  float v23; // xmm1_4
  const char *v24; // r9
  __int64 *v26; // [rsp+30h] [rbp-138h] BYREF
  void (__fastcall ***v27)(_QWORD, __int64 *, __int64 *); // [rsp+38h] [rbp-130h] BYREF
  int v28[2]; // [rsp+40h] [rbp-128h] BYREF
  void (__fastcall ***v29)(_QWORD, __int64 *, __int64 *); // [rsp+48h] [rbp-120h] BYREF
  __int128 v30; // [rsp+50h] [rbp-118h]
  __int64 v31; // [rsp+60h] [rbp-108h] BYREF
  void (__fastcall ***v32)(_QWORD, __int64 *, __int64 *); // [rsp+68h] [rbp-100h] BYREF
  __int64 *v33; // [rsp+70h] [rbp-F8h]
  int v34; // [rsp+78h] [rbp-F0h] BYREF
  __int128 v35; // [rsp+80h] [rbp-E8h]
  __int64 v36[4]; // [rsp+90h] [rbp-D8h] BYREF
  RECT rcMonitor; // [rsp+B0h] [rbp-B8h] BYREF
  RECT rcWork; // [rsp+C0h] [rbp-A8h]
  __int128 v39; // [rsp+D0h] [rbp-98h] BYREF
  __m256i v40; // [rsp+E0h] [rbp-88h] BYREF
  int v41; // [rsp+100h] [rbp-68h]
  struct tagMONITORINFO mi; // [rsp+110h] [rbp-58h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+168h] [rbp+0h]

  v3 = (__int64 *)a3;
  v5 = a1;
  v33 = (__int64 *)a3;
  LODWORD(v29) = 0;
  v30 = 0LL;
  v26 = *a3;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v26);
  winrt::check_bool<Microsoft::WRL::ComPtr<IServiceProvider>>(v36, &v26, &v29);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(v36);
  memset_0(&rcMonitor, 0, 0x54uLL);
  v6 = MonitorFromRect(a2, 1u);
  mi.cbSize = 40;
  memset(&mi.rcMonitor, 0, 36);
  LODWORD(v36[0]) = 0;
  *(_OWORD *)&v36[1] = 0LL;
  MonitorInfoW = GetMonitorInfoW(v6, &mi);
  winrt::check_bool<int>(MonitorInfoW, v36);
  rcMonitor = mi.rcMonitor;
  v31 = 0LL;
  LODWORD(v36[0]) = 0;
  *(_OWORD *)&v36[1] = 0LL;
  v8 = *v3;
  v9 = *(__int64 (__fastcall **)(__int64, SID *, GUID *, __int64 *))(*(_QWORD *)*v3 + 24LL);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v31);
  v10 = v9(v8, &SID_IImmersiveMonitorService, &GUID_4d4c1e64_e410_4faa_bafa_59ca069bfec2, &v31);
  winrt::check_hresult(&v29, v10, v36);
  *(_QWORD *)v28 = 0LL;
  v11 = v31;
  v12 = *(int (__fastcall **)(__int64, HMONITOR, SID *, GUID *, int *))(*(_QWORD *)v31 + 72LL);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)v28);
  if ( v12(v11, v6, &SID_EdgeUi, &GUID_6e6c3c52_5a5e_4b4b_a0f8_7fe12621a93e, v28) < 0 )
  {
    rcWork = mi.rcWork;
    v40.m256i_i32[1] = 3;
    v39 = 0LL;
  }
  else
  {
    WindowW = FindWindowW(L"Shell_TrayWnd", 0LL);
    if ( WindowW && GetPropW(WindowW, L"IsAutoHideEnabled") )
    {
      *(_OWORD *)v36 = 0LL;
      (*(void (__fastcall **)(_QWORD, __int64 *))(**(_QWORD **)v28 + 152LL))(*(_QWORD *)v28, v36);
      v15 = *(RECT *)v36;
    }
    else
    {
      v15 = mi.rcWork;
    }
    rcWork = v15;
    v40.m256i_i32[1] = 3;
    v16 = (*(__int64 (__fastcall **)(_QWORD, __int8 *))(**(_QWORD **)v28 + 80LL))(*(_QWORD *)v28, &v40.m256i_i8[4]);
    if ( v16 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x25,
        (int)"pcshell\\twinui\\experiencemanagers\\lib\\SearchAppPositionerHelpers.h",
        (const char *)(unsigned int)v16);
    v39 = 0LL;
    v17 = (*(__int64 (__fastcall **)(_QWORD, __int128 *))(**(_QWORD **)v28 + 112LL))(*(_QWORD *)v28, &v39);
    if ( v17 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x27,
        (int)"pcshell\\twinui\\experiencemanagers\\lib\\SearchAppPositionerHelpers.h",
        (const char *)(unsigned int)v17);
    LODWORD(v29) = 0;
    LODWORD(v36[0]) = 0;
    *(_OWORD *)&v36[1] = 0LL;
    v18 = (*(__int64 (__fastcall **)(_QWORD, void (__fastcall ****)(_QWORD, __int64 *, __int64 *)))(**(_QWORD **)v28
                                                                                                  + 96LL))(
            *(_QWORD *)v28,
            &v29);
    winrt::check_hresult(&v27, v18, v36);
    v40.m256i_i8[1] = (_DWORD)v29 != 0;
  }
  v40.m256i_i8[0] = mi.dwFlags == 1;
  v40.m256i_i32[2] = ExperienceManagerUtils::GetPerMonitorDpi((ExperienceManagerUtils *)v6, v13);
  v40.m256i_i32[7] = 1;
  v41 = 1;
  *(_OWORD *)((char *)&v40.m256i_u64[1] + 4) = 0LL;
  try
  {
    winrt::WindowsUdk::UI::Shell::TaskbarLayout::Current();
    winrt::impl::consume_WindowsUdk_UI_Shell_IDisplayMonitorInfoCollection<winrt::WindowsUdk::UI::Shell::IDisplayMonitorInfoCollection>::GetDisplayMonitorInfoForMonitor(
      &v26,
      v36,
      (__int64)v6);
    v27 = 0LL;
    if ( winrt::Windows::Foundation::operator!=((void (__fastcall ****)(_QWORD, __int64 *, __int64 *))v36, &v27) )
      v40.m256i_i32[7] = winrt::impl::consume_WindowsUdk_UI_Shell_IViewVisibilityChangedEventArgs<winrt::WindowsUdk::UI::Shell::IViewVisibilityChangedEventArgs>::View(v36);
    v29 = 0LL;
    v34 = 0;
    v35 = 0LL;
    v19 = (*(__int64 (__fastcall **)(__int64 *, HMONITOR, _QWORD))(*v26 + 64))(v26, v6, &v29);
    winrt::check_hresult(&v27, v19, &v34);
    v27 = v29;
    v29 = 0LL;
    if ( winrt::Windows::Foundation::operator!=(&v27, &v29) )
      v41 = winrt::impl::consume_WindowsUdk_UI_Shell_IViewVisibilityChangedEventArgs<winrt::WindowsUdk::UI::Shell::IViewVisibilityChangedEventArgs>::View((__int64 *)&v27);
    LODWORD(v29) = 1;
    winrt::impl::consume_WindowsUdk_UI_Shell_ITaskbarLayout<winrt::WindowsUdk::UI::Shell::ITaskbarLayout>::GetShellViewButtonBoundsInRawPixels(
      &v26,
      &v32,
      v6,
      &v29);
    v29 = 0LL;
    if ( winrt::Windows::Foundation::operator!=(&v32, &v29) )
    {
      v20 = (float *)winrt::impl::consume_Windows_Internal_Shell_TaskGroups_ITaskGroup<winrt::Windows::Internal::Shell::TaskGroups::ITaskGroup>::Id(
                       (__int64 *)&v32,
                       &v29);
      v21 = v20[1];
      v22 = *v20 + v20[2];
      v23 = v21 + v20[3];
      v40.m256i_i32[3] = (int)*v20;
      v40.m256i_i32[4] = (int)v21;
      v40.m256i_i32[5] = (int)v22;
      v40.m256i_i32[6] = (int)v23;
    }
    winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v32);
    winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v27);
    winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)v36);
    winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v26);
  }
  catch ( ... )
  {
    wil::details::in1diag3::Log_CaughtException(
      retaddr,
      (void *)0x54,
      (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\SearchAppPositionerHelpers.h",
      v24);
    v5 = a1;
    v3 = v33;
  }
  v40.m256i_i8[1] = 0;
  *(RECT *)v5 = rcMonitor;
  *(RECT *)(v5 + 16) = rcWork;
  *(_OWORD *)(v5 + 32) = v39;
  *(__m256i *)(v5 + 48) = v40;
  *(_DWORD *)(v5 + 80) = v41;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)v28);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v31);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(v3);
  return v5;
}
