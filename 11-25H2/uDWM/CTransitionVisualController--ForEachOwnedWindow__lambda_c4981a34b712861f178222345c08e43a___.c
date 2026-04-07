/*
 * XREFs of CTransitionVisualController::ForEachOwnedWindow__lambda_c4981a34b712861f178222345c08e43a___ @ 0x1800D1B10
 * Callers:
 *     ?RestoreWindow@CTransitionVisualController@@QEAAXPEAVCWindowData@@_N@Z @ 0x1800984B4 (-RestoreWindow@CTransitionVisualController@@QEAAXPEAVCWindowData@@_N@Z.c)
 *     CTransitionVisualController::ForEachOwnedWindow__lambda_c4981a34b712861f178222345c08e43a___ @ 0x1800D1B10 (CTransitionVisualController--ForEachOwnedWindow__lambda_c4981a34b712861f178222345c08e43a___.c)
 * Callees:
 *     ?IsCloned@CTopLevelWindow@@QEAA_NXZ @ 0x18008270C (-IsCloned@CTopLevelWindow@@QEAA_NXZ.c)
 *     ?RestoreWindow@CTransitionVisualController@@QEAAXPEAVCWindowData@@_N@Z @ 0x1800984B4 (-RestoreWindow@CTransitionVisualController@@QEAAXPEAVCWindowData@@_N@Z.c)
 *     CTransitionVisualController::ForEachOwnedWindow__lambda_c4981a34b712861f178222345c08e43a___ @ 0x1800D1B10 (CTransitionVisualController--ForEachOwnedWindow__lambda_c4981a34b712861f178222345c08e43a___.c)
 */

__int64 __fastcall CTransitionVisualController::ForEachOwnedWindow__lambda_c4981a34b712861f178222345c08e43a___(
        __int64 a1,
        struct _RTL_CRITICAL_SECTION **a2,
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
          CTransitionVisualController::RestoreWindow(*a2, *(struct CWindowData **)(*(_QWORD *)(a1 + 608) + 8 * i), 0);
          v3 = CTransitionVisualController::ForEachOwnedWindow__lambda_c4981a34b712861f178222345c08e43a___(v8, a2, 0LL);
        }
      }
    }
  }
  return (unsigned int)v3;
}
