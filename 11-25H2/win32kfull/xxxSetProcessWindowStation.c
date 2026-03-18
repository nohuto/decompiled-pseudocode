/*
 * XREFs of xxxSetProcessWindowStation @ 0x140207710
 * Callers:
 *     EditionSetProcessWindowStationEntryPoint @ 0x140207640 (EditionSetProcessWindowStationEntryPoint.c)
 * Callees:
 *     UserSetLastError @ 0x14001A2B4 (UserSetLastError.c)
 *     ??1?$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ @ 0x14001BAA0 (--1-$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036850 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ??0?$Win32HMThreadLockBase@UtagWND@@$0A@$0A@@@QEAA@PEAUtagWND@@@Z @ 0x1400461EC (--0-$Win32HMThreadLockBase@UtagWND@@$0A@$0A@@@QEAA@PEAUtagWND@@@Z.c)
 *     W32GetCurrentWin32kSessionId @ 0x1400D8E2C (W32GetCurrentWin32kSessionId.c)
 *     SetLastNtError @ 0x140113F80 (SetLastNtError.c)
 *     PopAndFreeAlwaysW32ThreadLock @ 0x140148EB4 (PopAndFreeAlwaysW32ThreadLock.c)
 *     ?xxxDisownClipboard@@YAXPEAUtagWND@@@Z @ 0x14026CA20 (-xxxDisownClipboard@@YAXPEAUtagWND@@@Z.c)
 */

