/*
 * XREFs of MiEmptyTargetedWorkingSet @ 0x1403C7C08
 * Callers:
 *     MiWalkAllWorkingSets @ 0x1402A8780 (MiWalkAllWorkingSets.c)
 * Callees:
 *     MiUnlockWorkingSetShared @ 0x1402CD700 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x1402CFDE0 (MiLockWorkingSetShared.c)
 *     MiCheckAndProcessCcAccessLog @ 0x1403C4144 (MiCheckAndProcessCcAccessLog.c)
 *     MiDrainOldAccessBuffers @ 0x1403C4E00 (MiDrainOldAccessBuffers.c)
 *     MiEmptyWorkingSetInitiate @ 0x1403C5E90 (MiEmptyWorkingSetInitiate.c)
 */

__int64 __fastcall MiEmptyTargetedWorkingSet(__int64 a1)
{
  __int64 v2; // rbp
  __int64 v3; // rdx
  __int64 v4; // r8
  char v5; // bl
  __int64 v6; // rdi
  __int64 v7; // r8
  __int64 v8; // rdx

  v2 = *(_QWORD *)(stru_140E2ED08.ThreadLock + 8LL * *(unsigned __int16 *)(a1 + 174));
  MiEmptyWorkingSetInitiate(a1, 0, 0LL, -1LL);
  v5 = MiLockWorkingSetShared(a1, v3, v4);
  v6 = MEMORY[0xFFFFF78000000320];
  MiDrainOldAccessBuffers(a1, MEMORY[0xFFFFF78000000320], v7);
  LOBYTE(v8) = v5;
  MiUnlockWorkingSetShared(a1, v8);
  return MiCheckAndProcessCcAccessLog(v2, v6, 0LL);
}
