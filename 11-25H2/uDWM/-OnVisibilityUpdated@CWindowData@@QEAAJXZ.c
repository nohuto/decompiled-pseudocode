/*
 * XREFs of ?OnVisibilityUpdated@CWindowData@@QEAAJXZ @ 0x18001A208
 * Callers:
 *     ?ImmediateDestroySprite@CWindowList@@AEAAXPEAVCWindowData@@@Z @ 0x180019464 (-ImmediateDestroySprite@CWindowList@@AEAAXPEAVCWindowData@@@Z.c)
 *     ?ShowHide@CWindowList@@QEAAJPEAVCWindowData@@_N@Z @ 0x180019E20 (-ShowHide@CWindowList@@QEAAJPEAVCWindowData@@_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180009204 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?OnWindowVisibilityUpdated@CTransitionVisualController@@QEAAXPEAVCWindowData@@@Z @ 0x180018A20 (-OnWindowVisibilityUpdated@CTransitionVisualController@@QEAAXPEAVCWindowData@@@Z.c)
 *     ?CheckOwnedWindowEligibility@CWindowData@@QEAAXXZ @ 0x180018AB0 (-CheckOwnedWindowEligibility@CWindowData@@QEAAXXZ.c)
 *     ?NotifyRepresentationChanged@CWindowData@@QEAAJXZ @ 0x18001D380 (-NotifyRepresentationChanged@CWindowData@@QEAAJXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CWindowData::OnVisibilityUpdated(CWindowData **this)
{
  int v2; // eax
  unsigned int v3; // ebx
  CWindowData *v4; // rcx
  CDesktopManager *v5; // rcx
  int v6; // eax
  int v8; // eax

  CWindowData::CheckOwnedWindowEligibility((CWindowData *)this);
  v2 = CWindowData::NotifyRepresentationChanged((CWindowData *)this);
  v3 = v2;
  if ( v2 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v2, 0x2F0u, 0LL);
  }
  else
  {
    v4 = this[75];
    if ( v4 && (v8 = CWindowData::NotifyRepresentationChanged(v4), v3 = v8, v8 < 0) )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v8, 0x2F3u, 0LL);
    }
    else
    {
      v5 = CDesktopManager::s_pDesktopManagerInstance;
      if ( *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 24) )
      {
        CTransitionVisualController::OnWindowVisibilityUpdated(
          *((CTransitionVisualController **)CDesktopManager::s_pDesktopManagerInstance + 24),
          (struct CWindowData *)this);
        v5 = CDesktopManager::s_pDesktopManagerInstance;
      }
      v6 = (*(__int64 (__fastcall **)(_QWORD, CWindowData **))(**((_QWORD **)v5 + 58) + 208LL))(
             *((_QWORD *)v5 + 58),
             this);
      v3 = v6;
      if ( v6 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v6, 0x2FCu, 0LL);
    }
  }
  return v3;
}
