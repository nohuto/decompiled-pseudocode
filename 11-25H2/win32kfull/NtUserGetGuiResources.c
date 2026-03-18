/*
 * XREFs of NtUserGetGuiResources @ 0x1400D8C50
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x14001A2B4 (UserSetLastError.c)
 *     W32GetCurrentWin32kSessionId @ 0x1400D8E2C (W32GetCurrentWin32kSessionId.c)
 *     ??0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z @ 0x14028C73C (--0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z.c)
 */

__int64 __fastcall NtUserGetGuiResources(HANDLE Handle, unsigned int a2)
{
  PVOID v4; // rbp
  __int64 v5; // rdx
  __int64 v6; // rcx
  unsigned int v7; // esi
  NTSTATUS v8; // eax
  int ProcessSessionId; // ebx
  __int64 ProcessWin32Process; // rax
  _DWORD *v11; // r8
  __int64 CurrentProcessWin32Process; // rax
  unsigned int v14; // edi
  unsigned int v15; // edi
  unsigned int v16; // edi
  unsigned int HandleCount; // eax
  unsigned int v18; // edi
  PVOID Object; // [rsp+50h] [rbp+18h] BYREF

  v4 = 0LL;
  EnterLeaveCritShared::EnterLeaveCritShared(&Object, 1LL);
  v7 = 0;
  if ( a2 > 4 )
    goto LABEL_14;
  if ( Handle != (HANDLE)-2LL )
  {
    if ( Handle == (HANDLE)-1LL )
    {
      CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v6);
      v11 = (_DWORD *)CurrentProcessWin32Process;
      if ( CurrentProcessWin32Process )
      {
        v6 = -*(_QWORD *)CurrentProcessWin32Process;
        v11 = (_DWORD *)(-(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL) & CurrentProcessWin32Process);
      }
      goto LABEL_8;
    }
    Object = 0LL;
    v8 = ObReferenceObjectByHandle(Handle, 0x1000u, (POBJECT_TYPE)PsProcessType, 1, &Object, 0LL);
    v4 = Object;
    if ( v8 >= 0 )
    {
      ProcessSessionId = PsGetProcessSessionIdEx(Object);
      if ( ProcessSessionId != (unsigned int)W32GetCurrentWin32kSessionId() )
        goto LABEL_17;
      ProcessWin32Process = PsGetProcessWin32Process(v4);
      v11 = (_DWORD *)ProcessWin32Process;
      if ( ProcessWin32Process )
      {
        v6 = -(__int64)(*(_QWORD *)ProcessWin32Process != 0LL);
        v11 = (_DWORD *)(v6 & ProcessWin32Process);
      }
LABEL_8:
      if ( v11 )
      {
        if ( a2 )
        {
          v14 = a2 - 1;
          if ( v14 )
          {
            v18 = v14 - 1;
            if ( v18 )
            {
              if ( v18 == 2 )
                v7 = v11[18];
            }
            else
            {
              v7 = v11[16];
            }
          }
          else
          {
            v7 = v11[17];
          }
        }
        else
        {
          v7 = v11[15];
        }
        goto LABEL_11;
      }
LABEL_17:
      UserSetLastError(87);
LABEL_11:
      if ( v4 )
        ObfDereferenceObject(v4);
      goto LABEL_13;
    }
LABEL_14:
    UserSetLastError(87);
    goto LABEL_13;
  }
  if ( !a2 )
  {
    HandleCount = GreGetHandleCount();
LABEL_26:
    v7 = HandleCount;
    goto LABEL_13;
  }
  v15 = a2 - 1;
  if ( !v15 )
  {
    v7 = *(_DWORD *)(W32GetUserSessionState(v6, v5) + 19820);
    goto LABEL_13;
  }
  v16 = v15 - 1;
  if ( !v16 )
  {
    HandleCount = GreGetPeakHandleCount();
    goto LABEL_26;
  }
  if ( v16 == 2 )
    v7 = *(_DWORD *)(W32GetUserSessionState(v6, v5) + 19824);
LABEL_13:
  UserSessionSwitchLeaveCrit(v6);
  return v7;
}
