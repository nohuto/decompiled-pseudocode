/*
 * XREFs of ?ForceRender@CConnection@DirectComposition@@QEAAJXZ @ 0x1400E833C
 * Callers:
 *     DCompositionForceRender @ 0x1400E82F8 (DCompositionForceRender.c)
 * Callees:
 *     ?Commit@CApplicationChannel@DirectComposition@@QEAAJPEA_N_N1PEBUSynchronizationObject@2@PEAVCMilProtocolBlock@@PEAII@Z @ 0x14004F890 (-Commit@CApplicationChannel@DirectComposition@@QEAAJPEA_N_N1PEBUSynchronizationObject@2@PEAVCMil.c)
 *     ?Unlock@CChannel@DirectComposition@@QEAAXXZ @ 0x14004FD44 (-Unlock@CChannel@DirectComposition@@QEAAXXZ.c)
 *     ?AcquireExclusive@CCriticalSection@DirectComposition@@QEAAXXZ @ 0x140050200 (-AcquireExclusive@CCriticalSection@DirectComposition@@QEAAXXZ.c)
 *     ?ActivateChannelTrigger@CApplicationChannel@DirectComposition@@QEAAJI@Z @ 0x1400E83B8 (-ActivateChannelTrigger@CApplicationChannel@DirectComposition@@QEAAJI@Z.c)
 */

__int64 __fastcall DirectComposition::CConnection::ForceRender(DirectComposition::CConnection *this)
{
  int v2; // edi

  DirectComposition::CCriticalSection::AcquireExclusive(*(PERESOURCE *)(*((_QWORD *)this + 19) + 32LL));
  v2 = DirectComposition::CApplicationChannel::ActivateChannelTrigger(
         *((DirectComposition::CApplicationChannel **)this + 19),
         0);
  if ( v2 >= 0 )
    v2 = DirectComposition::CApplicationChannel::Commit(
           *((DirectComposition::CApplicationChannel **)this + 19),
           0LL,
           0,
           0,
           0LL,
           0LL,
           0LL,
           0);
  DirectComposition::CChannel::Unlock(*((PERESOURCE **)this + 19));
  return (unsigned int)v2;
}
