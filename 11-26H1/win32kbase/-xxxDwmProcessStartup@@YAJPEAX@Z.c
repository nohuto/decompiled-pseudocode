/*
 * XREFs of ?xxxDwmProcessStartup@@YAJPEAX@Z @ 0x1401ADDE8
 * Callers:
 *     NtUserRegisterSessionPort @ 0x140193A10 (NtUserRegisterSessionPort.c)
 * Callees:
 *     SetLastNtError @ 0x140087ACC (SetLastNtError.c)
 *     GreUnlockDwmState @ 0x1400B3070 (GreUnlockDwmState.c)
 *     GreLockDwmState @ 0x1400B3150 (GreLockDwmState.c)
 *     CheckDwmProcessSecurityIdentifier @ 0x140119760 (CheckDwmProcessSecurityIdentifier.c)
 *     ?SetDwmApiPort@@YAXPEAX@Z @ 0x140193FE4 (-SetDwmApiPort@@YAXPEAX@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     GreDxgkRegisterDwmProcess @ 0x1401C5CB0 (GreDxgkRegisterDwmProcess.c)
 *     xxxDwmControl @ 0x1401FBEF0 (xxxDwmControl.c)
 */

__int64 __fastcall xxxDwmProcessStartup(HANDLE Handle, int a2, int a3)
{
  PVOID v4; // r15
  void *v5; // rsi
  __int64 v6; // rcx
  void **v7; // r14
  int v8; // ebx
  void *CurrentProcess; // rax
  __int64 v10; // rcx
  int v11; // edx
  __int64 v12; // rcx
  int v13; // r8d
  __int64 ProcessWin32Process; // rax
  __int64 v15; // r13
  __int64 v16; // rax
  int v17; // edx
  __int64 v18; // rcx
  int v19; // r8d
  PVOID Object; // [rsp+A0h] [rbp+18h] BYREF
  PVOID v22; // [rsp+A8h] [rbp+20h]

  v4 = 0LL;
  v22 = 0LL;
  v5 = 0LL;
  v7 = (void **)(W32GetUserSessionState((_DWORD)Handle, a2, a3) + 70544);
  if ( *v7 )
    v8 = -1073741768;
  else
    v8 = CheckDwmProcessSecurityIdentifier();
  if ( *v7 )
    v8 = -1073741768;
  if ( v8 < 0 )
    goto LABEL_25;
  if ( Handle )
  {
    Object = 0LL;
    v8 = ObReferenceObjectByHandle(Handle, 1u, LpcPortObjectType, 1, &Object, 0LL);
    v4 = Object;
    v22 = Object;
  }
  if ( v8 < 0 )
    goto LABEL_25;
  CurrentProcess = (void *)PsGetCurrentProcess(v6);
  v8 = ObReferenceObjectByPointer(CurrentProcess, 0x1FFFFFu, (POBJECT_TYPE)PsProcessType, 0);
  if ( v8 < 0 )
    goto LABEL_25;
  v5 = (void *)PsGetCurrentProcess(v6);
  GreLockDwmState(v10);
  if ( *v7 )
  {
    v8 = -1073741768;
  }
  else
  {
    *v7 = v5;
    SetDwmApiPort(v4, v11, v13);
  }
  GreUnlockDwmState(v12);
  if ( v8 < 0 || (v8 = GreDxgkRegisterDwmProcess(), v8 < 0) )
  {
LABEL_25:
    GreLockDwmState(v6);
    if ( *v7 == v5 )
    {
      SetDwmApiPort(0LL, v17, v19);
      *v7 = 0LL;
    }
    GreUnlockDwmState(v18);
    if ( v4 )
      ObfDereferenceObject(v4);
    if ( v5 )
      ObfDereferenceObject(v5);
  }
  else
  {
    ProcessWin32Process = PsGetProcessWin32Process(v5);
    if ( ProcessWin32Process )
      ProcessWin32Process &= -(__int64)(*(_QWORD *)ProcessWin32Process != 0LL);
    v15 = *(_QWORD *)(ProcessWin32Process + 328);
    if ( *(_QWORD *)(v15 + 696) )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 341LL);
    if ( *(_QWORD *)(v15 + 512) )
      *(_QWORD *)(*(_QWORD *)(v15 + 512) + 224LL) |= 0x24uLL;
    v16 = PsGetProcessWin32Process(v5);
    if ( v16 )
      v16 &= -(__int64)(*(_QWORD *)v16 != 0LL);
    *(_DWORD *)(v16 + 276) |= 0xC0u;
    xxxDwmControl(1037LL, 0LL);
  }
  return (unsigned int)v8;
}
