/*
 * XREFs of ?CleanupRoutine@?$HmgShareLockResult@VSURFACE@@@@QEAAXXZ @ 0x1401F1224
 * Callers:
 *     ??1?$HmgShareLockResult@VSURFACE@@@@QEAA@XZ @ 0x1401F1200 (--1-$HmgShareLockResult@VSURFACE@@@@QEAA@XZ.c)
 *     ?OnUnexpectedThreadTerminationStatic@?$UnexpectedThreadTerminationHandler@V?$HmgShareLockResult@VSURFACE@@@@@@SAXPEAX@Z @ 0x1401F1270 (-OnUnexpectedThreadTerminationStatic@-$UnexpectedThreadTerminationHandler@V-$HmgSha_ea_1401F1270.c)
 * Callees:
 *     HmgDecrementShareReferenceCount @ 0x140019C10 (HmgDecrementShareReferenceCount.c)
 */

void __fastcall HmgShareLockResult<SURFACE>::CleanupRoutine(unsigned int **a1)
{
  unsigned int *v1; // rdi
  __int64 SessionState; // rax

  v1 = *a1;
  if ( *a1 )
  {
    SessionState = W32GetSessionState(a1);
    HmgDecrementShareReferenceCount(*(_QWORD *)(SessionState + 88), v1);
    *a1 = 0LL;
  }
}
