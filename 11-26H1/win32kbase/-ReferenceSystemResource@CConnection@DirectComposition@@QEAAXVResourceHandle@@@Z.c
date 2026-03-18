/*
 * XREFs of ?ReferenceSystemResource@CConnection@DirectComposition@@QEAAXVResourceHandle@@@Z @ 0x140055258
 * Callers:
 *     ?GetSystemVisualFromCrossChannelVisualChild@CApplicationChannel@DirectComposition@@QEAAJIPEAVResourceHandle@@@Z @ 0x14005494C (-GetSystemVisualFromCrossChannelVisualChild@CApplicationChannel@DirectComposition@@QEAAJIPEAVRes.c)
 *     ?CreateSystemVisualForCrossChannelVisualChild@CApplicationChannel@DirectComposition@@QEAAJIPEAVResourceHandle@@@Z @ 0x140055954 (-CreateSystemVisualForCrossChannelVisualChild@CApplicationChannel@DirectComposition@@QEAAJIPEAVR.c)
 *     ?Initialize@CCrossChannelParentVisualMarshaler@DirectComposition@@QEAAJPEAVCApplicationChannel@2@VResourceHandle@@I@Z @ 0x1401BA394 (-Initialize@CCrossChannelParentVisualMarshaler@DirectComposition@@QEAAJPEAVCApplicationChannel@2.c)
 * Callees:
 *     ?ObjectFromHandle@CInternalResourceTable@DirectComposition@@QEAAPEAVCResourceMarshaler@2@VResourceHandle@@@Z @ 0x1400552B0 (-ObjectFromHandle@CInternalResourceTable@DirectComposition@@QEAAPEAVCResourceMarshaler@2@VResour.c)
 *     ?Unlock@CChannel@DirectComposition@@QEAAXXZ @ 0x1400A6398 (-Unlock@CChannel@DirectComposition@@QEAAXXZ.c)
 *     ?AcquireExclusive@CCriticalSection@DirectComposition@@QEAAXXZ @ 0x1400A6750 (-AcquireExclusive@CCriticalSection@DirectComposition@@QEAAXXZ.c)
 *     ?AddRef@CResourceMarshaler@DirectComposition@@QEAA_KXZ @ 0x1400ADC68 (-AddRef@CResourceMarshaler@DirectComposition@@QEAA_KXZ.c)
 */

void __fastcall DirectComposition::CConnection::ReferenceSystemResource(__int64 a1, unsigned int a2)
{
  DirectComposition::CResourceMarshaler *v4; // rax

  DirectComposition::CCriticalSection::AcquireExclusive(*(PERESOURCE *)(*(_QWORD *)(a1 + 152) + 32LL));
  v4 = (DirectComposition::CResourceMarshaler *)DirectComposition::CInternalResourceTable::ObjectFromHandle(
                                                  *(_QWORD *)(a1 + 152) + 120LL,
                                                  a2);
  DirectComposition::CResourceMarshaler::AddRef(v4);
  DirectComposition::CChannel::Unlock(*(DirectComposition::CChannel **)(a1 + 152));
}
