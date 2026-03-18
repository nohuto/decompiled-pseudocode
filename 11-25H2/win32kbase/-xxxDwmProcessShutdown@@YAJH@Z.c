/*
 * XREFs of ?xxxDwmProcessShutdown@@YAJH@Z @ 0x1400AEF0C
 * Callers:
 *     xxxDestroyThreadInfo @ 0x140164194 (xxxDestroyThreadInfo.c)
 *     NtUserUnregisterSessionPort @ 0x1401C12B0 (NtUserUnregisterSessionPort.c)
 * Callees:
 *     GreUnlockDwmState @ 0x140047820 (GreUnlockDwmState.c)
 *     GreLockDwmState @ 0x140047910 (GreLockDwmState.c)
 *     ??1LeaveEnterCrit@@QEAA@XZ @ 0x140081F58 (--1LeaveEnterCrit@@QEAA@XZ.c)
 *     ?GetCount@AtomicExecutionCheck@@SAIXZ @ 0x1400AF090 (-GetCount@AtomicExecutionCheck@@SAIXZ.c)
 *     IsxxxDwmStopRedirectionSupported @ 0x1400AF0B0 (IsxxxDwmStopRedirectionSupported.c)
 *     GreSfmCleanupPresentHistory @ 0x1400AF0F0 (GreSfmCleanupPresentHistory.c)
 *     ?SetDwmApiPort@@YAXPEAX@Z @ 0x1400AF288 (-SetDwmApiPort@@YAXPEAX@Z.c)
 *     xxxDwmControl @ 0x14017E230 (xxxDwmControl.c)
 *     IsUserEnableConsoleModeSupported @ 0x1401A10D8 (IsUserEnableConsoleModeSupported.c)
 *     ??0LeaveEnterCrit@@QEAA@_N@Z @ 0x1401A6050 (--0LeaveEnterCrit@@QEAA@_N@Z.c)
 *     UserEnableConsoleMode @ 0x14023F388 (UserEnableConsoleMode.c)
 *     _guard_dispatch_icall @ 0x140242EE0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall xxxDwmProcessShutdown(__int64 a1, __int64 a2)
{
  unsigned int v2; // edi
  unsigned int v3; // ebp
  __int64 v4; // rbx
  unsigned int v5; // esi
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 (__fastcall *v8)(_QWORD); // rax
  unsigned int Count; // eax
  __int64 v10; // rdx
  __int64 v11; // rcx
  void *v12; // rcx
  __int64 v13; // rdx
  unsigned int CurrentProcessId; // eax
  char v16; // [rsp+50h] [rbp+8h] BYREF
  __int64 v17; // [rsp+58h] [rbp+10h] BYREF

  v2 = 0;
  v3 = a1;
  v17 = 0LL;
  v4 = W32GetUserSessionState(a1, a2) + 70552;
  if ( (int)DxgkGetSessionTokenManager(&v17) >= 0 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 104LL))(v17);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 208LL))(v17);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 8LL))(v17);
  }
  v5 = 0;
  if ( !*(_DWORD *)(v4 + 8) )
    v5 = v3;
  if ( (int)IsxxxDwmStopRedirectionSupported() >= 0 )
  {
    v8 = *(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v7, v6) + 48) + 4272LL);
    if ( v8 )
      v2 = v8(v3);
    else
      v2 = -1073741637;
  }
  Count = AtomicExecutionCheck::GetCount();
  if ( Count )
    KeBugCheckEx(0x160u, Count, 0LL, 0LL, 0LL);
  LeaveEnterCrit::LeaveEnterCrit((LeaveEnterCrit *)&v16, 1);
  GreSfmCleanupPresentHistory();
  LeaveEnterCrit::~LeaveEnterCrit((LeaveEnterCrit *)&v16, v10);
  GreLockDwmState(v11);
  SetDwmApiPort(0LL);
  v12 = *(void **)v4;
  if ( *(_QWORD *)v4 )
  {
    ObfDereferenceObject(v12);
    *(_QWORD *)v4 = 0LL;
  }
  GreUnlockDwmState((__int64)v12);
  if ( (int)IsUserEnableConsoleModeSupported() >= 0 )
  {
    LeaveEnterCrit::LeaveEnterCrit((LeaveEnterCrit *)&v16, 1);
    v2 = UserEnableConsoleMode(1LL);
    LeaveEnterCrit::~LeaveEnterCrit((LeaveEnterCrit *)&v16, v13);
  }
  *(_DWORD *)(v4 + 8) = 0;
  if ( v5 )
  {
    CurrentProcessId = (unsigned int)PsGetCurrentProcessId();
    xxxDwmControl(1036LL, CurrentProcessId);
  }
  return v2;
}