__int64 __fastcall xxxSetProcessWindowStation(HANDLE SourceHandle, KPROCESSOR_MODE a2, int a3)
{
  struct _KTHREAD *CurrentThread; // rbx
  __int64 CurrentProcess; // rsi
  PEPROCESS ThreadProcess; // rax
  __int64 ProcessWin32Process; // rax
  __int64 v10; // rbx
  int v11; // eax
  __int64 v12; // rdx
  __int64 v13; // rcx
  _DWORD *v14; // r14
  unsigned int v15; // edi
  struct tagTHREADINFO *v17; // rax
  __int64 v18; // rdx
  unsigned int v19; // ebx
  __int64 v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // rcx
  __int64 v25; // rax
  __int64 v26; // rcx
  PVOID *v27; // rdi
  PVOID *v28; // rdx
  _QWORD *v29; // rcx
  __int64 v30; // rcx
  __int64 v31; // rdx
  void *ProcessWin32WindowStation; // rdi
  struct _OBJECT_HANDLE_INFORMATION HandleInformation; // [rsp+40h] [rbp-40h] BYREF
  PVOID Object; // [rsp+48h] [rbp-38h] BYREF
  void *TargetHandle; // [rsp+50h] [rbp-30h] BYREF
  ULONG_PTR BugCheckParameter3[2]; // [rsp+58h] [rbp-28h] BYREF
  _QWORD v37[3]; // [rsp+68h] [rbp-18h] BYREF
  PVOID v38; // [rsp+C8h] [rbp+48h] BYREF

  CurrentThread = KeGetCurrentThread();
  CurrentProcess = PsGetCurrentProcess(SourceHandle);
  TargetHandle = 0LL;
  HandleInformation = 0LL;
  ThreadProcess = PsGetThreadProcess(CurrentThread);
  ProcessWin32Process = PsGetProcessWin32Process(ThreadProcess);
  v10 = ProcessWin32Process;
  if ( ProcessWin32Process )
    v10 = -(__int64)(*(_QWORD *)ProcessWin32Process != 0LL) & ProcessWin32Process;
  Object = 0LL;
  v11 = ObReferenceObjectByHandle(SourceHandle, 0, ExWindowStationObjectType, a2, &Object, &HandleInformation);
  v14 = Object;
  v15 = v11;
  if ( v11 < 0 )
  {
    SetLastNtError(v11);
    return v15;
  }
  v17 = PtiCurrent(v13, v12);
  v37[0] = *((_QWORD *)v17 + 48);
  *((_QWORD *)v17 + 48) = v37;
  v37[2] = UserDereferenceObject;
  v37[1] = v14;
  if ( *v14 != (unsigned int)W32GetCurrentWin32kSessionId() )
  {
    UserSetLastError(87);
    v19 = -1073741811;
LABEL_32:
    PopAndFreeAlwaysW32ThreadLock((__int64)v37, v18);
    return v19;
  }
  if ( v10 )
  {
    v20 = *(_QWORD *)(v10 + 648);
    if ( v20 )
    {
      if ( (_DWORD *)v20 != v14 )
      {
        v21 = *(_QWORD *)(v20 + 112);
        if ( v21 && *(_QWORD *)(*(_QWORD *)(v21 + 16) + 464LL) == v10 )
        {
          if ( a3 )
          {
            HMAssignmentUnlock(v20 + 112);
          }
          else
          {
            Win32HMThreadLockBase<tagWND,0,0>::Win32HMThreadLockBase<tagWND,0,0>(BugCheckParameter3, v21);
            xxxDisownClipboard(*(struct tagWND **)(*(_QWORD *)(v10 + 648) + 112LL));
            Win32HMThreadLockAlways<tagWND>::~Win32HMThreadLockAlways<tagWND>((ULONG_PTR)BugCheckParameter3, v22);
          }
        }
        v23 = *(_QWORD *)(v10 + 648) + 96LL;
        if ( *(_QWORD *)v23 && *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v23 + 16LL) + 464LL) == v10 )
        {
          HMAssignmentUnlock(v23);
          *(_QWORD *)(*(_QWORD *)(v10 + 648) + 80LL) = 0LL;
        }
        v24 = *(_QWORD *)(v10 + 648);
        v25 = *(_QWORD *)(v24 + 80);
        if ( v25 && *(_QWORD *)(v25 + 464) == v10 )
          *(_QWORD *)(v24 + 80) = 0LL;
        v26 = *(_QWORD *)(v10 + 648) + 104LL;
        if ( *(_QWORD *)v26 && *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v26 + 16LL) + 464LL) == v10 )
          HMAssignmentUnlock(v26);
        v27 = (PVOID *)(*(_QWORD *)(v10 + 648) + 152LL);
        while ( 1 )
        {
          v29 = *v27;
          if ( !*v27 )
            break;
          v28 = (PVOID *)(v29 + 30);
          if ( *(_QWORD *)(v29[2] + 464LL) == v10 )
          {
            v38 = *v27;
            *v27 = *v28;
            *v28 = 0LL;
            *((_DWORD *)v38 + 95) &= ~0x800000u;
            HMAssignmentUnlock(&v38);
          }
          else
          {
            v27 = (PVOID *)(v29 + 30);
          }
        }
      }
    }
  }
  if ( *(HANDLE *)(v10 + 656) != SourceHandle )
  {
    if ( !(unsigned int)SetHandleFlag(SourceHandle, 1LL, 1LL) )
    {
      v19 = -1073741801;
      goto LABEL_32;
    }
    v30 = *(_QWORD *)(v10 + 656);
    if ( v30 )
      SetHandleFlag(v30, 1LL, 0LL);
  }
  LockObjectAssignment(v10 + 648, v14);
  PopAndFreeAlwaysW32ThreadLock((__int64)v37, v31);
  *(_QWORD *)(v10 + 656) = SourceHandle;
  ProcessWin32WindowStation = (void *)PsGetProcessWin32WindowStation(CurrentProcess);
  if ( ProcessWin32WindowStation )
  {
    v38 = 0LL;
    if ( ObReferenceObjectByHandle(ProcessWin32WindowStation, 0, ExWindowStationObjectType, a2, &v38, 0LL) < 0 )
    {
      PsSetProcessWindowStation(CurrentProcess, 0LL);
    }
    else
    {
      if ( v14 != v38 )
      {
        ObCloseHandle(ProcessWin32WindowStation, 1);
        PsSetProcessWindowStation(CurrentProcess, 0LL);
      }
      ObfDereferenceObject(v38);
    }
  }
  if ( !PsGetProcessWin32WindowStation(CurrentProcess)
    && ZwDuplicateObject(
         (HANDLE)0xFFFFFFFFFFFFFFFFLL,
         SourceHandle,
         (HANDLE)0xFFFFFFFFFFFFFFFFLL,
         &TargetHandle,
         0,
         0,
         2u) >= 0 )
  {
    PsSetProcessWindowStation(CurrentProcess, TargetHandle);
  }
  *(_DWORD *)(v10 + 664) = HandleInformation.GrantedAccess;
  if ( (v14[16] & 4) != 0 )
    *(_DWORD *)(v10 + 12) &= ~0x40000u;
  else
    *(_DWORD *)(v10 + 12) |= 0x40000u;
  if ( RtlAreAllAccessesGranted(HandleInformation.GrantedAccess, 0x200u) )
    *(_DWORD *)(v10 + 12) |= 0x10u;
  else
    *(_DWORD *)(v10 + 12) &= ~0x10u;
  return 0LL;
}
