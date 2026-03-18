/*
 * XREFs of ?_CreateEmptyCursorObject@@YAPEAUHICON__@@_N@Z @ 0x14005FAB4
 * Callers:
 *     NtUserCreateEmptyCursorObject @ 0x14005FA70 (NtUserCreateEmptyCursorObject.c)
 *     ?_DuplicateCursor@@YAPEAUtagCURSOR@@PEAU1@_N@Z @ 0x1401310F0 (-_DuplicateCursor@@YAPEAUtagCURSOR@@PEAU1@_N@Z.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036850 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ?_GetCurrentLogicalCursorThread@@YAPEAUtagTHREADINFO@@XZ @ 0x14005FD1C (-_GetCurrentLogicalCursorThread@@YAPEAUtagTHREADINFO@@XZ.c)
 */

__int64 __fastcall _CreateEmptyCursorObject(__int64 a1, __int64 a2)
{
  char v2; // bl
  struct tagTHREADINFO *v3; // rax
  __int64 v4; // r8
  __int64 v5; // rdi
  __int64 v6; // rsi
  __int64 v8; // rbx

  v2 = a1;
  v3 = PtiCurrent(a1, a2);
  LOBYTE(v4) = 3;
  v5 = 0LL;
  v6 = HMAllocObject(v3, 0LL, v4, 152LL);
  if ( v6 )
  {
    if ( !v2 || (v8 = *(_QWORD *)(W32GetUserGdiSessionState() + 40), PsGetCurrentProcess() != v8) )
      v5 = *((_QWORD *)_GetCurrentLogicalCursorThread() + 58);
    *(_QWORD *)(v6 + 24) = v5;
    v5 = *(_QWORD *)v6;
    *(_DWORD *)(v6 + 80) = 2048;
    *(_QWORD *)(v6 + 48) = v6;
  }
  return v5;
}
