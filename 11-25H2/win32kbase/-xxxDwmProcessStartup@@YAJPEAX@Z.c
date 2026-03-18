/*
 * XREFs of ?xxxDwmProcessStartup@@YAJPEAX@Z @ 0x14017DD8C
 * Callers:
 *     NtUserRegisterSessionPort @ 0x140159960 (NtUserRegisterSessionPort.c)
 * Callees:
 *     GreUnlockDwmState @ 0x140047820 (GreUnlockDwmState.c)
 *     GreLockDwmState @ 0x140047910 (GreLockDwmState.c)
 *     ??1LeaveEnterCrit@@QEAA@XZ @ 0x140081F58 (--1LeaveEnterCrit@@QEAA@XZ.c)
 *     SetLastNtError @ 0x14009DA54 (SetLastNtError.c)
 *     ?SetDwmApiPort@@YAXPEAX@Z @ 0x1400AF288 (-SetDwmApiPort@@YAXPEAX@Z.c)
 *     CheckDwmProcessSecurityIdentifier @ 0x140154050 (CheckDwmProcessSecurityIdentifier.c)
 *     xxxDwmControl @ 0x14017E230 (xxxDwmControl.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019E99C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     IsUserEnableConsoleModeSupported @ 0x1401A10D8 (IsUserEnableConsoleModeSupported.c)
 *     GreDxgkRegisterDwmProcess @ 0x1401A1EB0 (GreDxgkRegisterDwmProcess.c)
 *     RtlCopyFromUser @ 0x1401A4E78 (RtlCopyFromUser.c)
 *     ??0LeaveEnterCrit@@QEAA@_N@Z @ 0x1401A6050 (--0LeaveEnterCrit@@QEAA@_N@Z.c)
 *     Feature_FHLfDwmThread__private_IsEnabledDeviceUsageNoInline @ 0x1401A712C (Feature_FHLfDwmThread__private_IsEnabledDeviceUsageNoInline.c)
 *     UserEnableConsoleMode @ 0x14023F388 (UserEnableConsoleMode.c)
 *     RtlCopyToUser @ 0x1402C9008 (RtlCopyToUser.c)
 */

__int64 __fastcall xxxDwmProcessStartup(HANDLE Handle, __int64 a2)
{
  PVOID v3; // r12
  void *v4; // r15
  _QWORD *v5; // rsi
  int v6; // ebx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rdx
  void *CurrentProcess; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 ProcessWin32Process; // rax
  __int64 v16; // r14
  __int64 v17; // rax
  _QWORD *i; // r14
  __int64 v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // rdx
  int Src; // [rsp+30h] [rbp-A8h] BYREF
  _QWORD *v25; // [rsp+38h] [rbp-A0h]
  PVOID v26; // [rsp+40h] [rbp-98h]
  void *v27; // [rsp+48h] [rbp-90h]
  _QWORD *v28; // [rsp+68h] [rbp-70h]
  PVOID Object; // [rsp+70h] [rbp-68h] BYREF
  bool v30; // [rsp+E8h] [rbp+10h] BYREF
  char v31; // [rsp+F0h] [rbp+18h] BYREF
  int v32; // [rsp+F8h] [rbp+20h]

  v30 = 0;
  v3 = 0LL;
  v26 = 0LL;
  v4 = 0LL;
  v27 = 0LL;
  v5 = (_QWORD *)(W32GetUserSessionState(Handle, a2) + 70552);
  v28 = v5;
  if ( *v5 )
    v6 = -1073741768;
  else
    v6 = CheckDwmProcessSecurityIdentifier();
  if ( (int)IsUserEnableConsoleModeSupported() >= 0 )
  {
    LeaveEnterCrit::LeaveEnterCrit((LeaveEnterCrit *)&v31, 1);
    v6 = UserEnableConsoleMode(0LL);
    LeaveEnterCrit::~LeaveEnterCrit((LeaveEnterCrit *)&v31, v9);
    v30 = v6 >= 0;
  }
  if ( *v5 )
    v6 = -1073741768;
  v32 = v6;
  if ( v6 < 0 )
    goto LABEL_36;
  if ( Handle )
  {
    Object = 0LL;
    v6 = ObReferenceObjectByHandle(Handle, 1u, LpcPortObjectType, 1, &Object, 0LL);
    v3 = Object;
    v26 = Object;
    v32 = v6;
  }
  if ( v6 < 0 )
    goto LABEL_36;
  CurrentProcess = (void *)PsGetCurrentProcess(v8, v7);
  v6 = ObReferenceObjectByPointer(CurrentProcess, 0x1FFFFFu, (POBJECT_TYPE)PsProcessType, 0);
  v32 = v6;
  if ( v6 < 0 )
    goto LABEL_36;
  v4 = (void *)PsGetCurrentProcess(v8, v11);
  v27 = v4;
  GreLockDwmState(v12);
  if ( *v5 )
  {
    v6 = -1073741768;
    v32 = -1073741768;
  }
  else
  {
    *v5 = v4;
    SetDwmApiPort(v3, v13);
  }
  GreUnlockDwmState(v14);
  if ( v6 < 0 || (v6 = GreDxgkRegisterDwmProcess(), v32 = v6, v6 < 0) )
  {
LABEL_36:
    GreLockDwmState(v8);
    if ( (void *)*v5 == v4 )
    {
      SetDwmApiPort(0LL, v20);
      *v5 = 0LL;
    }
    GreUnlockDwmState(v21);
    if ( v3 )
      ObfDereferenceObject(v3);
    if ( v4 )
      ObfDereferenceObject(v4);
    if ( !*v5 && v30 )
    {
      LeaveEnterCrit::LeaveEnterCrit((LeaveEnterCrit *)&v30, 1);
      UserEnableConsoleMode(1LL);
      LeaveEnterCrit::~LeaveEnterCrit((LeaveEnterCrit *)&v30, v22);
    }
  }
  else
  {
    if ( (unsigned int)Feature_FHLfDwmThread__private_IsEnabledDeviceUsageNoInline(v8) )
    {
      ProcessWin32Process = PsGetProcessWin32Process(v4);
      if ( ProcessWin32Process )
        ProcessWin32Process &= -(__int64)(*(_QWORD *)ProcessWin32Process != 0LL);
      v16 = *(_QWORD *)(ProcessWin32Process + 320);
      if ( *(_QWORD *)(v16 + 704) )
      {
        v32 = 0x20000;
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 364LL);
      }
      if ( *(_QWORD *)(v16 + 520) )
        *(_QWORD *)(*(_QWORD *)(v16 + 520) + 224LL) |= 0x24uLL;
    }
    else
    {
      v17 = PsGetProcessWin32Process(*v5);
      if ( v17 )
        v17 &= -(__int64)(*(_QWORD *)v17 != 0LL);
      for ( i = *(_QWORD **)(v17 + 320); ; i = (_QWORD *)i[88] )
      {
        v25 = i;
        if ( !i )
          break;
        i[170] |= 4uLL;
        if ( i[65] )
        {
          Src = 0;
          RtlCopyFromUser(&Src, (void *)(i[65] + 224LL), 4uLL);
          Src |= 1u;
          RtlCopyToUser((void *)(i[65] + 224LL), &Src, 4uLL);
        }
      }
    }
    v19 = PsGetProcessWin32Process(v4);
    if ( v19 )
      v19 &= -(__int64)(*(_QWORD *)v19 != 0LL);
    *(_DWORD *)(v19 + 276) |= 0xC0u;
    xxxDwmControl(1037LL, 0LL);
  }
  return (unsigned int)v6;
}
