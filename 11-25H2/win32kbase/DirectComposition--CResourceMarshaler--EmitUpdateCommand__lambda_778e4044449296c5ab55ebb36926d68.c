/*
 * XREFs of DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_778e4044449296c5ab55ebb36926d680___lambda_f91f4cf09ba95a878c6ebb7809dc9a5a___ @ 0x140100444
 * Callers:
 *     ?EmitShapes@CShapeVisualMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1401003EC (-EmitShapes@CShapeVisualMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z.c)
 * Callees:
 *     ?GetBatchFragment@CApplicationChannel@DirectComposition@@QEAAPEAVCBatch@2@K_N00@Z @ 0x1400238D0 (-GetBatchFragment@CApplicationChannel@DirectComposition@@QEAAPEAVCBatch@2@K_N00@Z.c)
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x140023B74 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 */

char __fastcall DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_778e4044449296c5ab55ebb36926d680___lambda_f91f4cf09ba95a878c6ebb7809dc9a5a___(
        __int64 a1,
        struct DirectComposition::CBatch ***a2,
        unsigned int *a3,
        unsigned int a4,
        __int64 a5,
        __int64 a6)
{
  __int64 v6; // r12
  struct DirectComposition::CBatch **v11; // rbx
  unsigned __int64 v12; // r8
  unsigned __int64 v13; // r15
  char *v14; // rcx
  _DWORD *v15; // r8
  unsigned int v16; // r9d
  __int64 v17; // rdx
  struct DirectComposition::CBatch *BatchFragment; // rax
  void *v20; // [rsp+68h] [rbp+10h] BYREF

  v6 = a6;
  do
  {
    v11 = *a2;
    v12 = 4096LL - *((_QWORD *)(*a2)[17] + 5);
    if ( v12 < 0x18 )
    {
      BatchFragment = DirectComposition::CApplicationChannel::GetBatchFragment(
                        v11[1],
                        *((_DWORD *)v11 + 4),
                        (_BYTE)v11[4] & 1,
                        1,
                        0);
      if ( !BatchFragment )
        return (char)BatchFragment;
      *((_BYTE *)v11[17] + 64) = 0;
      *v11 = BatchFragment;
      *a2 = (struct DirectComposition::CBatch **)BatchFragment;
      v12 = 4096LL - *(_QWORD *)(*((_QWORD *)BatchFragment + 17) + 40LL);
    }
    v13 = a4 - *a3;
    if ( v13 >= (v12 - 20) >> 2 )
      LODWORD(v13) = (v12 - 20) >> 2;
    v20 = 0LL;
    DirectComposition::CBatch::EnsureBatchBuffer(a2, (unsigned int)(4 * v13 + 20), &v20);
    v14 = (char *)v20;
    *(_DWORD *)v20 = 4 * v13 + 20;
    v15 = v14 + 20;
    *(_OWORD *)(v14 + 4) = 0LL;
    *((_DWORD *)v14 + 1) = 341;
    *((_DWORD *)v14 + 2) = *(_DWORD *)(a1 + 32);
    *((_DWORD *)v14 + 4) = 4 * v13;
    v16 = 0;
    for ( v14[12] = *a3 != 0; v16 < (unsigned int)v13; ++v15 )
    {
      ++v16;
      v17 = *a3;
      *a3 = v17 + 1;
      *v15 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v6 + 376LL) + 8 * v17) + 32LL);
    }
  }
  while ( *a3 < a4 );
  LOBYTE(BatchFragment) = 1;
  return (char)BatchFragment;
}
