/*
 * XREFs of ?PlayTransitionToCortana@CStartExperienceManager@@UEAAJXZ @ 0x180389FF0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x1800573EC (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ??$SetValue@E@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyValueStatics@Foundation@3@EAAJEPEAPEAUIInspectable@@@ZE@Z @ 0x180065E98 (--$SetValue@E@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyVa.c)
 *     ?Reactivate@CSingleViewShellExperience@@QEAAJPEAUHSTRING__@@PEAUIPropertySet@Collections@Foundation@Windows@@1@Z @ 0x180074158 (-Reactivate@CSingleViewShellExperience@@QEAAJPEAUHSTRING__@@PEAUIPropertySet@Collections@Foundat.c)
 *     ?WindowFromViewWrapper@ExperienceManagerUtils@@YAPEAUHWND__@@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x180074CE0 (-WindowFromViewWrapper@ExperienceManagerUtils@@YAPEAUHWND__@@PEAUIViewWrapper@ViewManagerInterop.c)
 *     ?GetMonitorInformation@CStartExperienceManager@@AEAAJPEAVCSingleViewShellExperience@@PEAUtagRECT@@PEAW4EDGEUI_TRAYSTUCKPLACE@@PEA_NPEAPEAUHMONITOR__@@@Z @ 0x1800B4B00 (-GetMonitorInformation@CStartExperienceManager@@AEAAJPEAVCSingleViewShellExperience@@PEAUtagRECT.c)
 *     ??$ActivateInstance@V?$ComPtr@UIPropertySet@Collections@Foundation@Windows@@@WRL@Microsoft@@@Foundation@Windows@@YAJPEAUHSTRING__@@V?$ComPtrRef@V?$ComPtr@UIPropertySet@Collections@Foundation@Windows@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180113974 (--$ActivateInstance@V-$ComPtr@UIPropertySet@Collections@Foundation@Windows@@@WRL@Microsoft@@@Fou.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x180114CC8 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ??0PropertySetHelper@ShellHelpers@Internal@Windows@@QEAA@PEAUIPropertySet@Collections@Foundation@3@@Z @ 0x1801CC690 (--0PropertySetHelper@ShellHelpers@Internal@Windows@@QEAA@PEAUIPropertySet@Collections@Foundation.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ??$SetValue@N@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyValueStatics@Foundation@3@EAAJNPEAPEAUIInspectable@@@ZN@Z @ 0x18038702C (--$SetValue@N@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyVa.c)
 *     ??$SetValue@USize@Foundation@Windows@@@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyValueStatics@Foundation@3@EAAJUSize@63@PEAPEAUIInspectable@@@Z1@Z @ 0x180387174 (--$SetValue@USize@Foundation@Windows@@@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEA.c)
 *     ?GetDWORD@CortanaFeatureConfiguration@@YAJW4FeatureId@1@PEAK@Z @ 0x180388DB4 (-GetDWORD@CortanaFeatureConfiguration@@YAJW4FeatureId@1@PEAK@Z.c)
 *     ?GetDefaultCortanaWidthWithoutGutter@@YAHPEBUtagRECT@@H@Z @ 0x180388E50 (-GetDefaultCortanaWidthWithoutGutter@@YAHPEBUtagRECT@@H@Z.c)
 *     ?IsWideQFDeltaEnabled@CortanaFlightingHelpers@@YAEXZ @ 0x18038988C (-IsWideQFDeltaEnabled@CortanaFlightingHelpers@@YAEXZ.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CStartExperienceManager::PlayTransitionToCortana(
        ExperienceManagerUtils **this,
        struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *a2)
{
  struct CSingleViewShellExperience *v3; // rdx
  int MonitorInformation; // ebx
  int v5; // eax
  __int64 v6; // r9
  __int64 v7; // rdx
  CortanaFlightingHelpers *v8; // rcx
  unsigned int v9; // r8d
  int DpiForMonitor; // eax
  HSTRING_HEADER *v11; // rax
  __int64 (__fastcall ***v12)(_QWORD, GUID *, __int64 *); // r8
  unsigned int v13; // r8d
  HSTRING_HEADER *v14; // rax
  __int64 (__fastcall ***v15)(_QWORD, GUID *, __int64 *); // r8
  unsigned int v16; // r8d
  bool v17; // zf
  char v18; // bl
  HSTRING_HEADER *v19; // rax
  __int64 v20; // r8
  unsigned int v21; // r8d
  struct Windows::Foundation::Collections::IPropertySet *v22; // rbx
  HSTRING_HEADER *v23; // rax
  struct Windows::Foundation::Collections::IPropertySet *v24; // r9
  bool v26[4]; // [rsp+38h] [rbp-79h] BYREF
  int v27; // [rsp+3Ch] [rbp-75h] BYREF
  struct Windows::Foundation::Collections::IPropertySet *v28; // [rsp+40h] [rbp-71h] BYREF
  int v29; // [rsp+48h] [rbp-69h] BYREF
  int v30; // [rsp+4Ch] [rbp-65h] BYREF
  HMONITOR hMonitor; // [rsp+50h] [rbp-61h] BYREF
  HWND hWnd[2]; // [rsp+58h] [rbp-59h] BYREF
  char v33; // [rsp+68h] [rbp-49h]
  HSTRING_HEADER hstringHeader; // [rsp+70h] [rbp-41h] BYREF
  __int64 v35; // [rsp+88h] [rbp-29h]
  struct tagMONITORINFO mi; // [rsp+90h] [rbp-21h] BYREF
  HSTRING_HEADER v37; // [rsp+B8h] [rbp+7h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+110h] [rbp+5Fh]

  hWnd[0] = (HWND)ExperienceManagerUtils::WindowFromViewWrapper(this[38], a2);
  EnableWindow(hWnd[0], 0);
  hWnd[1] = (HWND)hWnd;
  v33 = 1;
  *(_OWORD *)&hstringHeader.Reserved.Reserved1 = 0LL;
  v26[0] = 0;
  v29 = 0;
  hMonitor = 0LL;
  MonitorInformation = CStartExperienceManager::GetMonitorInformation(
                         (CStartExperienceManager *)(this - 5),
                         v3,
                         (struct tagRECT *)&hstringHeader,
                         (enum EDGEUI_TRAYSTUCKPLACE *)&v29,
                         v26,
                         &hMonitor);
  if ( MonitorInformation < 0 )
    goto LABEL_25;
  v28 = 0LL;
  v35 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(
    &hstringHeader,
    L"Windows.Foundation.Collections.ValueSet",
    0x28u,
    0x27u);
  v5 = Windows::Foundation::ActivateInstance<Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IPropertySet>>(
         v35,
         (__int64 *)&v28);
  MonitorInformation = v5;
  if ( v5 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x52E,
      (int)"pcshell\\twinui\\experiencemanagers\\lib\\startexperiencemanager.cpp",
      (const char *)(unsigned int)v5);
LABEL_24:
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v28);
LABEL_25:
    EnableWindow(hWnd[0], 1);
    return (unsigned int)MonitorInformation;
  }
  Windows::Internal::ShellHelpers::PropertySetHelper::PropertySetHelper(
    (Windows::Internal::ShellHelpers::PropertySetHelper *)&hstringHeader,
    v28);
  mi.cbSize = 40;
  memset(&mi.rcMonitor, 0, 36);
  if ( !GetMonitorInfoW(hMonitor, &mi) )
  {
    MonitorInformation = -2147418113;
    v6 = 2147549183LL;
    v7 = 1334LL;
LABEL_23:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v7,
      (int)"pcshell\\twinui\\experiencemanagers\\lib\\startexperiencemanager.cpp",
      (const char *)v6);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&hstringHeader);
    goto LABEL_24;
  }
  v27 = 0;
  CortanaFeatureConfiguration::GetDWORD((CortanaFeatureConfiguration *)0x37, &v27);
  if ( v27 || CortanaFlightingHelpers::IsWideQFDeltaEnabled(v8) )
  {
    v27 = 0;
    v30 = 0;
    DpiForMonitor = GetDpiForMonitor(hMonitor, 0LL, &v27, &v30);
    MonitorInformation = DpiForMonitor;
    if ( DpiForMonitor < 0 )
    {
      v7 = 1343LL;
LABEL_22:
      v6 = (unsigned int)DpiForMonitor;
      goto LABEL_23;
    }
    GetDefaultCortanaWidthWithoutGutter(&mi.rcMonitor, v27);
  }
  v11 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v37, (const WCHAR **)&off_1807600B8, v9);
  DpiForMonitor = Windows::Internal::ShellHelpers::PropertySetHelper::SetValue<Windows::Foundation::Size>(
                    (Windows::Internal::ShellHelpers::PropertySetHelper *)&hstringHeader,
                    (HSTRING)v11[1].Reserved.Reserved1,
                    v12);
  MonitorInformation = DpiForMonitor;
  if ( DpiForMonitor < 0 )
  {
    v7 = 1352LL;
    goto LABEL_22;
  }
  v14 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v37, (const WCHAR **)&off_1807600D0, v13);
  DpiForMonitor = Windows::Internal::ShellHelpers::PropertySetHelper::SetValue<double>(
                    (Windows::Internal::ShellHelpers::PropertySetHelper *)&hstringHeader,
                    (HSTRING)v14[1].Reserved.Reserved1,
                    v15);
  MonitorInformation = DpiForMonitor;
  if ( DpiForMonitor < 0 )
  {
    v7 = 1355LL;
    goto LABEL_22;
  }
  if ( v26[0] )
    v17 = v29 == 0;
  else
    v17 = v29 == 2;
  v18 = !v17;
  v19 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v37, (const WCHAR **)&off_1807600C0, v16);
  DpiForMonitor = Windows::Internal::ShellHelpers::PropertySetHelper::SetValue<unsigned char>(
                    &hstringHeader,
                    (__int64)v19[1].Reserved.Reserved1,
                    v20,
                    v18);
  MonitorInformation = DpiForMonitor;
  if ( DpiForMonitor < 0 )
  {
    v7 = 1377LL;
    goto LABEL_22;
  }
  v22 = v28;
  v23 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v37, (const WCHAR **)&off_180760090, v21);
  DpiForMonitor = CSingleViewShellExperience::Reactivate(
                    (CSingleViewShellExperience *)(this + 35),
                    (HSTRING)v23[1].Reserved.Reserved1,
                    v22,
                    v24);
  MonitorInformation = DpiForMonitor;
  if ( DpiForMonitor < 0 )
  {
    v7 = 1382LL;
    goto LABEL_22;
  }
  *((_BYTE *)this + 720) = 1;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&hstringHeader);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v28);
  return 0LL;
}
