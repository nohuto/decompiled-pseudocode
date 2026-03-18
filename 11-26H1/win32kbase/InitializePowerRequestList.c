/*
 * XREFs of InitializePowerRequestList @ 0x1402F51D0
 * Callers:
 *     Win32kBaseUserInitialize @ 0x1401D8B30 (Win32kBaseUserInitialize.c)
 * Callees:
 *     ?Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z @ 0x140047370 (-Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z.c)
 *     ?InitializePowerWatchdogTimeouts@@YAHXZ @ 0x14017F8F4 (-InitializePowerWatchdogTimeouts@@YAHXZ.c)
 *     ?CreatePowerWatchdog@@YAJPEAPEAX@Z @ 0x140192300 (-CreatePowerWatchdog@@YAJPEAPEAX@Z.c)
 */

NTSTATUS __fastcall InitializePowerRequestList(HANDLE Handle)
{
  int v2; // edx
  int v3; // ecx
  int v4; // r8d
  int v5; // edx
  int v6; // ecx
  int v7; // r8d
  __int64 v8; // rax
  NTSTATUS result; // eax
  int v10; // edx
  int v11; // ecx
  int v12; // r8d
  __int64 v13; // rax
  __int64 UserSessionState; // rbx
  __int64 v15; // rbx
  int v16; // edx
  int v17; // ecx
  int v18; // r8d
  int v19; // edx
  int v20; // ecx
  int v21; // r8d
  int v22; // edx
  int v23; // ecx
  int v24; // r8d
  __int64 v25; // rcx
  int v26; // edx
  int v27; // ecx
  int v28; // r8d
  signed __int32 v29[8]; // [rsp+0h] [rbp-38h] BYREF
  char v30; // [rsp+48h] [rbp+10h] BYREF
  PVOID Object; // [rsp+50h] [rbp+18h] BYREF

  v30 = 0;
  ZwPowerInformation((POWER_INFORMATION_LEVEL)66, 0LL, 0, &v30, 1u);
  *(_BYTE *)(W32GetUserSessionState(v3, v2, v4) + 528) = v30;
  if ( !(unsigned int)InitializePowerWatchdogTimeouts()
    || (v8 = W32GetUserSessionState(v6, v5, v7), result = CreatePowerWatchdog((PVOID)(v8 + 544)), result >= 0)
    && (v13 = W32GetUserSessionState(v11, v10, v12), result = CreatePowerWatchdog((PVOID)(v13 + 552)), result >= 0) )
  {
    UserSessionState = W32GetUserSessionState(v6, v5, v7);
    Object = 0LL;
    result = ObReferenceObjectByHandle(Handle, 0x1F0003u, (POBJECT_TYPE)ExEventObjectType, 0, &Object, 0LL);
    *(_QWORD *)(UserSessionState + 520) = Object;
    if ( result >= 0 )
    {
      v15 = Win32AllocPoolZInitImpl(64LL, 0x38uLL, 0x6F707355u);
      *(_QWORD *)(W32GetUserSessionState(v17, v16, v18) + 512) = v15;
      if ( *(_QWORD *)(W32GetUserSessionState(v20, v19, v21) + 512) )
      {
        v25 = *(_QWORD *)(W32GetUserSessionState(v23, v22, v24) + 512);
        *(_DWORD *)v25 = 1;
        *(_QWORD *)(v25 + 8) = 0LL;
        *(_DWORD *)(v25 + 16) = 0;
        KeInitializeEvent((PRKEVENT)(v25 + 24), SynchronizationEvent, 0);
        *(_DWORD *)(W32GetUserSessionState(v27, v26, v28) + 2728) = 1;
        _InterlockedOr(v29, 0);
        return 0;
      }
      else
      {
        return -1073741801;
      }
    }
  }
  return result;
}
