/*
 * XREFs of ?xxxEnsureAllDpiCursors@@YAXXZ @ 0x1401D16C0
 * Callers:
 *     _anonymous_namespace_::HandlePointerCursorSideOp @ 0x14005ECC0 (_anonymous_namespace_--HandlePointerCursorSideOp.c)
 * Callees:
 *     ??$Win32HM_UnlockFromThread@$00@@YAPEAU_HEAD@@PEAUtagTHREADINFO@@PEAU_Win32HMThreadLockItem@@@Z @ 0x14002F8B0 (--$Win32HM_UnlockFromThread@$00@@YAPEAU_HEAD@@PEAUtagTHREADINFO@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036850 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ?xxxEnsureDpiCursors@@YAXPEAUtagCURSOR@@PEAU_UNICODE_STRING@@I@Z @ 0x14004E6E0 (-xxxEnsureDpiCursors@@YAXPEAUtagCURSOR@@PEAU_UNICODE_STRING@@I@Z.c)
 *     ??$Win32HM_ExchangeThreadLock@$00@@YAPEAU_HEAD@@PEAU0@PEAU_Win32HMThreadLockItem@@@Z @ 0x140050410 (--$Win32HM_ExchangeThreadLock@$00@@YAPEAU_HEAD@@PEAU0@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     ?xxxEnsureDpiCursorsForSysCur@@YAXI@Z @ 0x1401D180C (-xxxEnsureDpiCursorsForSysCur@@YAXI@Z.c)
 */

void __fastcall xxxEnsureAllDpiCursors(__int64 a1, __int64 a2)
{
  struct tagTHREADINFO *v2; // rax
  __int64 v3; // rdx
  unsigned int v4; // ebx
  ULONG_PTR *v5; // rcx
  __int64 v6; // rdi
  __int64 *v7; // rsi
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 UserSessionState; // rbp
  unsigned __int64 v11; // rdi
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rdx
  unsigned __int64 i; // rcx
  __int64 v16; // rbx
  struct tagTHREADINFO *v17; // rax
  struct tagCURSOR *v18; // rbx
  ULONG_PTR BugCheckParameter3[3]; // [rsp+20h] [rbp-18h] BYREF

  v2 = PtiCurrent(a1, a2);
  v4 = 0;
  BugCheckParameter3[0] = *((_QWORD *)v2 + 57);
  v5 = BugCheckParameter3;
  *((_QWORD *)v2 + 57) = BugCheckParameter3;
  BugCheckParameter3[1] = 0LL;
  v6 = 0LL;
  do
  {
    v5 = *(ULONG_PTR **)(W32GetUserSessionState(v5, v3) + v6 + 21880);
    if ( v5 )
    {
      Win32HM_ExchangeThreadLock<1>((__int64)v5, (__int64)BugCheckParameter3);
      xxxEnsureDpiCursorsForSysCur(v4);
    }
    ++v4;
    v6 += 552LL;
  }
  while ( v4 < 0x13 );
  v7 = *(__int64 **)(W32GetUserSessionState(v5, v3) + 19832);
  UserSessionState = W32GetUserSessionState(v9, v8);
  v11 = *(_QWORD *)(UserSessionState + 19888);
  for ( i = v11 + 32LL * *(unsigned int *)(W32GetUserSessionState(v13, v12) + 19816);
        v11 <= i;
        i = v16 + 32LL * *(unsigned int *)(W32GetUserSessionState(i, v14) + 19816) )
  {
    if ( *(_BYTE *)(v11 + 24) == 3 )
    {
      v18 = (struct tagCURSOR *)*v7;
      if ( (*(_DWORD *)(*v7 + 80) & 0x5240) == 0x4000 )
      {
        Win32HM_ExchangeThreadLock<1>(*v7, (__int64)BugCheckParameter3);
        xxxEnsureDpiCursors(v18, 0LL, 0);
      }
    }
    v16 = *(_QWORD *)(UserSessionState + 19888);
    v11 += 32LL;
    v7 += 5;
  }
  v17 = PtiCurrent(i, v14);
  Win32HM_UnlockFromThread<1>((ULONG_PTR)v17, BugCheckParameter3);
}
