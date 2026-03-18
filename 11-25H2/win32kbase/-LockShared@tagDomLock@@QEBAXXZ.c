/*
 * XREFs of ?LockShared@tagDomLock@@QEBAXXZ @ 0x1400BB1C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall tagDomLock::LockShared(PERESOURCE *this)
{
  ExEnterCriticalRegionAndAcquireResourceShared(*this);
}
