/*
 * XREFs of ?_CleanupHighZOrderClone@CTransitionVisualController@@IEAAXAEAUTlwPair@1@@Z @ 0x1800D2CDC
 * Callers:
 *     ?_SetupHighZOrderStaticWindows@CTransitionVisualController@@IEAAJXZ @ 0x1800270F4 (-_SetupHighZOrderStaticWindows@CTransitionVisualController@@IEAAJXZ.c)
 *     ?_CleanupHighZOrderStaticWindowClones@CTransitionVisualController@@IEAAXXZ @ 0x1800980B8 (-_CleanupHighZOrderStaticWindowClones@CTransitionVisualController@@IEAAXXZ.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x1800086B0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?RemoveChild@CContainerVisual@@QEAAJPEAVCVisual@@@Z @ 0x18001C7A4 (-RemoveChild@CContainerVisual@@QEAAJPEAVCVisual@@@Z.c)
 *     ?_MoveWindowOffscreen@CTransitionVisualController@@KAXPEAVCTopLevelWindow@@_N@Z @ 0x180054DF8 (-_MoveWindowOffscreen@CTransitionVisualController@@KAXPEAVCTopLevelWindow@@_N@Z.c)
 *     ?GetWindowData@CTopLevelWindow@@QEBAPEAVCWindowData@@XZ @ 0x180055730 (-GetWindowData@CTopLevelWindow@@QEBAPEAVCWindowData@@XZ.c)
 *     ?_IsOwnedByWindow@CTransitionVisualController@@IEAA_NPEBVCWindowData@@QEAUHWND__@@@Z @ 0x1800D301C (-_IsOwnedByWindow@CTransitionVisualController@@IEAA_NPEBVCWindowData@@QEAUHWND__@@@Z.c)
 */

void __fastcall CTransitionVisualController::_CleanupHighZOrderClone(
        CTransitionVisualController *this,
        CTopLevelWindow **a2)
{
  struct CWindowData *WindowData; // rdi
  __int64 v4; // r11
  __int64 i; // r9
  HWND v6; // r8
  int v7; // r9d
  __int64 v8; // r10
  struct CVisualProxy **v9; // rdx
  CContainerVisual *v10; // rcx
  CBaseObject *v11; // rcx

  WindowData = CTopLevelWindow::GetWindowData(*a2);
  for ( i = 0LL; (unsigned int)i < *(_DWORD *)(v4 + 136); i = (unsigned int)(v7 + 1) )
  {
    v6 = *(HWND *)(*(_QWORD *)(*(_QWORD *)(v4 + 112) + 8 * i) + 16LL);
    if ( v6 == *((HWND *)WindowData + 5)
      || CTransitionVisualController::_IsOwnedByWindow((CTransitionVisualController *)v4, WindowData, v6)
      && (*(_DWORD *)(v8 + 24) & 0x10000000) != 0 )
    {
      goto LABEL_8;
    }
  }
  CTransitionVisualController::_MoveWindowOffscreen(*a2, 0);
LABEL_8:
  v9 = (struct CVisualProxy **)a2[1];
  v10 = v9[3];
  if ( v10 )
    CContainerVisual::RemoveChild(v10, v9);
  v11 = a2[1];
  if ( v11 )
  {
    CBaseObject::Release(v11);
    a2[1] = 0LL;
  }
  if ( *a2 )
  {
    CBaseObject::Release(*a2);
    *a2 = 0LL;
  }
}
