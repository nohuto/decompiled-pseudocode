/*
 * XREFs of PsQueryTotalCycleTimeProcess @ 0x140AA40B0
 * Callers:
 *     NtQueryInformationProcess @ 0x140A4A1F0 (NtQueryInformationProcess.c)
 * Callees:
 *     KeUpdateTotalCyclesCurrentThread @ 0x14021B160 (KeUpdateTotalCyclesCurrentThread.c)
 *     KeFlushProcessWriteBuffers @ 0x14025167C (KeFlushProcessWriteBuffers.c)
 *     PspUnlockProcessThreadListShared @ 0x140271AF0 (PspUnlockProcessThreadListShared.c)
 *     PspLockProcessThreadListShared @ 0x14044BF00 (PspLockProcessThreadListShared.c)
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
