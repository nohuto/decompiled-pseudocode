/*
 * XREFs of _RegisterUserApiHook @ 0x140286DBC
 * Callers:
 *     NtUserRegisterUserApiHook @ 0x140216AD0 (NtUserRegisterUserApiHook.c)
 * Callees:
 *     UserSetLastError @ 0x14001A2B4 (UserSetLastError.c)
 *     ?IsInsideUserApiHook@@YAHXZ @ 0x140022DA4 (-IsInsideUserApiHook@@YAHXZ.c)
 *     GetHmodTableIndex @ 0x1400C8B54 (GetHmodTableIndex.c)
 *     AddHmodDependency @ 0x1400C8D80 (AddHmodDependency.c)
 *     RemoveHmodDependency @ 0x1400C8E18 (RemoveHmodDependency.c)
 *     ?RtlStringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x140131080 (-RtlStringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14026E830 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     Feature_IsPrivilegedEx__private_IsEnabledDeviceUsageNoInline @ 0x140283680 (Feature_IsPrivilegedEx__private_IsEnabledDeviceUsageNoInline.c)
 */

__int64 __fastcall RegisterUserApiHook(__int64 a1, __int64 a2, ULONG64 a3, ULONG64 a4)
{
  ULONG64 v6; // rsi
  ULONG64 v7; // rdi
  __int64 v8; // rcx
  __int64 CurrentProcessWin32Process; // rax
  __int64 v10; // r8
  __int64 v11; // rax
  __int64 v12; // r8
  bool v13; // zf
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rax
  __int64 v17; // r8
  __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // r8
  __int64 v21; // rcx
  __int64 UserSessionState; // rax
  __int64 v23; // rbx
  int v24; // ecx
  ULONG64 v25; // r10
  ULONG64 v26; // rdx
  int v27; // ecx
  char *v28; // r8
  ULONG64 v29; // rdx
  __int64 v30; // r11
  int v31; // ecx
  unsigned __int64 v32; // rdi
  ULONG64 v33; // rdx
  int v34; // ecx
  char *v35; // r8
  ULONG64 v36; // r9
  __int64 v37; // r10
  int HmodTableIndex; // eax
  int v39; // ecx
  int v40; // eax
  __int64 v41; // rcx
  __int64 v42; // rax
  __int64 v43; // rdx
  __int64 v44; // rcx

  v6 = a2;
  v7 = a1;
  if ( IsInsideUserApiHook(a1, a2) || (unsigned __int8)IsRestricted(KeGetCurrentThread()) )
    goto LABEL_74;
  if ( (unsigned int)Feature_IsPrivilegedEx__private_IsEnabledDeviceUsageNoInline() )
  {
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v8);
    v10 = CurrentProcessWin32Process;
    if ( CurrentProcessWin32Process )
      v10 = -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL) & CurrentProcessWin32Process;
    if ( *(_DWORD *)(v10 + 764) != luidSystem[0] )
      goto LABEL_74;
    v11 = PsGetCurrentProcessWin32Process(luidSystem[0]);
    v12 = v11;
    if ( v11 )
      v12 = -(__int64)(*(_QWORD *)v11 != 0LL) & v11;
    if ( *(_DWORD *)(v12 + 768) != luidSystem[1] )
      goto LABEL_74;
    v13 = (unsigned __int8)HasTcbPrivilege() == 0;
  }
  else
  {
    v16 = PsGetCurrentProcessWin32Process(v8);
    v17 = v16;
    if ( v16 )
      v17 = -(__int64)(*(_QWORD *)v16 != 0LL) & v16;
    if ( *(_DWORD *)(v17 + 764) != luidSystem[0] )
      goto LABEL_74;
    v18 = PsGetCurrentProcessWin32Process(luidSystem[0]);
    v20 = v18;
    if ( v18 )
    {
      v19 = -(__int64)(*(_QWORD *)v18 != 0LL);
      v20 = v19 & v18;
    }
    v21 = luidSystem[1];
    if ( *(_DWORD *)(v20 + 768) != (_DWORD)v21 )
      goto LABEL_74;
    UserSessionState = W32GetUserSessionState(v21, v19);
    v13 = (unsigned int)IsPrivileged(UserSessionState + 42544) == 0;
  }
  if ( v13 )
  {
LABEL_74:
    v39 = 5;
    goto LABEL_75;
  }
  v23 = W32GetUserSessionState(v15, v14);
  if ( v7 >= MmUserProbeAddress )
    v7 = MmUserProbeAddress;
  v24 = *(_DWORD *)v7;
  v25 = *(_QWORD *)(v7 + 8);
  if ( (v25 & 1) != 0 )
    ExRaiseDatatypeMisalignment();
  v26 = v25 + (unsigned __int16)v24 + 2LL;
  if ( v26 <= v25 || v26 >= MmUserProbeAddress )
    ExRaiseAccessViolation();
  if ( (unsigned __int16)v24 > (unsigned __int16)HIWORD(*(_DWORD *)v7) )
  {
    if ( (v24 & 1) == 0 )
      goto LABEL_72;
    goto LABEL_71;
  }
  if ( (v24 & 1) != 0 )
  {
LABEL_71:
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 2692);
LABEL_72:
    ExRaiseAccessViolation();
  }
  if ( v6 >= MmUserProbeAddress )
    v6 = MmUserProbeAddress;
  v27 = *(_DWORD *)v6;
  v28 = *(char **)(v6 + 8);
  if ( ((unsigned __int8)v28 & 1) != 0 )
    ExRaiseDatatypeMisalignment();
  v29 = (ULONG64)&v28[(unsigned __int16)v27 + 2];
  if ( v29 <= (unsigned __int64)v28 || v29 >= MmUserProbeAddress )
    ExRaiseAccessViolation();
  if ( (unsigned __int16)v27 > (unsigned __int16)HIWORD(*(_DWORD *)v6) )
  {
    if ( (v27 & 1) == 0 )
      goto LABEL_68;
    goto LABEL_67;
  }
  if ( (v27 & 1) != 0 )
  {
LABEL_67:
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 2695);
LABEL_68:
    ExRaiseAccessViolation();
  }
  RtlStringCchCopyW((char *)(v23 + 64220), 260LL, v28);
  if ( a3 >= MmUserProbeAddress )
    a3 = MmUserProbeAddress;
  v31 = *(_DWORD *)a3;
  v32 = *(_QWORD *)(a3 + 8);
  if ( (v32 & 1) != 0 )
    ExRaiseDatatypeMisalignment();
  v33 = v32 + (unsigned __int16)v31 + 2LL;
  if ( v33 <= v32 || v33 >= MmUserProbeAddress )
    ExRaiseAccessViolation();
  if ( (unsigned __int16)v31 > (unsigned __int16)HIWORD(*(_DWORD *)a3) )
  {
    if ( (v31 & 1) == 0 )
      goto LABEL_64;
    goto LABEL_63;
  }
  if ( (v31 & 1) != 0 )
  {
LABEL_63:
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 2701);
LABEL_64:
    ExRaiseAccessViolation();
  }
  if ( a4 >= MmUserProbeAddress )
    a4 = MmUserProbeAddress;
  v34 = *(_DWORD *)a4;
  v35 = *(char **)(a4 + 8);
  if ( ((unsigned __int8)v35 & 1) != 0 )
    ExRaiseDatatypeMisalignment();
  v36 = (ULONG64)&v35[(unsigned __int16)v34 + 2];
  if ( v36 <= (unsigned __int64)v35 || v36 >= MmUserProbeAddress )
    ExRaiseAccessViolation();
  if ( (unsigned __int16)v34 > (unsigned __int16)HIWORD(*(_DWORD *)a4) )
  {
    if ( (v34 & 1) == 0 )
      goto LABEL_60;
    goto LABEL_59;
  }
  if ( (v34 & 1) != 0 )
  {
LABEL_59:
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 2704);
LABEL_60:
    ExRaiseAccessViolation();
  }
  RtlStringCchCopyW((char *)(v23 + 64744), v30, v35);
  HmodTableIndex = GetHmodTableIndex(v37);
  *(_DWORD *)(v23 + 64216) = HmodTableIndex;
  if ( HmodTableIndex == -1 )
  {
    v39 = 126;
LABEL_75:
    UserSetLastError(v39);
    return 0LL;
  }
  AddHmodDependency(HmodTableIndex);
  v40 = GetHmodTableIndex(v32);
  *(_DWORD *)(v23 + 64740) = v40;
  if ( v40 == -1 )
  {
    UserSetLastError(126);
    RemoveHmodDependency(*(_DWORD *)(v23 + 64216));
    *(_DWORD *)(v23 + 64216) = -1;
    return 0LL;
  }
  AddHmodDependency(v40);
  v42 = PsGetCurrentProcessWin32Process(v41);
  if ( v42 )
  {
    v44 = -*(_QWORD *)v42;
    v43 = -(__int64)(*(_QWORD *)v42 != 0LL);
    v42 &= v43;
  }
  *(_QWORD *)(v23 + 64208) = v42;
  _InterlockedOr(*(volatile signed __int32 **)(W32GetUserSessionState(v44, v43) + 19872), 0x10u);
  return 1LL;
}
