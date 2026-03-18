/*
 * XREFs of ?EmitSetReferenceInfo@CExpressionMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1401209FC
 * Callers:
 *     ?EmitUpdateCommands@CExpressionMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x140120690 (-EmitUpdateCommands@CExpressionMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 * Callees:
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1400ADE60 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 *     ?GetBatchFragment@CApplicationChannel@DirectComposition@@QEAAPEAVCBatch@2@K_N00@Z @ 0x1400AF058 (-GetBatchFragment@CApplicationChannel@DirectComposition@@QEAAPEAVCBatch@2@K_N00@Z.c)
 */

bool __fastcall DirectComposition::CExpressionMarshaler::EmitSetReferenceInfo(
        DirectComposition::CExpressionMarshaler *this,
        struct DirectComposition::CBatch ***a2)
{
  struct DirectComposition::CBatch **v4; // rbx
  unsigned __int64 v5; // rcx
  unsigned __int64 v6; // rsi
  char *v7; // rcx
  unsigned int v8; // r8d
  char *v9; // rdx
  __int64 v10; // rax
  __int64 v11; // rcx
  struct DirectComposition::CBatch *BatchFragment; // rax
  void *v14; // [rsp+40h] [rbp+8h] BYREF

  for ( ; *((_DWORD *)this + 51) < *((_DWORD *)this + 50); *((_DWORD *)this + 51) += v6 )
  {
    v4 = *a2;
    v5 = 4096LL - *((_QWORD *)(*a2)[17] + 5);
    if ( v5 < 0x28 )
    {
      BatchFragment = DirectComposition::CApplicationChannel::GetBatchFragment(
                        v4[1],
                        *((_DWORD *)v4 + 4),
                        (_BYTE)v4[4] & 1,
                        1,
                        0);
      if ( !BatchFragment )
        return *((_DWORD *)this + 51) == *((_DWORD *)this + 50);
      *((_BYTE *)v4[17] + 64) = 0;
      *v4 = BatchFragment;
      *a2 = (struct DirectComposition::CBatch **)BatchFragment;
      v5 = 4096LL - *(_QWORD *)(*((_QWORD *)BatchFragment + 17) + 40LL);
    }
    v6 = (unsigned int)(*((_DWORD *)this + 50) - *((_DWORD *)this + 51));
    v14 = 0LL;
    if ( v6 >= (v5 - 20) / 0x14 )
      LODWORD(v6) = (v5 - 20) / 0x14;
    DirectComposition::CBatch::EnsureBatchBuffer(a2, (unsigned int)(20 * (v6 + 1)), &v14);
    v7 = (char *)v14;
    v8 = 0;
    *(_DWORD *)v14 = 20 * (v6 + 1);
    v9 = v7 + 20;
    *(_OWORD *)(v7 + 4) = 0LL;
    *((_DWORD *)v7 + 1) = 88;
    *((_DWORD *)v7 + 2) = *((_DWORD *)this + 8);
    *((_DWORD *)v7 + 3) = v6;
    for ( *((_DWORD *)v7 + 4) = *((_DWORD *)this + 50); v8 < (unsigned int)v6; v9 += 20 )
    {
      v10 = *((_QWORD *)this + 24);
      v11 = v8 + *((_DWORD *)this + 51);
      ++v8;
      v11 *= 5LL;
      *(_OWORD *)v9 = *(_OWORD *)(v10 + 4 * v11);
      *((_DWORD *)v9 + 4) = *(_DWORD *)(v10 + 4 * v11 + 16);
    }
  }
  return *((_DWORD *)this + 51) == *((_DWORD *)this + 50);
}
