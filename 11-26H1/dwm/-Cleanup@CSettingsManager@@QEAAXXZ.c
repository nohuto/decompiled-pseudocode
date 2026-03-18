/*
 * XREFs of ?Cleanup@CSettingsManager@@QEAAXXZ @ 0x1400027B0
 * Callers:
 *     ?s_LpcCommandHandler@CDwmAppHost@@CAJPEAUIPortMessage@@PEBUPORT_CONTEXT@@PEAH2@Z @ 0x1400024D0 (-s_LpcCommandHandler@CDwmAppHost@@CAJPEAUIPortMessage@@PEBUPORT_CONTEXT@@PEAH2@Z.c)
 *     ?PropagateUserLogon@CSettingsManager@@QEAAXPEAUHKEY__@@00_N@Z @ 0x140002710 (-PropagateUserLogon@CSettingsManager@@QEAAXPEAUHKEY__@@00_N@Z.c)
 *     ?Shutdown@CDwmAppHost@@QEAAXJ@Z @ 0x140003144 (-Shutdown@CDwmAppHost@@QEAAXJ@Z.c)
 * Callees:
 *     ?AcquireExclusive@CReadWriteLock@@QEAAXXZ @ 0x140002868 (-AcquireExclusive@CReadWriteLock@@QEAAXXZ.c)
 */

void __fastcall CSettingsManager::Cleanup(RTL_SRWLOCK *this)
{
  HKEY Ptr; // rcx
  HKEY v3; // rcx
  HKEY v4; // rcx
  HKEY v5; // rcx

  CReadWriteLock::AcquireExclusive((CReadWriteLock *)&this[6]);
  Ptr = (HKEY)this[1].Ptr;
  if ( Ptr )
  {
    RegCloseKey(Ptr);
    this[1].Ptr = 0LL;
  }
  v3 = (HKEY)this[2].Ptr;
  if ( v3 )
  {
    RegCloseKey(v3);
    this[2].Ptr = 0LL;
  }
  v4 = (HKEY)this[5].Ptr;
  if ( v4 )
  {
    RegCloseKey(v4);
    this[5].Ptr = 0LL;
  }
  v5 = (HKEY)this[3].Ptr;
  if ( v5 )
  {
    RegCloseKey(v5);
    this[3].Ptr = 0LL;
  }
  LODWORD(this[7].Ptr) = 0;
  ReleaseSRWLockExclusive(this + 6);
}
