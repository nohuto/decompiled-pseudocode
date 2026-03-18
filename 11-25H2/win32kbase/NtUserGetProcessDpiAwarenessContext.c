/*
 * XREFs of NtUserGetProcessDpiAwarenessContext @ 0x140105920
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x14003F714 (UserSetLastError.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x140042BB0 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     UserSessionSwitchLeaveCritWithNonPaged @ 0x140047540 (UserSessionSwitchLeaveCritWithNonPaged.c)
 *     W32GetCurrentWin32kSessionId @ 0x140049A34 (W32GetCurrentWin32kSessionId.c)
 *     ??0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z @ 0x14019B238 (--0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z.c)
 */

__int64 __fastcall NtUserGetProcessDpiAwarenessContext(char *Handle)
{
  unsigned int CurrentThreadDpiAwarenessContext; // edi
  __int64 v3; // rcx
  PVOID v4; // rsi
  __int64 CurrentProcessWin32Process; // rax
  __int64 v6; // rcx
  __int64 v7; // rbx
  __int64 v8; // rax
  __int64 v9; // rdx
  NTSTATUS v11; // eax
  int ProcessSessionId; // ebx
  PVOID Object; // [rsp+40h] [rbp+8h] BYREF

  CurrentThreadDpiAwarenessContext = 0;
  EnterLeaveCritShared::EnterLeaveCritShared(&Object, 1LL);
  v4 = 0LL;
  if ( (unsigned __int64)(Handle - 1) > 0xFFFFFFFFFFFFFFFDuLL )
  {
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v3);
LABEL_3:
    v7 = CurrentProcessWin32Process;
    if ( CurrentProcessWin32Process )
    {
      v6 = -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL);
      v7 = v6 & CurrentProcessWin32Process;
    }
    v8 = PsGetCurrentProcessWin32Process(v6);
    v9 = v8;
    if ( v8 )
      v9 = -(__int64)(*(_QWORD *)v8 != 0LL) & v8;
    if ( v7 == v9 )
    {
      CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext();
    }
    else if ( v7 )
    {
      CurrentThreadDpiAwarenessContext = *(_DWORD *)(v7 + 268);
      if ( !CurrentThreadDpiAwarenessContext )
        CurrentThreadDpiAwarenessContext = 24592;
    }
    goto LABEL_9;
  }
  Object = 0LL;
  v11 = ObReferenceObjectByHandle(Handle, 0x1000u, (POBJECT_TYPE)PsProcessType, 1, &Object, 0LL);
  v4 = Object;
  if ( v11 < 0 )
  {
    UserSetLastError(87);
    goto LABEL_11;
  }
  ProcessSessionId = PsGetProcessSessionIdEx(Object);
  if ( ProcessSessionId == (unsigned int)W32GetCurrentWin32kSessionId() )
  {
    CurrentProcessWin32Process = PsGetProcessWin32Process(v4);
    goto LABEL_3;
  }
  UserSetLastError(87);
LABEL_9:
  if ( v4 )
    ObfDereferenceObject(v4);
LABEL_11:
  UserSessionSwitchLeaveCritWithNonPaged(0LL, v9);
  return CurrentThreadDpiAwarenessContext;
}
