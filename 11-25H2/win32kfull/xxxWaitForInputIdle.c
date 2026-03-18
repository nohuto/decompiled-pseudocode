/*
 * XREFs of xxxWaitForInputIdle @ 0x1401FAC5C
 * Callers:
 *     NtUserWaitForInputIdle @ 0x1401FABF0 (NtUserWaitForInputIdle.c)
 * Callees:
 *     UserSetLastError @ 0x14001A2B4 (UserSetLastError.c)
 *     ?xxxPollAndWaitForSingleObject@@YAKPEAU_KEVENT@@PEAXK@Z @ 0x14002B4FC (-xxxPollAndWaitForSingleObject@@YAKPEAU_KEVENT@@PEAXK@Z.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036850 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     LockProcessByClientId @ 0x1400D8B9C (LockProcessByClientId.c)
 *     PopAndFreeAlwaysW32ThreadLock @ 0x140148EB4 (PopAndFreeAlwaysW32ThreadLock.c)
 *     ??1CLockProcessByPid@@QEAA@XZ @ 0x14018EA74 (--1CLockProcessByPid@@QEAA@XZ.c)
 *     WaitOnPseudoEvent @ 0x1401F9D28 (WaitOnPseudoEvent.c)
 *     ?LockW32Process@@YAXPEAU_W32PROCESS@@PEAU?$Win32RawOptionalLockedItemAlways@U_W32PROCESS@@$0A@@@@Z @ 0x14021A91C (-LockW32Process@@YAXPEAU_W32PROCESS@@PEAU-$Win32RawOptionalLockedItemAlways@U_W32PROCESS@@$0A@@@.c)
 *     ?GetProcessInfo@CLockProcessByPid@@QEBAPEAUtagPROCESSINFO@@XZ @ 0x14023A1A0 (-GetProcessInfo@CLockProcessByPid@@QEBAPEAUtagPROCESSINFO@@XZ.c)
 *     ??0CLockProcessByPid@@QEAA@PEAXKKW4LockProcessOptions@@_K@Z @ 0x14027745C (--0CLockProcessByPid@@QEAA@PEAXKKW4LockProcessOptions@@_K@Z.c)
 *     Feature_ResponsiblePid__private_IsEnabledDeviceUsageNoInline @ 0x14027A188 (Feature_ResponsiblePid__private_IsEnabledDeviceUsageNoInline.c)
 */

