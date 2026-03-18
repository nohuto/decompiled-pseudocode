/*
 * XREFs of ?UT_InvertCaret@@YAXXZ @ 0x140053DC8
 * Callers:
 *     zzzInternalHideCaret @ 0x140052D7C (zzzInternalHideCaret.c)
 *     zzzInternalShowCaret @ 0x140053124 (zzzInternalShowCaret.c)
 *     zzzSetCaretPos @ 0x140158248 (zzzSetCaretPos.c)
 *     CaretBlinkProc @ 0x140159120 (CaretBlinkProc.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036850 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     IsVisible @ 0x140053FD8 (IsVisible.c)
 *     GreSaveDC @ 0x140054408 (GreSaveDC.c)
 *     _ExcludeUpdateRgn @ 0x140054468 (_ExcludeUpdateRgn.c)
 *     GrePolyPatBlt @ 0x140055878 (GrePolyPatBlt.c)
 *     GreBitBltInternal @ 0x140084DC8 (GreBitBltInternal.c)
 */

void __fastcall UT_InvertCaret(__int64 a1, __int64 a2)
{
  __int64 v2; // rdi
  struct tagWND *v3; // rbx
  __int64 v4; // rcx
  HDC DC; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  HDC v8; // rsi
  int v9; // ebp
  unsigned __int64 v10; // rbx
  __int64 UserSessionState; // rax
  __int64 v12; // rbx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rax
  _DWORD v19[4]; // [rsp+60h] [rbp-28h] BYREF
  __int64 v20; // [rsp+70h] [rbp-18h]

  v2 = *((_QWORD *)PtiCurrent(a1, a2) + 59);
  v3 = *(struct tagWND **)(v2 + 320);
  if ( v3 && (unsigned int)IsVisible(*(_QWORD *)(v2 + 320)) )
  {
    DC = (HDC)_GetDC(v4);
    v7 = *((_QWORD *)v3 + 5);
    v8 = DC;
    if ( *(_QWORD *)(v7 + 136) )
    {
      GreSaveDC(DC);
      ExcludeUpdateRgn(v8, v3);
      v9 = 1;
    }
    else
    {
      v9 = 0;
    }
    v10 = *(_QWORD *)(v2 + 360);
    if ( v10 > 1 )
    {
      UserSessionState = W32GetUserSessionState(v7, v6);
      v12 = GreSelectBitmap(*(_QWORD *)(UserSessionState + 43248), v10);
      v15 = W32GetUserSessionState(v14, v13);
      GreBitBltInternal(v8, *(_DWORD *)(v2 + 348), *(HDC *)(v15 + 43248), 0, 0, 6684742, 0, 0);
      v18 = W32GetUserSessionState(v17, v16);
      GreSelectBitmap(*(_QWORD *)(v18 + 43248), v12);
    }
    else
    {
      v19[0] = *(_DWORD *)(v2 + 340);
      v19[1] = *(_DWORD *)(v2 + 344);
      v19[2] = *(_DWORD *)(v2 + 352);
      v19[3] = *(_DWORD *)(v2 + 348);
      if ( v10 == 1 )
        v20 = *(_QWORD *)(*(_QWORD *)(W32GetUserSessionState(v7, v6) + 19872) + 4944LL);
      else
        v20 = *(_QWORD *)(W32GetUserSessionState(v7, v6) + 43048);
      GrePolyPatBlt(v8, 0x5A0049u, (struct _POLYPATBLT *)v19, 1u);
    }
    if ( v9 )
      GreRestoreDC(v8, 0xFFFFFFFFLL);
    _ReleaseDC(v8);
  }
  else
  {
    *(_DWORD *)(v2 + 328) &= ~1u;
  }
}
