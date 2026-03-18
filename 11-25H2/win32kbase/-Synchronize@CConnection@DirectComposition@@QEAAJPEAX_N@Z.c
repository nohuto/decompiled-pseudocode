/*
 * XREFs of ?Synchronize@CConnection@DirectComposition@@QEAAJPEAX_N@Z @ 0x1400568A0
 * Callers:
 *     NtDCompositionSyncWait @ 0x140056700 (NtDCompositionSyncWait.c)
 * Callees:
 *     ?Unlock@CChannel@DirectComposition@@QEAAXXZ @ 0x14004FD44 (-Unlock@CChannel@DirectComposition@@QEAAXXZ.c)
 *     ?AcquireExclusive@CCriticalSection@DirectComposition@@QEAAXXZ @ 0x140050200 (-AcquireExclusive@CCriticalSection@DirectComposition@@QEAAXXZ.c)
 *     ?Synchronize@CSystemChannel@DirectComposition@@QEAAJPEAX_N@Z @ 0x140056904 (-Synchronize@CSystemChannel@DirectComposition@@QEAAJPEAX_N@Z.c)
 */

__int64 __fastcall DirectComposition::CConnection::Synchronize(DirectComposition::CConnection *this, void *a2, bool a3)
{
  unsigned int v6; // ebx

  DirectComposition::CCriticalSection::AcquireExclusive(*(PERESOURCE *)(*((_QWORD *)this + 19) + 32LL));
  v6 = DirectComposition::CSystemChannel::Synchronize(*((DirectComposition::CSystemChannel **)this + 19), a2, a3);
  DirectComposition::CChannel::Unlock(*((PERESOURCE **)this + 19));
  return v6;
}
