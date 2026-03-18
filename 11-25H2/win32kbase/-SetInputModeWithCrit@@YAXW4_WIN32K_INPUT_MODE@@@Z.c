/*
 * XREFs of ?SetInputModeWithCrit@@YAXW4_WIN32K_INPUT_MODE@@@Z @ 0x14016959C
 * Callers:
 *     ?SetInputMode@@YAXW4_WIN32K_INPUT_MODE@@@Z @ 0x14014D7E0 (-SetInputMode@@YAXW4_WIN32K_INPUT_MODE@@@Z.c)
 *     PowerConnectionEvent @ 0x140150D1C (PowerConnectionEvent.c)
 * Callees:
 *     ??0?$ObjectLock@$$V@?$DomainExclusive@VDLT_POWERTRANSITIONSSTATE@@@?$DomainShared@$$V@@QEAA@XZ @ 0x1400BAB1C (--0-$ObjectLock@$$V@-$DomainExclusive@VDLT_POWERTRANSITIONSSTATE@@@-$DomainShared@$$V@@QEAA@XZ.c)
 *     ??1?$ObjectLock@$$V@?$DomainExclusive@VDLT_THREADLOCK@@@?$DomainShared@$$V@@QEAA@XZ @ 0x1400EE958 (--1-$ObjectLock@$$V@-$DomainExclusive@VDLT_THREADLOCK@@@-$DomainShared@$$V@@QEAA@XZ.c)
 *     RIMSetSystemInputMode @ 0x14011F8FC (RIMSetSystemInputMode.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019E99C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     __security_check_cookie @ 0x140242EA0 (__security_check_cookie.c)
 */

NTSTATUS __fastcall SetInputModeWithCrit(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebx
  __int64 v3; // rdx
  __int64 UserSessionState; // rdi
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rdx
  volatile signed __int32 *v8; // rcx
  __int64 InputBuffer; // [rsp+38h] [rbp-50h] BYREF
  int v11; // [rsp+40h] [rbp-48h]
  _BYTE v12[48]; // [rsp+48h] [rbp-40h] BYREF

  v2 = a1;
  UserSessionState = W32GetUserSessionState(a1, a2);
  if ( !*(_BYTE *)(UserSessionState + 528) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1644LL);
  DomainShared<>::DomainExclusive<DLT_POWERTRANSITIONSSTATE>::ObjectLock<>::ObjectLock<>((__int64)v12, v3);
  *(_DWORD *)(UserSessionState + 2784) = v2 == 2;
  *(_DWORD *)(UserSessionState + 2780) = v2 == 1;
  DomainShared<>::DomainExclusive<DLT_THREADLOCK>::ObjectLock<>::~ObjectLock<>((__int64)v12);
  v8 = *(volatile signed __int32 **)(W32GetUserSessionState(v6, v5) + 19872);
  if ( v2 == 2 )
  {
    _InterlockedOr(v8, 0x4000u);
LABEL_5:
    _InterlockedAnd(*(volatile signed __int32 **)(W32GetUserSessionState(v8, v7) + 19872), 0xFFFFDFFF);
    goto LABEL_6;
  }
  _InterlockedAnd(v8, 0xFFFFBFFF);
  if ( v2 != 1 )
    goto LABEL_5;
  _InterlockedOr(*(volatile signed __int32 **)(W32GetUserSessionState(v8, v7) + 19872), 0x2000u);
LABEL_6:
  RIMSetSystemInputMode(v2);
  InputBuffer = 28LL;
  if ( v2 )
    v11 = (v2 != 1) + 1;
  else
    v11 = 0;
  return ZwPowerInformation(SystemPowerStateLogging|0x40, &InputBuffer, 0xCu, 0LL, 0);
}
