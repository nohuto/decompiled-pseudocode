/*
 * XREFs of ?LoadTheme@CDesktopManager@@AEAAJXZ @ 0x1800ABDD4
 * Callers:
 *     ?UpdateSettings@CDesktopManager@@QEAAJPEAK@Z @ 0x18004AD98 (-UpdateSettings@CDesktopManager@@QEAAJPEAK@Z.c)
 * Callees:
 *     ?EnsureThemeStatics@CWindowIconic@@SAJXZ @ 0x1800031E0 (-EnsureThemeStatics@CWindowIconic@@SAJXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18001E310 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     McGenEventWrite_EtwEventWriteTransfer @ 0x180078474 (McGenEventWrite_EtwEventWriteTransfer.c)
 *     ?InitializeHighContrast@CDesktopManager@@AEAAXXZ @ 0x18008BC1C (-InitializeHighContrast@CDesktopManager@@AEAAXXZ.c)
 *     __security_check_cookie @ 0x18008E1C0 (__security_check_cookie.c)
 *     IsOpenThemeDataPresent @ 0x18008F41C (IsOpenThemeDataPresent.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_AUTest@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800AC8F4 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_AUTest@@@details@wil@@QEAAX_NW4ReportingK.c)
 *     ?EnsureImages@CTopLevelWindow@@SAJXZ @ 0x1800CB09C (-EnsureImages@CTopLevelWindow@@SAJXZ.c)
 */

