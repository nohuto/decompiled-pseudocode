/*
 * XREFs of InitializePowerRequestList @ 0x1402EACAC
 * Callers:
 *     Win32kBaseUserInitialize @ 0x14016B320 (Win32kBaseUserInitialize.c)
 * Callees:
 *     ?Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z @ 0x14004909C (-Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z.c)
 *     ?InitializePowerWatchdogTimeouts@@YAHXZ @ 0x140142D24 (-InitializePowerWatchdogTimeouts@@YAHXZ.c)
 *     ?CreatePowerWatchdog@@YAJPEAPEAX@Z @ 0x14019F90C (-CreatePowerWatchdog@@YAJPEAPEAX@Z.c)
 */

NTSTATUS __fastcall InitializePowerRequestList(HANDLE Handle)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 UserSessionState; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rax
  NTSTATUS result; // eax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rax
  __int64 v12; // rbx
  __int64 v13; // rbx
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rcx
  __int64 v21; // rdx
  __int64 v22; // rcx
  signed __int32 v23[8]; // [rsp+0h] [rbp-38h] BYREF
  char v24; // [rsp+48h] [rbp+10h] BYREF
  PVOID Object; // [rsp+50h] [rbp+18h] BYREF

  v24 = 0;
  ZwPowerInformation((POWER_INFORMATION_LEVEL)66, 0LL, 0, &v24, 1u);
  UserSessionState = W32GetUserSessionState(v3, v2);
  *(_BYTE *)(UserSessionState + 528) = v24;
  if ( !(unsigned int)InitializePowerWatchdogTimeouts()
    || (v7 = W32GetUserSessionState(v6, v5), result = CreatePowerWatchdog((PVOID)(v7 + 544)), result >= 0)
    && (v11 = W32GetUserSessionState(v10, v9), result = CreatePowerWatchdog((PVOID)(v11 + 552)), result >= 0) )
  {
    v12 = W32GetUserSessionState(v6, v5);
    Object = 0LL;
    result = ObReferenceObjectByHandle(Handle, 0x1F0003u, (POBJECT_TYPE)ExEventObjectType, 0, &Object, 0LL);
    *(_QWORD *)(v12 + 520) = Object;
    if ( result >= 0 )
    {
      v13 = Win32AllocPoolZInitImpl(64LL, 0x38uLL, 0x6F707355u);
      *(_QWORD *)(W32GetUserSessionState(v15, v14) + 512) = v13;
      if ( *(_QWORD *)(W32GetUserSessionState(v17, v16) + 512) )
      {
        v20 = *(_QWORD *)(W32GetUserSessionState(v19, v18) + 512);
        *(_QWORD *)(v20 + 8) = 0LL;
        *(_DWORD *)(v20 + 16) = 0;
        *(_DWORD *)v20 = 1;
        KeInitializeEvent((PRKEVENT)(v20 + 24), SynchronizationEvent, 0);
        *(_DWORD *)(W32GetUserSessionState(v22, v21) + 2728) = 1;
        _InterlockedOr(v23, 0);
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
