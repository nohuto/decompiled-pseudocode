/*
 * XREFs of CTransitionVisualController::ForEachOwnedWindow__CTransitionVisualController::_StageCloneWithOwnedWindows_::_2_::_lambda_1___ @ 0x180045A88
 * Callers:
 *     ?_StageCloneWithOwnedWindows@CTransitionVisualController@@IEAAJPEAVCTopLevelWindow@@PEAVCContainerVisual@@HW4StagedBackgroundPolicy@1@@Z @ 0x180033AF8 (-_StageCloneWithOwnedWindows@CTransitionVisualController@@IEAAJPEAVCTopLevelWindow@@PEAVCContain.c)
 *     CTransitionVisualController::ForEachOwnedWindow__CTransitionVisualController::_StageCloneWithOwnedWindows_::_2_::_lambda_1___ @ 0x180045A88 (CTransitionVisualController--ForEachOwnedWindow__CTransitionVisualController--_StageCloneWithOwn.c)
 * Callees:
 *     CTransitionVisualController::ForEachOwnedWindow__CTransitionVisualController::_StageCloneWithOwnedWindows_::_2_::_lambda_1___ @ 0x180045A88 (CTransitionVisualController--ForEachOwnedWindow__CTransitionVisualController--_StageCloneWithOwn.c)
 *     _CTransitionVisualController::_StageCloneWithOwnedWindows_::_2_::_lambda_1_::operator() @ 0x180045B44 (_CTransitionVisualController--_StageCloneWithOwnedWindows_--_2_--_lambda_1_--operator().c)
 *     ?IsCloned@CTopLevelWindow@@QEAA_NXZ @ 0x180045CC4 (-IsCloned@CTopLevelWindow@@QEAA_NXZ.c)
 */

__int64 __fastcall CTransitionVisualController::ForEachOwnedWindow__CTransitionVisualController::_StageCloneWithOwnedWindows_::_2_::_lambda_1___(
        __int64 a1,
        __int64 a2,
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
          v3 = CTransitionVisualController::_StageCloneWithOwnedWindows_::_2_::_lambda_1_::operator()(
                 a2,
                 *(_QWORD *)(*(_QWORD *)(a1 + 608) + 8 * i));
          if ( v3 >= 0 )
            v3 = CTransitionVisualController::ForEachOwnedWindow__CTransitionVisualController::_StageCloneWithOwnedWindows_::_2_::_lambda_1___(
                   v8,
                   a2,
                   0LL);
        }
      }
    }
  }
  return (unsigned int)v3;
}
