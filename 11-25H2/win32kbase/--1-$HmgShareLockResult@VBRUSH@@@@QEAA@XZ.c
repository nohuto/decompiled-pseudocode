/*
 * XREFs of ??1?$HmgShareLockResult@VBRUSH@@@@QEAA@XZ @ 0x1401C919C
 * Callers:
 *     bDynamicModeChange @ 0x1401793D8 (bDynamicModeChange.c)
 *     ?DrvCreateCloneHDEV@@YAPEAUHDEV__@@PEAU1@K@Z @ 0x14017A4B0 (-DrvCreateCloneHDEV@@YAPEAUHDEV__@@PEAU1@K@Z.c)
 *     ?hCreateHDEV@@YAPEAUHDEV__@@PEAUtagGRAPHICS_DEVICE@@PEAU_DRV_NAMES@@PEAU_devicemodeW@@PEAXKKHHKPEAPEAU1@@Z @ 0x14017C714 (-hCreateHDEV@@YAPEAUHDEV__@@PEAUtagGRAPHICS_DEVICE@@PEAU_DRV_NAMES@@PEAU_devicemodeW@@PEAXKKHHKP.c)
 * Callees:
 *     PopThreadGuardedObject @ 0x14000E350 (PopThreadGuardedObject.c)
 *     ?CleanupRoutine@?$HmgShareLockResult@VBRUSH@@@@QEAAXXZ @ 0x1401C91C0 (-CleanupRoutine@-$HmgShareLockResult@VBRUSH@@@@QEAAXXZ.c)
 */

void __fastcall HmgShareLockResult<BRUSH>::~HmgShareLockResult<BRUSH>(__int64 a1)
{
  HmgShareLockResult<BRUSH>::CleanupRoutine();
  PopThreadGuardedObject((_QWORD *)(a1 + 8));
}
