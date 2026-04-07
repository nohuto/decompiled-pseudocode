/*
 * XREFs of CTransitionVisualController::ForEachOwnedWindow__lambda_d312cc5a8d717c33b98f354ae26b71f9___ @ 0x1800D1BCC
 * Callers:
 *     ?_StageCloneWithOwnedWindows@CTransitionVisualController@@IEAAJPEAVCTopLevelWindow@@PEAVCContainerVisual@@HW4StagedBackgroundPolicy@1@@Z @ 0x18008E25C (-_StageCloneWithOwnedWindows@CTransitionVisualController@@IEAAJPEAVCTopLevelWindow@@PEAVCContain.c)
 *     CTransitionVisualController::ForEachOwnedWindow__lambda_d312cc5a8d717c33b98f354ae26b71f9___ @ 0x1800D1BCC (CTransitionVisualController--ForEachOwnedWindow__lambda_d312cc5a8d717c33b98f354ae26b71f9___.c)
 * Callees:
 *     ?IsCloned@CTopLevelWindow@@QEAA_NXZ @ 0x18008270C (-IsCloned@CTopLevelWindow@@QEAA_NXZ.c)
 *     CTransitionVisualController::ForEachOwnedWindow__lambda_d312cc5a8d717c33b98f354ae26b71f9___ @ 0x1800D1BCC (CTransitionVisualController--ForEachOwnedWindow__lambda_d312cc5a8d717c33b98f354ae26b71f9___.c)
 *     _lambda_d312cc5a8d717c33b98f354ae26b71f9_::operator() @ 0x1800D1CE8 (_lambda_d312cc5a8d717c33b98f354ae26b71f9_--operator().c)
 */

__int64 __fastcall CTransitionVisualController::ForEachOwnedWindow__lambda_d312cc5a8d717c33b98f354ae26b71f9___(
        __int64 a1,
        __int64 a2,
        char a3)
{
  int v3; // r9d
  CTopLevelWindow *v6; // rcx
  __int64 i; // rdi
  __int64 v8; // rsi

  v3 = 0;
  if ( !a3 || (*(_DWORD *)(a1 + 680) & 0x10000000) != 0 )
  {
    v6 = *(CTopLevelWindow **)(a1 + 440);
    if ( !v6 || !CTopLevelWindow::IsCloned(v6) )
    {
      for ( i = 0LL; (unsigned int)i < *(_DWORD *)(a1 + 632); i = (unsigned int)(i + 1) )
      {
        if ( v3 < 0 )
          break;
        v8 = *(_QWORD *)(*(_QWORD *)(a1 + 608) + 8 * i);
        if ( (*(_DWORD *)(v8 + 680) & 0xFFF) == 0xFFF )
        {
          v3 = lambda_d312cc5a8d717c33b98f354ae26b71f9_::operator()(a2, *(_QWORD *)(*(_QWORD *)(a1 + 608) + 8 * i));
          if ( v3 >= 0 )
            v3 = CTransitionVisualController::ForEachOwnedWindow__lambda_d312cc5a8d717c33b98f354ae26b71f9___(
                   v8,
                   a2,
                   0LL);
        }
      }
    }
  }
  return (unsigned int)v3;
}
