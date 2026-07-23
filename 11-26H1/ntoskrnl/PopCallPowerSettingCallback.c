/*
 * XREFs of PopCallPowerSettingCallback @ 0x1409FBD3C
 * Callers:
 *     PopDispatchPowerSettingCallbacks @ 0x1409FBC00 (PopDispatchPowerSettingCallbacks.c)
 * Callees:
 *     ExAcquireFastMutex @ 0x1402775E0 (ExAcquireFastMutex.c)
 *     KeReleaseGuardedMutex @ 0x1402782B0 (KeReleaseGuardedMutex.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     PopUnreferencePowerSetting @ 0x1409FBE7C (PopUnreferencePowerSetting.c)
 *     PopDiagTracePowerSettingStop @ 0x1409FBE9C (PopDiagTracePowerSettingStop.c)
 *     PopDiagTracePowerSettingStart @ 0x1409FBF3C (PopDiagTracePowerSettingStart.c)
 */

void __fastcall PopCallPowerSettingCallback(_QWORD *a1, __int64 a2)
{
  bool v3; // bl
  _DWORD *v4; // rsi
  unsigned __int8 CurrentIrql; // bp
  unsigned __int8 v6; // al
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  _DWORD *v10; // rax

  if ( a2 )
  {
    if ( a1 )
    {
      a1[9] = a2;
      if ( !a1[3] )
      {
        v3 = 1;
        a1[3] = KeGetCurrentThread();
        while ( v3 )
        {
          v4 = (_DWORD *)a1[9];
          ++*v4;
          KeReleaseGuardedMutex(&PopSettingLock);
          PopDiagTracePowerSettingStart(a1[10], (char *)a1 + 36, (unsigned int)v4[1], v4 + 3);
          CurrentIrql = KeGetCurrentIrql();
          guard_dispatch_icall_no_overrides((__int64)a1 + 52, (__int64)(v4 + 3));
          v6 = KeGetCurrentIrql();
          if ( v6 != CurrentIrql )
            KeBugCheckEx(0xA0u, 0x900uLL, a1[10], CurrentIrql, v6);
          PopDiagTracePowerSettingStop(a1[10], (char *)a1 + 36);
          if ( KeGetCurrentThread()->WaitBlock[3].SpareLong )
            __fastfail(0x20u);
          ExAcquireFastMutex(&PopSettingLock);
          v10 = (_DWORD *)a1[9];
          v3 = v10 && v4 != v10;
          PopUnreferencePowerSetting(v4, v7, v8, v9);
        }
        a1[3] = 0LL;
      }
    }
  }
}
