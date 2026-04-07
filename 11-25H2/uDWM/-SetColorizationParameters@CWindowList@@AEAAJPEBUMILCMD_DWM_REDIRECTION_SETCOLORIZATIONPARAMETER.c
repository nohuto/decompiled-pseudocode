/*
 * XREFs of ?SetColorizationParameters@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_SETCOLORIZATIONPARAMETERS@@@Z @ 0x180072DF8
 * Callers:
 *     ?ProcessSyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEAXI_NKPEBU_REMOTE_PORT_VIEW@@PEAJPEAI@Z @ 0x1800912D0 (-ProcessSyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEAXI_NKPEBU_REMOTE_PORT_VIEW@@PEAJPEAI@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180009204 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??0CGlassColorizationParameters@@QEAA@XZ @ 0x18000F33C (--0CGlassColorizationParameters@@QEAA@XZ.c)
 *     ?OnBlurBehindUpdated@CTopLevelWindow@@QEAAXXZ @ 0x180019C0C (-OnBlurBehindUpdated@CTopLevelWindow@@QEAAXXZ.c)
 *     ?OnColorizationUpdated@CWindowData@@QEAAXXZ @ 0x180019C6C (-OnColorizationUpdated@CWindowData@@QEAAXXZ.c)
 *     ?ApplyColorizationParameters@CDesktopManager@@QEAA_NPEAVCGlassColorizationParameters@@@Z @ 0x18007323C (-ApplyColorizationParameters@CDesktopManager@@QEAA_NPEAVCGlassColorizationParameters@@@Z.c)
 *     ?CheckAnyPolicy@CDesktopManager@@SA_NK@Z @ 0x180073524 (-CheckAnyPolicy@CDesktopManager@@SA_NK@Z.c)
 *     __security_check_cookie @ 0x18009A7F0 (__security_check_cookie.c)
 *     ?SetIsLightTheme@CAcrylicSheet@@QEAAJ_N@Z @ 0x1800A1380 (-SetIsLightTheme@CAcrylicSheet@@QEAAJ_N@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CWindowList::SetColorizationParameters(
        CWindowList *this,
        const struct MILCMD_DWM_REDIRECTION_SETCOLORIZATIONPARAMETERS *a2)
{
  unsigned int v4; // edi
  CDesktopManager *v5; // rcx
  char v6; // r14
  unsigned int v7; // eax
  unsigned int v8; // eax
  unsigned int v9; // eax
  int v10; // edx
  char v11; // r13
  bool v12; // al
  bool v13; // r15
  _QWORD *v14; // rax
  CAcrylicSheet *v15; // rcx
  CWindowData *v17; // r14
  CWindowData *v18; // rbx
  CTopLevelWindow *v19; // rcx
  int IsLightTheme; // eax
  char v21; // [rsp+30h] [rbp-40h]
  PVOID RestartKey[2]; // [rsp+38h] [rbp-38h] BYREF
  __int128 v23; // [rsp+48h] [rbp-28h] BYREF
  __int128 v24; // [rsp+58h] [rbp-18h]

  RestartKey[1] = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  RestartKey[0] = 0LL;
  if ( CDesktopManager::CheckAnyPolicy(2u) )
  {
    v4 = -2147024846;
  }
  else
  {
    v4 = 0;
    CGlassColorizationParameters::CGlassColorizationParameters((CGlassColorizationParameters *)&v23);
    v5 = CDesktopManager::s_pDesktopManagerInstance;
    v23 = *(_OWORD *)((char *)CDesktopManager::s_pDesktopManagerInstance + 476);
    v24 = *(_OWORD *)((char *)CDesktopManager::s_pDesktopManagerInstance + 492);
    v6 = *((_DWORD *)CDesktopManager::s_pDesktopManagerInstance + 125) == 2;
    v21 = v6;
    *(_QWORD *)&v23 = *(_QWORD *)((char *)a2 + 4);
    v7 = *((_DWORD *)a2 + 3);
    if ( v7 > 0x78 )
      v7 = 120;
    DWORD2(v23) = v7;
    v8 = *((_DWORD *)a2 + 4);
    if ( v8 > 0x78 )
      v8 = 120;
    HIDWORD(v23) = v8;
    v9 = *((_DWORD *)a2 + 5);
    if ( v9 > 0x78 )
      v9 = 120;
    LODWORD(v24) = v9;
    DWORD1(v24) = *((_DWORD *)a2 + 6) != 0;
    v10 = *((_DWORD *)a2 + 7);
    DWORD2(v24) = v10;
    if ( *((_DWORD *)a2 + 8) != 2 )
      *((_BYTE *)this + 635) = *((_DWORD *)a2 + 8) != 0;
    v11 = v10 == 2;
    v12 = CDesktopManager::ApplyColorizationParameters(v5, (struct CGlassColorizationParameters *)&v23);
    v13 = v12;
    if ( v11 != v6 || v12 )
    {
      while ( 1 )
      {
        v14 = RtlEnumerateGenericTableWithoutSplaying((PRTL_GENERIC_TABLE)((char *)this + 8), RestartKey);
        if ( !v14 )
          break;
        v17 = (CWindowData *)(v14 + 10);
        v18 = (CWindowData *)v14[10];
        if ( v18 != (CWindowData *)(v14 + 10) )
        {
          do
          {
            if ( v13 )
              CWindowData::OnColorizationUpdated(v18);
            if ( v11 != v21 )
            {
              v19 = (CTopLevelWindow *)*((_QWORD *)v18 + 55);
              if ( v19 )
                CTopLevelWindow::OnBlurBehindUpdated(v19);
            }
            v18 = *(CWindowData **)v18;
          }
          while ( v18 != v17 );
        }
      }
    }
    v15 = (CAcrylicSheet *)*((_QWORD *)this + 67);
    if ( v15 )
    {
      IsLightTheme = CAcrylicSheet::SetIsLightTheme(v15, *((_BYTE *)this + 635));
      v4 = IsLightTheme;
      if ( IsLightTheme < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, IsLightTheme, 0x1B96u, 0LL);
    }
  }
  LeaveCriticalSection(&CDesktopManager::s_csDwmInstance);
  return v4;
}
