/*
 * XREFs of NtUserSetAdditionalForegroundBoostProcesses @ 0x1400DD8E0
 * Callers:
 *     <none>
 * Callees:
 *     UserSessionSwitchLeaveCritWithNonPaged @ 0x14003D530 (UserSessionSwitchLeaveCritWithNonPaged.c)
 *     ??0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z @ 0x14003D7B0 (--0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z.c)
 *     GreDeleteFastMutex @ 0x140042F30 (GreDeleteFastMutex.c)
 *     ?Win32AllocPoolWithQuotaZInitImpl@@YAPEAX_K0K@Z @ 0x140044FF0 (-Win32AllocPoolWithQuotaZInitImpl@@YAPEAX_K0K@Z.c)
 *     ValidateHwndEx @ 0x14006E370 (ValidateHwndEx.c)
 *     UserSetLastError @ 0x140087A14 (UserSetLastError.c)
 *     SetLastNtError @ 0x140087ACC (SetLastNtError.c)
 *     ??0AtomicExecutionCheck@@QEAA@XZ @ 0x1400D0B3C (--0AtomicExecutionCheck@@QEAA@XZ.c)
 *     _GetTopLevelWindow @ 0x1400DD720 (_GetTopLevelWindow.c)
 *     ?Update@GroupedProcessForegroundBoost@@YA_NPEAUtagWND@@KPEAPEAU_EPROCESS@@@Z @ 0x1400DDD10 (-Update@GroupedProcessForegroundBoost@@YA_NPEAUtagWND@@KPEAPEAU_EPROCESS@@@Z.c)
 *     __security_check_cookie @ 0x14024BC30 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 *     memset @ 0x14024BD80 (memset.c)
 */

_BOOL8 __fastcall NtUserSetAdditionalForegroundBoostProcesses(__int64 a1, unsigned int a2, volatile void *a3)
{
  __int64 v3; // r15
  struct _EPROCESS **v5; // r14
  __int64 v6; // rcx
  __int64 (*v7)(void); // rax
  int v8; // eax
  __int64 v9; // rdx
  void *v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 (__fastcall *v13)(__int64); // r13
  __int64 v14; // rcx
  __int64 CurrentProcessWin32Process; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  struct _EPROCESS **v18; // r9
  __int64 CurrentProcessWow64Process; // rax
  void *v20; // rcx
  __int64 i; // r8
  __int64 j; // rsi
  NTSTATUS v23; // eax
  bool v24; // al
  BOOL v25; // ebx
  bool v26; // zf
  void **v28; // rsi
  int v29; // ecx
  volatile void *Address; // [rsp+30h] [rbp-178h] BYREF
  int v31; // [rsp+38h] [rbp-170h]
  _DWORD Buffer[3]; // [rsp+4Ch] [rbp-15Ch] BYREF
  __int64 v33; // [rsp+58h] [rbp-150h]
  HANDLE Handle[32]; // [rsp+70h] [rbp-138h] BYREF

  v3 = a2;
  Address = a3;
  v5 = 0LL;
  memset(Handle, 0, sizeof(Handle));
  v7 = *(__int64 (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v6) + 48) + 4760LL);
  if ( v7 )
    v8 = v7();
  else
    v8 = 50;
  if ( !v8 )
  {
    Buffer[0] = 0;
    EnterLeaveCritShared::EnterLeaveCritShared(&Buffer[1]);
    v13 = (__int64 (__fastcall *)(__int64))ValidateHwndEx(a1, 1, 0);
    if ( !v13 )
    {
      v25 = 0;
LABEL_25:
      UserSessionSwitchLeaveCritWithNonPaged((__int64)v10, v9, v11, v12);
      return v25;
    }
    AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)&Buffer[1]);
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v14);
    if ( CurrentProcessWin32Process )
      CurrentProcessWin32Process &= -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL);
    if ( *(_QWORD *)(*((_QWORD *)v13 + 2) + 456LL) == CurrentProcessWin32Process
      && GetTopLevelWindow((__int64)v13) == v13
      && (unsigned int)v3 <= 0x20 )
    {
      if ( !(_DWORD)v3 )
      {
LABEL_19:
        v24 = GroupedProcessForegroundBoost::Update(
                (GroupedProcessForegroundBoost *)v13,
                (struct tagWND *)(unsigned int)v3,
                v5,
                v18);
        v25 = v24;
        if ( !v24 && (_DWORD)v3 )
        {
          v28 = (void **)v5;
          do
          {
            v10 = *v28;
            if ( *v28 )
              ObfDereferenceObject(v10);
            ++v28;
            --v3;
          }
          while ( v3 );
        }
LABEL_20:
        if ( v5 )
          GreDeleteFastMutex((char *)v5, v9, v11, v12);
        v26 = LOBYTE(Buffer[1]) == 0;
        goto LABEL_23;
      }
      CurrentProcessWow64Process = PsGetCurrentProcessWow64Process(v17, v16);
      ProbeForRead(Address, 8 * v3, CurrentProcessWow64Process != 0 ? 1 : 4);
      for ( i = 0LL; ; i = (unsigned int)(i + 1) )
      {
        v31 = i;
        if ( (unsigned int)i >= (unsigned int)v3 )
          break;
        v20 = (void *)*((_QWORD *)Address + i);
        Handle[i] = v20;
      }
      v5 = (struct _EPROCESS **)Win32AllocPoolWithQuotaZInitImpl((int)v20, 8 * v3, 0x67667355u);
      if ( v5 )
      {
        for ( j = 0LL; (unsigned int)j < (unsigned int)v3; j = (unsigned int)(j + 1) )
        {
          Address = 0LL;
          v23 = ObReferenceObjectByHandle(Handle[j], 0x200u, (POBJECT_TYPE)PsProcessType, 1, (PVOID *)&Address, 0LL);
          v5[j] = (struct _EPROCESS *)Address;
          if ( v23 < 0 )
          {
            while ( (_DWORD)j )
            {
              LODWORD(j) = j - 1;
              ObfDereferenceObject(v5[(unsigned int)j]);
            }
            v25 = 0;
            UserSetLastError(87);
            goto LABEL_20;
          }
        }
        goto LABEL_19;
      }
      v29 = 8;
    }
    else
    {
      v29 = 87;
    }
    v25 = 0;
    UserSetLastError(v29);
    v26 = LOBYTE(Buffer[1]) == 0;
LABEL_23:
    if ( !v26 )
      --*(_DWORD *)(v33 + 28);
    goto LABEL_25;
  }
  UserSetLastError(v8);
  return 0LL;
}
