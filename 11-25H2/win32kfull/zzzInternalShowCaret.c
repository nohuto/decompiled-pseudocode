/*
 * XREFs of zzzInternalShowCaret @ 0x140053124
 * Callers:
 *     xxxEndPaint @ 0x140052E08 (xxxEndPaint.c)
 *     zzzShowCaret @ 0x140158430 (zzzShowCaret.c)
 *     xxxScrollWindowEx @ 0x140260308 (xxxScrollWindowEx.c)
 * Callees:
 *     xxxWindowEvent @ 0x14002EAB0 (xxxWindowEvent.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036850 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ?UT_InvertCaret@@YAXXZ @ 0x140053DC8 (-UT_InvertCaret@@YAXXZ.c)
 *     ?CreateCaretTimer@@YAXPEAUtagWND@@PEAUtagQ@@@Z @ 0x1401588D8 (-CreateCaretTimer@@YAXPEAUtagWND@@PEAUtagQ@@@Z.c)
 */

void __fastcall zzzInternalShowCaret(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  int v3; // eax
  int v4; // eax
  unsigned int v5; // ecx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 UserSessionState; // rax
  unsigned int v9; // ecx

  v2 = *((_QWORD *)PtiCurrent(a1, a2) + 59);
  v3 = *(_DWORD *)(v2 + 332);
  if ( v3 )
  {
    v4 = v3 - 1;
    *(_DWORD *)(v2 + 332) = v4;
    if ( !v4 )
    {
      v5 = *(_DWORD *)(v2 + 328);
      *(_DWORD *)(v2 + 328) = v5 ^ ((unsigned __int8)v5 ^ (unsigned __int8)(v5 >> 1)) & 1;
      if ( (v5 & 2) != 0 )
        UT_InvertCaret();
      CreateCaretTimer(*(struct tagWND **)(v2 + 320), (struct tagQ *)v2);
      UserSessionState = W32GetUserSessionState(v7, v6);
      xxxWindowEvent(0x8002u, *(struct tagWND **)(v2 + 320), -8, 0, *(_DWORD *)(UserSessionState + 70600) != 0 ? 2 : 0);
    }
  }
  else
  {
    v9 = *(_DWORD *)(v2 + 328);
    if ( (v9 & 1) == 0 )
    {
      *(_DWORD *)(v2 + 328) = v9 ^ ((unsigned __int8)v9 ^ (unsigned __int8)(v9 >> 1)) & 1;
      if ( (v9 & 2) != 0 )
        UT_InvertCaret();
    }
  }
}
