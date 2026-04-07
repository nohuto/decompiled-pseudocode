/*
 * XREFs of CTransitionVisualController::ForEachOwnedWindow__CTransitionVisualController::StopTrackingWindowAndRestoreVisual_::_2_::_lambda_1___ @ 0x1800CE16C
 * Callers:
 *     CTransitionVisualController::ForEachOwnedWindow__CTransitionVisualController::StopTrackingWindowAndRestoreVisual_::_2_::_lambda_1___ @ 0x1800CE16C (CTransitionVisualController--ForEachOwnedWindow__CTransitionVisualController--StopTrackingWindow.c)
 *     ?StopTrackingWindowAndRestoreVisual@CTransitionVisualController@@QEAAJPEAVCWindowData@@@Z @ 0x1800CFDB8 (-StopTrackingWindowAndRestoreVisual@CTransitionVisualController@@QEAAJPEAVCWindowData@@@Z.c)
 * Callees:
 *     ?IsCloned@CTopLevelWindow@@QEAA_NXZ @ 0x180045CC4 (-IsCloned@CTopLevelWindow@@QEAA_NXZ.c)
 *     CTransitionVisualController::ForEachOwnedWindow__CTransitionVisualController::StopTrackingWindowAndRestoreVisual_::_2_::_lambda_1___ @ 0x1800CE16C (CTransitionVisualController--ForEachOwnedWindow__CTransitionVisualController--StopTrackingWindow.c)
 *     ?_RestoreWindowVisual@CTransitionVisualController@@IEAAJPEAVCWindowData@@@Z @ 0x1800D01F4 (-_RestoreWindowVisual@CTransitionVisualController@@IEAAJPEAVCWindowData@@@Z.c)
 */

__int64 __fastcall CTransitionVisualController::ForEachOwnedWindow__CTransitionVisualController::StopTrackingWindowAndRestoreVisual_::_2_::_lambda_1___(
        __int64 a1,
        __int64 a2,
        char a3)
{
  int v3; // r9d
  CTransitionVisualController *v6; // rcx
  __int64 i; // rdi
  __int64 v8; // rsi

  v3 = 0;
  if ( !a3 || (*(_DWORD *)(a1 + 744) & 0x10000000) != 0 )
  {
    v6 = *(CTransitionVisualController **)(a1 + 440);
    if ( !v6 || !CTopLevelWindow::IsCloned(v6) )
    {
      for ( i = 0LL; (unsigned int)i < *(_DWORD *)(a1 + 632); i = (unsigned int)(i + 1) )
      {
        if ( v3 < 0 )
          break;
        v8 = *(_QWORD *)(*(_QWORD *)(a1 + 608) + 8 * i);
        if ( (*(_DWORD *)(v8 + 744) & 0xFFF) == 0xFFF )
        {
          CTransitionVisualController::_RestoreWindowVisual(v6, *(struct CWindowData **)(*(_QWORD *)(a1 + 608) + 8 * i));
          v3 = CTransitionVisualController::ForEachOwnedWindow__CTransitionVisualController::StopTrackingWindowAndRestoreVisual_::_2_::_lambda_1___(
                 v8,
                 a2,
                 0LL);
        }
      }
    }
  }
  return (unsigned int)v3;
}
