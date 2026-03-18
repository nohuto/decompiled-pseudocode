/*
 * XREFs of ?BoostCompositorClock@CSystemChannel@DirectComposition@@QEAAJ_N@Z @ 0x14017D34C
 * Callers:
 *     ?BoostCompositorClock@CConnection@DirectComposition@@QEAAJH@Z @ 0x1400A97E0 (-BoostCompositorClock@CConnection@DirectComposition@@QEAAJH@Z.c)
 *     ?BeginFrame@CConnection@DirectComposition@@QEAAJAEBUCOMPOSITION_FRAME_INFO@@PEA_K@Z @ 0x1401B2890 (-BeginFrame@CConnection@DirectComposition@@QEAAJAEBUCOMPOSITION_FRAME_INFO@@PEA_K@Z.c)
 *     ?Connect@CConnection@DirectComposition@@QEAAJ_NPEAX@Z @ 0x140229D3C (-Connect@CConnection@DirectComposition@@QEAAJ_NPEAX@Z.c)
 * Callees:
 *     ?PreallocateNextBatch@CApplicationChannel@DirectComposition@@IEAAXK@Z @ 0x1400A6900 (-PreallocateNextBatch@CApplicationChannel@DirectComposition@@IEAAXK@Z.c)
 *     ?Commit@CApplicationChannel@DirectComposition@@QEAAJPEA_N_N1PEBUSynchronizationObject@2@PEAVCMilProtocolBlock@@PEAII@Z @ 0x1400A7400 (-Commit@CApplicationChannel@DirectComposition@@QEAAJPEA_N_N1PEBUSynchronizationObject@2@PEAVCMil.c)
 *     ?UseSpace@CBatchSharedMemoryPool@DirectComposition@@QEAAPEAX_K@Z @ 0x1400B0E70 (-UseSpace@CBatchSharedMemoryPool@DirectComposition@@QEAAPEAX_K@Z.c)
 */

__int64 __fastcall DirectComposition::CSystemChannel::BoostCompositorClock(
        DirectComposition::CSystemChannel *this,
        char a2)
{
  __int64 v4; // rax
  __int64 v5; // r10
  __int64 v6; // r11

  DirectComposition::CApplicationChannel::PreallocateNextBatch(this, 0);
  v4 = DirectComposition::CBatchSharedMemoryPool::UseSpace(
         *(DirectComposition::CBatchSharedMemoryPool **)(*((_QWORD *)this + 22) + 136LL),
         0xCuLL);
  if ( !v4 )
    return 3221225473LL;
  *(_QWORD *)(v5 + 152) += v6;
  *(_DWORD *)v4 = v6;
  *(_DWORD *)(v4 + 4) = 183;
  *(_BYTE *)(v4 + 8) = a2;
  return DirectComposition::CApplicationChannel::Commit(this, 0LL, 1, 0, 0LL, 0LL, 0LL, 0);
}
