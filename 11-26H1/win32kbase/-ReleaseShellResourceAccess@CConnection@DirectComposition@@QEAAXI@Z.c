/*
 * XREFs of ?ReleaseShellResourceAccess@CConnection@DirectComposition@@QEAAXI@Z @ 0x1401862B0
 * Callers:
 *     NtDCompositionConfirmFrame @ 0x140042310 (NtDCompositionConfirmFrame.c)
 *     ?Clear@CBatch@DirectComposition@@QEAAXXZ @ 0x1400AE5A4 (-Clear@CBatch@DirectComposition@@QEAAXXZ.c)
 *     ??1CApplicationChannel@DirectComposition@@MEAA@XZ @ 0x1401290C8 (--1CApplicationChannel@DirectComposition@@MEAA@XZ.c)
 * Callees:
 *     ?Release@CPushLockCriticalSection@DirectComposition@@QEAAXXZ @ 0x1400A8FE8 (-Release@CPushLockCriticalSection@DirectComposition@@QEAAXXZ.c)
 *     ?AcquireShared@CCriticalSection@DirectComposition@@QEAAXXZ @ 0x1400A901C (-AcquireShared@CCriticalSection@DirectComposition@@QEAAXXZ.c)
 */

void __fastcall DirectComposition::CConnection::ReleaseShellResourceAccess(PERESOURCE *this, int a2)
{
  bool v4; // zf

  DirectComposition::CCriticalSection::AcquireShared(this[2]);
  ExAcquirePushLockExclusiveEx(this + 25, 0LL);
  *((_BYTE *)this + 208) = 1;
  v4 = *((_DWORD *)this + 64) == a2;
  *((_DWORD *)this + 64) -= a2;
  if ( v4 )
    this[33] = 0LL;
  DirectComposition::CPushLockCriticalSection::Release((DirectComposition::CPushLockCriticalSection *)(this + 25));
  ExReleaseResourceLite(this[2]);
  KeLeaveCriticalRegion();
}
