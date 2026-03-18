/*
 * XREFs of ?LockShared@tagObjLock@@QEBAXXZ @ 0x1401AA4E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall tagObjLock::LockShared(tagObjLock *this)
{
  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx(this, 0LL);
  _InterlockedIncrement((volatile signed __int32 *)this + 4);
}
