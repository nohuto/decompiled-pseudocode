/*
 * XREFs of UserSurfaceAccessCheck @ 0x14011A3A0
 * Callers:
 *     UserScreenAccessCheck @ 0x14011A350 (UserScreenAccessCheck.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048E80 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     UserUnsafeIsProcessDwm @ 0x1400D7D90 (UserUnsafeIsProcessDwm.c)
 */

__int64 __fastcall UserSurfaceAccessCheck(__int64 a1, __int64 a2)
{
  unsigned int v3; // ebx
  struct tagTHREADINFO *v4; // rax
  _QWORD *v5; // rcx
  int v6; // r8d
  struct tagTHREADINFO *v7; // rdx
  __int64 v8; // rax
  _QWORD *v9; // rax
  __int64 CurrentProcessWin32Process; // rax
  __int64 v11; // rdx

  v3 = 0;
  v4 = PtiCurrent(a1, a2);
  v7 = v4;
  if ( !a1
    || (v8 = *((_QWORD *)v4 + 61)) != 0 && (v9 = *(_QWORD **)(v8 + 8), v5 = (_QWORD *)*v9, *(_QWORD *)*v9 == a1)
    || (_InterlockedCompareExchange((volatile signed __int32 *)v7 + 130, 0, 0) & 8) != 0
    || (unsigned int)UserUnsafeIsProcessDwm(**((_QWORD **)v7 + 57), (int)v7, v6) )
  {
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v5);
    v11 = CurrentProcessWin32Process;
    if ( CurrentProcessWin32Process )
      v11 = -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL) & CurrentProcessWin32Process;
    if ( (*(_DWORD *)(v11 + 12) & 0x40010) == 0x40010 )
      return 1;
  }
  return v3;
}
