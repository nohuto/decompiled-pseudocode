/*
 * XREFs of xxxLoadUserApiHook @ 0x1401D9C7C
 * Callers:
 *     xxxCreateWindowEx @ 0x14003997C (xxxCreateWindowEx.c)
 *     xxxDefWindowProc @ 0x1400C36C0 (xxxDefWindowProc.c)
 *     NtUserLoadUserApiHook @ 0x1401D9C40 (NtUserLoadUserApiHook.c)
 *     xxxRealDefWindowProc @ 0x140259FFC (xxxRealDefWindowProc.c)
 * Callees:
 *     ?IsInsideUserApiHook@@YAHXZ @ 0x140022DA4 (-IsInsideUserApiHook@@YAHXZ.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036850 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     xxxLoadHmodIndex @ 0x1400C7330 (xxxLoadHmodIndex.c)
 */

__int64 __fastcall xxxLoadUserApiHook(__int64 a1, __int64 a2)
{
  struct tagTHREADINFO *v2; // rdi
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // rcx
  unsigned int v6; // ebx
  __int64 CurrentProcess; // rax
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // rdx
  __int64 v11; // rcx

  v2 = PtiCurrent(a1, a2);
  v6 = 0;
  if ( !IsInsideUserApiHook(v4, v3) )
    return 0LL;
  CurrentProcess = PsGetCurrentProcess(v5);
  if ( (unsigned int)PsIsProtectedProcess(CurrentProcess)
    || (unsigned int)PsGetWin32KFilterSet() == 5
    || (_InterlockedCompareExchange((volatile signed __int32 *)v2 + 132, 0, 0) & 0x1000000D) != 0 )
  {
    return 0LL;
  }
  v8 = *((_QWORD *)v2 + 58);
  v9 = *(unsigned int *)(v8 + 12);
  if ( (v9 & 0x80u) == 0LL )
    v11 = *(unsigned int *)(W32GetUserSessionState(v8, v9) + 64216);
  else
    v11 = *(unsigned int *)(W32GetUserSessionState(v8, v9) + 64740);
  LOBYTE(v6) = xxxLoadHmodIndex(v11, v10) != 0;
  return v6;
}
