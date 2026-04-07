/*
 * XREFs of ?OnWindowStyleUpdated@CWindowData@@QEAAJXZ @ 0x180067C80
 * Callers:
 *     ?Initialize@CWindowSnapshot@@IEAAJPEAVCTopLevelWindow@@@Z @ 0x180034670 (-Initialize@CWindowSnapshot@@IEAAJPEAVCTopLevelWindow@@@Z.c)
 *     ?SetThemeAttributesAttribute@CWindowList@@AEAAJPEAUHWND__@@K@Z @ 0x180067B30 (-SetThemeAttributesAttribute@CWindowList@@AEAAJPEAUHWND__@@K@Z.c)
 *     ?ActivationChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x180067BB0 (-ActivationChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?StyleChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x180081070 (-StyleChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 * Callees:
 *     ?OnWindowStyleUpdated@CTopLevelWindow@@QEAAJXZ @ 0x180015188 (-OnWindowStyleUpdated@CTopLevelWindow@@QEAAJXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18001E310 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?OnWindowStyleUpdated@CWindowIconic@@QEAAJ_N@Z @ 0x18007D198 (-OnWindowStyleUpdated@CWindowIconic@@QEAAJ_N@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CWindowData::OnWindowStyleUpdated(CWindowData *this)
{
  CTopLevelWindow *v2; // rcx
  int v3; // eax
  unsigned int v4; // ebx
  CWindowIconic *v5; // rcx
  int v6; // eax
  int v7; // eax

  v2 = (CTopLevelWindow *)*((_QWORD *)this + 55);
  if ( v2 && (v3 = CTopLevelWindow::OnWindowStyleUpdated(v2), v4 = v3, v3 < 0) )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v3, 0x307u, 0LL);
  }
  else
  {
    v5 = (CWindowIconic *)*((_QWORD *)this + 61);
    if ( v5 && (v6 = CWindowIconic::OnWindowStyleUpdated(v5, 1), v4 = v6, v6 < 0) )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v6, 0x30Cu, 0LL);
    }
    else
    {
      v7 = (*(__int64 (__fastcall **)(_QWORD, CWindowData *))(**((_QWORD **)CDesktopManager::s_pDesktopManagerInstance
                                                               + 59)
                                                            + 208LL))(
             *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 59),
             this);
      v4 = v7;
      if ( v7 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v7, 0x30Fu, 0LL);
    }
  }
  return v4;
}
