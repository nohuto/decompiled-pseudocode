/*
 * XREFs of ?AlphaChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x1800E2DD0
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180009204 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?OnColorizationUpdated@CWindowData@@QEAAXXZ @ 0x180019C6C (-OnColorizationUpdated@CWindowData@@QEAAXXZ.c)
 *     ?OnSourceConstantAlphaUpdated@CTopLevelWindow@@QEAAXXZ @ 0x180019D30 (-OnSourceConstantAlphaUpdated@CTopLevelWindow@@QEAAXXZ.c)
 *     ?UpdateRemoteAppRenderTargetOpacity@CTopLevelWindow@@QEAAJXZ @ 0x18001C080 (-UpdateRemoteAppRenderTargetOpacity@CTopLevelWindow@@QEAAJXZ.c)
 *     ?OnSourceConstantAlphaUpdated@CSecondaryWindowRepresentation@@QEAAJXZ @ 0x18001DC7C (-OnSourceConstantAlphaUpdated@CSecondaryWindowRepresentation@@QEAAJXZ.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x180051910 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?OnAlphaUpdated@CWindowIconic@@QEAAJ_N@Z @ 0x1800565A8 (-OnAlphaUpdated@CWindowIconic@@QEAAJ_N@Z.c)
 *     ?OnAlphaChange@CLivePreview@@QEAAXPEBVCWindowData@@E@Z @ 0x180069C60 (-OnAlphaChange@CLivePreview@@QEAAXPEBVCWindowData@@E@Z.c)
 *     ?GetSyncedWindowData@CWindowList@@QEAAXPEAUIDwmWindow@@_NPEAPEAVCWindowData@@@Z @ 0x180093014 (-GetSyncedWindowData@CWindowList@@QEAAXPEAUIDwmWindow@@_NPEAPEAVCWindowData@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CWindowList::AlphaChange(CWindowList *this, struct IDwmWindow *a2)
{
  unsigned int v4; // edi
  struct CWindowData *v5; // rbx
  CTopLevelWindow *v6; // rcx
  CWindowIconic *v7; // rcx
  __int64 i; // rsi
  int v9; // eax
  char v10; // al
  CTopLevelWindow *v11; // rcx
  int updated; // eax
  struct CWindowData *v14; // [rsp+60h] [rbp+18h] BYREF
  struct _RTL_CRITICAL_SECTION *v15; // [rsp+68h] [rbp+20h] BYREF

  v15 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v4 = 0;
  v14 = 0LL;
  CWindowList::GetSyncedWindowData(this, a2, 1, &v14);
  v5 = v14;
  if ( v14 )
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
      v9 = CSecondaryWindowRepresentation::OnSourceConstantAlphaUpdated(*(CSecondaryWindowRepresentation **)(*((_QWORD *)v5 + 62) + 8 * i));
      v4 = v9;
      if ( v9 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v9, 0x161Du, 0LL);
        goto LABEL_16;
      }
    }
    v10 = (*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 200LL))(a2);
    if ( v10 != ((*((_BYTE *)v5 + 673) & 0x40) != 0) )
    {
      *((_BYTE *)v5 + 673) ^= (*((_BYTE *)v5 + 673) ^ (v10 << 6)) & 0x40;
      CWindowData::OnColorizationUpdated(v5);
    }
    v11 = (CTopLevelWindow *)*((_QWORD *)v5 + 55);
    if ( v11 )
    {
      updated = CTopLevelWindow::UpdateRemoteAppRenderTargetOpacity(v11);
      v4 = updated;
      if ( updated < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, updated, 0x1631u, 0LL);
    }
  }
LABEL_16:
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v15);
  return v4;
}
