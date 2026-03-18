/*
 * XREFs of NtUserGetSystemDpiForProcess @ 0x140178C60
 * Callers:
 *     <none>
 * Callees:
 *     UserSessionSwitchLeaveCritWithNonPaged @ 0x14003D530 (UserSessionSwitchLeaveCritWithNonPaged.c)
 *     EnterSharedCrit @ 0x14003D800 (EnterSharedCrit.c)
 *     W32GetCurrentWin32kSessionId @ 0x1400584BC (W32GetCurrentWin32kSessionId.c)
 *     UserSetLastError @ 0x140087A14 (UserSetLastError.c)
 */

__int64 __fastcall NtUserGetSystemDpiForProcess(char *Handle, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rcx
  PVOID v6; // rdi
  NTSTATUS v7; // eax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  unsigned int v12; // ebx
  __int64 CurrentProcessWin32Process; // rax
  int ProcessSessionId; // ebx
  __int64 v16; // rcx
  int v17; // ecx
  __int64 ProcessWin32Process; // rax
  PVOID Object; // [rsp+40h] [rbp+8h] BYREF

  EnterSharedCrit(0LL, 1LL, a3, a4);
  v6 = 0LL;
  if ( (unsigned __int64)(Handle - 1) > 0xFFFFFFFFFFFFFFFDuLL )
  {
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v5);
    v10 = CurrentProcessWin32Process;
    if ( CurrentProcessWin32Process )
    {
      v9 = -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL);
      v10 = v9 & CurrentProcessWin32Process;
    }
  }
  else
  {
    Object = 0LL;
    v7 = ObReferenceObjectByHandle(Handle, 0x1000u, (POBJECT_TYPE)PsProcessType, 1, &Object, 0LL);
    v6 = Object;
    if ( v7 < 0 )
    {
      UserSetLastError(87);
      v12 = 0;
      goto LABEL_4;
    }
    ProcessSessionId = PsGetProcessSessionIdEx(Object);
    if ( ProcessSessionId != (unsigned int)W32GetCurrentWin32kSessionId(v16) )
    {
      v17 = 87;
      goto LABEL_16;
    }
    ProcessWin32Process = PsGetProcessWin32Process(v6);
    v10 = ProcessWin32Process;
    if ( ProcessWin32Process )
    {
      v9 = -*(_QWORD *)ProcessWin32Process;
      v8 = -(__int64)(*(_QWORD *)ProcessWin32Process != 0LL);
      v10 = v8 & ProcessWin32Process;
    }
  }
  if ( v10 )
  {
    v12 = *(unsigned __int16 *)(v10 + 272);
    goto LABEL_9;
  }
  v17 = 5023;
LABEL_16:
  UserSetLastError(v17);
  v12 = 0;
LABEL_9:
  if ( v6 )
    ObfDereferenceObject(v6);
LABEL_4:
  UserSessionSwitchLeaveCritWithNonPaged(v9, v8, v10, v11);
  return v12;
}
