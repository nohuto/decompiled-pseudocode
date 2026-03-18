/*
 * XREFs of ?BoostCompositorClock@CSystemChannel@DirectComposition@@QEAAJ_N@Z @ 0x140054F2C
 * Callers:
 *     ?BoostCompositorClock@CConnection@DirectComposition@@QEAAJH@Z @ 0x14004F120 (-BoostCompositorClock@CConnection@DirectComposition@@QEAAJH@Z.c)
 *     ?BeginFrame@CConnection@DirectComposition@@QEAAJAEBUCOMPOSITION_FRAME_INFO@@PEA_K@Z @ 0x140197B80 (-BeginFrame@CConnection@DirectComposition@@QEAAJAEBUCOMPOSITION_FRAME_INFO@@PEA_K@Z.c)
 *     ?Connect@CConnection@DirectComposition@@QEAAJ_NPEAX@Z @ 0x1402279DC (-Connect@CConnection@DirectComposition@@QEAAJ_NPEAX@Z.c)
 * Callees:
 *     ?Commit@CApplicationChannel@DirectComposition@@QEAAJPEA_N_N1PEBUSynchronizationObject@2@PEAVCMilProtocolBlock@@PEAII@Z @ 0x14004F890 (-Commit@CApplicationChannel@DirectComposition@@QEAAJPEA_N_N1PEBUSynchronizationObject@2@PEAVCMil.c)
 *     ?UseSpace@CBatchSharedMemoryPool@DirectComposition@@QEAAPEAX_K@Z @ 0x140056AE0 (-UseSpace@CBatchSharedMemoryPool@DirectComposition@@QEAAPEAX_K@Z.c)
 *     ?PreallocateNextBatch@CApplicationChannel@DirectComposition@@IEAAXK@Z @ 0x140228950 (-PreallocateNextBatch@CApplicationChannel@DirectComposition@@IEAAXK@Z.c)
 */

__int64 __fastcall DirectComposition::CSystemChannel::BoostCompositorClock(
        DirectComposition::CSystemChannel *this,
        char a2)
{
  _DWORD *v4; // rax
  __int64 v5; // r10
  __int64 v6; // r11

  DirectComposition::CApplicationChannel::PreallocateNextBatch(this, 0);
  v4 = DirectComposition::CBatchSharedMemoryPool::UseSpace(
         *(DirectComposition::CBatchSharedMemoryPool **)(*((_QWORD *)this + 22) + 136LL),
         0xCuLL);
  if ( !v4 )
    return 3221225473LL;
  *(_QWORD *)(v5 + 152) += v6;
  *v4 = v6;
  v4[1] = 253;
  *((_BYTE *)v4 + 8) = a2;
  return DirectComposition::CApplicationChannel::Commit(this, 0LL, 1, 0, 0LL, 0LL, 0LL, 0);
}
