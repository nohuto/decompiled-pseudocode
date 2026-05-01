/*
 * XREFs of ?ShutdownChildServices@LockScreenDirectorServiceProviderImpl@@AEAAXXZ @ 0x1802BC5C8
 * Callers:
 *     ?StopDirectorThread@LockScreenDirectorServiceProviderImpl@@AEAAXXZ @ 0x1801CA6CC (-StopDirectorThread@LockScreenDirectorServiceProviderImpl@@AEAAXXZ.c)
 * Callees:
 *     ?Revoke@AgileGitPtr@@QEAAJXZ @ 0x1803E6CB8 (-Revoke@AgileGitPtr@@QEAAJXZ.c)
 */

void __fastcall LockScreenDirectorServiceProviderImpl::ShutdownChildServices(RTL_SRWLOCK *this)
{
  RTL_SRWLOCK *v1; // rdi

  v1 = this + 18;
  AcquireSRWLockExclusive(this + 18);
  if ( this[19].Ptr )
    AgileGitPtr::Revoke((AgileGitPtr *)&this[19]);
  if ( v1 )
    ReleaseSRWLockExclusive(v1);
}
