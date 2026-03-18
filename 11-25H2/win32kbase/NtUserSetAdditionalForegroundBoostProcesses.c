/*
 * XREFs of NtUserSetAdditionalForegroundBoostProcesses @ 0x1401741B0
 * Callers:
 *     <none>
 * Callees:
 *     GreDeleteFastMutex @ 0x14001E920 (GreDeleteFastMutex.c)
 *     ??0AtomicExecutionCheck@@QEAA@XZ @ 0x140039670 (--0AtomicExecutionCheck@@QEAA@XZ.c)
 *     UserSetLastError @ 0x14003F714 (UserSetLastError.c)
 *     UserSessionSwitchLeaveCritWithNonPaged @ 0x140047540 (UserSessionSwitchLeaveCritWithNonPaged.c)
 *     ?Win32AllocPoolWithQuotaZInitImpl@@YAPEAX_K0K@Z @ 0x140048E98 (-Win32AllocPoolWithQuotaZInitImpl@@YAPEAX_K0K@Z.c)
 *     _GetTopLevelWindow @ 0x140062E7C (_GetTopLevelWindow.c)
 *     ?Update@GroupedProcessForegroundBoost@@YA_NPEAUtagWND@@KPEAPEAU_EPROCESS@@@Z @ 0x14009C720 (-Update@GroupedProcessForegroundBoost@@YA_NPEAUtagWND@@KPEAPEAU_EPROCESS@@@Z.c)
 *     SetLastNtError @ 0x14009DA54 (SetLastNtError.c)
 *     ValidateHwndEx @ 0x1400BAF40 (ValidateHwndEx.c)
 *     ??0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z @ 0x14019B238 (--0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z.c)
 *     __security_check_cookie @ 0x140242EA0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140242EE0 (_guard_dispatch_icall.c)
 *     memset @ 0x140243000 (memset.c)
 */

__int64 __fastcall NtUserSetAdditionalForegroundBoostProcesses(__int64 a1, unsigned int a2, unsigned __int64 a3)
{
  __int64 v3; // rsi
  struct _EPROCESS **v5; // rdi
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 (*v8)(void); // rax
  int v9; // eax
  __int64 v11; // rdx
  __int64 v12; // r13
  unsigned int v13; // r14d
  __int64 v14; // rcx
  __int64 CurrentProcessWin32Process; // rax
  __int64 v16; // r8
  _BYTE **v17; // rcx
  struct _EPROCESS **v18; // r9
  __int64 v19; // rdi
  unsigned int i; // eax
  __int64 v21; // rax
  bool v22; // zf
  _QWORD *v23; // r15
  char *v24; // r12
  NTSTATUS v25; // eax
  unsigned __int8 v26; // al
  PVOID *v27; // r15
  PVOID Object; // [rsp+38h] [rbp-180h] BYREF
  _BYTE v29[8]; // [rsp+48h] [rbp-170h] BYREF
  __int64 v30; // [rsp+50h] [rbp-168h]
  __int64 v31; // [rsp+60h] [rbp-158h]
  _BYTE v32[24]; // [rsp+68h] [rbp-150h] BYREF
  _QWORD v33[32]; // [rsp+80h] [rbp-138h] BYREF

  v3 = a2;
  v5 = 0LL;
  v31 = 0LL;
  memset(v33, 0, sizeof(v33));
  v8 = *(__int64 (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v7, v6) + 48) + 5200LL);
  if ( v8 )
    v9 = v8();
  else
    v9 = 50;
  if ( v9 )
  {
    UserSetLastError(v9);
    return 0LL;
  }
  LODWORD(Object) = 0;
  EnterLeaveCritShared::EnterLeaveCritShared(v32, 0LL);
  v12 = ValidateHwndEx(a1, 1LL, 0);
  if ( v12 )
  {
    AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)v29);
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v14);
    v16 = CurrentProcessWin32Process;
    if ( CurrentProcessWin32Process )
      v16 = -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL) & CurrentProcessWin32Process;
    if ( *(_QWORD *)(*(_QWORD *)(v12 + 16) + 464LL) != v16
      || GetTopLevelWindow(v12) != (__int64 (__fastcall *)(__int64))v12
      || (unsigned int)v3 > 0x20 )
    {
      v13 = 0;
      UserSetLastError(87);
      v22 = v29[0] == 0;
LABEL_43:
      if ( !v22 )
        --*(_DWORD *)(v30 + 28);
      goto LABEL_45;
    }
    if ( !(_DWORD)v3 )
    {
LABEL_33:
      v26 = GroupedProcessForegroundBoost::Update(
              (GroupedProcessForegroundBoost *)v12,
              (struct tagWND *)(unsigned int)v3,
              v5,
              v18);
      v13 = v26;
      if ( !v26 && (_DWORD)v3 )
      {
        v27 = (PVOID *)v5;
        do
        {
          if ( *v27 )
            ObfDereferenceObject(*v27);
          ++v27;
          --v3;
        }
        while ( v3 );
      }
      goto LABEL_39;
    }
    v19 = 8 * v3;
    if ( 8 * v3 )
    {
      if ( ((unsigned __int8)a3 & (PsGetCurrentProcessWow64Process() == 0 ? 3 : 0)) != 0 )
        ExRaiseDatatypeMisalignment();
      v17 = (_BYTE **)MmUserProbeAddress;
      if ( v19 + a3 <= MmUserProbeAddress )
      {
        v17 = (_BYTE **)(v19 + a3);
        if ( v19 + a3 >= a3 )
          goto LABEL_21;
        v17 = (_BYTE **)MmUserProbeAddress;
      }
      LOBYTE(v17) = **v17;
    }
LABEL_21:
    for ( i = 0; i < (unsigned int)v3; ++i )
    {
      v17 = *(_BYTE ***)(a3 + 8LL * i);
      v33[i] = v17;
    }
    v21 = Win32AllocPoolWithQuotaZInitImpl((__int64)v17, 8 * v3, 0x67667355u);
    v5 = (struct _EPROCESS **)v21;
    v13 = 0;
    if ( !v21 )
    {
      UserSetLastError(8);
      v22 = v29[0] == 0;
      goto LABEL_43;
    }
    v23 = (_QWORD *)v21;
    v24 = (char *)v33 - v21;
    while ( 1 )
    {
      Object = 0LL;
      v25 = ObReferenceObjectByHandle(
              *(HANDLE *)((char *)v23 + (_QWORD)v24),
              0x200u,
              (POBJECT_TYPE)PsProcessType,
              1,
              &Object,
              0LL);
      *v23 = Object;
      if ( v25 < 0 )
        break;
      ++v13;
      ++v23;
      if ( v13 >= (unsigned int)v3 )
        goto LABEL_33;
    }
    while ( v13 )
      ObfDereferenceObject(v5[--v13]);
    UserSetLastError(87);
LABEL_39:
    if ( v5 )
      GreDeleteFastMutex((char *)v5);
    v22 = v29[0] == 0;
    goto LABEL_43;
  }
  v13 = 0;
LABEL_45:
  UserSessionSwitchLeaveCritWithNonPaged(0LL, v11);
  return (int)v13;
}
