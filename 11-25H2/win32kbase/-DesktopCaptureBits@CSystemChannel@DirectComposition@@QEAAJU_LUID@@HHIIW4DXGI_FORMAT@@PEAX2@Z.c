/*
 * XREFs of ?DesktopCaptureBits@CSystemChannel@DirectComposition@@QEAAJU_LUID@@HHIIW4DXGI_FORMAT@@PEAX2@Z @ 0x1402290FC
 * Callers:
 *     ?DesktopCaptureBits@CConnection@DirectComposition@@QEAAJU_LUID@@HHIIW4DXGI_FORMAT@@PEAX2@Z @ 0x140227C5C (-DesktopCaptureBits@CConnection@DirectComposition@@QEAAJU_LUID@@HHIIW4DXGI_FORMAT@@PEAX2@Z.c)
 * Callees:
 *     ?Commit@CApplicationChannel@DirectComposition@@QEAAJPEA_N_N1PEBUSynchronizationObject@2@PEAVCMilProtocolBlock@@PEAII@Z @ 0x14004F890 (-Commit@CApplicationChannel@DirectComposition@@QEAAJPEA_N_N1PEBUSynchronizationObject@2@PEAVCMil.c)
 *     ?EnsurePayloadWritePointer@CBatch@DirectComposition@@QEAA_N_KPEAPEAX@Z @ 0x1400BFB34 (-EnsurePayloadWritePointer@CBatch@DirectComposition@@QEAA_N_KPEAPEAX@Z.c)
 *     ?PreallocateNextBatch@CApplicationChannel@DirectComposition@@IEAAXK@Z @ 0x140228950 (-PreallocateNextBatch@CApplicationChannel@DirectComposition@@IEAAXK@Z.c)
 */

__int64 __fastcall DirectComposition::CSystemChannel::DesktopCaptureBits(
        DirectComposition::CBatch **a1,
        __int64 a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        __int64 a8,
        __int64 a9)
{
  int v13; // edx
  char *v14; // rcx
  int v15; // eax
  void *v17; // [rsp+50h] [rbp+8h] BYREF

  v17 = 0LL;
  DirectComposition::CApplicationChannel::PreallocateNextBatch((DirectComposition::CApplicationChannel *)a1, 0);
  if ( !DirectComposition::CBatch::EnsurePayloadWritePointer(a1[22], 0x3CuLL, &v17) )
    return 3221225473LL;
  v14 = (char *)v17;
  v15 = a5;
  *(_DWORD *)v17 = v13;
  *(_QWORD *)(v14 + 36) = 0LL;
  *((_DWORD *)v14 + 6) = v15;
  *((_DWORD *)v14 + 7) = a6;
  *((_DWORD *)v14 + 8) = a7;
  *(_QWORD *)(v14 + 44) = a8;
  *(_QWORD *)(v14 + 52) = a9;
  *((_DWORD *)v14 + 1) = 254;
  *((_QWORD *)v14 + 1) = a2;
  *((_DWORD *)v14 + 4) = a3;
  *((_DWORD *)v14 + 5) = a4;
  return DirectComposition::CApplicationChannel::Commit(
           (DirectComposition::CApplicationChannel *)a1,
           0LL,
           1,
           0,
           0LL,
           0LL,
           0LL,
           0);
}
