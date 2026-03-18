/*
 * XREFs of MiEmptyTargetedWorkingSet @ 0x1403B9CE8
 * Callers:
 *     MiWalkAllWorkingSets @ 0x1402A9370 (MiWalkAllWorkingSets.c)
 * Callees:
 *     MiUnlockWorkingSetShared @ 0x1402EB6C0 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x1402EDD60 (MiLockWorkingSetShared.c)
 *     MiCheckAndProcessCcAccessLog @ 0x1403BA2D4 (MiCheckAndProcessCcAccessLog.c)
 *     MiDrainOldAccessBuffers @ 0x1403BAF90 (MiDrainOldAccessBuffers.c)
 *     MiEmptyWorkingSetInitiate @ 0x1403BC020 (MiEmptyWorkingSetInitiate.c)
 */

__int64 __fastcall MiEmptyTargetedWorkingSet(__int64 a1)
{
  __int64 v2; // rbp
  __int64 v3; // rdx
  __int64 v4; // r8
  char v5; // bl
  __int64 v6; // rdi
  __int64 v7; // rdx

  v2 = *(_QWORD *)(stru_140E2EB88.ThreadLock + 8LL * *(unsigned __int16 *)(a1 + 174));
  MiEmptyWorkingSetInitiate(a1, 0LL, 0LL, -1LL);
  v5 = MiLockWorkingSetShared(a1, v3, v4);
  v6 = MEMORY[0xFFFFF78000000320];
  MiDrainOldAccessBuffers(a1, MEMORY[0xFFFFF78000000320]);
  LOBYTE(v7) = v5;
  MiUnlockWorkingSetShared(a1, v7);
  return MiCheckAndProcessCcAccessLog(v2, v6, 0LL);
}
