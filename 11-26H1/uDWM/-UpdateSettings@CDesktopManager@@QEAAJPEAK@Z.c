/*
 * XREFs of ?UpdateSettings@CDesktopManager@@QEAAJPEAK@Z @ 0x18004AD98
 * Callers:
 *     ?SettingsChange@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_NOTIFYSETTINGSCHANGE@@@Z @ 0x180018EE4 (-SettingsChange@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_NOTIFYSETTINGSCHANGE@@@Z.c)
 *     ?Initialize@CDesktopManager@@AEAAJPEAUIUnknown@@@Z @ 0x1800720A0 (-Initialize@CDesktopManager@@AEAAJPEAUIUnknown@@@Z.c)
 * Callees:
 *     ?UnloadTheme@CDesktopManager@@AEAAXXZ @ 0x1800066F4 (-UnloadTheme@CDesktopManager@@AEAAXXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18001E310 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?LoadAccentColorSettings@CDesktopManager@@QEAA_NXZ @ 0x18001FFA4 (-LoadAccentColorSettings@CDesktopManager@@QEAA_NXZ.c)
 *     ?ModeChange@CDesktopManager@@QEAAJXZ @ 0x18004B1A8 (-ModeChange@CDesktopManager@@QEAAJXZ.c)
 *     ?SetWindowAnimation@CDesktopManager@@SAX_N@Z @ 0x18004E42C (-SetWindowAnimation@CDesktopManager@@SAX_N@Z.c)
 *     ?SetupColorization@CDesktopManager@@AEAAXXZ @ 0x18004E904 (-SetupColorization@CDesktopManager@@AEAAXXZ.c)
 *     ?RefreshPresentationModeSettings@CContactManager@@QEAAJXZ @ 0x18005F0F0 (-RefreshPresentationModeSettings@CContactManager@@QEAAJXZ.c)
 *     ?UpdateLayout@CAccent@@UEAAJ_N@Z @ 0x180062F20 (-UpdateLayout@CAccent@@UEAAJ_N@Z.c)
 *     ?ReadSystemMetrics@CTopLevelWindow@@SAJXZ @ 0x180065540 (-ReadSystemMetrics@CTopLevelWindow@@SAJXZ.c)
 *     ?InvalidateColors@ColorCache@@SAXXZ @ 0x18006D3D4 (-InvalidateColors@ColorCache@@SAXXZ.c)
 *     ?ReadSystemColors@CTopLevelWindow@@SAXXZ @ 0x18006E9D8 (-ReadSystemColors@CTopLevelWindow@@SAXXZ.c)
 *     ?UpdateWindowShadows@CDesktopManager@@QEAAXXZ @ 0x180072A64 (-UpdateWindowShadows@CDesktopManager@@QEAAXXZ.c)
 *     ?UpdateIsLightTheme@CWindowList@@QEAAXXZ @ 0x180072D44 (-UpdateIsLightTheme@CWindowList@@QEAAXXZ.c)
 *     ?SetupDPIValues@CDesktopManager@@QEAAXXZ @ 0x1800769C0 (-SetupDPIValues@CDesktopManager@@QEAAXXZ.c)
 *     ?InitializeHighContrast@CDesktopManager@@AEAAXXZ @ 0x18008BC1C (-InitializeHighContrast@CDesktopManager@@AEAAXXZ.c)
 *     __security_check_cookie @ 0x18008E1C0 (__security_check_cookie.c)
 *     memset_0 @ 0x18008EF30 (memset_0.c)
 *     ?LoadTheme@CDesktopManager@@AEAAJXZ @ 0x1800ABDD4 (-LoadTheme@CDesktopManager@@AEAAJXZ.c)
 */

