/*
 * XREFs of ?UT_CaretSet@@YAHPEAUtagWND@@@Z @ 0x140158458
 * Callers:
 *     zzzDestroyCaret @ 0x1401580DC (zzzDestroyCaret.c)
 *     NtUserHideCaret @ 0x140158110 (NtUserHideCaret.c)
 *     zzzSetCaretPos @ 0x140158248 (zzzSetCaretPos.c)
 *     zzzShowCaret @ 0x140158430 (zzzShowCaret.c)
 * Callees:
 *     UserSetLastError @ 0x14001A2B4 (UserSetLastError.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036850 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 */

__int64 __fastcall UT_CaretSet(struct tagWND *a1, __int64 a2)
{
  struct tagTHREADINFO *v3; // rax
  unsigned int v4; // ebx
  struct tagTHREADINFO *v5; // r14
  __int64 v6; // rsi
  unsigned int ThreadId; // eax
  __int64 v8; // rcx
  __int64 v10; // rax

  v3 = PtiCurrent((__int64)a1, a2);
  v4 = 0;
  v5 = v3;
  v6 = *((_QWORD *)v3 + 59);
  if ( *(_QWORD *)(v6 + 320)
    && ((ThreadId = (unsigned int)PsGetThreadId(*(PETHREAD *)v3),
         v8 = *(unsigned int *)(v6 + 376),
         (_DWORD)v8 == ThreadId)
     || (v10 = PtiFromThreadId(v8)) != 0 && *((_QWORD *)v5 + 58) == *(_QWORD *)(v10 + 464)) )
  {
    if ( a1 )
    {
      LOBYTE(v4) = a1 == *(struct tagWND **)(v6 + 320);
      return v4;
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
