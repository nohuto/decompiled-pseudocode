/*
 * XREFs of ?DesktopCaptureBits@CSystemChannel@DirectComposition@@QEAAJU_LUID@@HHIIW4DXGI_FORMAT@@PEAX2@Z @ 0x14017B3C4
 * Callers:
 *     ?DesktopCaptureBits@CConnection@DirectComposition@@QEAAJU_LUID@@HHIIW4DXGI_FORMAT@@PEAX2@Z @ 0x140229FC0 (-DesktopCaptureBits@CConnection@DirectComposition@@QEAAJU_LUID@@HHIIW4DXGI_FORMAT@@PEAX2@Z.c)
 * Callees:
 *     ?PreallocateNextBatch@CApplicationChannel@DirectComposition@@IEAAXK@Z @ 0x1400A6900 (-PreallocateNextBatch@CApplicationChannel@DirectComposition@@IEAAXK@Z.c)
 *     ?Commit@CApplicationChannel@DirectComposition@@QEAAJPEA_N_N1PEBUSynchronizationObject@2@PEAVCMilProtocolBlock@@PEAII@Z @ 0x1400A7400 (-Commit@CApplicationChannel@DirectComposition@@QEAAJPEA_N_N1PEBUSynchronizationObject@2@PEAVCMil.c)
 *     ?UseSpace@CBatchSharedMemoryPool@DirectComposition@@QEAAPEAX_K@Z @ 0x1400B0E70 (-UseSpace@CBatchSharedMemoryPool@DirectComposition@@QEAAPEAX_K@Z.c)
 */

__int64 __fastcall DirectComposition::CSystemChannel::DesktopCaptureBits(
        DirectComposition::CApplicationChannel *a1,
        __int64 a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        __int64 a8,
        __int64 a9)
{
  __int64 v13; // rax
  __int64 v14; // r11

  DirectComposition::CApplicationChannel::PreallocateNextBatch(a1, 0);
  v13 = DirectComposition::CBatchSharedMemoryPool::UseSpace(
          *(DirectComposition::CBatchSharedMemoryPool **)(*((_QWORD *)a1 + 22) + 136LL),
          0x3CuLL);
  if ( !v13 )
    return 3221225473LL;
  *(_QWORD *)(v14 + 152) += 60LL;
  *(_DWORD *)v13 = 60;
  *(_DWORD *)(v13 + 24) = a5;
  *(_QWORD *)(v13 + 8) = a2;
  *(_DWORD *)(v13 + 16) = a3;
  *(_DWORD *)(v13 + 20) = a4;
  *(_DWORD *)(v13 + 4) = 184;
  *(_DWORD *)(v13 + 28) = a6;
  *(_DWORD *)(v13 + 32) = a7;
  *(_QWORD *)(v13 + 44) = a8;
  *(_QWORD *)(v13 + 52) = a9;
  *(_QWORD *)(v13 + 36) = 0LL;
  return DirectComposition::CApplicationChannel::Commit(a1, 0LL, 1, 0, 0LL, 0LL, 0LL, 0);
}
