/*
 * XREFs of ?UnLockExclusive@tagDomLock@@QEBAXXZ @ 0x1400FC9F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall tagDomLock::UnLockExclusive(PERESOURCE *this)
{
  ExReleaseResourceAndLeaveCriticalRegion(*this);
}
