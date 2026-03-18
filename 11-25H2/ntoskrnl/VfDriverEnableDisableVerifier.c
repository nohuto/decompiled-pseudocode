/*
 * XREFs of VfDriverEnableDisableVerifier @ 0x140B7A1E0
 * Callers:
 *     MmEnableOrDisableVerifierForDriver @ 0x140B72CF0 (MmEnableOrDisableVerifierForDriver.c)
 * Callees:
 *     MmAcquireLoadLock @ 0x14036CED0 (MmAcquireLoadLock.c)
 *     MmReleaseLoadLock @ 0x14036D060 (MmReleaseLoadLock.c)
 *     VfDriverApplyDifVerification @ 0x140B7A058 (VfDriverApplyDifVerification.c)
 *     VfDriverEnableVerifier @ 0x140B7A270 (VfDriverEnableVerifier.c)
 *     VfDriverRemoveDifVerification @ 0x140B7A510 (VfDriverRemoveDifVerification.c)
 */

__int64 __fastcall VfDriverEnableDisableVerifier(__int64 a1, _DWORD *a2, char a3)
{
  unsigned int v6; // ebx
  __int64 v7; // rdx
  struct _KTHREAD *Lock; // r14
  unsigned int v9; // eax

  v6 = 0;
  Lock = (struct _KTHREAD *)MmAcquireLoadLock();
  if ( (a3 & 1) != 0 )
  {
    v9 = VfDriverEnableVerifier(a1, 0LL, a2);
LABEL_7:
    v6 = v9;
    goto LABEL_8;
  }
  if ( (a3 & 2) != 0 )
  {
    v9 = VfDriverApplyDifVerification(a1, v7, a2);
    goto LABEL_7;
  }
  if ( (a3 & 4) != 0 )
  {
    v9 = VfDriverRemoveDifVerification(a1);
    goto LABEL_7;
  }
LABEL_8:
  MmReleaseLoadLock(Lock);
  return v6;
}
