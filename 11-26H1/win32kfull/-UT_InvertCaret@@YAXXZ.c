/*
 * XREFs of ?UT_InvertCaret@@YAXXZ @ 0x140129354
 * Callers:
 *     zzzSetCaretPos @ 0x140129180 (zzzSetCaretPos.c)
 *     zzzInternalHideCaret @ 0x14012B0B4 (zzzInternalHideCaret.c)
 *     zzzInternalShowCaret @ 0x14012BC20 (zzzInternalShowCaret.c)
 *     CaretBlinkProc @ 0x14020B880 (CaretBlinkProc.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     _ExcludeUpdateRgn @ 0x14004092C (_ExcludeUpdateRgn.c)
 *     GreBitBltInternal @ 0x1400B5980 (GreBitBltInternal.c)
 *     GreSaveDC @ 0x140122524 (GreSaveDC.c)
 *     GrePolyPatBlt @ 0x140126C64 (GrePolyPatBlt.c)
 *     IsVisible @ 0x140128400 (IsVisible.c)
 */

void __fastcall UT_InvertCaret(__int64 a1)
{
  __int64 v1; // rdi
  struct tagWND *v2; // rbx
  HDC DC; // rax
  __int64 v4; // rdx
  __int64 v5; // rcx
  Gre::Base *v6; // rsi
  int v7; // ebp
  unsigned __int64 v8; // rbx
  __int64 UserSessionState; // rax
  __int64 v10; // rbx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rax
  _DWORD v17[4]; // [rsp+60h] [rbp-28h] BYREF
  __int64 v18; // [rsp+70h] [rbp-18h]

  v1 = *((_QWORD *)PtiCurrent(a1) + 58);
  v2 = *(struct tagWND **)(v1 + 344);
  if ( v2 && (unsigned int)IsVisible(*(_QWORD *)(v1 + 344)) )
  {
    DC = (HDC)_GetDC(v2);
    v5 = *((_QWORD *)v2 + 5);
    v6 = (Gre::Base *)DC;
    if ( *(_QWORD *)(v5 + 136) )
    {
      v7 = 1;
      GreSaveDC(DC);
      ExcludeUpdateRgn((HDC)v6, v2);
    }
    else
    {
      v7 = 0;
    }
    v8 = *(_QWORD *)(v1 + 384);
    if ( v8 > 1 )
    {
      UserSessionState = W32GetUserSessionState(v5, v4);
      v10 = GreSelectBitmap(*(_QWORD *)(UserSessionState + 43248), v8);
      v13 = W32GetUserSessionState(v12, v11);
      GreBitBltInternal(
        v6,
        *(_DWORD *)(v1 + 364),
        *(_DWORD *)(v1 + 368),
        *(_DWORD *)(v1 + 376),
        *(_DWORD *)(v1 + 372),
        *(_QWORD *)(v13 + 43248),
        0,
        0,
        0x660046u,
        0,
        0);
      v16 = W32GetUserSessionState(v15, v14);
      GreSelectBitmap(*(_QWORD *)(v16 + 43248), v10);
    }
    else
    {
      v17[0] = *(_DWORD *)(v1 + 364);
      v17[1] = *(_DWORD *)(v1 + 368);
      v17[2] = *(_DWORD *)(v1 + 376);
      v17[3] = *(_DWORD *)(v1 + 372);
      if ( v8 == 1 )
        v18 = *(_QWORD *)(*(_QWORD *)(W32GetUserSessionState(v5, v4) + 19904) + 4944LL);
      else
        v18 = *(_QWORD *)(W32GetUserSessionState(v5, v4) + 43072);
      GrePolyPatBlt((HDC)v6, 5898313, (struct _POLYPATBLT *)v17, 1);
    }
    if ( v7 )
      GreRestoreDC(v6, 0xFFFFFFFFLL);
    _ReleaseDC(v6);
  }
  else
  {
    *(_DWORD *)(v1 + 352) &= ~1u;
  }
}
