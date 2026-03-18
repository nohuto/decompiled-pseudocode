/*
 * XREFs of DCompositionEnableHwProtectionTeardown @ 0x140228790
 * Callers:
 *     xxxVideoPortCalloutThread @ 0x1401AA0D4 (xxxVideoPortCalloutThread.c)
 *     ?DxgkEngSetHwProtectionTeardownRecovery@@YAJPEAU_D3DKMT_SETHWPROTECTIONTEARDOWNRECOVERY@@@Z @ 0x1401F9BD0 (-DxgkEngSetHwProtectionTeardownRecovery@@YAJPEAU_D3DKMT_SETHWPROTECTIONTEARDOWNRECOVERY@@@Z.c)
 * Callees:
 *     ?Unlock@CChannel@DirectComposition@@QEAAXXZ @ 0x1400A6398 (-Unlock@CChannel@DirectComposition@@QEAAXXZ.c)
 *     ?AcquireExclusive@CCriticalSection@DirectComposition@@QEAAXXZ @ 0x1400A6750 (-AcquireExclusive@CCriticalSection@DirectComposition@@QEAAXXZ.c)
 *     ?Commit@CApplicationChannel@DirectComposition@@QEAAJPEA_N_N1PEBUSynchronizationObject@2@PEAVCMilProtocolBlock@@PEAII@Z @ 0x1400A7400 (-Commit@CApplicationChannel@DirectComposition@@QEAAJPEA_N_N1PEBUSynchronizationObject@2@PEAVCMil.c)
 *     ?Release@CConnection@DirectComposition@@QEAAKXZ @ 0x1400A9050 (-Release@CConnection@DirectComposition@@QEAAKXZ.c)
 *     ?GetDefaultConnection@CConnection@DirectComposition@@SAPEAV12@XZ @ 0x1400A96C0 (-GetDefaultConnection@CConnection@DirectComposition@@SAPEAV12@XZ.c)
 *     ?SetChannelIntegerProperty@CApplicationChannel@DirectComposition@@QEAAJUDCOMPOSITION_PROPERTY_ID@@_J@Z @ 0x1401B62B4 (-SetChannelIntegerProperty@CApplicationChannel@DirectComposition@@QEAAJUDCOMPOSITION_PROPERTY_ID.c)
 */

__int64 __fastcall DCompositionEnableHwProtectionTeardown(__int64 a1)
{
  int v1; // edi
  struct DirectComposition::CConnection *DefaultConnection; // rax
  __int64 *v3; // rbx
  int v4; // edi

  v1 = a1;
  DefaultConnection = DirectComposition::CConnection::GetDefaultConnection(a1);
  v3 = (__int64 *)DefaultConnection;
  if ( DefaultConnection )
  {
    DirectComposition::CCriticalSection::AcquireExclusive(*(PERESOURCE *)(*((_QWORD *)DefaultConnection + 19) + 32LL));
    v4 = DirectComposition::CApplicationChannel::SetChannelIntegerProperty(v3[19], 1u, v1 != 0);
    if ( v4 >= 0 )
      v4 = DirectComposition::CApplicationChannel::Commit(
             (DirectComposition::CApplicationChannel *)v3[19],
             0LL,
             0,
             0,
             0LL,
             0LL,
             0LL,
             0);
    DirectComposition::CChannel::Unlock((DirectComposition::CChannel *)v3[19]);
    DirectComposition::CConnection::Release((DirectComposition::CConnection *)v3);
  }
  else
  {
    return (unsigned int)-1073741790;
  }
  return (unsigned int)v4;
}
