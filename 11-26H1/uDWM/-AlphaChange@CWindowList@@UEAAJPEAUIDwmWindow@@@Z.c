/*
 * XREFs of ?AlphaChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x18004E650
 * Callers:
 *     <none>
 * Callees:
 *     ?OnSourceConstantAlphaUpdated@CTopLevelWindow@@QEAAXXZ @ 0x180013E68 (-OnSourceConstantAlphaUpdated@CTopLevelWindow@@QEAAXXZ.c)
 *     ?UpdateRemoteAppRenderTargetOpacity@CTopLevelWindow@@QEAAJXZ @ 0x180016700 (-UpdateRemoteAppRenderTargetOpacity@CTopLevelWindow@@QEAAJXZ.c)
 *     ?GetSyncedWindowData@CWindowList@@QEAAXPEAUIDwmWindow@@_NPEAPEAVCWindowData@@@Z @ 0x180018CC0 (-GetSyncedWindowData@CWindowList@@QEAAXPEAUIDwmWindow@@_NPEAPEAVCWindowData@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18001E310 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?OnSourceConstantAlphaUpdated@CSecondaryWindowRepresentation@@QEAAJXZ @ 0x1800282E4 (-OnSourceConstantAlphaUpdated@CSecondaryWindowRepresentation@@QEAAJXZ.c)
 *     ?OnAlphaChange@CLivePreview@@QEAAXPEBVCWindowData@@E@Z @ 0x18004E7F4 (-OnAlphaChange@CLivePreview@@QEAAXPEBVCWindowData@@E@Z.c)
 *     ?OnColorizationUpdated@CWindowData@@QEAAXXZ @ 0x18004E89C (-OnColorizationUpdated@CWindowData@@QEAAXXZ.c)
 *     ?OnAlphaUpdated@CWindowIconic@@QEAAJ_N@Z @ 0x18008B8B8 (-OnAlphaUpdated@CWindowIconic@@QEAAJ_N@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CWindowList::AlphaChange(CWindowList *this, struct IDwmWindow *a2)
{
  unsigned int v4; // edi
  struct CWindowData *v5; // rbx
  CTopLevelWindow *v6; // rcx
  CWindowIconic *v7; // rcx
  __int64 i; // rsi
  char v9; // al
  __int64 v10; // rdx
  CTopLevelWindow *v11; // rcx
  int updated; // eax
  int v14; // eax
  struct CWindowData *v15; // [rsp+60h] [rbp+18h] BYREF
  struct _RTL_CRITICAL_SECTION *v16; // [rsp+68h] [rbp+20h]

  v16 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v4 = 0;
  v15 = 0LL;
  CWindowList::GetSyncedWindowData(this, a2, 1, &v15);
  v5 = v15;
  if ( v15 )
  {
    *((_BYTE *)v5 + 408) = (*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 144LL))(a2);
    v6 = (CTopLevelWindow *)*((_QWORD *)v5 + 55);
    if ( v6 )
    {
      CTopLevelWindow::OnSourceConstantAlphaUpdated(v6);
      CLivePreview::OnAlphaChange(
        *((CLivePreview **)CDesktopManager::s_pDesktopManagerInstance + 57),
        v5,
        *((_BYTE *)v5 + 408));
    }
    v7 = (CWindowIconic *)*((_QWORD *)v5 + 61);
    if ( v7 )
      CWindowIconic::OnAlphaUpdated(v7, 1);
    for ( i = 0LL; (unsigned int)i < *((_DWORD *)v5 + 130); i = (unsigned int)(i + 1) )
    {
      v14 = CSecondaryWindowRepresentation::OnSourceConstantAlphaUpdated(*(CSecondaryWindowRepresentation **)(*((_QWORD *)v5 + 62) + 8 * i));
      v4 = v14;
      if ( v14 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v14, 0x173Eu, 0LL);
        goto LABEL_13;
      }
    }
    v9 = (*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 200LL))(a2);
    LOBYTE(v10) = *((_BYTE *)v5 + 737);
    if ( v9 != ((v10 & 0x40) != 0) )
    {
      *((_BYTE *)v5 + 737) = v10 ^ (v10 ^ (v9 << 6)) & 0x40;
      CWindowData::OnColorizationUpdated(v5);
    }
    v11 = (CTopLevelWindow *)*((_QWORD *)v5 + 55);
    if ( v11 )
    {
      updated = CTopLevelWindow::UpdateRemoteAppRenderTargetOpacity(v11, v10);
      v4 = updated;
      if ( updated < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, updated, 0x1752u, 0LL);
    }
  }
LABEL_13:
  LeaveCriticalSection(&CDesktopManager::s_csDwmInstance);
  return v4;
}
