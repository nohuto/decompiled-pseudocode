/*
 * XREFs of ?EmitAddConditionAnimationResources@CConditionalExpressionMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x140116038
 * Callers:
 *     ?EmitUpdateCommands@CConditionalExpressionMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x140115F50 (-EmitUpdateCommands@CConditionalExpressionMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 * Callees:
 *     ?GetBatchFragment@CApplicationChannel@DirectComposition@@QEAAPEAVCBatch@2@K_N00@Z @ 0x1400238D0 (-GetBatchFragment@CApplicationChannel@DirectComposition@@QEAAPEAVCBatch@2@K_N00@Z.c)
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x140023B74 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 */

bool __fastcall DirectComposition::CConditionalExpressionMarshaler::EmitAddConditionAnimationResources(
        DirectComposition::CConditionalExpressionMarshaler *this,
        struct DirectComposition::CBatch ***a2)
{
  struct DirectComposition::CBatch **v4; // rbx
  unsigned __int64 v5; // rdx
  unsigned int v6; // esi
  char *v7; // rcx
  unsigned int v8; // r9d
  _DWORD *v9; // r8
  int v10; // edx
  struct DirectComposition::CBatch *BatchFragment; // rax
  void *v13; // [rsp+40h] [rbp+8h] BYREF

  for ( ; *((_DWORD *)this + 35) < *((_DWORD *)this + 34); *((_DWORD *)this + 35) += 2 * v6 )
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
        return *((_DWORD *)this + 35) == *((_DWORD *)this + 34);
      *((_BYTE *)v4[17] + 64) = 0;
      *v4 = BatchFragment;
      *a2 = (struct DirectComposition::CBatch **)BatchFragment;
      v5 = 4096LL - *(_QWORD *)(*((_QWORD *)BatchFragment + 17) + 40LL);
    }
    v6 = (unsigned int)(*((_DWORD *)this + 34) - *((_DWORD *)this + 35)) >> 1;
    if ( (unsigned __int64)(unsigned int)(*((_DWORD *)this + 34) - *((_DWORD *)this + 35)) >> 1 >= (v5 - 16) >> 3 )
      v6 = (v5 - 16) >> 3;
    v13 = 0LL;
    DirectComposition::CBatch::EnsureBatchBuffer(a2, 8 * v6 + 16, &v13);
    v7 = (char *)v13;
    v8 = 0;
    *(_DWORD *)v13 = 8 * v6 + 16;
    v9 = v7 + 16;
    *(_QWORD *)(v7 + 4) = 0LL;
    *((_DWORD *)v7 + 3) = 0;
    *((_DWORD *)v7 + 1) = 104;
    *((_DWORD *)v7 + 2) = *((_DWORD *)this + 8);
    for ( *((_DWORD *)v7 + 3) = v6;
          v8 < v6;
          *(v9 - 1) = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 16)
                                            + 8LL * (unsigned int)(v10 + *((_DWORD *)this + 35) + 1))
                                + 32LL) )
    {
      v10 = 2 * v8++;
      *v9 = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 16) + 8LL * (unsigned int)(v10 + *((_DWORD *)this + 35))) + 32LL);
      v9 += 2;
    }
  }
  return *((_DWORD *)this + 35) == *((_DWORD *)this + 34);
}
