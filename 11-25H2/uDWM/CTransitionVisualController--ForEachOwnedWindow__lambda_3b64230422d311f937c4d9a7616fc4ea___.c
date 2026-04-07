/*
 * XREFs of CTransitionVisualController::ForEachOwnedWindow__lambda_3b64230422d311f937c4d9a7616fc4ea___ @ 0x1800538E4
 * Callers:
 *     ?_MoveOwnedWindowTreeOffscreen@CTransitionVisualController@@KAXPEAVCWindowData@@@Z @ 0x1800538A8 (-_MoveOwnedWindowTreeOffscreen@CTransitionVisualController@@KAXPEAVCWindowData@@@Z.c)
 *     CTransitionVisualController::ForEachOwnedWindow__lambda_3b64230422d311f937c4d9a7616fc4ea___ @ 0x1800538E4 (CTransitionVisualController--ForEachOwnedWindow__lambda_3b64230422d311f937c4d9a7616fc4ea___.c)
 * Callees:
 *     CTransitionVisualController::ForEachOwnedWindow__lambda_3b64230422d311f937c4d9a7616fc4ea___ @ 0x1800538E4 (CTransitionVisualController--ForEachOwnedWindow__lambda_3b64230422d311f937c4d9a7616fc4ea___.c)
 *     ?_MoveWindowOffscreen@CTransitionVisualController@@KAXPEAVCTopLevelWindow@@_N@Z @ 0x180054DF8 (-_MoveWindowOffscreen@CTransitionVisualController@@KAXPEAVCTopLevelWindow@@_N@Z.c)
 *     ?IsCloned@CTopLevelWindow@@QEAA_NXZ @ 0x18008270C (-IsCloned@CTopLevelWindow@@QEAA_NXZ.c)
 */

__int64 __fastcall CTransitionVisualController::ForEachOwnedWindow__lambda_3b64230422d311f937c4d9a7616fc4ea___(
        __int64 a1,
        __int64 a2,
        char a3)
{
  int v3; // r9d
  CTopLevelWindow *v7; // rcx
  __int64 i; // rdi
  __int64 v9; // rsi
  struct CTopLevelWindow *v10; // rcx

  v3 = 0;
  if ( !a3 || (*(_DWORD *)(a1 + 680) & 0x10000000) != 0 )
  {
    v7 = *(CTopLevelWindow **)(a1 + 440);
    if ( !v7 || !CTopLevelWindow::IsCloned(v7) )
    {
      for ( i = 0LL; (unsigned int)i < *(_DWORD *)(a1 + 632); i = (unsigned int)(i + 1) )
      {
        if ( v3 < 0 )
          break;
        v9 = *(_QWORD *)(*(_QWORD *)(a1 + 608) + 8 * i);
        if ( (*(_DWORD *)(v9 + 680) & 0xFFF) == 0xFFF )
        {
          v10 = *(struct CTopLevelWindow **)(v9 + 440);
          if ( v10 )
            CTransitionVisualController::_MoveWindowOffscreen(v10, 1);
          v3 = CTransitionVisualController::ForEachOwnedWindow__lambda_3b64230422d311f937c4d9a7616fc4ea___(v9, a2, 0LL);
        }
      }
    }
  }
  return (unsigned int)v3;
}
