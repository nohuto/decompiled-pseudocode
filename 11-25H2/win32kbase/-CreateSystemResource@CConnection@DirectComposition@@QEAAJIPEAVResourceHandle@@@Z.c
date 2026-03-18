/*
 * XREFs of ?CreateSystemResource@CConnection@DirectComposition@@QEAAJIPEAVResourceHandle@@@Z @ 0x140050234
 * Callers:
 *     ?Initialize@CSharedSystemResource@DirectComposition@@IEAAJI@Z @ 0x14004F748 (-Initialize@CSharedSystemResource@DirectComposition@@IEAAJI@Z.c)
 *     ?CreateSystemVisualForCrossChannelVisualChild@CApplicationChannel@DirectComposition@@QEAAJIPEAVResourceHandle@@@Z @ 0x14005426C (-CreateSystemVisualForCrossChannelVisualChild@CApplicationChannel@DirectComposition@@QEAAJIPEAVR.c)
 * Callees:
 *     ?ReleaseSystemResource@CSystemChannel@DirectComposition@@QEAAXVResourceHandle@@@Z @ 0x14004F81C (-ReleaseSystemResource@CSystemChannel@DirectComposition@@QEAAXVResourceHandle@@@Z.c)
 *     ?Commit@CApplicationChannel@DirectComposition@@QEAAJPEA_N_N1PEBUSynchronizationObject@2@PEAVCMilProtocolBlock@@PEAII@Z @ 0x14004F890 (-Commit@CApplicationChannel@DirectComposition@@QEAAJPEA_N_N1PEBUSynchronizationObject@2@PEAVCMil.c)
 *     ?Unlock@CChannel@DirectComposition@@QEAAXXZ @ 0x14004FD44 (-Unlock@CChannel@DirectComposition@@QEAAXXZ.c)
 *     ?AcquireExclusive@CCriticalSection@DirectComposition@@QEAAXXZ @ 0x140050200 (-AcquireExclusive@CCriticalSection@DirectComposition@@QEAAXXZ.c)
 *     ?CreateInternalPrivateResource@CApplicationChannel@DirectComposition@@QEAAJIPEAPEAVCResourceMarshaler@2@@Z @ 0x140051528 (-CreateInternalPrivateResource@CApplicationChannel@DirectComposition@@QEAAJIPEAPEAVCResourceMars.c)
 */

__int64 __fastcall DirectComposition::CConnection::CreateSystemResource(
        DirectComposition::CConnection *this,
        unsigned int a2,
        struct ResourceHandle *a3)
{
  DirectComposition::CApplicationChannel *v6; // rcx
  int v7; // esi
  int v8; // ebx
  struct DirectComposition::CResourceMarshaler *v10; // [rsp+50h] [rbp+8h] BYREF

  DirectComposition::CCriticalSection::AcquireExclusive(*(PERESOURCE *)(*((_QWORD *)this + 19) + 32LL));
  v6 = (DirectComposition::CApplicationChannel *)*((_QWORD *)this + 19);
  v10 = 0LL;
  v7 = DirectComposition::CApplicationChannel::CreateInternalPrivateResource(v6, a2, &v10);
  if ( v7 >= 0 )
  {
    v8 = *((_DWORD *)v10 + 8);
    v7 = DirectComposition::CApplicationChannel::Commit(
           *((DirectComposition::CApplicationChannel **)this + 19),
           0LL,
           0,
           0,
           0LL,
           0LL,
           0LL,
           0);
    if ( v7 < 0 )
      DirectComposition::CSystemChannel::ReleaseSystemResource(
        *((DirectComposition::CApplicationChannel **)this + 19),
        v8);
    else
      *(_DWORD *)a3 = v8;
  }
  DirectComposition::CChannel::Unlock(*((PERESOURCE **)this + 19));
  return (unsigned int)v7;
}
