/*
 * XREFs of NtUserGetProcessDpiAwarenessContext @ 0x1400865B0
 * Callers:
 *     <none>
 * Callees:
 *     UserSessionSwitchLeaveCritWithNonPaged @ 0x14003D530 (UserSessionSwitchLeaveCritWithNonPaged.c)
 *     EnterSharedCrit @ 0x14003D800 (EnterSharedCrit.c)
 *     W32GetCurrentWin32kSessionId @ 0x1400584BC (W32GetCurrentWin32kSessionId.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x140085350 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     UserSetLastError @ 0x140087A14 (UserSetLastError.c)
 */

__int64 __fastcall NtUserGetProcessDpiAwarenessContext(char *Handle, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int CurrentThreadDpiAwarenessContext; // edi
  __int64 v6; // rcx
  PVOID v7; // rsi
  __int64 CurrentProcessWin32Process; // rax
  __int64 v9; // rcx
  __int64 v10; // rbx
  __int64 v11; // rax
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rdx
  NTSTATUS v17; // eax
  int ProcessSessionId; // ebx
  __int64 v19; // rcx
  PVOID Object; // [rsp+40h] [rbp+8h] BYREF

  CurrentThreadDpiAwarenessContext = 0;
  EnterSharedCrit(0LL, 1LL, a3, a4);
  v7 = 0LL;
  if ( (unsigned __int64)(Handle - 1) > 0xFFFFFFFFFFFFFFFDuLL )
  {
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v6);
LABEL_3:
    v10 = CurrentProcessWin32Process;
    if ( CurrentProcessWin32Process )
    {
      v9 = -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL);
      v10 = v9 & CurrentProcessWin32Process;
    }
    v11 = PsGetCurrentProcessWin32Process(v9);
    v15 = v11;
    if ( v11 )
    {
      v12 = -(__int64)(*(_QWORD *)v11 != 0LL);
      v15 = v12 & v11;
    }
    if ( v10 == v15 )
    {
      CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext(v12, v15);
    }
    else if ( v10 )
    {
      CurrentThreadDpiAwarenessContext = *(_DWORD *)(v10 + 268);
      if ( !CurrentThreadDpiAwarenessContext )
        CurrentThreadDpiAwarenessContext = 24592;
    }
    goto LABEL_9;
  }
  Object = 0LL;
  v17 = ObReferenceObjectByHandle(Handle, 0x1000u, (POBJECT_TYPE)PsProcessType, 1, &Object, 0LL);
  v7 = Object;
  if ( v17 < 0 )
  {
    UserSetLastError(87LL);
    goto LABEL_11;
  }
  ProcessSessionId = PsGetProcessSessionIdEx(Object);
  if ( ProcessSessionId == (unsigned int)W32GetCurrentWin32kSessionId(v19) )
  {
    CurrentProcessWin32Process = PsGetProcessWin32Process(v7);
    goto LABEL_3;
  }
  UserSetLastError(87LL);
LABEL_9:
  if ( v7 )
    ObfDereferenceObject(v7);
LABEL_11:
  UserSessionSwitchLeaveCritWithNonPaged(v12, v15, v13, v14);
  return CurrentThreadDpiAwarenessContext;
}