__int64 __fastcall xxxWaitForInputIdle(HANDLE a1, __int64 a2)
{
  unsigned int v2; // r14d
  struct tagTHREADINFO *v4; // rbx
  __int64 v5; // rcx
  __int64 v6; // rdx
  struct tagPROCESSINFO *ProcessInfo; // rax
  struct tagPROCESSINFO *v8; // rbx
  int v9; // eax
  __int64 k; // rax
  __int64 v11; // rdx
  unsigned int v12; // edi
  __int64 m; // rax
  char ProcessExitProcessCalled; // al
  PVOID v16; // rcx
  __int64 ProcessWin32Process; // rax
  ULONG_PTR v18; // rbx
  int *v19; // rsi
  int v20; // eax
  __int64 i; // rax
  __int64 v22; // rdx
  __int64 j; // rax
  ULONG_PTR BugCheckParameter2[2]; // [rsp+38h] [rbp-39h] BYREF
  __int64 v25; // [rsp+48h] [rbp-29h]
  __int128 v26; // [rsp+50h] [rbp-21h]
  __int64 v27; // [rsp+60h] [rbp-11h]
  _BYTE v28[8]; // [rsp+68h] [rbp-9h] BYREF
  int v29; // [rsp+70h] [rbp-1h]
  void *v30; // [rsp+80h] [rbp+Fh]
  PVOID Object; // [rsp+D8h] [rbp+67h] BYREF

  Object = 0LL;
  v2 = a2;
  v4 = PtiCurrent((__int64)a1, a2);
  if ( PsGetThreadProcessId(*(PETHREAD *)v4) == a1 && v4 == *(struct tagTHREADINFO **)(*((_QWORD *)v4 + 58) + 328LL) )
    return 0xFFFFFFFFLL;
  if ( !(unsigned int)Feature_ResponsiblePid__private_IsEnabledDeviceUsageNoInline(v5) )
  {
    if ( (int)LockProcessByClientId(a1, (PEPROCESS *)&Object) < 0 )
      return 0xFFFFFFFFLL;
    ProcessExitProcessCalled = PsGetProcessExitProcessCalled(Object);
    v16 = Object;
    if ( !ProcessExitProcessCalled )
    {
      ProcessWin32Process = PsGetProcessWin32Process(Object);
      v18 = ProcessWin32Process;
      if ( ProcessWin32Process )
      {
        if ( *(_QWORD *)ProcessWin32Process )
        {
          v19 = (int *)(ProcessWin32Process + 12);
          v20 = *(_DWORD *)(ProcessWin32Process + 12);
          if ( (v20 & 0x21) == 0x20 )
          {
            *v19 = v20 | 0x20000;
            for ( i = *(_QWORD *)(v18 + 320); i; i = *(_QWORD *)(i + 704) )
              _InterlockedOr((volatile signed __int32 *)(i + 528), 0x4000u);
            v27 = 0LL;
            v26 = 0LL;
            *(_OWORD *)BugCheckParameter2 = 0LL;
            v25 = -1LL;
            LockW32Process(v18, (ULONG_PTR)BugCheckParameter2);
            ObfDereferenceObject(Object);
            v12 = WaitOnPseudoEvent((PVOID *)(v18 + 16), v2);
            if ( v12 == 128 )
              v12 = xxxPollAndWaitForSingleObject(*(PVOID *)(v18 + 16), Object, v2);
            *v19 &= ~0x20000u;
            for ( j = *(_QWORD *)(v18 + 320); j; j = *(_QWORD *)(j + 704) )
              _InterlockedAnd((volatile signed __int32 *)(j + 528), 0xFFFFBFFF);
            if ( v25 != -1 )
              PopAndFreeAlwaysW32ThreadLock((__int64)BugCheckParameter2, v22);
            return v12;
          }
        }
      }
      UserSetLastError(1471);
      v16 = Object;
    }
    ObfDereferenceObject(v16);
    return 0xFFFFFFFFLL;
  }
  CLockProcessByPid::CLockProcessByPid(v28, a1, 4096LL);
  if ( v29 >= 0 )
  {
    ProcessInfo = CLockProcessByPid::GetProcessInfo((CLockProcessByPid *)v28);
    v8 = ProcessInfo;
    if ( ProcessInfo && (v9 = *((_DWORD *)ProcessInfo + 3), (v9 & 0x21) == 0x20) )
    {
      *((_DWORD *)v8 + 3) = v9 | 0x20000;
      for ( k = *((_QWORD *)v8 + 40); k; k = *(_QWORD *)(k + 704) )
        _InterlockedOr((volatile signed __int32 *)(k + 528), 0x4000u);
      v12 = WaitOnPseudoEvent((PVOID *)v8 + 2, v2);
      if ( v12 != 128
        || (v12 = xxxPollAndWaitForSingleObject(*((PVOID *)v8 + 2), v30, v2),
            (v8 = CLockProcessByPid::GetProcessInfo((CLockProcessByPid *)v28)) != 0LL) )
      {
        *((_DWORD *)v8 + 3) &= ~0x20000u;
        for ( m = *((_QWORD *)v8 + 40); m; m = *(_QWORD *)(m + 704) )
          _InterlockedAnd((volatile signed __int32 *)(m + 528), 0xFFFFBFFF);
      }
    }
    else
    {
      UserSetLastError(1471);
      v12 = -1;
    }
    CLockProcessByPid::~CLockProcessByPid((CLockProcessByPid *)v28, v11);
    return v12;
  }
  CLockProcessByPid::~CLockProcessByPid((CLockProcessByPid *)v28, v6);
  return 0xFFFFFFFFLL;
}
