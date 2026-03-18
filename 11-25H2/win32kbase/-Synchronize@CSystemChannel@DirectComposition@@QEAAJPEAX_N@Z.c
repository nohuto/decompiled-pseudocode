/*
 * XREFs of ?Synchronize@CSystemChannel@DirectComposition@@QEAAJPEAX_N@Z @ 0x140056904
 * Callers:
 *     ?Synchronize@CConnection@DirectComposition@@QEAAJPEAX_N@Z @ 0x1400568A0 (-Synchronize@CConnection@DirectComposition@@QEAAJPEAX_N@Z.c)
 * Callees:
 *     ?Commit@CApplicationChannel@DirectComposition@@QEAAJPEA_N_N1PEBUSynchronizationObject@2@PEAVCMilProtocolBlock@@PEAII@Z @ 0x14004F890 (-Commit@CApplicationChannel@DirectComposition@@QEAAJPEA_N_N1PEBUSynchronizationObject@2@PEAVCMil.c)
 *     ?UseSpace@CBatchSharedMemoryPool@DirectComposition@@QEAAPEAX_K@Z @ 0x140056AE0 (-UseSpace@CBatchSharedMemoryPool@DirectComposition@@QEAAPEAX_K@Z.c)
 *     ?PreallocateNextBatch@CApplicationChannel@DirectComposition@@IEAAXK@Z @ 0x140228950 (-PreallocateNextBatch@CApplicationChannel@DirectComposition@@IEAAXK@Z.c)
 */

__int64 __fastcall DirectComposition::CSystemChannel::Synchronize(
        DirectComposition::CSystemChannel *this,
        void *a2,
        char a3)
{
  char *v6; // rax
  __int64 v7; // r10
  __int64 v8; // r11

  DirectComposition::CApplicationChannel::PreallocateNextBatch(this, 0);
  v6 = (char *)DirectComposition::CBatchSharedMemoryPool::UseSpace(
                 *(DirectComposition::CBatchSharedMemoryPool **)(*((_QWORD *)this + 22) + 136LL),
                 0x1CuLL);
  if ( !v6 )
    return 3221225473LL;
  *(_QWORD *)(v7 + 152) += v8;
  *(_DWORD *)v6 = v8;
  *((_DWORD *)v6 + 1) = 268;
  *(_QWORD *)(v6 + 12) = a2;
  v6[20] = a3;
  return DirectComposition::CApplicationChannel::Commit(this, 0LL, 1, 0, 0LL, 0LL, 0LL, 0);
}
