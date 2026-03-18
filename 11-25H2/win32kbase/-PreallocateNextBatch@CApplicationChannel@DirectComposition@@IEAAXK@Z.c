/*
 * XREFs of ?PreallocateNextBatch@CApplicationChannel@DirectComposition@@IEAAXK@Z @ 0x140228950
 * Callers:
 *     ?Commit@CApplicationChannel@DirectComposition@@QEAAJPEA_N_N1PEBUSynchronizationObject@2@PEAVCMilProtocolBlock@@PEAII@Z @ 0x14004F890 (-Commit@CApplicationChannel@DirectComposition@@QEAAJPEA_N_N1PEBUSynchronizationObject@2@PEAVCMil.c)
 *     ?BeginDuplicateResource@CSystemChannel@DirectComposition@@QEAAJVResourceHandle@@I@Z @ 0x14004FEB8 (-BeginDuplicateResource@CSystemChannel@DirectComposition@@QEAAJVResourceHandle@@I@Z.c)
 *     ?BoostCompositorClock@CSystemChannel@DirectComposition@@QEAAJ_N@Z @ 0x140054F2C (-BoostCompositorClock@CSystemChannel@DirectComposition@@QEAAJ_N@Z.c)
 *     ?Synchronize@CSystemChannel@DirectComposition@@QEAAJPEAX_N@Z @ 0x140056904 (-Synchronize@CSystemChannel@DirectComposition@@QEAAJPEAX_N@Z.c)
 *     ?EnableMMCSS@CSystemChannel@DirectComposition@@QEAAJ_N@Z @ 0x140057CC4 (-EnableMMCSS@CSystemChannel@DirectComposition@@QEAAJ_N@Z.c)
 *     NtDCompositionSynchronize @ 0x1400EE890 (NtDCompositionSynchronize.c)
 *     ?DesktopCaptureBits@CSystemChannel@DirectComposition@@QEAAJU_LUID@@HHIIW4DXGI_FORMAT@@PEAX2@Z @ 0x1402290FC (-DesktopCaptureBits@CSystemChannel@DirectComposition@@QEAAJU_LUID@@HHIIW4DXGI_FORMAT@@PEAX2@Z.c)
 * Callees:
 *     ?GetBatchFragment@CApplicationChannel@DirectComposition@@QEAAPEAVCBatch@2@K_N00@Z @ 0x1400238D0 (-GetBatchFragment@CApplicationChannel@DirectComposition@@QEAAPEAVCBatch@2@K_N00@Z.c)
 *     Feature_EffectHash__private_IsEnabledDeviceUsageNoInline @ 0x1402267A0 (Feature_EffectHash__private_IsEnabledDeviceUsageNoInline.c)
 */

void __fastcall DirectComposition::CApplicationChannel::PreallocateNextBatch(
        DirectComposition::CApplicationChannel *this,
        int a2)
{
  if ( !(unsigned int)Feature_EffectHash__private_IsEnabledDeviceUsageNoInline() || !a2 )
    a2 = *((_DWORD *)this + 102) + 1;
  if ( !*((_QWORD *)this + 22) )
    *((_QWORD *)this + 22) = DirectComposition::CApplicationChannel::GetBatchFragment(this, a2, 0, 0, 1);
}
