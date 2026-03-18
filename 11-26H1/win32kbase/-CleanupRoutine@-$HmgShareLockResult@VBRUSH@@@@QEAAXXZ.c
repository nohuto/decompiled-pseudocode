/*
 * XREFs of ?CleanupRoutine@?$HmgShareLockResult@VBRUSH@@@@QEAAXXZ @ 0x1401C3B1C
 * Callers:
 *     ??1?$HmgShareLockResult@VBRUSH@@@@QEAA@XZ @ 0x1401975A8 (--1-$HmgShareLockResult@VBRUSH@@@@QEAA@XZ.c)
 *     ?OnUnexpectedThreadTerminationStatic@?$UnexpectedThreadTerminationHandler@V?$HmgShareLockResult@VBRUSH@@@@@@SAXPEAX@Z @ 0x1401F0FF0 (-OnUnexpectedThreadTerminationStatic@-$UnexpectedThreadTerminationHandler@V-$HmgShareLockResult@.c)
 * Callees:
 *     ?DEC_SHARE_REF_CNT_LAZY0@@YAXAEAUSESSION_GLOBALS@Base@Gre@@PEAVBRUSH@@@Z @ 0x14003A980 (-DEC_SHARE_REF_CNT_LAZY0@@YAXAEAUSESSION_GLOBALS@Base@Gre@@PEAVBRUSH@@@Z.c)
 */

void __fastcall HmgShareLockResult<BRUSH>::CleanupRoutine(struct HOBJ__ ***a1)
{
  struct HOBJ__ **v1; // rdi
  __int64 SessionState; // rax

  v1 = *a1;
  if ( *a1 )
  {
    SessionState = W32GetSessionState(a1);
    DEC_SHARE_REF_CNT_LAZY0(*(struct Gre::Base::SESSION_GLOBALS **)(SessionState + 88), v1);
    *a1 = 0LL;
  }
}
