/*
 * XREFs of ?EmitSetSources@CExpressionMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1401207CC
 * Callers:
 *     ?EmitUpdateCommands@CExpressionMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x140120690 (-EmitUpdateCommands@CExpressionMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 * Callees:
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1400ADE60 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 *     ?GetBatchFragment@CApplicationChannel@DirectComposition@@QEAAPEAVCBatch@2@K_N00@Z @ 0x1400AF058 (-GetBatchFragment@CApplicationChannel@DirectComposition@@QEAAPEAVCBatch@2@K_N00@Z.c)
 */

bool __fastcall DirectComposition::CExpressionMarshaler::EmitSetSources(
        DirectComposition::CExpressionMarshaler *this,
        struct DirectComposition::CBatch ***a2)
{
  struct DirectComposition::CBatch **v4; // rbx
  unsigned __int64 v5; // rdx
  unsigned __int64 v6; // rsi
  unsigned __int64 v7; // rdx
  char *v8; // rcx
  unsigned int v9; // edx
  _DWORD *v10; // r8
  int v11; // r9d
  __int64 v12; // rax
  struct DirectComposition::CBatch *BatchFragment; // rax
  void *v15; // [rsp+40h] [rbp+8h] BYREF

  for ( ; *((_DWORD *)this + 47) < *((_DWORD *)this + 46); *((_DWORD *)this + 47) += v6 )
  {
    v4 = *a2;
    v5 = 4096LL - *((_QWORD *)(*a2)[17] + 5);
    if ( v5 < 0x18 )
    {
      BatchFragment = DirectComposition::CApplicationChannel::GetBatchFragment(
                        v4[1],
                        *((_DWORD *)v4 + 4),
                        (_BYTE)v4[4] & 1,
                        1,
                        0);
      if ( !BatchFragment )
        return *((_DWORD *)this + 47) == *((_DWORD *)this + 46);
      *((_BYTE *)v4[17] + 64) = 0;
      *v4 = BatchFragment;
      *a2 = (struct DirectComposition::CBatch **)BatchFragment;
      v5 = 4096LL - *(_QWORD *)(*((_QWORD *)BatchFragment + 17) + 40LL);
    }
    v6 = (unsigned int)(*((_DWORD *)this + 46) - *((_DWORD *)this + 47));
    v7 = (v5 - 20) >> 2;
    v15 = 0LL;
    if ( v6 >= v7 )
      LODWORD(v6) = v7;
    DirectComposition::CBatch::EnsureBatchBuffer(a2, (unsigned int)(4 * v6 + 20), &v15);
    v8 = (char *)v15;
    v9 = 0;
    *(_DWORD *)v15 = 4 * v6 + 20;
    v10 = v8 + 20;
    *(_OWORD *)(v8 + 4) = 0LL;
    *((_DWORD *)v8 + 1) = 89;
    *((_DWORD *)v8 + 2) = *((_DWORD *)this + 8);
    *((_DWORD *)v8 + 3) = v6;
    for ( *((_DWORD *)v8 + 4) = *((_DWORD *)this + 46); v9 < (unsigned int)v6; ++v10 )
    {
      v11 = 0;
      v12 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 22) + 8LL * (v9 + *((_DWORD *)this + 47))) + 16LL);
      if ( v12 )
        v11 = *(_DWORD *)(v12 + 32);
      *v10 = v11;
      ++v9;
    }
  }
  return *((_DWORD *)this + 47) == *((_DWORD *)this + 46);
}
