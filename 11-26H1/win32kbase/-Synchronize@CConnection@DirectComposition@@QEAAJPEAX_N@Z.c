/*
 * XREFs of ?Synchronize@CConnection@DirectComposition@@QEAAJPEAX_N@Z @ 0x1400B1A60
 * Callers:
 *     NtDCompositionSyncWait @ 0x1400B1B60 (NtDCompositionSyncWait.c)
 * Callees:
 *     ?Unlock@CChannel@DirectComposition@@QEAAXXZ @ 0x1400A6398 (-Unlock@CChannel@DirectComposition@@QEAAXXZ.c)
 *     ?AcquireExclusive@CCriticalSection@DirectComposition@@QEAAXXZ @ 0x1400A6750 (-AcquireExclusive@CCriticalSection@DirectComposition@@QEAAXXZ.c)
 *     ?Synchronize@CSystemChannel@DirectComposition@@QEAAJPEAX_N@Z @ 0x1400B1AC4 (-Synchronize@CSystemChannel@DirectComposition@@QEAAJPEAX_N@Z.c)
 */

__int64 __fastcall DirectComposition::CConnection::Synchronize(DirectComposition::CConnection *this, void *a2, bool a3)
{
  unsigned int v6; // ebx

  DirectComposition::CCriticalSection::AcquireExclusive(*(PERESOURCE *)(*((_QWORD *)this + 19) + 32LL));
  v6 = DirectComposition::CSystemChannel::Synchronize(*((DirectComposition::CSystemChannel **)this + 19), a2, a3);
  DirectComposition::CChannel::Unlock(*((DirectComposition::CChannel **)this + 19));
  return v6;
}
