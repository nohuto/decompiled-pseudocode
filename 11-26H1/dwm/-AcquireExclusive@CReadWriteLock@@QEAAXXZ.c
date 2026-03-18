/*
 * XREFs of ?AcquireExclusive@CReadWriteLock@@QEAAXXZ @ 0x140002868
 * Callers:
 *     ?PropagateUserLogon@CSettingsManager@@QEAAXPEAUHKEY__@@00_N@Z @ 0x140002710 (-PropagateUserLogon@CSettingsManager@@QEAAXPEAUHKEY__@@00_N@Z.c)
 *     ?Cleanup@CSettingsManager@@QEAAXXZ @ 0x1400027B0 (-Cleanup@CSettingsManager@@QEAAXXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall CReadWriteLock::AcquireExclusive(RTL_SRWLOCK *this)
{
  AcquireSRWLockExclusive(this);
  LODWORD(this[1].Ptr) = GetCurrentThreadId();
}