__int64 __fastcall CDesktopManager::LoadTheme(CDesktopManager *this)
{
  int v2; // r8d
  HRESULT CurrentThemeName; // eax
  signed int v5; // ebx
  HMODULE Library; // rax
  signed int LastError; // eax
  int v8; // r9d
  HTHEME v9; // rax
  signed int v10; // eax
  HTHEME v11; // rax
  signed int v12; // eax
  HTHEME v13; // rax
  signed int v14; // eax
  HTHEME v15; // rax
  signed int v16; // eax
  HTHEME v17; // rax
  signed int v18; // eax
  const wchar_t *v19; // rax
  __int64 v20; // rdx
  const wchar_t *v21; // rax
  bool v22; // zf
  char v23; // al
  HRESULT ThemeInt; // eax
  int v25; // r8d
  unsigned int pszSizeBuff; // [rsp+20h] [rbp-58h]
  _BYTE v27[16]; // [rsp+30h] [rbp-48h] BYREF

  if ( !IsOpenThemeDataPresent() )
    return 0LL;
  if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
    McGenEventWrite_EtwEventWriteTransfer(
      (unsigned int)&Microsoft_Windows_Dwm_Udwm_Provider_Context,
      (unsigned int)&UdwmLoadTheme_Start,
      v2,
      1,
      (__int64)v27);
  CurrentThemeName = GetCurrentThemeName((LPWSTR)this + 284, 260, 0LL, 0, 0LL, 0);
  v5 = CurrentThemeName;
  if ( CurrentThemeName < 0 )
  {
    pszSizeBuff = 586;
    goto LABEL_47;
  }
  SetLastError(0);
  Library = LoadLibraryExW((LPCWSTR)this + 284, 0LL, 2u);
  *((_QWORD *)this + 136) = Library;
  if ( !Library )
  {
    LastError = GetLastError();
    v5 = LastError;
    if ( LastError > 0 )
      v5 = (unsigned __int16)LastError | 0x80070000;
    pszSizeBuff = 587;
LABEL_10:
    if ( v5 >= 0 )
      v5 = -2003304445;
    v8 = v5;
    goto LABEL_48;
  }
  SetLastError(0);
  v9 = OpenThemeData(0LL, L"DWMWindow");
  *((_QWORD *)this + 70) = v9;
  if ( !v9 )
  {
    v10 = GetLastError();
    v5 = v10;
    if ( v10 > 0 )
      v5 = (unsigned __int16)v10 | 0x80070000;
    pszSizeBuff = 589;
    goto LABEL_10;
  }
  SetLastError(0);
  v11 = OpenThemeData(0LL, L"DWMTouch");
  *((_QWORD *)this + 137) = v11;
  if ( !v11 )
  {
    v12 = GetLastError();
    v5 = v12;
    if ( v12 > 0 )
      v5 = (unsigned __int16)v12 | 0x80070000;
    pszSizeBuff = 590;
    goto LABEL_10;
  }
  SetLastError(0);
  v13 = OpenThemeData(0LL, L"DWMPen");
  *((_QWORD *)this + 138) = v13;
  if ( !v13 )
  {
    v14 = GetLastError();
    v5 = v14;
    if ( v14 > 0 )
      v5 = (unsigned __int16)v14 | 0x80070000;
    pszSizeBuff = 591;
    goto LABEL_10;
  }
  SetLastError(0);
  v15 = OpenThemeData(0LL, L"Animations");
  *((_QWORD *)this + 139) = v15;
  if ( !v15 )
  {
    v16 = GetLastError();
    v5 = v16;
    if ( v16 > 0 )
      v5 = (unsigned __int16)v16 | 0x80070000;
    pszSizeBuff = 593;
    goto LABEL_10;
  }
  SetLastError(0);
  v17 = OpenThemeData(0LL, L"TimingFunction");
  *((_QWORD *)this + 140) = v17;
  if ( !v17 )
  {
    v18 = GetLastError();
    v5 = v18;
    if ( v18 > 0 )
      v5 = (unsigned __int16)v18 | 0x80070000;
    pszSizeBuff = 594;
    goto LABEL_10;
  }
  v19 = CharLowerW((LPWSTR)this + 284);
  if ( wcsstr(v19, L"aero.msstyles")
    || (LOBYTE(v20) = 1,
        wil::details::FeatureImpl<__WilFeatureTraits_Feature_AUTest>::ReportUsage(
          &`wil::Feature<__WilFeatureTraits_Feature_AUTest>::GetImpl'::`2'::impl,
          v20),
        v21 = CharLowerW((LPWSTR)this + 284),
        v22 = wcsstr(v21, L"aerotest.msstyles") == 0LL,
        v23 = 0,
        !v22) )
  {
    v23 = 1;
  }
  *((_BYTE *)this + 26) = v23;
  CDesktopManager::InitializeHighContrast(this);
  CurrentThemeName = CTopLevelWindow::EnsureImages();
  v5 = CurrentThemeName;
  if ( CurrentThemeName < 0 )
  {
    pszSizeBuff = 604;
    goto LABEL_47;
  }
  CurrentThemeName = CWindowIconic::EnsureThemeStatics();
  v5 = CurrentThemeName;
  if ( CurrentThemeName < 0 )
  {
    pszSizeBuff = 605;
    goto LABEL_47;
  }
  ThemeInt = GetThemeInt(*((HTHEME *)this + 70), 0, 0, 2431, (int *)this + 110);
  v5 = ThemeInt;
  if ( ThemeInt < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_1800F8D68, 1LL, ThemeInt, 0x260u, 0LL);
  }
  else
  {
    CurrentThemeName = GetThemeInt(*((HTHEME *)this + 70), 46, 1, 2431, (int *)this + 111);
    v5 = CurrentThemeName;
    if ( CurrentThemeName < 0 )
    {
      pszSizeBuff = 609;
      goto LABEL_47;
    }
    CurrentThemeName = GetThemeInt(*((HTHEME *)this + 70), 46, 3, 2431, (int *)this + 112);
    v5 = CurrentThemeName;
    if ( CurrentThemeName < 0 )
    {
      pszSizeBuff = 610;
LABEL_47:
      v8 = CurrentThemeName;
LABEL_48:
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_1800F8D68, 1LL, v8, pszSizeBuff, 0LL);
    }
  }
  if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
    McGenEventWrite_EtwEventWriteTransfer(
      (unsigned int)&Microsoft_Windows_Dwm_Udwm_Provider_Context,
      (unsigned int)&UdwmLoadTheme_End,
      v25,
      1,
      (__int64)v27);
  if ( v5 < 0 )
  {
    if ( *((_BYTE *)this + 25) )
    {
      v5 = -2003302654;
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_1800F8D68, 1LL, -2003302654, 0x26Bu, 0LL);
    }
  }
  return (unsigned int)v5;
}
