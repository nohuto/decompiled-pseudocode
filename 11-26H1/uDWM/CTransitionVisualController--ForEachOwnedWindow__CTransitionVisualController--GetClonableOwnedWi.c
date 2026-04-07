/*
 * XREFs of CTransitionVisualController::ForEachOwnedWindow__CTransitionVisualController::GetClonableOwnedWindowCount_::_2_::_lambda_1___ @ 0x1800CE0AC
 * Callers:
 *     CTransitionVisualController::ForEachOwnedWindow__CTransitionVisualController::GetClonableOwnedWindowCount_::_2_::_lambda_1___ @ 0x1800CE0AC (CTransitionVisualController--ForEachOwnedWindow__CTransitionVisualController--GetClonableOwnedWi.c)
 *     ?GetClonableOwnedWindowCount@CTransitionVisualController@@SAHPEAVCWindowData@@@Z @ 0x1800CF5C8 (-GetClonableOwnedWindowCount@CTransitionVisualController@@SAHPEAVCWindowData@@@Z.c)
 * Callees:
 *     ?ShouldCloneWindow@CTransitionVisualController@@SA_NPEAUHWND__@@@Z @ 0x18004488C (-ShouldCloneWindow@CTransitionVisualController@@SA_NPEAUHWND__@@@Z.c)
 *     ?IsCloned@CTopLevelWindow@@QEAA_NXZ @ 0x180045CC4 (-IsCloned@CTopLevelWindow@@QEAA_NXZ.c)
 *     CTransitionVisualController::ForEachOwnedWindow__CTransitionVisualController::GetClonableOwnedWindowCount_::_2_::_lambda_1___ @ 0x1800CE0AC (CTransitionVisualController--ForEachOwnedWindow__CTransitionVisualController--GetClonableOwnedWi.c)
 */

__int64 __fastcall CTransitionVisualController::ForEachOwnedWindow__CTransitionVisualController::GetClonableOwnedWindowCount_::_2_::_lambda_1___(
        __int64 a1,
        _DWORD **a2,
        char a3)
{
  int v3; // r9d
  CTopLevelWindow *v6; // rcx
  __int64 i; // rdi
  __int64 v8; // rsi

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
          if ( CTransitionVisualController::ShouldCloneWindow(*(HWND *)(v8 + 40)) )
            ++**a2;
          v3 = CTransitionVisualController::ForEachOwnedWindow__CTransitionVisualController::GetClonableOwnedWindowCount_::_2_::_lambda_1___(
                 v8,
                 a2,
                 0LL);
        }
      }
    }
  }
  return (unsigned int)v3;
}
