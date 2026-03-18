/*
 * XREFs of ?ResetAdapterCollection@CTokenManager@@UEAAXXZ @ 0x14006E190
 * Callers:
 *     <none>
 * Callees:
 *     ?AcquireTokenManagerLock@CTokenManager@@AEAAXXZ @ 0x14001EB30 (-AcquireTokenManagerLock@CTokenManager@@AEAAXXZ.c)
 *     ?ReleaseTokenManagerLock@CTokenManager@@AEAAXXZ @ 0x14001EB70 (-ReleaseTokenManagerLock@CTokenManager@@AEAAXXZ.c)
 *     ?Release@CPushLockCriticalSection@@QEAAXXZ @ 0x140037180 (-Release@CPushLockCriticalSection@@QEAAXXZ.c)
 *     ?InternalDiscard@CAdapterCollection@@AEAAXXZ @ 0x1400371B8 (-InternalDiscard@CAdapterCollection@@AEAAXXZ.c)
 */

void __fastcall CTokenManager::ResetAdapterCollection(CTokenManager *this)
{
  CTokenManager::AcquireTokenManagerLock(this);
  ExAcquirePushLockExclusiveEx((char *)this + 144, 0LL);
  *((_BYTE *)this + 152) = 1;
  CAdapterCollection::InternalDiscard((CTokenManager *)((char *)this + 104));
  CPushLockCriticalSection::Release((CTokenManager *)((char *)this + 144));
  *((_DWORD *)this + 20) = 0;
  CTokenManager::ReleaseTokenManagerLock(this);
}
