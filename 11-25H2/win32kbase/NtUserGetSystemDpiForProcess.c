/*
 * XREFs of NtUserGetSystemDpiForProcess @ 0x140146FE0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x14003F714 (UserSetLastError.c)
 *     UserSessionSwitchLeaveCritWithNonPaged @ 0x140047540 (UserSessionSwitchLeaveCritWithNonPaged.c)
 *     W32GetCurrentWin32kSessionId @ 0x140049A34 (W32GetCurrentWin32kSessionId.c)
 *     ??0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z @ 0x14019B238 (--0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z.c)
 */

__int64 __fastcall NtUserGetSystemDpiForProcess(char *Handle)
{
  __int64 v2; // rcx
  PVOID v3; // rdi
  __int64 CurrentProcessWin32Process; // rax
  __int64 v5; // rdx
  __int64 v6; // r8
  unsigned int v7; // ebx
  NTSTATUS v9; // eax
  int ProcessSessionId; // ebx
  int v11; // ecx
  __int64 ProcessWin32Process; // rax
  PVOID Object; // [rsp+40h] [rbp+8h] BYREF

  EnterLeaveCritShared::EnterLeaveCritShared(&Object, 1LL);
  v3 = 0LL;
  if ( (unsigned __int64)(Handle - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
  {
    Object = 0LL;
    v9 = ObReferenceObjectByHandle(Handle, 0x1000u, (POBJECT_TYPE)PsProcessType, 1, &Object, 0LL);
    v3 = Object;
    if ( v9 < 0 )
    {
      UserSetLastError(87);
      v7 = 0;
      goto LABEL_8;
    }
    ProcessSessionId = PsGetProcessSessionIdEx(Object);
    if ( ProcessSessionId != (unsigned int)W32GetCurrentWin32kSessionId() )
    {
      v11 = 87;
      goto LABEL_16;
    }
    ProcessWin32Process = PsGetProcessWin32Process(v3);
    v6 = ProcessWin32Process;
    if ( ProcessWin32Process )
    {
      v5 = -(__int64)(*(_QWORD *)ProcessWin32Process != 0LL);
      v6 = v5 & ProcessWin32Process;
    }
  }
  else
  {
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v2);
    v6 = CurrentProcessWin32Process;
    if ( CurrentProcessWin32Process )
      v6 = -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL) & CurrentProcessWin32Process;
  }
  if ( v6 )
  {
    v7 = *(unsigned __int16 *)(v6 + 272);
    goto LABEL_6;
  }
  v11 = 5023;
LABEL_16:
  UserSetLastError(v11);
  v7 = 0;
LABEL_6:
  if ( v3 )
    ObfDereferenceObject(v3);
LABEL_8:
  UserSessionSwitchLeaveCritWithNonPaged(0LL, v5);
  return v7;
}
