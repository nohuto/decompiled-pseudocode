/*
 * XREFs of CTransitionVisualController::ForEachOwnedWindow__CTransitionVisualController::GetOwnedInclusiveClipRect_::_5_::_lambda_1___ @ 0x1800CE220
 * Callers:
 *     CTransitionVisualController::ForEachOwnedWindow__CTransitionVisualController::GetOwnedInclusiveClipRect_::_5_::_lambda_1___ @ 0x1800CE220 (CTransitionVisualController--ForEachOwnedWindow__CTransitionVisualController--GetOwnedInclusiveC.c)
 *     ?GetOwnedInclusiveClipRect@CTransitionVisualController@@QEAAXPEAVCWindowData@@PEAUtagRECT@@@Z @ 0x1800CF774 (-GetOwnedInclusiveClipRect@CTransitionVisualController@@QEAAXPEAVCWindowData@@PEAUtagRECT@@@Z.c)
 * Callees:
 *     ?IsCloned@CTopLevelWindow@@QEAA_NXZ @ 0x180045CC4 (-IsCloned@CTopLevelWindow@@QEAA_NXZ.c)
 *     __security_check_cookie @ 0x18008E1C0 (__security_check_cookie.c)
 *     CTransitionVisualController::ForEachOwnedWindow__CTransitionVisualController::GetOwnedInclusiveClipRect_::_5_::_lambda_1___ @ 0x1800CE220 (CTransitionVisualController--ForEachOwnedWindow__CTransitionVisualController--GetOwnedInclusiveC.c)
 */

__int64 __fastcall CTransitionVisualController::ForEachOwnedWindow__CTransitionVisualController::GetOwnedInclusiveClipRect_::_5_::_lambda_1___(
        __int64 a1,
        struct tagRECT ***a2,
        char a3)
{
  int v3; // r9d
  CTopLevelWindow *v6; // rcx
  __int64 i; // rsi
  __int64 v8; // rdi
  struct tagRECT **v9; // rdx
  struct tagRECT rcDst; // [rsp+20h] [rbp-38h] BYREF

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
          if ( (*(_BYTE *)(v8 + 736) & 1) != 0
            && (*(_DWORD *)(v8 + 116) & 0x20000000) == 0
            && (*(_BYTE *)(v8 + 742) & 8) == 0 )
          {
            v9 = *a2;
            rcDst = 0LL;
            UnionRect(&rcDst, *v9, (const RECT *)(v8 + 48));
            ***a2 = rcDst;
          }
          v3 = CTransitionVisualController::ForEachOwnedWindow__CTransitionVisualController::GetOwnedInclusiveClipRect_::_5_::_lambda_1___(
                 v8,
                 a2,
                 0LL);
        }
      }
    }
  }
  return (unsigned int)v3;
}
