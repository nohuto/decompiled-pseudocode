/*
 * XREFs of ?SetWindowOffscreen@CTopLevelWindow@@QEAAX_N@Z @ 0x1800CBC8C
 * Callers:
 *     ?_MoveWindowOffscreen@CTransitionVisualController@@KAXPEAVCTopLevelWindow@@_N@Z @ 0x18003323C (-_MoveWindowOffscreen@CTransitionVisualController@@KAXPEAVCTopLevelWindow@@_N@Z.c)
 * Callees:
 *     ?OnPositionChange@CWindowList@@QEAAXPEAVCWindowData@@_N@Z @ 0x180014300 (-OnPositionChange@CWindowList@@QEAAXPEAVCWindowData@@_N@Z.c)
 *     McTemplateU0p_EtwEventWriteTransfer @ 0x18008B634 (McTemplateU0p_EtwEventWriteTransfer.c)
 *     ?Show@CProjectionBorderVisual@@QEAAX_N@Z @ 0x1800BEB90 (-Show@CProjectionBorderVisual@@QEAAX_N@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CTopLevelWindow::SetWindowOffscreen(CTopLevelWindow *this, char a2)
{
  CTopLevelWindow *v2; // rdi
  char v3; // bl
  char v4; // cl
  __int64 v5; // r8
  void *v6; // rdx
  CProjectionBorderVisual *v7; // rcx
  __int64 v8; // rax

  v2 = this;
  v3 = 1;
  v4 = *((_BYTE *)this + 185);
  if ( (v4 & 1) == a2 )
    return;
  v5 = *((_QWORD *)v2 + 87);
  LOBYTE(this) = a2 | v4 & 0xFE;
  *((_BYTE *)v2 + 185) = (_BYTE)this;
  if ( v5 )
  {
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
      {
        v6 = &UdwmSystemAnimation_MoveOffscreen_Start;
LABEL_8:
        McTemplateU0p_EtwEventWriteTransfer((__int64)this, (int)v6, *(_QWORD *)(v5 + 40));
      }
    }
    else if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
    {
      v6 = &UdwmSystemAnimation_MoveOffscreen_Stop;
      goto LABEL_8;
    }
  }
  v7 = *(CProjectionBorderVisual **)(*((_QWORD *)v2 + 87) + 464LL);
  if ( v7 )
  {
    v8 = *((_QWORD *)v2 + 26);
    if ( (*(_BYTE *)(v8 + 36) & 4) == 0
      || *(_DWORD *)(v8 + 40)
      || COERCE_FLOAT(COERCE_UNSIGNED_INT(*(double *)(v8 + 112)) & _xmm) < 0.0000011920929
      || (*((_BYTE *)v2 + 185) & 1) != 0 )
    {
      v3 = 0;
    }
    CProjectionBorderVisual::Show(v7, v3);
  }
  CWindowList::OnPositionChange(
    *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 53),
    *((struct CWindowData **)v2 + 87),
    0);
  (*(void (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)CDesktopManager::s_pDesktopManagerInstance + 59) + 200LL))(
    *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 59),
    *((_QWORD *)v2 + 87));
}
