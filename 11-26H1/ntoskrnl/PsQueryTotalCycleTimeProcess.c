/*
 * XREFs of PsQueryTotalCycleTimeProcess @ 0x140AA4DE0
 * Callers:
 *     NtQueryInformationProcess @ 0x140A534E0 (NtQueryInformationProcess.c)
 * Callees:
 *     KeUpdateTotalCyclesCurrentThread @ 0x14021CAF0 (KeUpdateTotalCyclesCurrentThread.c)
 *     KeFlushProcessWriteBuffers @ 0x140252FDC (KeFlushProcessWriteBuffers.c)
 *     PspUnlockProcessThreadListShared @ 0x140271060 (PspUnlockProcessThreadListShared.c)
 *     PspLockProcessThreadListShared @ 0x140444020 (PspLockProcessThreadListShared.c)
 */

__int64 __fastcall PsQueryTotalCycleTimeProcess(__int64 a1, unsigned __int64 *a2)
{
  struct _KTHREAD *CurrentThread; // rsi
  __int64 v3; // rdi
  __int64 v5; // r8
  struct _KLOCK_ENTRIES *v6; // r9
  __int64 v7; // rbx
  _QWORD *v8; // r8
  __int64 v9; // rcx

  CurrentThread = KeGetCurrentThread();
  v3 = a1;
  LOBYTE(a1) = 1;
  KeFlushProcessWriteBuffers(a1);
  KeUpdateTotalCyclesCurrentThread((__int64)CurrentThread, a2);
  PspLockProcessThreadListShared(v3, (__int64)CurrentThread, v5, v6);
  v7 = *(_QWORD *)(v3 + 288);
  v8 = *(_QWORD **)(v3 + 880);
  while ( v8 != (_QWORD *)(v3 + 880) )
  {
    v9 = *(v8 - 166);
    v8 = (_QWORD *)*v8;
    v7 += v9;
  }
  PspUnlockProcessThreadListShared(v3, CurrentThread);
  return v7;
}
