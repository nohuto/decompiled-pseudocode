/*
 * XREFs of NtUserQueryInputContext @ 0x1401E5180
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x14001A2B4 (UserSetLastError.c)
 *     HMValidateHandleWithDescriptor @ 0x14007AE48 (HMValidateHandleWithDescriptor.c)
 *     ??0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z @ 0x14028C73C (--0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z.c)
 */

HANDLE __fastcall NtUserQueryInputContext(__int64 a1, int a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // rax
  __int64 v8; // rcx
  HANDLE v9; // rbx
  int v10; // edi
  HANDLE ThreadProcessId; // rax
  int v13; // edi
  HANDLE *v14; // rax
  char v15; // [rsp+40h] [rbp+18h] BYREF

  EnterLeaveCritShared::EnterLeaveCritShared(&v15, 1LL);
  if ( (**(_DWORD **)(W32GetUserSessionState(v5, v4) + 19872) & 4) == 0 )
  {
    UserSetLastError(120);
    v9 = 0LL;
    goto LABEL_7;
  }
  LOBYTE(v6) = 17;
  v7 = HMValidateHandleWithDescriptor(a1, v6);
  v9 = 0LL;
  if ( v7 )
  {
    v8 = *(_QWORD *)(v7 + 16);
    if ( !a2 )
    {
      ThreadProcessId = PsGetThreadProcessId(*(PETHREAD *)v8);
      goto LABEL_6;
    }
    v10 = a2 - 1;
    if ( !v10 )
    {
      ThreadProcessId = PsGetThreadId(*(PETHREAD *)v8);
LABEL_6:
      v9 = ThreadProcessId;
      goto LABEL_7;
    }
    v13 = v10 - 1;
    if ( v13 )
    {
      if ( v13 != 1 )
      {
        UserSetLastError(87);
        goto LABEL_7;
      }
      v14 = *(HANDLE **)(v8 + 832);
    }
    else
    {
      v14 = *(HANDLE **)(v8 + 824);
    }
    if ( v14 )
      v9 = *v14;
  }
LABEL_7:
  UserSessionSwitchLeaveCrit(v8);
  return v9;
}
