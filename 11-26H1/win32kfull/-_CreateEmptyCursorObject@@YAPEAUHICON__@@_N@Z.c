/*
 * XREFs of ?_CreateEmptyCursorObject@@YAPEAUHICON__@@_N@Z @ 0x1400295C4
 * Callers:
 *     NtUserCreateEmptyCursorObject @ 0x140029580 (NtUserCreateEmptyCursorObject.c)
 *     ?_DuplicateCursor@@YAPEAUtagCURSOR@@PEAU1@_N@Z @ 0x14013E294 (-_DuplicateCursor@@YAPEAUtagCURSOR@@PEAU1@_N@Z.c)
 * Callees:
 *     ?_GetCurrentLogicalCursorThread@@YAPEAUtagTHREADINFO@@XZ @ 0x140029660 (-_GetCurrentLogicalCursorThread@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 */

__int64 __fastcall _CreateEmptyCursorObject(char a1)
{
  struct tagTHREADINFO *v2; // rax
  __int64 v3; // r8
  __int64 v4; // rdi
  __int64 v5; // rcx
  __int64 v6; // rsi
  __int64 v8; // rbx

  v2 = PtiCurrent();
  LOBYTE(v3) = 3;
  v4 = 0LL;
  v6 = HMAllocObject(v2, 0LL, v3, 152LL);
  if ( v6 )
  {
    if ( !a1 || (v8 = *(_QWORD *)(W32GetUserGdiSessionState(v5) + 40), PsGetCurrentProcess() != v8) )
      v4 = *((_QWORD *)_GetCurrentLogicalCursorThread() + 57);
    *(_QWORD *)(v6 + 24) = v4;
    v4 = *(_QWORD *)v6;
    *(_DWORD *)(v6 + 80) = 2048;
    *(_QWORD *)(v6 + 48) = v6;
  }
  return v4;
}
