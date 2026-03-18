/*
 * XREFs of DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_7cab402ceb8a6f13c948e41cb9fe91ad___lambda_d84e1ed4b8f486922f9c1a79d2402bc2___ @ 0x14015A614
 * Callers:
 *     ?EmitUpdateCommands@CSpriteShapeMarshaler@DirectComposition@@UEAA_NPEAPEAVCBatch@2@@Z @ 0x1400F54B0 (-EmitUpdateCommands@CSpriteShapeMarshaler@DirectComposition@@UEAA_NPEAPEAVCBatch@2@@Z.c)
 * Callees:
 *     ?GetBatchFragment@CApplicationChannel@DirectComposition@@QEAAPEAVCBatch@2@K_N00@Z @ 0x1400238D0 (-GetBatchFragment@CApplicationChannel@DirectComposition@@QEAAPEAVCBatch@2@K_N00@Z.c)
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x140023B74 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 */

char __fastcall DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_7cab402ceb8a6f13c948e41cb9fe91ad___lambda_d84e1ed4b8f486922f9c1a79d2402bc2___(
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
  struct DirectComposition::CBatch *BatchFragment; // rax
  unsigned __int64 v14; // r15
  char *v15; // rcx
  _DWORD *v16; // r8
  unsigned int v17; // r9d
  __int64 v18; // rdx
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
    v14 = a4 - *a3;
    if ( v14 >= (v12 - 20) >> 2 )
      LODWORD(v14) = (v12 - 20) >> 2;
    v20 = 0LL;
    DirectComposition::CBatch::EnsureBatchBuffer(a2, (unsigned int)(4 * v14 + 20), &v20);
    v15 = (char *)v20;
    *(_DWORD *)v20 = 4 * v14 + 20;
    v16 = v15 + 20;
    *(_OWORD *)(v15 + 4) = 0LL;
    *((_DWORD *)v15 + 1) = 352;
    *((_DWORD *)v15 + 2) = *(_DWORD *)(a1 + 32);
    *((_DWORD *)v15 + 4) = 4 * v14;
    v17 = 0;
    for ( v15[12] = *a3 != 0; v17 < (unsigned int)v14; ++v16 )
    {
      ++v17;
      v18 = *a3;
      *a3 = v18 + 1;
      *v16 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v6 + 88LL) + 4 * v18);
    }
  }
  while ( *a3 < a4 );
  LOBYTE(BatchFragment) = 1;
  return (char)BatchFragment;
}
