/*
 * XREFs of MiCaptureTargetedWorkingSetAccessBits @ 0x1403B9D78
 * Callers:
 *     MiWalkAllWorkingSets @ 0x1402A9370 (MiWalkAllWorkingSets.c)
 * Callees:
 *     MiUnlockWorkingSetShared @ 0x1402EB6C0 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x1402EDD60 (MiLockWorkingSetShared.c)
 *     MiCheckAndProcessCcAccessLog @ 0x1403BA2D4 (MiCheckAndProcessCcAccessLog.c)
 *     MiDrainOldAccessBuffers @ 0x1403BAF90 (MiDrainOldAccessBuffers.c)
 *     MiCaptureAndResetWorkingSetAccessBits @ 0x1403BB06C (MiCaptureAndResetWorkingSetAccessBits.c)
 */

__int64 __fastcall MiCaptureTargetedWorkingSetAccessBits(__int64 a1, __int64 a2)
{
  __int64 v2; // r8
  unsigned int v3; // ebx
  __int64 v5; // rbp
  __int64 v6; // rdx
  char v7; // di
  __int64 v8; // rbx
  __int64 v9; // rdx

  v2 = *(unsigned __int16 *)(a1 + 174);
  v3 = a2;
  v5 = *(_QWORD *)(stru_140E2EB88.ThreadLock + 8 * v2);
  LOBYTE(v6) = MiLockWorkingSetShared(a1, a2, v2);
  v7 = v6;
  MiCaptureAndResetWorkingSetAccessBits(a1, v6, v3);
  v8 = MEMORY[0xFFFFF78000000320];
  MiDrainOldAccessBuffers(a1, MEMORY[0xFFFFF78000000320]);
  LOBYTE(v9) = v7;
  MiUnlockWorkingSetShared(a1, v9);
  return MiCheckAndProcessCcAccessLog(v5, v8, 1LL);
}
