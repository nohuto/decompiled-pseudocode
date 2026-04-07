/*
 * XREFs of ?SetVisualProtectContent@CTopLevelWindow@@QEAAJ_N@Z @ 0x18008C394
 * Callers:
 *     ?EnsureTopLevelWindow@CWindowList@@AEAAJPEAVCWindowData@@@Z @ 0x18001B874 (-EnsureTopLevelWindow@CWindowList@@AEAAJPEAVCWindowData@@@Z.c)
 *     ?InitializeVisualTreeClone@CTopLevelWindow@@AEAAJPEAV1@W4CloneOptions@@@Z @ 0x180020A4C (-InitializeVisualTreeClone@CTopLevelWindow@@AEAAJPEAV1@W4CloneOptions@@@Z.c)
 *     ?ContentProtectionChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x1800E3890 (-ContentProtectionChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180009204 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?SetVisualProtectContent@CVisualProxy@@QEAAJ_N@Z @ 0x18009A378 (-SetVisualProtectContent@CVisualProxy@@QEAAJ_N@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CTopLevelWindow::SetVisualProtectContent(CTopLevelWindow *this, bool a2)
{
  int v3; // eax
  unsigned int v4; // ebx
  int v5; // eax

  *((_BYTE *)this + 201) = (32 * a2) | *((_BYTE *)this + 201) & 0xDF;
  v3 = CVisualProxy::SetVisualProtectContent(*((CVisualProxy **)this + 2), a2);
  v4 = v3;
  if ( v3 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v3, 0x7A7u, 0LL);
  }
  else
  {
    v5 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)CDesktopManager::s_pDesktopManagerInstance + 58)
                                                   + 208LL))(
           *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 58),
           *((_QWORD *)this + 89));
    v4 = v5;
    if ( v5 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v5, 0x7A9u, 0LL);
  }
  return v4;
}
