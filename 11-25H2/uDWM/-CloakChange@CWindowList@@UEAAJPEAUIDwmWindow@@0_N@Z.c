/*
 * XREFs of ?CloakChange@CWindowList@@UEAAJPEAUIDwmWindow@@0_N@Z @ 0x1800E3600
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180009204 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?ShowHide@CWindowList@@QEAAJPEAVCWindowData@@_N@Z @ 0x180019E20 (-ShowHide@CWindowList@@QEAAJPEAVCWindowData@@_N@Z.c)
 *     ?ClearSnapshot@CWindowData@@QEAAX_N00@Z @ 0x18001AA10 (-ClearSnapshot@CWindowData@@QEAAX_N00@Z.c)
 *     ?OnWindowShowHide@CLivePreview@@QEAAJPEAVCWindowData@@PEA_N_N@Z @ 0x18001AC1C (-OnWindowShowHide@CLivePreview@@QEAAJPEAVCWindowData@@PEA_N_N@Z.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x180051910 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?SnapshotWindow@CWindowData@@QEAAJXZ @ 0x180054FB4 (-SnapshotWindow@CWindowData@@QEAAJXZ.c)
 *     ?UpdateRemoteAppRenderTargetRoot@CTopLevelWindow@@QEAAJXZ @ 0x18008A490 (-UpdateRemoteAppRenderTargetRoot@CTopLevelWindow@@QEAAJXZ.c)
 *     ?OnWindowCloakChange@CAnimationScheduler@@QEAAJPEBVCWindowData@@_N1PEA_N@Z @ 0x18008F730 (-OnWindowCloakChange@CAnimationScheduler@@QEAAJPEBVCWindowData@@_N1PEA_N@Z.c)
 *     ?GetSyncedWindowData@CWindowList@@QEAAXPEAUIDwmWindow@@_NPEAPEAVCWindowData@@@Z @ 0x180093014 (-GetSyncedWindowData@CWindowList@@QEAAXPEAUIDwmWindow@@_NPEAPEAVCWindowData@@@Z.c)
 *     ?ReActivate@CLivePreview@@QEAAJXZ @ 0x1800BA174 (-ReActivate@CLivePreview@@QEAAJXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CWindowList::CloakChange(CWindowList *this, struct IDwmWindow *a2, struct IDwmWindow *a3, bool a4)
{
  unsigned int v8; // edi
  struct CWindowData *v9; // rsi
  CAnimationScheduler *v10; // rbx
  unsigned __int8 v11; // al
  __int64 v12; // rdx
  __int64 v13; // r8
  int v14; // eax
  struct CWindowData *v15; // rbx
  int v16; // eax
  int v17; // eax
  int v18; // eax
  int v19; // eax
  char v20; // al
  bool v22; // [rsp+30h] [rbp-38h] BYREF
  struct CWindowData *v23; // [rsp+38h] [rbp-30h] BYREF
  struct _RTL_CRITICAL_SECTION *v24; // [rsp+40h] [rbp-28h] BYREF

  v24 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v8 = 0;
  v23 = 0LL;
  CWindowList::GetSyncedWindowData(this, a2, 1, &v23);
  v9 = v23;
  if ( v23 )
  {
    v22 = 0;
    v10 = (CAnimationScheduler *)*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 23);
    v11 = (*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 272LL))(a2);
    CAnimationScheduler::OnWindowCloakChange(v10, v9, v11, a4, &v22);
    if ( !v22 )
    {
      LOBYTE(v12) = *((_BYTE *)v9 + 676) ^ ((*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 272LL))(a2) ^ *((_BYTE *)v9 + 676)) & 1;
      *((_BYTE *)v9 + 676) = v12;
      if ( *((_QWORD *)v9 + 55) && (unsigned int)(*((_DWORD *)CDesktopManager::s_pDesktopManagerInstance + 8) - 5) <= 1 )
      {
        if ( (v12 & 1) != 0 )
          CWindowData::SnapshotWindow((struct CWindowSnapshot **)v9, v12, v13);
        else
          CWindowData::ClearSnapshot(v9, 0, v13, 0);
        CTopLevelWindow::UpdateRemoteAppRenderTargetRoot(*((CTopLevelWindow **)v9 + 55));
      }
      if ( a4 )
      {
        if ( a3 )
        {
          v23 = 0LL;
          CWindowList::GetSyncedWindowData(this, a3, 1, &v23);
          v15 = v23;
          if ( v23 )
          {
            v16 = CLivePreview::OnWindowShowHide(
                    *((CLivePreview **)CDesktopManager::s_pDesktopManagerInstance + 57),
                    v23,
                    0LL,
                    1);
            v8 = v16;
            if ( v16 < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v16, 0x18AEu, 0LL);
              goto LABEL_25;
            }
            v17 = CLivePreview::OnWindowShowHide(
                    *((CLivePreview **)CDesktopManager::s_pDesktopManagerInstance + 57),
                    v15,
                    0LL,
                    0);
            v8 = v17;
            if ( v17 < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v17, 0x18AFu, 0LL);
              goto LABEL_25;
            }
            v18 = CLivePreview::ReActivate(*((CLivePreview **)CDesktopManager::s_pDesktopManagerInstance + 57));
            v8 = v18;
            if ( v18 < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v18, 0x18B0u, 0LL);
              goto LABEL_25;
            }
            v19 = CWindowList::ShowHide(this, v15, 1);
            v8 = v19;
            if ( v19 < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v19, 0x18B1u, 0LL);
              goto LABEL_25;
            }
          }
        }
      }
      else
      {
        v14 = CWindowList::ShowHide(this, v9, 1);
        v8 = v14;
        if ( v14 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v14, 0x18A4u, 0LL);
          goto LABEL_25;
        }
      }
    }
    v20 = *((_BYTE *)v9 + 676);
    if ( (v20 & 9) == 0 )
      *((_BYTE *)v9 + 676) = v20 & 0xEF;
  }
LABEL_25:
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v24);
  return v8;
}
