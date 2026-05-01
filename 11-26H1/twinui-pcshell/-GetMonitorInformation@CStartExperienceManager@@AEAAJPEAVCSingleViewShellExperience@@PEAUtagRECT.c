/*
 * XREFs of ?GetMonitorInformation@CStartExperienceManager@@AEAAJPEAVCSingleViewShellExperience@@PEAUtagRECT@@PEAW4EDGEUI_TRAYSTUCKPLACE@@PEA_NPEAPEAUHMONITOR__@@@Z @ 0x1800B4B00
 * Callers:
 *     ?PositionMenu@CStartExperienceManager@@AEAAJPEAVCSingleViewShellExperience@@W4PositionMenuFlags@1@@Z @ 0x1800B4780 (-PositionMenu@CStartExperienceManager@@AEAAJPEAVCSingleViewShellExperience@@W4PositionMenuFlags@.c)
 *     ?Hide@CStartExperienceManager@@UEAAJI@Z @ 0x1801A9C80 (-Hide@CStartExperienceManager@@UEAAJI@Z.c)
 *     ?PlayTransitionToCortana@CStartExperienceManager@@UEAAJXZ @ 0x180389FF0 (-PlayTransitionToCortana@CStartExperienceManager@@UEAAJXZ.c)
 *     ?SetBackgroundImage@CStartExperienceManager@@AEAAJPEAX@Z @ 0x18038ACD0 (-SetBackgroundImage@CStartExperienceManager@@AEAAJPEAX@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18002633C (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?GetDisplayMonitorInfoForMonitor@?$consume_WindowsUdk_UI_Shell_IDisplayMonitorInfoCollection@UIDisplayMonitorInfoCollection@Shell@UI@WindowsUdk@winrt@@@impl@winrt@@QEBA@_K@Z @ 0x180029AD8 (-GetDisplayMonitorInfoForMonitor@-$consume_WindowsUdk_UI_Shell_IDisplayMonitorInfoCollection@UID.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??4ShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@QEAAAEAU01234@$$QEAU01234@@Z @ 0x180054B64 (--4ShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@QEAAAEAU01234@$$QEAU01234@@Z.c)
 *     ?Mirror_IsThreadRTL@@YAHXZ @ 0x180082308 (-Mirror_IsThreadRTL@@YAHXZ.c)
 *     ?StaticSafeWorkArea@?$consume_WindowsUdk_UI_Shell_IDisplayMonitorInfo@UIDisplayMonitorInfo@Shell@UI@WindowsUdk@winrt@@@impl@winrt@@QEBA@XZ @ 0x1802394B4 (-StaticSafeWorkArea@-$consume_WindowsUdk_UI_Shell_IDisplayMonitorInfo@UIDisplayMonitorInfo@Shell.c)
 *     ?WindowPosition@?$consume_WindowsUdk_UI_Shell_IWindowDragHitTestResult@UIWindowDragHitTestResult@Shell@UI@WindowsUdk@winrt@@@impl@winrt@@QEBA@XZ @ 0x18023A2D4 (-WindowPosition@-$consume_WindowsUdk_UI_Shell_IWindowDragHitTestResult@UIWindowDragHitTestResult.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
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
  __int64 *DisplayMonitorInfoForMonitor; // rax
  IUnknown *punk; // [rsp+30h] [rbp-89h] BYREF
  void *ppvOut; // [rsp+38h] [rbp-81h] BYREF
  __int64 v24; // [rsp+40h] [rbp-79h] BYREF
  int v25; // [rsp+48h] [rbp-71h] BYREF
  __int64 v26; // [rsp+50h] [rbp-69h] BYREF
  HMONITOR hMonitor; // [rsp+58h] [rbp-61h] BYREF
  HMONITOR v28; // [rsp+60h] [rbp-59h] BYREF
  __int64 v29; // [rsp+68h] [rbp-51h] BYREF
  float v30; // [rsp+70h] [rbp-49h]
  _BYTE v31[4]; // [rsp+78h] [rbp-41h] BYREF
  float v32; // [rsp+7Ch] [rbp-3Dh]
  float v33; // [rsp+84h] [rbp-35h]
  struct tagRECT v34; // [rsp+88h] [rbp-31h] BYREF
  struct tagMONITORINFO mi; // [rsp+98h] [rbp-21h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+108h] [rbp+4Fh]

  *a3 = 0LL;
  *(_DWORD *)a4 = 3;
  *a5 = 0;
  if ( a6 )
    *a6 = 0LL;
  v26 = 0LL;
  v9 = *((_QWORD *)this + 66);
  v10 = *(__int64 (__fastcall **)(__int64, SID *, GUID *, __int64 *))(*(_QWORD *)v9 + 24LL);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v26);
  v11 = v10(v9, &SID_ImmersiveLauncher, &GUID_d8d60399_a0f1_f987_5551_321fd1b49864, &v26);
  v12 = v11;
  if ( v11 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x394,
      (int)"pcshell\\twinui\\experiencemanagers\\lib\\startexperiencemanager.cpp",
      (const char *)(unsigned int)v11);
    goto LABEL_32;
  }
  punk = 0LL;
  v13 = v26;
  v14 = *(__int64 (__fastcall **)(__int64, IUnknown **))(*(_QWORD *)v26 + 88LL);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&punk);
  v12 = v14(v13, &punk);
  if ( v12 < 0
    || (v28 = 0LL, a6)
    && (v12 = ((__int64 (__fastcall *)(IUnknown *, HMONITOR *))punk->lpVtbl[1].Release)(punk, &v28), v12 < 0) )
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
  v25 = 0;
  v15 = (*(__int64 (__fastcall **)(void *, int *))(*(_QWORD *)ppvOut + 80LL))(ppvOut, &v25);
  v12 = v15;
  if ( v15 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x3A5,
      (int)"pcshell\\twinui\\experiencemanagers\\lib\\startexperiencemanager.cpp",
      (const char *)(unsigned int)v15);
    goto LABEL_10;
  }
  v34 = 0LL;
  WindowW = FindWindowW(L"Shell_TrayWnd", 0LL);
  v24 = 0LL;
  hMonitor = 0LL;
  v17 = ((__int64 (__fastcall *)(IUnknown *, HMONITOR *))punk->lpVtbl[1].Release)(punk, &hMonitor);
  v12 = v17;
  if ( v17 < 0 )
  {
    v18 = 942LL;
LABEL_15:
    v19 = (unsigned int)v17;
LABEL_16:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v18,
      (int)"pcshell\\twinui\\experiencemanagers\\lib\\startexperiencemanager.cpp",
      (const char *)v19);
    winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v24);
    goto LABEL_10;
  }
  if ( *((_QWORD *)this + 100)
    && (DisplayMonitorInfoForMonitor = winrt::impl::consume_WindowsUdk_UI_Shell_IDisplayMonitorInfoCollection<winrt::WindowsUdk::UI::Shell::IDisplayMonitorInfoCollection>::GetDisplayMonitorInfoForMonitor(
                                         (__int64 **)this + 100,
                                         &v29,
                                         (__int64)hMonitor),
        winrt::WindowsUdk::UI::Shell::ShellViewCoordinator::operator=(&v24, DisplayMonitorInfoForMonitor),
        winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v29),
        v24) )
  {
    winrt::impl::consume_WindowsUdk_UI_Shell_IDisplayMonitorInfo<winrt::WindowsUdk::UI::Shell::IDisplayMonitorInfo>::StaticSafeWorkArea(
      &v24,
      v31);
    winrt::impl::consume_WindowsUdk_UI_Shell_IWindowDragHitTestResult<winrt::WindowsUdk::UI::Shell::IWindowDragHitTestResult>::WindowPosition(
      &v24,
      &v29);
    v34.left = (int)*(float *)&v29;
    v34.top = (int)v32;
    v34.right = (int)(float)(v30 + *(float *)&v29);
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
      v18 = 967LL;
      goto LABEL_16;
    }
    if ( WindowW && GetPropW(WindowW, L"IsAutoHideEnabled") )
    {
      v17 = (*(__int64 (__fastcall **)(void *, struct tagRECT *))(*(_QWORD *)ppvOut + 152LL))(ppvOut, &v34);
      v12 = v17;
      if ( v17 < 0 )
      {
        v18 = 970LL;
        goto LABEL_15;
      }
    }
    else
    {
      v17 = ((__int64 (__fastcall *)(IUnknown *, struct tagRECT *))punk->lpVtbl[3].Release)(punk, &v34);
      v12 = v17;
      if ( v17 < 0 )
      {
        v18 = 974LL;
        goto LABEL_15;
      }
    }
    v34.left = mi.rcMonitor.left;
    v34.right = mi.rcMonitor.right;
  }
  *a3 = v34;
  *(_DWORD *)a4 = v25;
  *a5 = (unsigned int)Mirror_IsThreadRTL() != 0;
  if ( a6 )
    *a6 = v28;
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v24);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&ppvOut);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&punk);
  v12 = 0;
LABEL_32:
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v26);
  return (unsigned int)v12;
}
