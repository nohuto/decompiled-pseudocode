/*
 * XREFs of ?HMDestroyUnlockedObjectWorker@@YAXPEAU_HANDLEENTRY@@@Z @ 0x1400D096C
 * Callers:
 *     HMUnlockObject @ 0x14009B9C0 (HMUnlockObject.c)
 *     ?DestroyProcessesObjects@@YAXPEAUtagPROCESSINFO@@@Z @ 0x1400D02B8 (-DestroyProcessesObjects@@YAXPEAUtagPROCESSINFO@@@Z.c)
 *     HMUnlockObjectInternal @ 0x1400D04F0 (HMUnlockObjectInternal.c)
 *     DestroyThreadsObjects @ 0x1400D0690 (DestroyThreadsObjects.c)
 *     HMDestroyUnlockedObject @ 0x1401DF3D0 (HMDestroyUnlockedObject.c)
 * Callees:
 *     ??0AtomicExecutionCheck@@QEAA@W4AtomicExecutionArm@@@Z @ 0x1400D0B5C (--0AtomicExecutionCheck@@QEAA@W4AtomicExecutionArm@@@Z.c)
 *     ?HMDestroyUnlockedObjectWorkerAtomic@@YAXPEAU_HANDLEENTRY@@@Z @ 0x1400D0E14 (-HMDestroyUnlockedObjectWorkerAtomic@@YAXPEAU_HANDLEENTRY@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

void __fastcall HMDestroyUnlockedObjectWorker(struct _HANDLEENTRY *a1, int a2, int a3)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  int v6; // edx
  int v7; // ecx
  int v8; // r8d
  _BYTE v9[8]; // [rsp+20h] [rbp-18h] BYREF
  __int64 v10; // [rsp+28h] [rbp-10h]

  if ( *(_DWORD *)(W32GetUserSessionState((_DWORD)a1, a2, a3) + 19792) || !PsGetCurrentThreadWin32Thread(v5, v4) )
  {
    if ( PsGetCurrentThreadWin32Thread(v5, v4) && (*(_DWORD *)(W32GetUserSessionState(v7, v6, v8) + 68928) & 0x80u) == 0 )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 4068LL);
    HMDestroyUnlockedObjectWorkerAtomic(a1);
  }
  else
  {
    AtomicExecutionCheck::AtomicExecutionCheck(v9);
    HMDestroyUnlockedObjectWorkerAtomic(a1);
    if ( v9[0] )
      --*(_DWORD *)(v10 + 28);
  }
}
