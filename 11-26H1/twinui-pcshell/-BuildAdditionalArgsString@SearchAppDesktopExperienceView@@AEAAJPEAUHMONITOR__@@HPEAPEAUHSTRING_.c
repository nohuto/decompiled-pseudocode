/*
 * XREFs of ?BuildAdditionalArgsString@SearchAppDesktopExperienceView@@AEAAJPEAUHMONITOR__@@HPEAPEAUHSTRING__@@@Z @ 0x1803C7750
 * Callers:
 *     ?GetActivateArgs@SearchAppDesktopExperienceView@@AEAAJPEAUHSTRING__@@PEAPEAU2@@Z @ 0x1803C8AB4 (-GetActivateArgs@SearchAppDesktopExperienceView@@AEAAJPEAUHSTRING__@@PEAPEAU2@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x1800573EC (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ?SHRegGetBOOLWithREGSAM@@YAJPEAUHKEY__@@PEBG1KPEAH@Z @ 0x1801085C4 (-SHRegGetBOOLWithREGSAM@@YAJPEAUHKEY__@@PEBG1KPEAH@Z.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x180114CC8 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     memset_0 @ 0x1802C9ECC (memset_0.c)
 *     ??$?0$0ICE@@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEAY0ICE@G@Z @ 0x18035DA30 (--$-0$0ICE@@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEAY0ICE@G@Z.c)
 *     ?GetAppsUseLightTheme@SearchAppDesktopExperienceView@@AEAA_NXZ @ 0x1803C8D44 (-GetAppsUseLightTheme@SearchAppDesktopExperienceView@@AEAA_NXZ.c)
 *     ?GetColorPrevalenceEnabled@CortanaDesktopExperienceView@@AEAA_NXZ @ 0x1803C8ED4 (-GetColorPrevalenceEnabled@CortanaDesktopExperienceView@@AEAA_NXZ.c)
 *     ?GetStuckPlace@SearchAppDesktopExperienceView@@AEAAJPEAUHMONITOR__@@PEAW4EDGEUI_TRAYSTUCKPLACE@@@Z @ 0x1803C97D4 (-GetStuckPlace@SearchAppDesktopExperienceView@@AEAAJPEAUHMONITOR__@@PEAW4EDGEUI_TRAYSTUCKPLACE@@.c)
 *     ?IsTraySearchBoxVisible@SearchAppDesktopExperienceView@@AEAAJPEAUHMONITOR__@@PEA_N@Z @ 0x1803C9D08 (-IsTraySearchBoxVisible@SearchAppDesktopExperienceView@@AEAAJPEAUHMONITOR__@@PEA_N@Z.c)
 *     ?UnscaleByPerMonitorDPI@ExperienceManagerUtils@@YAHHPEAUHMONITOR__@@@Z @ 0x1806832E0 (-UnscaleByPerMonitorDPI@ExperienceManagerUtils@@YAHHPEAUHMONITOR__@@@Z.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall SearchAppDesktopExperienceView::BuildAdditionalArgsString(
        SearchAppDesktopExperienceView *this,
        HMONITOR a2,
        ExperienceManagerUtils *a3,
        HSTRING *newString)
{
  unsigned int v7; // ebx
  unsigned int v8; // r8d
  HSTRING Reserved1; // rbx
  HRESULT v10; // eax
  CortanaDesktopExperienceView *v11; // rcx
  unsigned int v12; // ebx
  bool ColorPrevalenceEnabled; // al
  const wchar_t *v14; // rcx
  unsigned int v15; // r8d
  HSTRING_HEADER *v16; // rax
  HRESULT v17; // eax
  HRESULT StuckPlace; // eax
  __int64 v19; // rdx
  unsigned int v20; // r8d
  HSTRING v21; // rbx
  HRESULT v22; // eax
  HRESULT IsTraySearchBoxVisible; // eax
  __int64 v24; // rdx
  const wchar_t *v25; // rax
  unsigned int v26; // r8d
  HSTRING_HEADER *v27; // rax
  HMONITOR v28; // rax
  HRESULT v29; // eax
  __int64 v30; // rdx
  const wchar_t *v31; // rax
  unsigned int v32; // r8d
  HSTRING_HEADER *v33; // rax
  SearchAppDesktopExperienceView *v34; // rcx
  bool AppsUseLightTheme; // al
  const wchar_t *v36; // rcx
  unsigned int v37; // r8d
  HSTRING_HEADER *v38; // rax
  HRESULT v39; // eax
  unsigned int v40; // r9d
  __int64 v41; // rdx
  int BOOLWithREGSAM; // eax
  unsigned int v43; // r8d
  int v44; // ecx
  const wchar_t *v45; // rax
  HSTRING_HEADER *v46; // rax
  bool v48; // [rsp+30h] [rbp-D0h] BYREF
  HSTRING newStringa; // [rsp+38h] [rbp-C8h] BYREF
  HSTRING string2; // [rsp+40h] [rbp-C0h] BYREF
  HSTRING v51; // [rsp+48h] [rbp-B8h] BYREF
  HSTRING v52; // [rsp+50h] [rbp-B0h] BYREF
  int v53[2]; // [rsp+58h] [rbp-A8h] BYREF
  HSTRING v54; // [rsp+60h] [rbp-A0h] BYREF
  HSTRING v55; // [rsp+68h] [rbp-98h] BYREF
  unsigned int v56; // [rsp+70h] [rbp-90h] BYREF
  HSTRING string; // [rsp+78h] [rbp-88h] BYREF
  HSTRING_HEADER v58; // [rsp+80h] [rbp-80h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+A0h] [rbp-60h] BYREF
  HSTRING string1; // [rsp+B8h] [rbp-48h]
  WCHAR sourceString[2]; // [rsp+C0h] [rbp-40h] BYREF
  _BYTE v62[76]; // [rsp+C4h] [rbp-3Ch] BYREF
  WCHAR v63[2]; // [rsp+110h] [rbp+10h] BYREF
  _BYTE v64[76]; // [rsp+114h] [rbp+14h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1A8h] [rbp+A8h]

  *newString = 0LL;
  v7 = ExperienceManagerUtils::UnscaleByPerMonitorDPI((ExperienceManagerUtils *)(unsigned int)a3, (int)a2, (HMONITOR)a3);
  *(_DWORD *)sourceString = 0;
  memset_0(v62, 0, 0x40uLL);
  _o__itow_s(v7, sourceString, 34LL, 10LL);
  WindowsDeleteString(0LL);
  string = 0LL;
  Reserved1 = (HSTRING)Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v58, sourceString, v8)[1].Reserved.Reserved1;
  string1 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(&hstringHeader, L"&SpeechTextInputHeight=", 0x18u, 0x17u);
  v10 = WindowsConcatString(string1, Reserved1, &string);
  v12 = v10;
  if ( v10 >= 0 )
  {
    newStringa = 0LL;
    ColorPrevalenceEnabled = CortanaDesktopExperienceView::GetColorPrevalenceEnabled(v11);
    v14 = L"&ColorPrevalenceEnabled=true";
    if ( !ColorPrevalenceEnabled )
      v14 = L"&ColorPrevalenceEnabled=false";
    *(_QWORD *)v53 = v14;
    WindowsDeleteString(newStringa);
    newStringa = 0LL;
    v16 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v58, (const WCHAR **)v53, v15);
    v17 = WindowsConcatString(string, (HSTRING)v16[1].Reserved.Reserved1, &newStringa);
    v12 = v17;
    if ( v17 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x466,
        (int)"pcshell\\twinui\\experiencemanagers\\lib\\searchappdesktopexperienceview.cpp",
        (const char *)(unsigned int)v17);
LABEL_7:
      WindowsDeleteString(newStringa);
LABEL_45:
      newStringa = 0LL;
      goto LABEL_46;
    }
    string2 = 0LL;
    v56 = 0;
    StuckPlace = SearchAppDesktopExperienceView::GetStuckPlace(this, a2, (enum EDGEUI_TRAYSTUCKPLACE *)&v56);
    v12 = StuckPlace;
    if ( StuckPlace < 0 )
    {
      v19 = 1131LL;
LABEL_10:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v19,
        (int)"pcshell\\twinui\\experiencemanagers\\lib\\searchappdesktopexperienceview.cpp",
        (const char *)(unsigned int)StuckPlace);
LABEL_11:
      WindowsDeleteString(string2);
      string2 = 0LL;
      goto LABEL_7;
    }
    *(_DWORD *)v63 = 0;
    memset_0(v64, 0, 0x40uLL);
    _o__itow_s(v56, v63, 34LL, 10LL);
    WindowsDeleteString(string2);
    string2 = 0LL;
    v21 = (HSTRING)Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v58, v63, v20)[1].Reserved.Reserved1;
    string1 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(&hstringHeader, L"&TaskbarOrientation=", 0x15u, 0x14u);
    StuckPlace = WindowsConcatString(string1, v21, &string2);
    v12 = StuckPlace;
    if ( StuckPlace < 0 )
    {
      v19 = 1134LL;
      goto LABEL_10;
    }
    v51 = 0LL;
    WindowsDeleteString(0LL);
    v51 = 0LL;
    v22 = WindowsConcatString(newStringa, string2, &v51);
    v12 = v22;
    if ( v22 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x471,
        (int)"pcshell\\twinui\\experiencemanagers\\lib\\searchappdesktopexperienceview.cpp",
        (const char *)(unsigned int)v22);
LABEL_16:
      WindowsDeleteString(v51);
      v51 = 0LL;
      goto LABEL_11;
    }
    v52 = 0LL;
    v48 = 0;
    IsTraySearchBoxVisible = SearchAppDesktopExperienceView::IsTraySearchBoxVisible(this, a2, &v48);
    v12 = IsTraySearchBoxVisible;
    if ( IsTraySearchBoxVisible < 0 )
    {
      v24 = 1142LL;
LABEL_19:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v24,
        (int)"pcshell\\twinui\\experiencemanagers\\lib\\searchappdesktopexperienceview.cpp",
        (const char *)(unsigned int)IsTraySearchBoxVisible);
LABEL_20:
      WindowsDeleteString(v52);
      v52 = 0LL;
      goto LABEL_16;
    }
    v25 = L"&SearchBoxInTaskbar=true";
    if ( !v48 )
      v25 = L"&SearchBoxInTaskbar=false";
    *(_QWORD *)v53 = v25;
    WindowsDeleteString(v52);
    v52 = 0LL;
    v27 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v58, (const WCHAR **)v53, v26);
    IsTraySearchBoxVisible = WindowsConcatString(v51, (HSTRING)v27[1].Reserved.Reserved1, &v52);
    v12 = IsTraySearchBoxVisible;
    if ( IsTraySearchBoxVisible < 0 )
    {
      v24 = 1144LL;
      goto LABEL_19;
    }
    v54 = 0LL;
    *(_QWORD *)v53 = 0LL;
    v28 = MonitorFromPoint(0LL, 1u);
    v48 = 0;
    v29 = SearchAppDesktopExperienceView::IsTraySearchBoxVisible(this, v28, &v48);
    v12 = v29;
    if ( v29 >= 0 )
    {
      v31 = L"&SearchBoxInTaskbarPrimaryMonitor=true";
      if ( !v48 )
        v31 = L"&SearchBoxInTaskbarPrimaryMonitor=false";
      *(_QWORD *)v53 = v31;
      WindowsDeleteString(v54);
      v54 = 0LL;
      v33 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v58, (const WCHAR **)v53, v32);
      v29 = WindowsConcatString(v52, (HSTRING)v33[1].Reserved.Reserved1, &v54);
      v12 = v29;
      if ( v29 >= 0 )
      {
        v55 = 0LL;
        AppsUseLightTheme = SearchAppDesktopExperienceView::GetAppsUseLightTheme(v34);
        v36 = L"&AppsUseLightTheme=true";
        if ( !AppsUseLightTheme )
          v36 = L"&AppsUseLightTheme=false";
        *(_QWORD *)v53 = v36;
        WindowsDeleteString(v55);
        v38 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v58, (const WCHAR **)v53, v37);
        v39 = WindowsConcatString(v54, (HSTRING)v38[1].Reserved.Reserved1, &v55);
        v12 = v39;
        if ( v39 >= 0 )
        {
          v53[0] = 0;
          BOOLWithREGSAM = SHRegGetBOOLWithREGSAM(
                             HKEY_CURRENT_USER,
                             L"Software\\Microsoft\\Windows\\CurrentVersion\\Explorer\\Advanced",
                             L"HideFileExt",
                             v40,
                             v53);
          v44 = v53[0];
          if ( BOOLWithREGSAM < 0 )
            v44 = 0;
          v45 = L"&HideFileExtensions=true";
          if ( !v44 )
            v45 = L"&HideFileExtensions=false";
          *(_QWORD *)v53 = v45;
          v46 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v58, (const WCHAR **)v53, v43);
          v39 = WindowsConcatString(v55, (HSTRING)v46[1].Reserved.Reserved1, newString);
          v12 = v39;
          if ( v39 >= 0 )
          {
            WindowsDeleteString(v55);
            v55 = 0LL;
            WindowsDeleteString(v54);
            v54 = 0LL;
            WindowsDeleteString(v52);
            v52 = 0LL;
            WindowsDeleteString(v51);
            v51 = 0LL;
            WindowsDeleteString(string2);
            string2 = 0LL;
            WindowsDeleteString(newStringa);
            v12 = 0;
            goto LABEL_45;
          }
          v41 = 1162LL;
        }
        else
        {
          v41 = 1158LL;
        }
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v41,
          (int)"pcshell\\twinui\\experiencemanagers\\lib\\searchappdesktopexperienceview.cpp",
          (const char *)(unsigned int)v39);
        WindowsDeleteString(v55);
        v55 = 0LL;
        goto LABEL_28;
      }
      v30 = 1153LL;
    }
    else
    {
      v30 = 1151LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v30,
      (int)"pcshell\\twinui\\experiencemanagers\\lib\\searchappdesktopexperienceview.cpp",
      (const char *)(unsigned int)v29);
LABEL_28:
    WindowsDeleteString(v54);
    v54 = 0LL;
    goto LABEL_20;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x461,
    (int)"pcshell\\twinui\\experiencemanagers\\lib\\searchappdesktopexperienceview.cpp",
    (const char *)(unsigned int)v10);
LABEL_46:
  WindowsDeleteString(string);
  return v12;
}
