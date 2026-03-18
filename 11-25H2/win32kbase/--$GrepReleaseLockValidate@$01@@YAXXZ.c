/*
 * XREFs of ??$GrepReleaseLockValidate@$01@@YAXXZ @ 0x1400C349C
 * Callers:
 *     ??1?$SEMOBJEXORSHARED@$01@@QEAA@XZ @ 0x140043B3C (--1-$SEMOBJEXORSHARED@$01@@QEAA@XZ.c)
 * Callees:
 *     W32GetCurrentWin32kSessionId @ 0x140049A34 (W32GetCurrentWin32kSessionId.c)
 */

__int64 GrepReleaseLockValidate<2>()
{
  struct _KTHREAD *CurrentThread; // rsi
  __int64 v1; // rdi
  __int64 *ThreadWin32Thread; // rax
  __int64 result; // rax
  __int64 v4; // rdi
  int CurrentWin32kSessionId; // ebx
  __int64 CurrentThreadProcess; // rax

  CurrentThread = KeGetCurrentThread();
  v1 = 0LL;
  if ( !(unsigned __int8)KeIsAttachedProcess()
    || (CurrentWin32kSessionId = W32GetCurrentWin32kSessionId(),
        CurrentThreadProcess = PsGetCurrentThreadProcess(),
        CurrentWin32kSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
  {
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
    if ( ThreadWin32Thread )
      v1 = *ThreadWin32Thread;
  }
  result = v1 + 8;
  v4 = -v1;
  if ( (result & -(__int64)(v4 != 0)) != 0 && (*(_BYTE *)((result & -(__int64)(v4 != 0)) + 0xA))-- == 1 )
    *(_QWORD *)(result & -(__int64)(v4 != 0)) &= ~4uLL;
  return result;
}
