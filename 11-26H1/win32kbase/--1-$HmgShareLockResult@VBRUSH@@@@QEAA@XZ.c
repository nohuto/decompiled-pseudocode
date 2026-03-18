/*
 * XREFs of ??1?$HmgShareLockResult@VBRUSH@@@@QEAA@XZ @ 0x1401975A8
 * Callers:
 *     ?DrvCreateCloneHDEV@@YAPEAUHDEV__@@PEAU1@K@Z @ 0x1401F4F1C (-DrvCreateCloneHDEV@@YAPEAUHDEV__@@PEAU1@K@Z.c)
 * Callees:
 *     PopThreadGuardedObject @ 0x140019EE0 (PopThreadGuardedObject.c)
 *     ?CleanupRoutine@?$HmgShareLockResult@VBRUSH@@@@QEAAXXZ @ 0x1401C3B1C (-CleanupRoutine@-$HmgShareLockResult@VBRUSH@@@@QEAAXXZ.c)
 */

void __fastcall HmgShareLockResult<BRUSH>::~HmgShareLockResult<BRUSH>(__int64 a1)
{
  HmgShareLockResult<BRUSH>::CleanupRoutine();
  PopThreadGuardedObject((_QWORD *)(a1 + 8));
}
