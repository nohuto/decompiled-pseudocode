/*
 * XREFs of ?UpdateSettings@CDesktopManager@@QEAAJPEAK@Z @ 0x1800335CC
 * Callers:
 *     ?SettingsChange@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_NOTIFYSETTINGSCHANGE@@@Z @ 0x18001C540 (-SettingsChange@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_NOTIFYSETTINGSCHANGE@@@Z.c)
 *     ?Initialize@CDesktopManager@@AEAAJPEAUIUnknown@@@Z @ 0x180081384 (-Initialize@CDesktopManager@@AEAAJPEAUIUnknown@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180009204 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?LoadAccentColorSettings@CDesktopManager@@QEAA_NXZ @ 0x18000F380 (-LoadAccentColorSettings@CDesktopManager@@QEAA_NXZ.c)
 *     ?RefreshPresentationModeSettings@CContactManager@@QEAAJXZ @ 0x18002A120 (-RefreshPresentationModeSettings@CContactManager@@QEAAJXZ.c)
 *     ?LoadTheme@CDesktopManager@@AEAAJXZ @ 0x180030B7C (-LoadTheme@CDesktopManager@@AEAAJXZ.c)
 *     ?ReadSystemMetrics@CTopLevelWindow@@SAJXZ @ 0x180031420 (-ReadSystemMetrics@CTopLevelWindow@@SAJXZ.c)
 *     ?ReadSystemColors@CTopLevelWindow@@SAXXZ @ 0x180031F60 (-ReadSystemColors@CTopLevelWindow@@SAXXZ.c)
 *     ?InvalidateColors@ColorCache@@SAXXZ @ 0x180033930 (-InvalidateColors@ColorCache@@SAXXZ.c)
 *     ?UnloadTheme@CDesktopManager@@AEAAXXZ @ 0x180033990 (-UnloadTheme@CDesktopManager@@AEAAXXZ.c)
 *     ?ModeChange@CDesktopManager@@QEAAJXZ @ 0x180033BCC (-ModeChange@CDesktopManager@@QEAAJXZ.c)
 *     ?SetWindowAnimation@CDesktopManager@@SAX_N@Z @ 0x180072DC4 (-SetWindowAnimation@CDesktopManager@@SAX_N@Z.c)
 *     ?SetupColorization@CDesktopManager@@AEAAXXZ @ 0x180072FFC (-SetupColorization@CDesktopManager@@AEAAXXZ.c)
 *     ?UpdateIsLightTheme@CWindowList@@QEAAXXZ @ 0x180084044 (-UpdateIsLightTheme@CWindowList@@QEAAXXZ.c)
 *     ?ReleaseCVICache@CDesktopManager@@SAXXZ @ 0x180088FFC (-ReleaseCVICache@CDesktopManager@@SAXXZ.c)
 *     ?SetupDPIValues@CDesktopManager@@QEAAXXZ @ 0x18008A6DC (-SetupDPIValues@CDesktopManager@@QEAAXXZ.c)
 *     ?UpdateWindowShadows@CDesktopManager@@QEAAXXZ @ 0x18008AC20 (-UpdateWindowShadows@CDesktopManager@@QEAAXXZ.c)
 *     ?InitializeHighContrast@CDesktopManager@@AEAAXXZ @ 0x180098880 (-InitializeHighContrast@CDesktopManager@@AEAAXXZ.c)
 *     __security_check_cookie @ 0x18009A7F0 (__security_check_cookie.c)
 *     memset_0 @ 0x18009B730 (memset_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CDesktopManager::UpdateSettings(CContactManager **this, unsigned int *a2)
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
  RECT *v14; // rsi
  CDesktopManager *v15; // rdx
  LONG v16; // ecx
  int v17; // ecx
  int SystemMetrics; // eax
  CContactManager *v19; // rcx
  __int64 v21; // [rsp+30h] [rbp-D0h] BYREF
  struct tagMONITORINFO mi; // [rsp+38h] [rbp-C8h] BYREF
  int pvParam; // [rsp+60h] [rbp-A0h] BYREF
  char v24[20]; // [rsp+64h] [rbp-9Ch] BYREF
  __int128 v25; // [rsp+78h] [rbp-88h]
  __int128 v26; // [rsp+88h] [rbp-78h]
  __int128 v27; // [rsp+98h] [rbp-68h]
  __int128 v28; // [rsp+A8h] [rbp-58h]
  __int128 v29; // [rsp+B8h] [rbp-48h]
  __int64 v30; // [rsp+C8h] [rbp-38h]
  int v31; // [rsp+D0h] [rbp-30h]

  v2 = *a2;
  Theme = 0;
  v4 = 0;
  if ( (*a2 & 0x40D) != 0 )
    ColorCache::InvalidateColors();
  if ( (v2 & 0x10) != 0 && !CDesktopManager::LoadAccentColorSettings((CDesktopManager *)this) )
    v2 &= ~0x10u;
  if ( (v2 & 0x20) != 0 )
  {
    v7 = CDesktopManager::ModeChange((CDesktopManager *)this);
    Theme = v7;
    if ( v7 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v7, 0xC8Fu, 0LL);
      goto LABEL_37;
    }
  }
  if ( (v2 & 1) != 0 )
  {
    memset_0(v24, 0, 0x1F4uLL);
    pvParam = 504;
    SystemParametersInfoW(0x29u, 0x1F8u, &pvParam, 0);
    v8 = v31;
    v9 = v26;
    *((_OWORD *)this + 18) = v25;
    v10 = v27;
    *((_OWORD *)this + 19) = v9;
    v11 = v28;
    *((_OWORD *)this + 20) = v10;
    v12 = v29;
    *((_OWORD *)this + 21) = v11;
    *(_QWORD *)&v11 = v30;
    *((_OWORD *)this + 22) = v12;
    this[46] = (CContactManager *)v11;
    *((_DWORD *)this + 94) = v8;
    *((_DWORD *)this + 95) = GetSystemMetrics(76);
    *((_DWORD *)this + 96) = GetSystemMetrics(77);
    *((_DWORD *)this + 97) = GetSystemMetrics(78);
    *((_DWORD *)this + 98) = GetSystemMetrics(79);
    v13 = MonitorFromWindow(0LL, 1u);
    memset(&mi, 0, sizeof(mi));
    mi.cbSize = 40;
    v14 = (RECT *)((char *)this + 396);
    if ( GetMonitorInfoW(v13, &mi) )
    {
      if ( !EqualRect((const RECT *)((char *)this + 396), &mi.rcMonitor) )
        CDesktopManager::ReleaseCVICache();
      *v14 = mi.rcMonitor;
    }
    else
    {
      v15 = CDesktopManager::s_pDesktopManagerInstance;
      v16 = *((_DWORD *)CDesktopManager::s_pDesktopManagerInstance + 95);
      v14->left = v16;
      *((_DWORD *)this + 101) = *((_DWORD *)v15 + 97) + v16;
      v17 = *((_DWORD *)v15 + 96);
      *((_DWORD *)this + 100) = v17;
      *((_DWORD *)this + 102) = *((_DWORD *)v15 + 98) + v17;
    }
    SystemMetrics = CTopLevelWindow::ReadSystemMetrics();
    Theme = SystemMetrics;
    if ( SystemMetrics < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, SystemMetrics, 0xCB2u, 0LL);
      goto LABEL_37;
    }
    v19 = this[25];
    if ( v19 )
      (*(void (__fastcall **)(CContactManager *, _QWORD))(*(_QWORD *)v19 + 72LL))(v19, 0LL);
  }
  if ( (v2 & 0x800) != 0 )
  {
    if ( (v2 & 4) == 0 )
    {
      CDesktopManager::InitializeHighContrast((CDesktopManager *)this);
      goto LABEL_23;
    }
  }
  else if ( (v2 & 4) == 0 )
  {
    goto LABEL_23;
  }
  CDesktopManager::UnloadTheme((CDesktopManager *)this);
  Theme = CDesktopManager::LoadTheme((CDesktopManager *)this);
  if ( Theme < 0 )
    goto LABEL_37;
  v4 = 1;
LABEL_23:
  if ( (v2 & 0x400) != 0 || v4 )
  {
    CDesktopManager::SetupColorization((CDesktopManager *)this);
    CWindowList::UpdateIsLightTheme(*((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 53));
  }
  if ( (v2 & 0x808) != 0 )
    CTopLevelWindow::ReadSystemColors();
  if ( (v2 & 0x40) != 0 )
    CDesktopManager::UpdateWindowShadows((CDesktopManager *)this);
  if ( (v2 & 0x80u) != 0 )
    CDesktopManager::SetupDPIValues((CDesktopManager *)this);
  if ( (v2 & 0x100) != 0 )
    CContactManager::RefreshPresentationModeSettings(this[20]);
  if ( (v2 & 0x200) != 0 )
  {
    v21 = 8LL;
    if ( SystemParametersInfoW(0x48u, 8u, &v21, 0) )
      CDesktopManager::SetWindowAnimation(HIDWORD(v21) != 0);
  }
LABEL_37:
  *a2 = v2;
  return (unsigned int)Theme;
}
