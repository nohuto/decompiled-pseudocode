/*
 * XREFs of xxxCreateCaret @ 0x14005DFA8
 * Callers:
 *     NtUserCreateCaret @ 0x1401DBA50 (NtUserCreateCaret.c)
 * Callees:
 *     xxxWindowEvent @ 0x14002EAB0 (xxxWindowEvent.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036850 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     IsWindowBeingDestroyed @ 0x14005C540 (IsWindowBeingDestroyed.c)
 *     ?zzzEndDeferWinEventNotify@@YAXXZ @ 0x14005F888 (-zzzEndDeferWinEventNotify@@YAXXZ.c)
 *     GreExtGetObjectW @ 0x14007D99C (GreExtGetObjectW.c)
 *     zzzInternalDestroyCaret @ 0x140158AD8 (zzzInternalDestroyCaret.c)
 */

__int64 __fastcall xxxCreateCaret(struct tagWND *a1, HSURF a2, int a3, int a4)
{
  struct tagTHREADINFO *v8; // rsi
  __int64 v9; // rbx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 UserSessionState; // rax
  unsigned int v13; // eax
  unsigned int ThreadId; // eax
  int v15; // ecx
  int v16; // eax
  _QWORD v18[2]; // [rsp+30h] [rbp-48h] BYREF
  __int128 v19; // [rsp+40h] [rbp-38h]
  __int128 v20; // [rsp+50h] [rbp-28h]

  v19 = 0LL;
  v20 = 0LL;
  v8 = PtiCurrent((__int64)a1, (__int64)a2);
  v9 = *((_QWORD *)v8 + 59);
  if ( *(_QWORD *)(*((_QWORD *)a1 + 2) + 472LL) != v9 || (unsigned int)IsWindowBeingDestroyed((__int64)a1) )
    return 0LL;
  UserSessionState = W32GetUserSessionState(v11, v10);
  ++*(_DWORD *)(UserSessionState + 70600);
  if ( *(_QWORD *)(v9 + 320) )
  {
    zzzInternalDestroyCaret();
    v9 = *((_QWORD *)v8 + 59);
  }
  v18[1] = a1;
  v18[0] = v9 + 320;
  HMAssignmentLock(v18, 0LL);
  v13 = *(_DWORD *)(v9 + 328) & 0xFFFFFFFE;
  *(_DWORD *)(v9 + 332) = 1;
  *(_DWORD *)(v9 + 328) = v13 | 2;
  ThreadId = (unsigned int)PsGetThreadId(*(PETHREAD *)v8);
  *(_QWORD *)(v9 + 360) = a2;
  *(_DWORD *)(v9 + 376) = ThreadId;
  v15 = 1;
  v16 = 1;
  if ( a4 )
    v16 = a4;
  if ( a3 )
    v15 = a3;
  if ( (unsigned __int64)a2 > 1 )
  {
    GreExtGetObjectW(a2);
    v16 = DWORD2(v19);
    v15 = DWORD1(v19);
  }
  *(_QWORD *)(v9 + 368) = 0LL;
  *(_DWORD *)(v9 + 348) = v16;
  *(_DWORD *)(v9 + 352) = v15;
  zzzEndDeferWinEventNotify();
  xxxWindowEvent(0x8000u, a1, -8, 0, 0);
  return 1LL;
}
