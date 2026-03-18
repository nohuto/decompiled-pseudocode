/*
 * XREFs of ?EmitSetReferenceInfo@CExpressionMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1400E0EB0
 * Callers:
 *     ?EmitUpdateCommands@CExpressionMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x140198850 (-EmitUpdateCommands@CExpressionMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 * Callees:
 *     ?GetBatchFragment@CApplicationChannel@DirectComposition@@QEAAPEAVCBatch@2@K_N00@Z @ 0x1400238D0 (-GetBatchFragment@CApplicationChannel@DirectComposition@@QEAAPEAVCBatch@2@K_N00@Z.c)
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x140023B74 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 */

bool __fastcall DirectComposition::CExpressionMarshaler::EmitSetReferenceInfo(
        DirectComposition::CExpressionMarshaler *this,
        struct DirectComposition::CBatch ***a2)
{
  struct DirectComposition::CBatch **v4; // rbx
  unsigned __int64 v5; // rdx
  unsigned __int64 v6; // rsi
  unsigned __int64 v7; // rdx
  char *v8; // rcx
  unsigned int v9; // r8d
  char *v10; // rdx
  __int64 v11; // rax
  __int64 v12; // rcx
  struct DirectComposition::CBatch *BatchFragment; // rax
  void *v15; // [rsp+40h] [rbp+8h] BYREF

  for ( ; *((_DWORD *)this + 49) < *((_DWORD *)this + 48); *((_DWORD *)this + 49) += v6 )
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
        return *((_DWORD *)this + 49) == *((_DWORD *)this + 48);
      *((_BYTE *)v4[17] + 64) = 0;
      *v4 = BatchFragment;
      *a2 = (struct DirectComposition::CBatch **)BatchFragment;
      v5 = 4096LL - *(_QWORD *)(*((_QWORD *)BatchFragment + 17) + 40LL);
    }
    v6 = (unsigned int)(*((_DWORD *)this + 48) - *((_DWORD *)this + 49));
    v7 = (v5 - 20) / 0x14;
    if ( v6 >= v7 )
      LODWORD(v6) = v7;
    v15 = 0LL;
    DirectComposition::CBatch::EnsureBatchBuffer(a2, (unsigned int)(20 * (v6 + 1)), &v15);
    v8 = (char *)v15;
    v9 = 0;
    *(_DWORD *)v15 = 20 * (v6 + 1);
    v10 = v8 + 20;
    *(_OWORD *)(v8 + 4) = 0LL;
    *((_DWORD *)v8 + 1) = 127;
    *((_DWORD *)v8 + 2) = *((_DWORD *)this + 8);
    *((_DWORD *)v8 + 3) = v6;
    for ( *((_DWORD *)v8 + 4) = *((_DWORD *)this + 48); v9 < (unsigned int)v6; v10 += 20 )
    {
      v11 = *((_QWORD *)this + 23);
      v12 = v9 + *((_DWORD *)this + 49);
      ++v9;
      v12 *= 5LL;
      *(_OWORD *)v10 = *(_OWORD *)(v11 + 4 * v12);
      *((_DWORD *)v10 + 4) = *(_DWORD *)(v11 + 4 * v12 + 16);
    }
  }
  return *((_DWORD *)this + 49) == *((_DWORD *)this + 48);
}
