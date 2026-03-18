/*
 * XREFs of ?SetInputModeWithCrit@@YAXW4_WIN32K_INPUT_MODE@@@Z @ 0x1400E97D0
 * Callers:
 *     PowerConnectionEvent @ 0x14018642C (PowerConnectionEvent.c)
 *     ?SetInputMode@@YAXW4_WIN32K_INPUT_MODE@@@Z @ 0x14018CE58 (-SetInputMode@@YAXW4_WIN32K_INPUT_MODE@@@Z.c)
 * Callees:
 *     RIMSetSystemInputMode @ 0x1400E9970 (RIMSetSystemInputMode.c)
 *     ??0?$ObjectLock@$$V@?$DomainExclusive@VDLT_POWERTRANSITIONSSTATE@@@?$DomainShared@$$V@@QEAA@XZ @ 0x1400EAC98 (--0-$ObjectLock@$$V@-$DomainExclusive@VDLT_POWERTRANSITIONSSTATE@@@-$DomainShared@$$V@@QEAA@XZ.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     __security_check_cookie @ 0x14024BC30 (__security_check_cookie.c)
 */

NTSTATUS __fastcall SetInputModeWithCrit(unsigned int a1, int a2, int a3)
{
  __int64 UserSessionState; // rdi
  int v5; // edx
  int v6; // ecx
  int v7; // r8d
  int v8; // edx
  volatile signed __int32 *v9; // rcx
  int v10; // r8d
  __int64 InputBuffer; // [rsp+38h] [rbp-50h] BYREF
  int v13; // [rsp+40h] [rbp-48h]
  PERESOURCE *v14; // [rsp+48h] [rbp-40h] BYREF
  char v15; // [rsp+70h] [rbp-18h]

  UserSessionState = W32GetUserSessionState(a1, a2, a3);
  if ( !*(_BYTE *)(UserSessionState + 528) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1602LL);
  DomainShared<>::DomainExclusive<DLT_POWERTRANSITIONSSTATE>::ObjectLock<>::ObjectLock<>(&v14);
  *(_DWORD *)(UserSessionState + 2780) = a1 == 2;
  *(_DWORD *)(UserSessionState + 2776) = a1 == 1;
  if ( v15 )
  {
    v6 = (int)v14;
    if ( v14 )
      ExReleaseResourceAndLeaveCriticalRegion(*v14);
  }
  v9 = *(volatile signed __int32 **)(W32GetUserSessionState(v6, v5, v7) + 19904);
  if ( a1 == 2 )
  {
    _InterlockedOr(v9, 0x4000u);
    goto LABEL_8;
  }
  _InterlockedAnd(v9, 0xFFFFBFFF);
  if ( a1 != 1 )
  {
LABEL_8:
    _InterlockedAnd(*(volatile signed __int32 **)(W32GetUserSessionState((_DWORD)v9, v8, v10) + 19904), 0xFFFFDFFF);
    goto LABEL_9;
  }
  _InterlockedOr(*(volatile signed __int32 **)(W32GetUserSessionState((_DWORD)v9, v8, v10) + 19904), 0x2000u);
LABEL_9:
  RIMSetSystemInputMode(a1);
  InputBuffer = 28LL;
  if ( a1 )
    v13 = (a1 != 1) + 1;
  else
    v13 = 0;
  return ZwPowerInformation(SystemPowerStateLogging|0x40, &InputBuffer, 0xCu, 0LL, 0);
}
