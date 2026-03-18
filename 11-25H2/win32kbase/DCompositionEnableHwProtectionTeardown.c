/*
 * XREFs of DCompositionEnableHwProtectionTeardown @ 0x140226544
 * Callers:
 *     xxxVideoPortCalloutThread @ 0x1401B2AE8 (xxxVideoPortCalloutThread.c)
 *     ?DxgkEngSetHwProtectionTeardownRecovery@@YAJPEAU_D3DKMT_SETHWPROTECTIONTEARDOWNRECOVERY@@@Z @ 0x1401D0540 (-DxgkEngSetHwProtectionTeardownRecovery@@YAJPEAU_D3DKMT_SETHWPROTECTIONTEARDOWNRECOVERY@@@Z.c)
 * Callees:
 *     ?Release@CConnection@DirectComposition@@QEAAKXZ @ 0x14004F5D4 (-Release@CConnection@DirectComposition@@QEAAKXZ.c)
 *     ?GetDefaultConnection@CConnection@DirectComposition@@SAPEAV12@XZ @ 0x14004F604 (-GetDefaultConnection@CConnection@DirectComposition@@SAPEAV12@XZ.c)
 *     ?Commit@CApplicationChannel@DirectComposition@@QEAAJPEA_N_N1PEBUSynchronizationObject@2@PEAVCMilProtocolBlock@@PEAII@Z @ 0x14004F890 (-Commit@CApplicationChannel@DirectComposition@@QEAAJPEA_N_N1PEBUSynchronizationObject@2@PEAVCMil.c)
 *     ?Unlock@CChannel@DirectComposition@@QEAAXXZ @ 0x14004FD44 (-Unlock@CChannel@DirectComposition@@QEAAXXZ.c)
 *     ?AcquireExclusive@CCriticalSection@DirectComposition@@QEAAXXZ @ 0x140050200 (-AcquireExclusive@CCriticalSection@DirectComposition@@QEAAXXZ.c)
 *     ?SetChannelIntegerProperty@CApplicationChannel@DirectComposition@@QEAAJI_J@Z @ 0x140116538 (-SetChannelIntegerProperty@CApplicationChannel@DirectComposition@@QEAAJI_J@Z.c)
 */

__int64 __fastcall DCompositionEnableHwProtectionTeardown(int a1)
{
  struct DirectComposition::CConnection *DefaultConnection; // rax
  DirectComposition::CApplicationChannel **v3; // rbx
  int v4; // edi
  unsigned int v5; // edx

  DefaultConnection = DirectComposition::CConnection::GetDefaultConnection();
  v3 = (DirectComposition::CApplicationChannel **)DefaultConnection;
  if ( DefaultConnection )
  {
    DirectComposition::CCriticalSection::AcquireExclusive(*(PERESOURCE *)(*((_QWORD *)DefaultConnection + 19) + 32LL));
    v4 = DirectComposition::CApplicationChannel::SetChannelIntegerProperty(v3[19], 1u, a1 != 0);
    if ( v4 >= 0 )
      v4 = DirectComposition::CApplicationChannel::Commit(v3[19], 0LL, 0, 0, 0LL, 0LL, 0LL, 0);
    DirectComposition::CChannel::Unlock((PERESOURCE *)v3[19]);
    DirectComposition::CConnection::Release((DirectComposition::CConnection *)v3, v5);
  }
  else
  {
    return (unsigned int)-1073741790;
  }
  return (unsigned int)v4;
}
