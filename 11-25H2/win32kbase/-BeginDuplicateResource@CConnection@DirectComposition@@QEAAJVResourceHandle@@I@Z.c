/*
 * XREFs of ?BeginDuplicateResource@CConnection@DirectComposition@@QEAAJVResourceHandle@@I@Z @ 0x14004FCE4
 * Callers:
 *     ?EmitDuplicateHelper@CResourceMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@VResourceHandle@@@Z @ 0x14004FC40 (-EmitDuplicateHelper@CResourceMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@VResourceHandle.c)
 * Callees:
 *     ?Unlock@CChannel@DirectComposition@@QEAAXXZ @ 0x14004FD44 (-Unlock@CChannel@DirectComposition@@QEAAXXZ.c)
 *     ?BeginDuplicateResource@CSystemChannel@DirectComposition@@QEAAJVResourceHandle@@I@Z @ 0x14004FEB8 (-BeginDuplicateResource@CSystemChannel@DirectComposition@@QEAAJVResourceHandle@@I@Z.c)
 *     ?AcquireExclusive@CCriticalSection@DirectComposition@@QEAAXXZ @ 0x140050200 (-AcquireExclusive@CCriticalSection@DirectComposition@@QEAAXXZ.c)
 */

__int64 __fastcall DirectComposition::CConnection::BeginDuplicateResource(__int64 a1, unsigned int a2, unsigned int a3)
{
  unsigned int v6; // ebx

  DirectComposition::CCriticalSection::AcquireExclusive(*(PERESOURCE *)(*(_QWORD *)(a1 + 152) + 32LL));
  v6 = DirectComposition::CSystemChannel::BeginDuplicateResource(*(_QWORD *)(a1 + 152), a2, a3);
  DirectComposition::CChannel::Unlock(*(DirectComposition::CChannel **)(a1 + 152));
  return v6;
}
