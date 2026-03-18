/*
 * XREFs of ?xxxDwmProcessShutdown@@YAJH@Z @ 0x1401FBD50
 * Callers:
 *     xxxDestroyThreadInfo @ 0x1400BA274 (xxxDestroyThreadInfo.c)
 *     NtUserUnregisterSessionPort @ 0x1401E9F00 (NtUserUnregisterSessionPort.c)
 * Callees:
 *     GreUnlockDwmState @ 0x1400B3070 (GreUnlockDwmState.c)
 *     GreLockDwmState @ 0x1400B3150 (GreLockDwmState.c)
 *     ?GetCount@AtomicExecutionCheck@@SAIXZ @ 0x1400E5470 (-GetCount@AtomicExecutionCheck@@SAIXZ.c)
 *     ??0LeaveEnterCrit@@QEAA@_N@Z @ 0x1400EA650 (--0LeaveEnterCrit@@QEAA@_N@Z.c)
 *     ??1LeaveEnterCrit@@QEAA@XZ @ 0x1400EAAF4 (--1LeaveEnterCrit@@QEAA@XZ.c)
 *     GreSfmCleanupPresentHistory @ 0x140181930 (GreSfmCleanupPresentHistory.c)
 *     IsxxxDwmStopRedirectionSupported @ 0x140191BB8 (IsxxxDwmStopRedirectionSupported.c)
 *     ?SetDwmApiPort@@YAXPEAX@Z @ 0x140193FE4 (-SetDwmApiPort@@YAXPEAX@Z.c)
 *     xxxDwmControl @ 0x1401FBEF0 (xxxDwmControl.c)
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

__int64 __fastcall xxxDwmProcessShutdown(unsigned int a1, int a2, int a3)
{
  unsigned int v3; // edi
  __int64 UserSessionState; // rbx
  __int64 v6; // rcx
  unsigned int v7; // esi
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 (__fastcall *v10)(_QWORD); // rax
  unsigned int Count; // eax
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r9
  int v15; // edx
  int v16; // r8d
  __int64 v17; // rcx
  int v18; // edx
  int v19; // r8d
  void *v20; // rcx
  HANDLE CurrentProcessId; // rax
  char v23; // [rsp+50h] [rbp+8h] BYREF
  __int64 v24; // [rsp+58h] [rbp+10h] BYREF

  v3 = 0;
  v24 = 0LL;
  UserSessionState = W32GetUserSessionState(a1, a2, a3);
  if ( (int)DxgkGetSessionTokenManager(&v24) >= 0 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v24 + 104LL))(v24);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v24 + 168LL))(v24);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v24 + 8LL))(v24);
  }
  v7 = 0;
  if ( !*(_DWORD *)(UserSessionState + 70552) )
    v7 = a1;
  if ( (int)IsxxxDwmStopRedirectionSupported(v6) >= 0 )
  {
    v9 = *(_QWORD *)(W32GetWin32kBaseApiSetTable(v9) + 48);
    v10 = *(__int64 (__fastcall **)(_QWORD))(v9 + 3824);
    if ( v10 )
      v3 = v10(a1);
    else
      v3 = -1073741637;
  }
  Count = AtomicExecutionCheck::GetCount(v9, v8);
  if ( Count )
    KeBugCheckEx(0x160u, Count, 0LL, 0LL, 0LL);
  LOBYTE(v12) = 1;
  LeaveEnterCrit::LeaveEnterCrit((LeaveEnterCrit *)&v23, v12, v13, v14);
  GreSfmCleanupPresentHistory();
  LeaveEnterCrit::~LeaveEnterCrit((LeaveEnterCrit *)&v23, v15, v16);
  GreLockDwmState(v17);
  SetDwmApiPort(0LL, v18, v19);
  v20 = *(void **)(UserSessionState + 70544);
  if ( v20 )
  {
    ObfDereferenceObject(v20);
    *(_QWORD *)(UserSessionState + 70544) = 0LL;
  }
  GreUnlockDwmState((__int64)v20);
  *(_DWORD *)(UserSessionState + 70552) = 0;
  if ( v7 )
  {
    CurrentProcessId = PsGetCurrentProcessId();
    xxxDwmControl(1036LL, CurrentProcessId);
  }
  return v3;
}
