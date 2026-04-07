/*
 * XREFs of ?CloakChange@CWindowList@@UEAAJPEAUIDwmWindow@@0_N@Z @ 0x18003BE10
 * Callers:
 *     <none>
 * Callees:
 *     ?GetSyncedWindowData@CWindowList@@QEAAXPEAUIDwmWindow@@_NPEAPEAVCWindowData@@@Z @ 0x180018CC0 (-GetSyncedWindowData@CWindowList@@QEAAXPEAUIDwmWindow@@_NPEAPEAVCWindowData@@@Z.c)
 *     ?OnWindowShowHide@CLivePreview@@QEAAJPEAVCWindowData@@PEA_N_N@Z @ 0x18001A06C (-OnWindowShowHide@CLivePreview@@QEAAJPEAVCWindowData@@PEA_N_N@Z.c)
 *     ?ClearSnapshot@CWindowData@@QEAAX_N00@Z @ 0x18001A824 (-ClearSnapshot@CWindowData@@QEAAX_N00@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18001E310 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?SnapshotWindow@CWindowData@@QEAAJXZ @ 0x18003416C (-SnapshotWindow@CWindowData@@QEAAJXZ.c)
 *     ?OnWindowCloakChange@CAnimationScheduler@@QEAAJPEBVCWindowData@@_N1PEA_N@Z @ 0x18003C220 (-OnWindowCloakChange@CAnimationScheduler@@QEAAJPEBVCWindowData@@_N1PEA_N@Z.c)
 *     ?ShowHide@CWindowList@@QEAAJPEAVCWindowData@@_N@Z @ 0x18003C3A0 (-ShowHide@CWindowList@@QEAAJPEAVCWindowData@@_N@Z.c)
 *     ?UpdateRemoteAppRenderTargetRoot@CTopLevelWindow@@QEAAJXZ @ 0x180079370 (-UpdateRemoteAppRenderTargetRoot@CTopLevelWindow@@QEAAJXZ.c)
 *     ?ReActivate@CLivePreview@@QEAAJXZ @ 0x18008D370 (-ReActivate@CLivePreview@@QEAAJXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CWindowList::CloakChange(CWindowList *this, struct IDwmWindow *a2, struct IDwmWindow *a3, bool a4)
{
  unsigned int v8; // edi
  struct CWindowData *v9; // rsi
  CAnimationScheduler *v10; // rbx
  char v11; // al
  __int64 v12; // rdx
  __int64 v13; // r8
  int v14; // eax
  char v15; // al
  struct CWindowData *v17; // rbx
  int v18; // eax
  int v19; // eax
  int v20; // eax
  int v21; // eax
  bool v22; // [rsp+30h] [rbp-38h] BYREF
  struct CWindowData *v23[3]; // [rsp+38h] [rbp-30h] BYREF

  v23[1] = (struct CWindowData *)&CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v8 = 0;
  v23[0] = 0LL;
  CWindowList::GetSyncedWindowData(this, a2, 1, v23);
  v9 = v23[0];
  if ( v23[0] )
  {
    v22 = 0;
    v10 = (CAnimationScheduler *)*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 23);
    v11 = (*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 272LL))(a2);
    CAnimationScheduler::OnWindowCloakChange(v10, v9, v11, a4, &v22);
    if ( !v22 )
    {
      LOBYTE(v12) = *((_BYTE *)v9 + 740) ^ ((*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 272LL))(a2) ^ *((_BYTE *)v9 + 740)) & 1;
      *((_BYTE *)v9 + 740) = v12;
      if ( *((_QWORD *)v9 + 55)
        && (*((_DWORD *)CDesktopManager::s_pDesktopManagerInstance + 8) == 5
         || *((_DWORD *)CDesktopManager::s_pDesktopManagerInstance + 8) == 6) )
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
          v23[0] = 0LL;
          CWindowList::GetSyncedWindowData(this, a3, 1, v23);
          v17 = v23[0];
          if ( v23[0] )
          {
            v18 = CLivePreview::OnWindowShowHide(
                    *((CLivePreview **)CDesktopManager::s_pDesktopManagerInstance + 57),
                    v23[0],
                    0LL,
                    1);
            v8 = v18;
            if ( v18 < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v18, 0x19CFu, 0LL);
              goto LABEL_11;
            }
            v19 = CLivePreview::OnWindowShowHide(
                    *((CLivePreview **)CDesktopManager::s_pDesktopManagerInstance + 57),
                    v17,
                    0LL,
                    0);
            v8 = v19;
            if ( v19 < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v19, 0x19D0u, 0LL);
              goto LABEL_11;
            }
            v20 = CLivePreview::ReActivate(*((CLivePreview **)CDesktopManager::s_pDesktopManagerInstance + 57));
            v8 = v20;
            if ( v20 < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v20, 0x19D1u, 0LL);
              goto LABEL_11;
            }
            v21 = CWindowList::ShowHide(this, v17, 1);
            v8 = v21;
            if ( v21 < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v21, 0x19D2u, 0LL);
              goto LABEL_11;
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
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v14, 0x19C5u, 0LL);
          goto LABEL_11;
        }
      }
    }
    v15 = *((_BYTE *)v9 + 740);
    if ( (v15 & 9) == 0 )
      *((_BYTE *)v9 + 740) = v15 & 0xEF;
  }
LABEL_11:
  LeaveCriticalSection(&CDesktopManager::s_csDwmInstance);
  return v8;
}
