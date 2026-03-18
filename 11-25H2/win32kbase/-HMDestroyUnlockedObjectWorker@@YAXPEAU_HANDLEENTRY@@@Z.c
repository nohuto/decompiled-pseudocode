/*
 * XREFs of ?HMDestroyUnlockedObjectWorker@@YAXPEAU_HANDLEENTRY@@@Z @ 0x1400395B0
 * Callers:
 *     HMUnlockObject @ 0x140037A30 (HMUnlockObject.c)
 *     DestroyThreadsObjects @ 0x140038840 (DestroyThreadsObjects.c)
 *     HMUnlockObjectInternal @ 0x1400396C0 (HMUnlockObjectInternal.c)
 *     ?DestroyProcessesObjects@@YAXPEAUtagPROCESSINFO@@@Z @ 0x140039BA4 (-DestroyProcessesObjects@@YAXPEAUtagPROCESSINFO@@@Z.c)
 *     HMDestroyUnlockedObject @ 0x1401A5770 (HMDestroyUnlockedObject.c)
 * Callees:
 *     ?HMDestroyUnlockedObjectWorkerAtomic@@YAXPEAU_HANDLEENTRY@@@Z @ 0x1401614EC (-HMDestroyUnlockedObjectWorkerAtomic@@YAXPEAU_HANDLEENTRY@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019E99C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?Arm@AtomicExecutionCheck@@QEAAXXZ @ 0x1401A4F40 (-Arm@AtomicExecutionCheck@@QEAAXXZ.c)
 */

void __fastcall HMDestroyUnlockedObjectWorker(struct _HANDLEENTRY *a1, __int64 a2)
{
  __int64 v3; // rdx
  __int64 v4; // rcx
  _BYTE v5[8]; // [rsp+20h] [rbp-18h] BYREF
  __int64 v6; // [rsp+28h] [rbp-10h]

  if ( *(_DWORD *)(W32GetUserSessionState(a1, a2) + 19760) || !PsGetCurrentThreadWin32Thread() )
  {
    if ( PsGetCurrentThreadWin32Thread() && (*(_DWORD *)(W32GetUserSessionState(v4, v3) + 68936) & 0x80u) == 0 )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 4047LL);
    HMDestroyUnlockedObjectWorkerAtomic(a1);
  }
  else
  {
    v5[0] = 0;
    v6 = 0LL;
    AtomicExecutionCheck::Arm((AtomicExecutionCheck *)v5);
    HMDestroyUnlockedObjectWorkerAtomic(a1);
    if ( v5[0] )
      --*(_DWORD *)(v6 + 28);
  }
}
