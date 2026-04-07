/*
 * XREFs of ?_FindClone@CTransitionVisualController@@IEAAIPEAVCWindowData@@_N@Z @ 0x180032C38
 * Callers:
 *     ?EnsureSnapshot@CTransitionVisualController@@QEAAJPEAVCWindowData@@@Z @ 0x1800324C8 (-EnsureSnapshot@CTransitionVisualController@@QEAAJPEAVCWindowData@@@Z.c)
 *     ?_SetupHighZOrderStaticWindows@CTransitionVisualController@@IEAAJXZ @ 0x18003A69C (-_SetupHighZOrderStaticWindows@CTransitionVisualController@@IEAAJXZ.c)
 *     ?RestoreWindow@CTransitionVisualController@@QEAAXPEAVCWindowData@@_N@Z @ 0x18003D904 (-RestoreWindow@CTransitionVisualController@@QEAAXPEAVCWindowData@@_N@Z.c)
 * Callees:
 *     ?GetWindowData@CTopLevelWindow@@QEBAPEAVCWindowData@@XZ @ 0x1800332BC (-GetWindowData@CTopLevelWindow@@QEBAPEAVCWindowData@@XZ.c)
 */

__int64 __fastcall CTransitionVisualController::_FindClone(CTransitionVisualController *this, struct CWindowData *a2)
{
  unsigned int v2; // r11d
  __int64 v3; // r9
  __int64 v5; // r10
  __int64 v7; // rdx
  char v8; // r8

  v2 = *((_DWORD *)this + 12);
  v3 = 0LL;
  if ( v2 )
  {
    v5 = *((_QWORD *)this + 3);
    do
    {
      if ( *(_QWORD *)(*(_QWORD *)(v5 + 24 * v3 + 8) + 24LL)
        && *((_QWORD *)CTopLevelWindow::GetWindowData(*(CTopLevelWindow **)(v5 + 24 * v3)) + 5) == *((_QWORD *)a2 + 5)
        && (!v8 || *(_BYTE *)(v5 + 8 * v7 + 16)) )
      {
        break;
      }
      v3 = (unsigned int)(v3 + 1);
    }
    while ( (unsigned int)v3 < v2 );
  }
  return (unsigned int)v3;
}
