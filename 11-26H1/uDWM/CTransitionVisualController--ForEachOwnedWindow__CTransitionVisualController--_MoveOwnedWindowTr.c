/*
 * XREFs of CTransitionVisualController::ForEachOwnedWindow__CTransitionVisualController::_MoveOwnedWindowTreeOffscreen_::_2_::_lambda_1___ @ 0x180032E24
 * Callers:
 *     ?_MoveOwnedWindowTreeOffscreen@CTransitionVisualController@@KAXPEAVCWindowData@@@Z @ 0x180032DE8 (-_MoveOwnedWindowTreeOffscreen@CTransitionVisualController@@KAXPEAVCWindowData@@@Z.c)
 *     CTransitionVisualController::ForEachOwnedWindow__CTransitionVisualController::_MoveOwnedWindowTreeOffscreen_::_2_::_lambda_1___ @ 0x180032E24 (CTransitionVisualController--ForEachOwnedWindow__CTransitionVisualController--_MoveOwnedWindowTr.c)
 * Callees:
 *     CTransitionVisualController::ForEachOwnedWindow__CTransitionVisualController::_MoveOwnedWindowTreeOffscreen_::_2_::_lambda_1___ @ 0x180032E24 (CTransitionVisualController--ForEachOwnedWindow__CTransitionVisualController--_MoveOwnedWindowTr.c)
 *     ?_MoveWindowOffscreen@CTransitionVisualController@@KAXPEAVCTopLevelWindow@@_N@Z @ 0x18003323C (-_MoveWindowOffscreen@CTransitionVisualController@@KAXPEAVCTopLevelWindow@@_N@Z.c)
 *     ?IsCloned@CTopLevelWindow@@QEAA_NXZ @ 0x180045CC4 (-IsCloned@CTopLevelWindow@@QEAA_NXZ.c)
 */

__int64 __fastcall CTransitionVisualController::ForEachOwnedWindow__CTransitionVisualController::_MoveOwnedWindowTreeOffscreen_::_2_::_lambda_1___(
        __int64 a1,
        __int64 a2,
        char a3)
{
  int v3; // r9d
  CTopLevelWindow *v6; // rcx
  __int64 i; // rdi
  __int64 v8; // rsi
  struct CTopLevelWindow *v9; // rcx

  v3 = 0;
  if ( !a3 || (*(_DWORD *)(a1 + 744) & 0x10000000) != 0 )
  {
    v6 = *(CTopLevelWindow **)(a1 + 440);
    if ( !v6 || !CTopLevelWindow::IsCloned(v6) )
    {
      for ( i = 0LL; (unsigned int)i < *(_DWORD *)(a1 + 632); i = (unsigned int)(i + 1) )
      {
        if ( v3 < 0 )
          break;
        v8 = *(_QWORD *)(*(_QWORD *)(a1 + 608) + 8 * i);
        if ( (*(_DWORD *)(v8 + 744) & 0xFFF) == 0xFFF )
        {
          v9 = *(struct CTopLevelWindow **)(v8 + 440);
          if ( v9 )
            CTransitionVisualController::_MoveWindowOffscreen(v9, 1);
          v3 = CTransitionVisualController::ForEachOwnedWindow__CTransitionVisualController::_MoveOwnedWindowTreeOffscreen_::_2_::_lambda_1___(
                 v8,
                 a2,
                 0LL);
        }
      }
    }
  }
  return (unsigned int)v3;
}
