/*
 * XREFs of ?PreallocateNextBatch@CApplicationChannel@DirectComposition@@IEAAXK@Z @ 0x1400A6900
 * Callers:
 *     ?BeginDuplicateResource@CSystemChannel@DirectComposition@@QEAAJVResourceHandle@@I@Z @ 0x1400A6500 (-BeginDuplicateResource@CSystemChannel@DirectComposition@@QEAAJVResourceHandle@@I@Z.c)
 *     NtDCompositionSynchronize @ 0x1400A65B0 (NtDCompositionSynchronize.c)
 *     ?Synchronize@CSystemChannel@DirectComposition@@QEAAJPEAX_N@Z @ 0x1400B1AC4 (-Synchronize@CSystemChannel@DirectComposition@@QEAAJPEAX_N@Z.c)
 *     ?EnableMMCSS@CSystemChannel@DirectComposition@@QEAAJ_N@Z @ 0x14012B944 (-EnableMMCSS@CSystemChannel@DirectComposition@@QEAAJ_N@Z.c)
 *     ?DesktopCaptureBits@CSystemChannel@DirectComposition@@QEAAJU_LUID@@HHIIW4DXGI_FORMAT@@PEAX2@Z @ 0x14017B3C4 (-DesktopCaptureBits@CSystemChannel@DirectComposition@@QEAAJU_LUID@@HHIIW4DXGI_FORMAT@@PEAX2@Z.c)
 *     ?BoostCompositorClock@CSystemChannel@DirectComposition@@QEAAJ_N@Z @ 0x14017D34C (-BoostCompositorClock@CSystemChannel@DirectComposition@@QEAAJ_N@Z.c)
 * Callees:
 *     ?GetBatchFragment@CApplicationChannel@DirectComposition@@QEAAPEAVCBatch@2@K_N00@Z @ 0x1400AF058 (-GetBatchFragment@CApplicationChannel@DirectComposition@@QEAAPEAVCBatch@2@K_N00@Z.c)
 */

void __fastcall DirectComposition::CApplicationChannel::PreallocateNextBatch(
        DirectComposition::CApplicationChannel *this,
        unsigned int a2)
{
  if ( !a2 )
    a2 = *((_DWORD *)this + 102) + 1;
  if ( !*((_QWORD *)this + 22) )
    *((_QWORD *)this + 22) = DirectComposition::CApplicationChannel::GetBatchFragment(this, a2, 0, 0, 1);
}
