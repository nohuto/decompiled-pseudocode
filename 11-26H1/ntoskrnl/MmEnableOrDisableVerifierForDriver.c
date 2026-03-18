/*
 * XREFs of MmEnableOrDisableVerifierForDriver @ 0x140C46610
 * Callers:
 *     VfVolatileApplyDifVerification @ 0x1406478F4 (VfVolatileApplyDifVerification.c)
 *     VfVolatileRemoveDifVerification @ 0x140647AAC (VfVolatileRemoveDifVerification.c)
 * Callees:
 *     MmReleaseLoadLock @ 0x1404A4B70 (MmReleaseLoadLock.c)
 *     MmAcquireLoadLock @ 0x1404AB9B0 (MmAcquireLoadLock.c)
 *     VfDriverApplyDifVerification @ 0x140C28168 (VfDriverApplyDifVerification.c)
 *     VfDriverRemoveDifVerification @ 0x140C28310 (VfDriverRemoveDifVerification.c)
 *     VfDriverEnableVerifier @ 0x140C46844 (VfDriverEnableVerifier.c)
 */

__int64 __fastcall MmEnableOrDisableVerifierForDriver(__int64 a1, _DWORD *a2, char a3)
{
  unsigned int v3; // ebx
  __int64 v7; // rdx
  struct _KTHREAD *Lock; // rbp
  unsigned int v9; // eax

  v3 = 0;
  *a2 = 0;
  Lock = MmAcquireLoadLock();
  if ( (a3 & 1) != 0 )
  {
    v9 = VfDriverEnableVerifier(a1, 0LL, a2);
  }
  else if ( (a3 & 2) != 0 )
  {
    v9 = VfDriverApplyDifVerification(a1, v7, a2);
  }
  else
  {
    if ( (a3 & 4) == 0 )
      goto LABEL_4;
    v9 = VfDriverRemoveDifVerification(a1);
  }
  v3 = v9;
LABEL_4:
  MmReleaseLoadLock(Lock);
  return v3;
}
