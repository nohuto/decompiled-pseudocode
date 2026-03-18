/*
 * XREFs of ?CleanupRoutine@?$HmgShareLockResult@VBRUSH@@@@QEAAXXZ @ 0x1401C91C0
 * Callers:
 *     ??1?$HmgShareLockResult@VBRUSH@@@@QEAA@XZ @ 0x1401C919C (--1-$HmgShareLockResult@VBRUSH@@@@QEAA@XZ.c)
 *     ?OnUnexpectedThreadTerminationStatic@?$UnexpectedThreadTerminationHandler@V?$HmgShareLockResult@VBRUSH@@@@@@SAXPEAX@Z @ 0x1401C91F0 (-OnUnexpectedThreadTerminationStatic@-$UnexpectedThreadTerminationHandler@V-$HmgSha_ea_1401C91F0.c)
 * Callees:
 *     ?DEC_SHARE_REF_CNT_LAZY0@@YAXPEAVBRUSH@@@Z @ 0x14001C8C0 (-DEC_SHARE_REF_CNT_LAZY0@@YAXPEAVBRUSH@@@Z.c)
 */

void __fastcall HmgShareLockResult<BRUSH>::CleanupRoutine(struct BRUSH **a1)
{
  struct BRUSH *v2; // rcx

  v2 = *a1;
  if ( v2 )
  {
    DEC_SHARE_REF_CNT_LAZY0(v2);
    *a1 = 0LL;
  }
}