__int64 __fastcall CDesktopManager::UpdateSettings(CDesktopManager *this, unsigned int *a2)
{
  unsigned int v2; // ebx
  int Theme; // esi
  char v4; // r14
  int v7; // eax
  int v8; // eax
  __int128 v9; // xmm1
  __int128 v10; // xmm0
  __int128 v11; // xmm1
  __int128 v12; // xmm0
  HMONITOR v13; // rax
  CDesktopManager *v14; // rdx
  int v15; // ecx
  int v16; // ecx
  int SystemMetrics; // eax
  CAccent *v18; // rcx
  __int64 v20; // [rsp+30h] [rbp-D0h] BYREF
  struct tagMONITORINFO mi; // [rsp+38h] [rbp-C8h] BYREF
  int pvParam; // [rsp+60h] [rbp-A0h] BYREF
  _BYTE v23[20]; // [rsp+64h] [rbp-9Ch] BYREF
  __int128 v24; // [rsp+78h] [rbp-88h]
  __int128 v25; // [rsp+88h] [rbp-78h]
  __int128 v26; // [rsp+98h] [rbp-68h]
  __int128 v27; // [rsp+A8h] [rbp-58h]
  __int128 v28; // [rsp+B8h] [rbp-48h]
  __int64 v29; // [rsp+C8h] [rbp-38h]
  int v30; // [rsp+D0h] [rbp-30h]

  v2 = *a2;
  Theme = 0;
  v4 = 0;
  if ( (*a2 & 0x40D) != 0 )
    ColorCache::InvalidateColors();
  if ( (v2 & 0x10) != 0 && !CDesktopManager::LoadAccentColorSettings(this) )
    v2 &= ~0x10u;
  if ( (v2 & 0x20) != 0 )
  {
    v7 = CDesktopManager::ModeChange(this);
    Theme = v7;
    if ( v7 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v7, 0xC49u, 0LL);
      goto LABEL_35;
    }
  }
  if ( (v2 & 1) != 0 )
  {
    memset_0(v23, 0, 0x1F4uLL);
    pvParam = 504;
    SystemParametersInfoW(0x29u, 0x1F8u, &pvParam, 0);
    v8 = v30;
    v9 = v25;
    *((_OWORD *)this + 18) = v24;
    v10 = v26;
    *((_OWORD *)this + 19) = v9;
    v11 = v27;
    *((_OWORD *)this + 20) = v10;
    v12 = v28;
    *((_OWORD *)this + 21) = v11;
    *(_QWORD *)&v11 = v29;
    *((_OWORD *)this + 22) = v12;
    *((_QWORD *)this + 46) = v11;
    *((_DWORD *)this + 94) = v8;
    *((_DWORD *)this + 95) = GetSystemMetrics(76);
    *((_DWORD *)this + 96) = GetSystemMetrics(77);
    *((_DWORD *)this + 97) = GetSystemMetrics(78);
    *((_DWORD *)this + 98) = GetSystemMetrics(79);
    v13 = MonitorFromWindow(0LL, 1u);
    memset(&mi, 0, sizeof(mi));
    mi.cbSize = 40;
    if ( GetMonitorInfoW(v13, &mi) )
    {
      *(RECT *)((char *)this + 396) = mi.rcMonitor;
    }
    else
    {
      v14 = CDesktopManager::s_pDesktopManagerInstance;
      v15 = *((_DWORD *)CDesktopManager::s_pDesktopManagerInstance + 95);
      *((_DWORD *)this + 99) = v15;
      *((_DWORD *)this + 101) = *((_DWORD *)v14 + 97) + v15;
      v16 = *((_DWORD *)v14 + 96);
      *((_DWORD *)this + 100) = v16;
      *((_DWORD *)this + 102) = *((_DWORD *)v14 + 98) + v16;
    }
    SystemMetrics = CTopLevelWindow::ReadSystemMetrics();
    Theme = SystemMetrics;
    if ( SystemMetrics < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, SystemMetrics, 0xC68u, 0LL);
      goto LABEL_35;
    }
    v18 = (CAccent *)*((_QWORD *)this + 25);
    if ( v18 )
      CAccent::UpdateLayout(v18, 0);
  }
  if ( (v2 & 0x800) != 0 )
  {
    if ( (v2 & 4) == 0 )
    {
      CDesktopManager::InitializeHighContrast(this);
      goto LABEL_21;
    }
  }
  else if ( (v2 & 4) == 0 )
  {
    goto LABEL_21;
  }
  CDesktopManager::UnloadTheme(this);
  Theme = CDesktopManager::LoadTheme(this);
  if ( Theme < 0 )
    goto LABEL_35;
  v4 = 1;
LABEL_21:
  if ( (v2 & 0x400) != 0 || v4 )
  {
    CDesktopManager::SetupColorization(this);
    CWindowList::UpdateIsLightTheme(*((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 53));
  }
  if ( (v2 & 0x808) != 0 )
    CTopLevelWindow::ReadSystemColors();
  if ( (v2 & 0x40) != 0 )
    CDesktopManager::UpdateWindowShadows(this);
  if ( (v2 & 0x80u) != 0 )
    CDesktopManager::SetupDPIValues(this);
  if ( (v2 & 0x100) != 0 )
    CContactManager::RefreshPresentationModeSettings(*((CContactManager **)this + 20));
  if ( (v2 & 0x200) != 0 )
  {
    v20 = 8LL;
    if ( SystemParametersInfoW(0x48u, 8u, &v20, 0) )
      CDesktopManager::SetWindowAnimation(HIDWORD(v20) != 0);
  }
LABEL_35:
  *a2 = v2;
  return (unsigned int)Theme;
}
