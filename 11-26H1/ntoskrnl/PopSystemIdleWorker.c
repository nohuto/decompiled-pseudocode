/*
 * XREFs of PopSystemIdleWorker @ 0x1409F7600
 * Callers:
 *     <none>
 * Callees:
 *     PopReleaseRwLock @ 0x14021B1A8 (PopReleaseRwLock.c)
 *     KeSetEvent @ 0x1402C0780 (KeSetEvent.c)
 *     PopAcquireRwLockExclusive @ 0x140425310 (PopAcquireRwLockExclusive.c)
 *     PopScanIdleList @ 0x1404BFF50 (PopScanIdleList.c)
 *     PopIsSystemIdle @ 0x1409F76FC (PopIsSystemIdle.c)
 *     PopUpdateLastUserInputTime @ 0x1409F794C (PopUpdateLastUserInputTime.c)
 *     PopProcessPendingSystemIdleResets @ 0x1409F79A4 (PopProcessPendingSystemIdleResets.c)
 *     PopExecuteSystemIdleAction @ 0x1409F79EC (PopExecuteSystemIdleAction.c)
 */

__int64 __fastcall PopSystemIdleWorker(__int64 a1, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  LONG SignalState; // edi
  int v5; // ebx
  char IsSystemIdle; // si
  __int64 v7; // rdx
  __int64 v8; // rdx
  __int64 v9; // r8
  struct _KLOCK_ENTRIES *v10; // r9
  unsigned __int64 v12; // [rsp+30h] [rbp+8h] BYREF

  SignalState = PopIdleLoopExecuted.Header.SignalState;
  v12 = 0LL;
  PopAcquireRwLockExclusive((unsigned __int64 *)&PopSystemIdleLock, a2, a3, a4);
  PopProcessPendingSystemIdleResets();
  PopUpdateLastUserInputTime();
  v5 = dword_140E0B758;
  IsSystemIdle = PopIsSystemIdle(&unk_140E0B768, (unsigned int)dword_140E0B758, &v12, &unk_140E0B868);
  dword_140E0B848 = dword_140E0B754;
  PopReleaseRwLock((struct _KTHREAD *)&PopSystemIdleLock);
  if ( BYTE1(PsAltSystemCallRegistrationLock.Timer.DueTime.LowPart) )
    PopScanIdleList(v5, v12 / (unsigned int)PopIdleScanInterval);
  LOBYTE(v7) = IsSystemIdle;
  PopExecuteSystemIdleAction((unsigned int)dword_140E0B848, v7, &unk_140E0B850);
  PopAcquireRwLockExclusive((unsigned __int64 *)&PopSystemIdleLock, v8, v9, v10);
  dword_140E0B848 = 0;
  PopReleaseRwLock((struct _KTHREAD *)&PopSystemIdleLock);
  if ( !SignalState )
    KeSetEvent(&PopIdleLoopExecuted, 0, 0);
  return 0LL;
}
