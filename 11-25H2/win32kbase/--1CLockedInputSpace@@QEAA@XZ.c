/*
 * XREFs of ??1CLockedInputSpace@@QEAA@XZ @ 0x1400F39F4
 * Callers:
 *     NtInputSpaceRegionFromPoint @ 0x1401BA120 (NtInputSpaceRegionFromPoint.c)
 * Callees:
 *     ?UnLockExclusive@tagDomLock@@QEBAXXZ @ 0x1400BB1E0 (-UnLockExclusive@tagDomLock@@QEBAXXZ.c)
 */

void __fastcall CLockedInputSpace::~CLockedInputSpace(PERESOURCE **this)
{
  tagDomLock::UnLockExclusive(this[1]);
}
