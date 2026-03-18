/*
 * XREFs of ?UT_CaretSet@@YAHPEAUtagWND@@@Z @ 0x1401290CC
 * Callers:
 *     NtUserHideCaret @ 0x140127770 (NtUserHideCaret.c)
 *     zzzShowCaret @ 0x1401290A4 (zzzShowCaret.c)
 *     zzzSetCaretPos @ 0x140129180 (zzzSetCaretPos.c)
 *     zzzDestroyCaret @ 0x14014BB8C (zzzDestroyCaret.c)
 * Callees:
 *     UserSetLastError @ 0x140022F00 (UserSetLastError.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 */

__int64 __fastcall UT_CaretSet(struct tagWND *a1)
{
  struct tagTHREADINFO *v2; // rax
  unsigned int v3; // ebx
  struct tagTHREADINFO *v4; // r14
  __int64 v5; // rsi
  unsigned int ThreadId; // eax
  __int64 v7; // rcx
  __int64 v9; // rax

  v2 = PtiCurrent((__int64)a1);
  v3 = 0;
  v4 = v2;
  v5 = *((_QWORD *)v2 + 58);
  if ( *(_QWORD *)(v5 + 344)
    && ((ThreadId = (unsigned int)PsGetThreadId(*(PETHREAD *)v2),
         v7 = *(unsigned int *)(v5 + 400),
         (_DWORD)v7 == ThreadId)
     || (v9 = PtiFromThreadId(v7)) != 0 && *((_QWORD *)v4 + 57) == *(_QWORD *)(v9 + 456)) )
  {
    if ( a1 )
    {
      LOBYTE(v3) = a1 == *(struct tagWND **)(v5 + 344);
      return v3;
    }
    else
    {
      return 1LL;
    }
  }
  else
  {
    UserSetLastError(5);
    return 0LL;
  }
}
