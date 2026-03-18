/*
 * XREFs of CaretBlinkProc @ 0x140159120
 * Callers:
 *     <none>
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036850 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ?UT_InvertCaret@@YAXXZ @ 0x140053DC8 (-UT_InvertCaret@@YAXXZ.c)
 *     ?RemoveCaretTimer@@YAXPEAUtagWND@@PEAUtagQ@@@Z @ 0x140158894 (-RemoveCaretTimer@@YAXPEAUtagWND@@PEAUtagQ@@@Z.c)
 */

void __fastcall CaretBlinkProc(__int64 a1, __int64 a2)
{
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // rdi
  int v6; // eax
  int v7; // eax
  int v8; // eax
  bool v9; // zf
  __int64 v10; // rdx
  __int64 v11; // rcx

  v5 = *((_QWORD *)PtiCurrent(a1, a2) + 59);
  if ( a1 == *(_QWORD *)(v5 + 320) )
  {
    v6 = *(_DWORD *)(v5 + 336);
    if ( v6 > 0 )
      *(_DWORD *)(v5 + 336) = v6 - 1;
    v7 = *(_DWORD *)(v5 + 328);
    if ( (v7 & 2) != 0
      && (v7 & 1) != 0
      && ((v11 = *(_QWORD *)(W32GetUserSessionState(v4, v3) + 19872), *(_DWORD *)(v11 + 4984) == -1)
       || (v4 = *(_QWORD *)(W32GetUserSessionState(v11, v10) + 19872), (*(_DWORD *)(v4 + 2236) & 4) == 0)
       || !*(_DWORD *)(v5 + 336)) )
    {
      RemoveCaretTimer(*(struct tagWND **)(v5 + 320), (struct tagQ *)v5);
    }
    else
    {
      v8 = *(_DWORD *)(v5 + 328) ^ 2;
      v9 = *(_DWORD *)(v5 + 332) == 0;
      *(_DWORD *)(v5 + 328) = v8;
      if ( v9 )
      {
        *(_DWORD *)(v5 + 328) = v8 ^ 1;
        UT_InvertCaret(v4, v3);
      }
    }
  }
}
