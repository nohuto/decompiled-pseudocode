/*
 * XREFs of zzzSetCaretPos @ 0x140158248
 * Callers:
 *     NtUserSetCaretPos @ 0x140158190 (NtUserSetCaretPos.c)
 * Callees:
 *     UserSetLastError @ 0x14001A2B4 (UserSetLastError.c)
 *     xxxWindowEvent @ 0x14002EAB0 (xxxWindowEvent.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036850 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ?UT_InvertCaret@@YAXXZ @ 0x140053DC8 (-UT_InvertCaret@@YAXXZ.c)
 *     ?UT_CaretSet@@YAHPEAUtagWND@@@Z @ 0x140158458 (-UT_CaretSet@@YAHPEAUtagWND@@@Z.c)
 *     GreLPtoDP @ 0x14015850C (GreLPtoDP.c)
 *     ?RemoveCaretTimer@@YAXPEAUtagWND@@PEAUtagQ@@@Z @ 0x140158894 (-RemoveCaretTimer@@YAXPEAUtagWND@@PEAUtagQ@@@Z.c)
 *     ?CreateCaretTimer@@YAXPEAUtagWND@@PEAUtagQ@@@Z @ 0x1401588D8 (-CreateCaretTimer@@YAXPEAUtagWND@@PEAUtagQ@@@Z.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 */

__int64 __fastcall zzzSetCaretPos(LONG a1, LONG a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 y; // rdx
  __int64 v7; // rdi
  LONG *v8; // rsi
  __int64 x; // rcx
  int v10; // edx
  int v11; // edx
  HDC DC; // rbx
  int v13; // eax
  int v14; // eax
  unsigned int v15; // eax
  __int64 UserSessionState; // rax
  struct tagPOINT v18; // [rsp+30h] [rbp-48h] BYREF
  int v19; // [rsp+38h] [rbp-40h]
  int v20; // [rsp+3Ch] [rbp-3Ch]

  if ( (unsigned int)UT_CaretSet(0LL) )
  {
    v7 = *((_QWORD *)PtiCurrent(v5, v4) + 59);
    v8 = (LONG *)(v7 + 344);
    if ( *(_DWORD *)(v7 + 340) != a1 || *v8 != a2 )
    {
      x = *(_QWORD *)(v7 + 320);
      if ( x )
      {
        y = *(_QWORD *)(*(_QWORD *)(x + 136) + 8LL);
        if ( (*(_DWORD *)(y + 8) & 0x20) != 0 )
        {
          v10 = a1 + *(_DWORD *)(v7 + 352);
          v18.x = a1;
          v19 = v10;
          v11 = a2 + *(_DWORD *)(v7 + 348);
          v18.y = a2;
          v20 = v11;
          DC = (HDC)_GetDC(x);
          GreLPtoDP(DC, &v18);
          _ReleaseDC(DC);
          x = (unsigned int)v18.x;
          y = (unsigned int)v18.y;
          v13 = v19 - v18.x;
          *(_DWORD *)(v7 + 380) = v18.x;
          *(_DWORD *)(v7 + 388) = v13;
          v14 = v20 - y;
          *(_DWORD *)(v7 + 384) = y;
          *(_DWORD *)(v7 + 392) = v14;
        }
      }
      if ( (*(_DWORD *)(v7 + 328) & 1) != 0 )
        UT_InvertCaret(x, y);
      *(_DWORD *)(v7 + 340) = a1;
      *v8 = a2;
      if ( *(_QWORD *)(v7 + 368) )
      {
        RemoveCaretTimer(*(struct tagWND **)(v7 + 320), (struct tagQ *)v7);
        CreateCaretTimer(*(struct tagWND **)(v7 + 320), (struct tagQ *)v7);
      }
      v15 = *(_DWORD *)(v7 + 328) & 0xFFFFFFFC | 2;
      *(_DWORD *)(v7 + 328) = v15;
      if ( !*(_DWORD *)(v7 + 332) )
      {
        *(_DWORD *)(v7 + 328) = v15 | 1;
        UT_InvertCaret(x, y);
      }
      UserSessionState = W32GetUserSessionState(x, y);
      xxxWindowEvent(0x800Bu, *(struct tagWND **)(v7 + 320), -8, 0, *(_DWORD *)(UserSessionState + 70600) != 0 ? 2 : 0);
    }
    return 1LL;
  }
  else
  {
    UserSetLastError(5);
    return 0LL;
  }
}
