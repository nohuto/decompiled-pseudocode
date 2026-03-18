/*
 * XREFs of ??1?$HmgShareLockResult@VLFONT@@@@QEAA@XZ @ 0x14030ECE8
 * Callers:
 *     ?GrepSelectFont@@YAPEAUHFONT__@@AEAVXDCOBJ@@PEAU1@H@Z @ 0x140054DF0 (-GrepSelectFont@@YAPEAUHFONT__@@AEAVXDCOBJ@@PEAU1@H@Z.c)
 * Callees:
 *     ?CleanupRoutine@?$HmgShareLockResult@VLFONT@@@@QEAAXXZ @ 0x14030ED14 (-CleanupRoutine@-$HmgShareLockResult@VLFONT@@@@QEAAXXZ.c)
 */

__int64 __fastcall HmgShareLockResult<LFONT>::~HmgShareLockResult<LFONT>(__int64 a1)
{
  HmgShareLockResult<LFONT>::CleanupRoutine();
  return PopThreadGuardedObject(a1 + 8);
}
