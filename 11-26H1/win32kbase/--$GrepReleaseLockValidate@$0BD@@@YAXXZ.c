/*
 * XREFs of ??$GrepReleaseLockValidate@$0BD@@@YAXXZ @ 0x1400283C0
 * Callers:
 *     DrvpDisplayConfigGetDisplayDeviceInfo @ 0x140027938 (DrvpDisplayConfigGetDisplayDeviceInfo.c)
 *     ??$hdevEnumerate@$00@@YAPEAUHDEV__@@PEAU0@@Z @ 0x1400281B8 (--$hdevEnumerate@$00@@YAPEAUHDEV__@@PEAU0@@Z.c)
 * Callees:
 *     W32GetCurrentWin32kSessionId @ 0x1400584BC (W32GetCurrentWin32kSessionId.c)
 */

__int64 GrepReleaseLockValidate<19>()
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
  if ( (result & -(__int64)(v4 != 0)) != 0 && (*(_BYTE *)((result & -(__int64)(v4 != 0)) + 0x1B))-- == 1 )
    *(_QWORD *)(result & -(__int64)(v4 != 0)) &= ~0x80000uLL;
  return result;
}
