/*
 * XREFs of ?BeginDuplicateResource@CSystemChannel@DirectComposition@@QEAAJVResourceHandle@@I@Z @ 0x1400A6500
 * Callers:
 *     ?EmitDuplicateHelper@CResourceMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@VResourceHandle@@@Z @ 0x1400A62C8 (-EmitDuplicateHelper@CResourceMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@VResourceHandle.c)
 * Callees:
 *     ?PreallocateNextBatch@CApplicationChannel@DirectComposition@@IEAAXK@Z @ 0x1400A6900 (-PreallocateNextBatch@CApplicationChannel@DirectComposition@@IEAAXK@Z.c)
 *     ?Commit@CApplicationChannel@DirectComposition@@QEAAJPEA_N_N1PEBUSynchronizationObject@2@PEAVCMilProtocolBlock@@PEAII@Z @ 0x1400A7400 (-Commit@CApplicationChannel@DirectComposition@@QEAAJPEA_N_N1PEBUSynchronizationObject@2@PEAVCMil.c)
 */

__int64 __fastcall DirectComposition::CSystemChannel::BeginDuplicateResource(
        DirectComposition::CApplicationChannel *a1,
        int a2,
        int a3)
{
  __int64 v6; // r10
  __int64 v7; // rdx
  __int64 v8; // r9
  __int64 v9; // rcx
  _DWORD *v10; // rcx

  DirectComposition::CApplicationChannel::PreallocateNextBatch(a1, 0);
  v6 = *((_QWORD *)a1 + 22);
  v7 = *(_QWORD *)(v6 + 136);
  v8 = *(_QWORD *)(v7 + 40);
  if ( (unsigned __int64)(4096 - v8) < 0x10 )
    return 3221225495LL;
  v9 = *(_QWORD *)(v7 + 56);
  *(_QWORD *)(v7 + 40) = v8 + 16;
  v10 = (_DWORD *)(v8 + v9);
  if ( !v10 )
    return 3221225495LL;
  *(_QWORD *)(v6 + 152) += 16LL;
  *v10 = 16;
  v10[2] = a2;
  v10[3] = a3;
  v10[1] = 35;
  return DirectComposition::CApplicationChannel::Commit(a1, 0LL, 1, 0, 0LL, 0LL, 0LL, 0);
}
