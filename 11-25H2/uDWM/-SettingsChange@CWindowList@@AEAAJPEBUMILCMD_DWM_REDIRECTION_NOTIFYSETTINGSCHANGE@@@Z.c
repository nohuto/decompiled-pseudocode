/*
 * XREFs of ?SettingsChange@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_NOTIFYSETTINGSCHANGE@@@Z @ 0x18001C540
 * Callers:
 *     ?ProcessAsyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEBXI_N@Z @ 0x18007A330 (-ProcessAsyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEBXI_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180009204 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?IsImmersiveWindow@CWindowData@@QEBA_NXZ @ 0x18001ABD8 (-IsImmersiveWindow@CWindowData@@QEBA_NXZ.c)
 *     ?OnSettingsUpdated@CTopLevelWindow@@QEAAXK@Z @ 0x18001C6E8 (-OnSettingsUpdated@CTopLevelWindow@@QEAAXK@Z.c)
 *     ?WindowCanHaveIconicBitmapChanged@CImmersiveIconicBitmapRegistry@@QEAAJPEAVCWindowData@@@Z @ 0x18001D50C (-WindowCanHaveIconicBitmapChanged@CImmersiveIconicBitmapRegistry@@QEAAJPEAVCWindowData@@@Z.c)
 *     ?UpdateSettings@CDesktopManager@@QEAAJPEAK@Z @ 0x1800335CC (-UpdateSettings@CDesktopManager@@QEAAJPEAK@Z.c)
 *     ?DisplayModeChanged@CGlobalLightSet@@QEAAXXZ @ 0x180035138 (-DisplayModeChanged@CGlobalLightSet@@QEAAXXZ.c)
 *     ?DisplayModeChanged@CMagnifierControl@@QEAAXXZ @ 0x180082720 (-DisplayModeChanged@CMagnifierControl@@QEAAXXZ.c)
 *     ?DisplayModeChanged@CProjectedShadowScene@@QEAAXXZ @ 0x180098A80 (-DisplayModeChanged@CProjectedShadowScene@@QEAAXXZ.c)
 *     ?OnSettingsUpdated@CWindowIconic@@QEAAJK_N@Z @ 0x180098EA4 (-OnSettingsUpdated@CWindowIconic@@QEAAJK_N@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CWindowList::SettingsChange(
        CWindowList *this,
        const struct MILCMD_DWM_REDIRECTION_NOTIFYSETTINGSCHANGE *a2)
{
  int updated; // eax
  unsigned int v5; // r15d
  unsigned int v6; // esi
  CImmersiveIconicBitmapRegistry *v7; // r13
  struct _RTL_GENERIC_TABLE *v8; // r12
  _QWORD *v9; // rax
  bool v10; // r8
  _QWORD *v11; // rdi
  char *v13; // r14
  char *i; // rbx
  CTopLevelWindow *v15; // rcx
  CWindowIconic *v16; // rcx
  CProjectedShadowScene *v17; // rcx
  CGlobalLightSet *v18; // rcx
  CMagnifierControl *v19; // rcx
  unsigned int v20; // [rsp+78h] [rbp+10h] BYREF
  PVOID RestartKey; // [rsp+80h] [rbp+18h] BYREF
  struct _RTL_CRITICAL_SECTION *v22; // [rsp+88h] [rbp+20h]

  RestartKey = 0LL;
  v22 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v20 = *((_DWORD *)a2 + 1);
  updated = CDesktopManager::UpdateSettings(CDesktopManager::s_pDesktopManagerInstance, &v20);
  v5 = updated;
  if ( updated < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, updated, 0x1ADAu, 0LL);
  }
  else
  {
    v6 = v20 & 0x20;
    if ( (v20 & 0x20) != 0 )
      (*(void (__fastcall **)(_QWORD))(**((_QWORD **)CDesktopManager::s_pDesktopManagerInstance + 58) + 48LL))(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 58));
    v7 = (CImmersiveIconicBitmapRegistry *)*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 29);
    if ( v20 )
    {
      v8 = (struct _RTL_GENERIC_TABLE *)((char *)this + 8);
      while ( 1 )
      {
        v9 = RtlEnumerateGenericTableWithoutSplaying(v8, &RestartKey);
        v11 = v9;
        if ( !v9 )
          break;
        v13 = (char *)(v9 + 10);
        for ( i = (char *)v9[10]; i != v13; i = *(char **)i )
        {
          v15 = (CTopLevelWindow *)*((_QWORD *)i + 55);
          if ( v15 )
            CTopLevelWindow::OnSettingsUpdated(v15, v20);
          v16 = (CWindowIconic *)*((_QWORD *)i + 61);
          if ( v16 )
            CWindowIconic::OnSettingsUpdated(v16, v20, v10);
          if ( CWindowData::IsImmersiveWindow((CWindowData *)i) && *((_DWORD *)i + 130) )
            CImmersiveIconicBitmapRegistry::WindowCanHaveIconicBitmapChanged(v7, (struct CWindowData *)i);
        }
        v17 = (CProjectedShadowScene *)v11[6];
        if ( v17 && v6 )
          CProjectedShadowScene::DisplayModeChanged(v17);
        v18 = (CGlobalLightSet *)v11[7];
        if ( v18 && v6 )
          CGlobalLightSet::DisplayModeChanged(v18);
        v19 = (CMagnifierControl *)v11[2];
        if ( v19 && v6 )
          CMagnifierControl::DisplayModeChanged(v19);
      }
    }
  }
  LeaveCriticalSection(&CDesktopManager::s_csDwmInstance);
  return v5;
}
