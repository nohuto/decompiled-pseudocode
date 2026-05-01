/*
 * XREFs of ?GetMonitorInformation@CStartExperienceManager@@AEAAJPEAVCSingleViewShellExperience@@PEAUtagRECT@@PEAW4EDGEUI_TRAYSTUCKPLACE@@PEA_NPEAPEAUHMONITOR__@@@Z @ 0x180017CBC
 * Callers:
 *     ?PositionMenu@CStartExperienceManager@@AEAAJPEAVCSingleViewShellExperience@@W4PositionMenuFlags@1@@Z @ 0x180017950 (-PositionMenu@CStartExperienceManager@@AEAAJPEAVCSingleViewShellExperience@@W4PositionMenuFlags@.c)
 *     ?Hide@CStartExperienceManager@@UEAAJI@Z @ 0x1801B1B50 (-Hide@CStartExperienceManager@@UEAAJI@Z.c)
 *     ?PlayTransitionToCortana@CStartExperienceManager@@UEAAJXZ @ 0x180382C80 (-PlayTransitionToCortana@CStartExperienceManager@@UEAAJXZ.c)
 *     ?SetBackgroundImage@CStartExperienceManager@@AEAAJPEAX@Z @ 0x180383CE0 (-SetBackgroundImage@CStartExperienceManager@@AEAAJPEAX@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18005D244 (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?GetDisplayMonitorInfoForMonitor@?$consume_WindowsUdk_UI_Shell_IDisplayMonitorInfoCollection@UIDisplayMonitorInfoCollection@Shell@UI@WindowsUdk@winrt@@@impl@winrt@@QEBA@_K@Z @ 0x1800A9FFC (-GetDisplayMonitorInfoForMonitor@-$consume_WindowsUdk_UI_Shell_IDisplayMonitorInfoCollection@UID.c)
 *     ??4ShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@QEAAAEAU01234@$$QEAU01234@@Z @ 0x1800AA2B4 (--4ShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@QEAAAEAU01234@$$QEAU01234@@Z.c)
 *     ?Mirror_IsThreadRTL@@YAHXZ @ 0x1801B8A5C (-Mirror_IsThreadRTL@@YAHXZ.c)
 *     ?StaticSafeWorkArea@?$consume_WindowsUdk_UI_Shell_IDisplayMonitorInfo@UIDisplayMonitorInfo@Shell@UI@WindowsUdk@winrt@@@impl@winrt@@QEBA@XZ @ 0x180247294 (-StaticSafeWorkArea@-$consume_WindowsUdk_UI_Shell_IDisplayMonitorInfo@UIDisplayMonitorInfo@Shell.c)
 *     ?WindowPosition@?$consume_WindowsUdk_UI_Shell_IWindowDragHitTestResult@UIWindowDragHitTestResult@Shell@UI@WindowsUdk@winrt@@@impl@winrt@@QEBA@XZ @ 0x180247AFC (-WindowPosition@-$consume_WindowsUdk_UI_Shell_IWindowDragHitTestResult@UIWindowDragHitTestResult.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CStartExperienceManager::GetMonitorInformation(
        CStartExperienceManager *this,
        struct CSingleViewShellExperience *a2,
        struct tagRECT *a3,
        enum EDGEUI_TRAYSTUCKPLACE *a4,
        bool *a5,
        HMONITOR *a6)
{
  __int64 v9; // rdi
  __int64 (__fastcall *v10)(__int64, SID *, GUID *, __int64 *); // rbx
  int v11; // eax
  HRESULT v12; // ebx
  __int64 v13; // rbx
  __int64 (__fastcall *v14)(__int64, IUnknown **); // rdi
  int v15; // eax
  HWND WindowW; // rdi
  int v17; // eax
  __int64 v18; // rdx
  __int64 v19; // r9
  __int64 DisplayMonitorInfoForMonitor; // rax
  int v22; // [rsp+20h] [rbp-99h]
  IUnknown *punk; // [rsp+30h] [rbp-89h] BYREF
  void *ppvOut; // [rsp+38h] [rbp-81h] BYREF
  __int64 v25; // [rsp+40h] [rbp-79h] BYREF
  int v26; // [rsp+48h] [rbp-71h] BYREF
  __int64 v27; // [rsp+50h] [rbp-69h] BYREF
  HMONITOR hMonitor; // [rsp+58h] [rbp-61h] BYREF
  HMONITOR v29; // [rsp+60h] [rbp-59h] BYREF
  float v30[4]; // [rsp+68h] [rbp-51h] BYREF
  _BYTE v31[4]; // [rsp+78h] [rbp-41h] BYREF
  float v32; // [rsp+7Ch] [rbp-3Dh]
  float v33; // [rsp+84h] [rbp-35h]
  struct tagRECT v34; // [rsp+88h] [rbp-31h] BYREF
  tagMONITORINFO mi; // [rsp+98h] [rbp-21h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+108h] [rbp+4Fh]

  *a3 = 0LL;
  *(_DWORD *)a4 = 3;
  *a5 = 0;
  if ( a6 )
    *a6 = 0LL;
  v27 = 0LL;
  v9 = *((_QWORD *)this + 66);
  v10 = *(__int64 (__fastcall **)(__int64, SID *, GUID *, __int64 *))(*(_QWORD *)v9 + 24LL);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v27);
  v11 = v10(v9, &SID_ImmersiveLauncher, &GUID_d8d60399_a0f1_f987_5551_321fd1b49864, &v27);
  v12 = v11;
  if ( v11 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x398,
      (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\startexperiencemanager.cpp",
      (const char *)(unsigned int)v11,
      v22);
    goto LABEL_32;
  }
  punk = 0LL;
  v13 = v27;
  v14 = *(__int64 (__fastcall **)(__int64, IUnknown **))(*(_QWORD *)v27 + 88LL);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&punk);
  v12 = v14(v13, &punk);
  if ( v12 < 0
    || (v29 = 0LL, a6)
    && (v12 = ((__int64 (__fastcall *)(IUnknown *, HMONITOR *))punk->lpVtbl[1].Release)(punk, &v29), v12 < 0) )
  {
LABEL_6:
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&punk);
    goto LABEL_32;
  }
  ppvOut = 0LL;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&ppvOut);
  v12 = IUnknown_QueryService(punk, (const GUID *const)&SID_EdgeUi, &GUID_6e6c3c52_5a5e_4b4b_a0f8_7fe12621a93e, &ppvOut);
  if ( v12 < 0 )
  {
LABEL_10:
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&ppvOut);
    goto LABEL_6;
  }
  v26 = 0;
  v15 = (*(__int64 (__fastcall **)(void *, int *))(*(_QWORD *)ppvOut + 80LL))(ppvOut, &v26);
  v12 = v15;
  if ( v15 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x3A9,
      (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\startexperiencemanager.cpp",
      (const char *)(unsigned int)v15,
      v22);
    goto LABEL_10;
  }
  v34 = 0LL;
  WindowW = FindWindowW(L"Shell_TrayWnd", 0LL);
  v25 = 0LL;
  hMonitor = 0LL;
  v17 = ((__int64 (__fastcall *)(IUnknown *, HMONITOR *))punk->lpVtbl[1].Release)(punk, &hMonitor);
  v12 = v17;
  if ( v17 < 0 )
  {
    v18 = 946LL;
LABEL_15:
    v19 = (unsigned int)v17;
LABEL_16:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v18,
      (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\startexperiencemanager.cpp",
      (const char *)v19,
      v22);
    winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v25);
    goto LABEL_10;
  }
  if ( *((_QWORD *)this + 100)
    && (DisplayMonitorInfoForMonitor = winrt::impl::consume_WindowsUdk_UI_Shell_IDisplayMonitorInfoCollection<winrt::WindowsUdk::UI::Shell::IDisplayMonitorInfoCollection>::GetDisplayMonitorInfoForMonitor(
                                         (char *)this + 800,
                                         v30,
                                         hMonitor),
        winrt::WindowsUdk::UI::Shell::ShellViewCoordinator::operator=(&v25, DisplayMonitorInfoForMonitor),
        winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)v30),
        v25) )
  {
    winrt::impl::consume_WindowsUdk_UI_Shell_IDisplayMonitorInfo<winrt::WindowsUdk::UI::Shell::IDisplayMonitorInfo>::StaticSafeWorkArea(
      &v25,
      v31);
    winrt::impl::consume_WindowsUdk_UI_Shell_IWindowDragHitTestResult<winrt::WindowsUdk::UI::Shell::IWindowDragHitTestResult>::WindowPosition(
      &v25,
      v30);
    v34.left = (int)v30[0];
    v34.top = (int)v32;
    v34.right = (int)(float)(v30[2] + v30[0]);
    v34.bottom = (int)(float)(v33 + v32);
  }
  else
  {
    mi.cbSize = 40;
    memset(&mi.rcMonitor, 0, 36);
    if ( !GetMonitorInfoW(hMonitor, &mi) )
    {
      v12 = -2147418113;
      v19 = 2147549183LL;
      v18 = 971LL;
      goto LABEL_16;
    }
    if ( WindowW && GetPropW(WindowW, L"IsAutoHideEnabled") )
    {
      v17 = (*(__int64 (__fastcall **)(void *, struct tagRECT *))(*(_QWORD *)ppvOut + 152LL))(ppvOut, &v34);
      v12 = v17;
      if ( v17 < 0 )
      {
        v18 = 974LL;
        goto LABEL_15;
      }
    }
    else
    {
      v17 = ((__int64 (__fastcall *)(IUnknown *, struct tagRECT *))punk->lpVtbl[3].Release)(punk, &v34);
      v12 = v17;
      if ( v17 < 0 )
      {
        v18 = 978LL;
        goto LABEL_15;
      }
    }
    v34.left = mi.rcMonitor.left;
    v34.right = mi.rcMonitor.right;
  }
  *a3 = v34;
  *(_DWORD *)a4 = v26;
  *a5 = (unsigned int)Mirror_IsThreadRTL() != 0;
  if ( a6 )
    *a6 = v29;
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v25);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&ppvOut);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&punk);
  v12 = 0;
LABEL_32:
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v27);
  return (unsigned int)v12;
}
