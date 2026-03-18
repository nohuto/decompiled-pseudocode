/*
 * XREFs of PopSystemIdleWorker @ 0x140A3BBE0
 * Callers:
 *     <none>
 * Callees:
 *     KeSetEvent @ 0x1402DE9C0 (KeSetEvent.c)
 *     PopReleaseRwLock @ 0x14043630C (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x140436378 (PopAcquireRwLockExclusive.c)
 *     PopScanIdleList @ 0x1404C65A0 (PopScanIdleList.c)
 *     PopIsSystemIdle @ 0x140A3BCDC (PopIsSystemIdle.c)
 *     PopUpdateLastUserInputTime @ 0x140A3BF2C (PopUpdateLastUserInputTime.c)
 *     PopProcessPendingSystemIdleResets @ 0x140A3BF84 (PopProcessPendingSystemIdleResets.c)
 *     PopExecuteSystemIdleAction @ 0x140A3BFCC (PopExecuteSystemIdleAction.c)
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
  PopAcquireRwLockExclusive((unsigned __int64 *)&PopWeakChargerLock.SuspendEvent, a2, a3, a4);
  PopProcessPendingSystemIdleResets();
  PopUpdateLastUserInputTime();
  v5 = dword_140E0B748;
  IsSystemIdle = PopIsSystemIdle(&unk_140E0B758, (unsigned int)dword_140E0B748, &v12, &unk_140E0B858);
  dword_140E0B838 = dword_140E0B744;
  PopReleaseRwLock((struct _KTHREAD *)&PopWeakChargerLock.SuspendEvent);
  if ( LOBYTE(PsAltSystemCallRegistrationLock.TrapFrame) )
    PopScanIdleList(v5, v12 / (unsigned int)PopIdleScanInterval);
  LOBYTE(v7) = IsSystemIdle;
  PopExecuteSystemIdleAction((unsigned int)dword_140E0B838, v7, &unk_140E0B840);
  PopAcquireRwLockExclusive((unsigned __int64 *)&PopWeakChargerLock.SuspendEvent, v8, v9, v10);
  dword_140E0B838 = 0;
  PopReleaseRwLock((struct _KTHREAD *)&PopWeakChargerLock.SuspendEvent);
  if ( !SignalState )
    KeSetEvent(&PopIdleLoopExecuted, 0, 0);
  return 0LL;
}
