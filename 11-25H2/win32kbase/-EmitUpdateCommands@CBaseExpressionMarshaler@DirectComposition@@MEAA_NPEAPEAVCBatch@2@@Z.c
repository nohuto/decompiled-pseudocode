/*
 * XREFs of ?EmitUpdateCommands@CBaseExpressionMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x140025020
 * Callers:
 *     ?EmitUpdateCommands@CKeyframeAnimationMarshaler@DirectComposition@@UEAA_NPEAPEAVCBatch@2@@Z @ 0x140024AF0 (-EmitUpdateCommands@CKeyframeAnimationMarshaler@DirectComposition@@UEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitUpdateCommands@CConditionalExpressionMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x140115F50 (-EmitUpdateCommands@CConditionalExpressionMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitUpdateCommands@CNaturalAnimationMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x140157690 (-EmitUpdateCommands@CNaturalAnimationMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitUpdateCommands@CExpressionMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x140198850 (-EmitUpdateCommands@CExpressionMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitUpdateCommands@CInjectionAnimationMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x14023AA80 (-EmitUpdateCommands@CInjectionAnimationMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 * Callees:
 *     ?GetBatchFragment@CApplicationChannel@DirectComposition@@QEAAPEAVCBatch@2@K_N00@Z @ 0x1400238D0 (-GetBatchFragment@CApplicationChannel@DirectComposition@@QEAAPEAVCBatch@2@K_N00@Z.c)
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x140023B74 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 *     ?AllocateNewFragment@CBatch@DirectComposition@@SA_NPEAPEAV12@PEA_K@Z @ 0x140100A6C (-AllocateNewFragment@CBatch@DirectComposition@@SA_NPEAPEAV12@PEA_K@Z.c)
 */

char __fastcall DirectComposition::CBaseExpressionMarshaler::EmitUpdateCommands(
        DirectComposition::CBaseExpressionMarshaler *this,
        struct DirectComposition::CBatch ***a2)
{
  int v3; // ecx
  char v5; // r14
  _QWORD *v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rcx
  __int64 v10; // rcx
  struct DirectComposition::CBatch **v11; // rbx
  struct DirectComposition::CBatch *BatchFragment; // rax
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rcx
  _DWORD *v16; // rbx
  _DWORD *v17; // r15
  char *v18; // rax
  char *v19; // rdx
  __int64 v20; // rax
  __int64 v21; // rax
  int v22; // eax
  __int64 v23; // rax
  __int64 v24; // rax
  char *v25; // rcx
  unsigned int v26; // r15d
  __int64 v27; // r13
  __int64 v29; // rax
  char *v30; // rcx
  char *v31; // rcx
  void *v32; // rdx
  unsigned __int64 v33; // r12
  char *v34; // rcx
  unsigned int v35; // edx
  _DWORD *v36; // r8
  __int64 v37; // rax
  void *v38; // [rsp+60h] [rbp+30h] BYREF

  v3 = *((_DWORD *)this + 4);
  v5 = 1;
  if ( (v3 & 0x20) != 0 )
  {
    v6 = *a2;
    v7 = v6[17];
    v8 = *(_QWORD *)(v7 + 40);
    if ( (unsigned __int64)(4096 - v8) < 0x10
      || (v9 = *(_QWORD *)(v7 + 56), *(_QWORD *)(v7 + 40) = v8 + 16, (v10 = v8 + v9) == 0) )
    {
      v11 = *a2;
      BatchFragment = DirectComposition::CApplicationChannel::GetBatchFragment(
                        (*a2)[1],
                        *((_DWORD *)*a2 + 4),
                        (_BYTE)(*a2)[4] & 1,
                        1,
                        0);
      v6 = BatchFragment;
      if ( !BatchFragment )
        return 0;
      *((_BYTE *)v11[17] + 64) = 0;
      *v11 = BatchFragment;
      *a2 = (struct DirectComposition::CBatch **)BatchFragment;
      v13 = *((_QWORD *)BatchFragment + 17);
      v14 = *(_QWORD *)(v13 + 40);
      if ( (unsigned __int64)(4096 - v14) < 0x10
        || (v15 = *(_QWORD *)(v13 + 56), *(_QWORD *)(v13 + 40) = v14 + 16, (v10 = v14 + v15) == 0) )
      {
        KeBugCheck(0xC000000D);
      }
    }
    v6[19] += 16LL;
    v16 = (_DWORD *)((char *)this + 32);
    *(_DWORD *)v10 = 16;
    *(_QWORD *)(v10 + 8) = 0LL;
    *(_DWORD *)(v10 + 4) = 249;
    *(_DWORD *)(v10 + 8) = *((_DWORD *)this + 8);
    *(_DWORD *)(v10 + 12) = *((_DWORD *)this + 14);
    *((_DWORD *)this + 4) &= ~0x20u;
    v3 = *((_DWORD *)this + 4);
  }
  else
  {
    v16 = (_DWORD *)((char *)this + 32);
  }
  v17 = v16;
  if ( (v3 & 0x400) == 0 && (*((_BYTE *)this + 120) & 0x10) != 0 )
  {
    v38 = 0LL;
    if ( !DirectComposition::CBatch::EnsureBatchBuffer(a2, 0xCuLL, &v38) )
      return 0;
    v31 = (char *)v38;
    *(_DWORD *)v38 = 12;
    v17 = (_DWORD *)((char *)this + 32);
    *(_QWORD *)(v31 + 4) = 0LL;
    *((_DWORD *)v31 + 1) = 16;
    *((_DWORD *)v31 + 2) = *v16;
    *((_DWORD *)this + 4) |= 0x400u;
    v3 = *((_DWORD *)this + 4);
  }
  if ( (v3 & 0x40) == 0 )
  {
    v38 = 0LL;
    if ( !DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x2CuLL, &v38) )
      return 0;
    v18 = (char *)v38;
    *(_DWORD *)v38 = 44;
    v19 = v18 + 4;
    *(_OWORD *)(v18 + 4) = 0LL;
    *(_OWORD *)(v18 + 20) = 0LL;
    *(_QWORD *)(v18 + 36) = 0LL;
    *((_DWORD *)v18 + 1) = 17;
    *((_DWORD *)v18 + 2) = *v16;
    if ( (*((_BYTE *)this + 120) & 1) != 0 && (v20 = *((_QWORD *)this + 9)) != 0 && (v21 = *(_QWORD *)(v20 + 16)) != 0 )
    {
      *((_DWORD *)v19 + 3) = *(_DWORD *)(v21 + 32);
      v22 = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 9) + 16LL) + 36LL);
    }
    else
    {
      *((_DWORD *)v19 + 3) = 0;
      v22 = 0;
    }
    *((_DWORD *)v19 + 2) = v22;
    *((_DWORD *)v19 + 4) = *((_DWORD *)this + 20);
    *((_DWORD *)v19 + 9) = *((_DWORD *)this + 16);
    v23 = *((_QWORD *)this + 11);
    if ( v23 )
    {
      *((_WORD *)v19 + 16) = *(unsigned __int8 *)(v23 + 4);
      *((_WORD *)v19 + 17) = **((_WORD **)this + 11);
      v29 = *((_QWORD *)this + 11);
      if ( *(_DWORD *)v29 == 1 )
      {
        v24 = *(unsigned __int8 *)(v29 + 8);
        goto LABEL_19;
      }
      if ( *(_DWORD *)v29 == 2 )
      {
        v24 = *(_QWORD *)(v29 + 8);
        goto LABEL_19;
      }
    }
    else
    {
      *((_DWORD *)v19 + 8) = 0;
    }
    v24 = 0LL;
LABEL_19:
    *((_QWORD *)v19 + 3) = v24;
    v17 = (_DWORD *)((char *)this + 32);
    v3 = *((_DWORD *)this + 4) | 0x40;
    *((_DWORD *)this + 4) = v3;
  }
  if ( (v3 & 0x80u) == 0 )
  {
    v38 = 0LL;
    if ( !DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x10uLL, &v38) )
      return 0;
    v25 = (char *)v38;
    v17 = (_DWORD *)((char *)this + 32);
    *(_DWORD *)v38 = 16;
    *(_QWORD *)(v25 + 4) = 0LL;
    *((_DWORD *)v25 + 3) = 0;
    *((_DWORD *)v25 + 1) = 18;
    *((_DWORD *)v25 + 2) = *((_DWORD *)this + 8);
    *((_DWORD *)v25 + 3) = *((_DWORD *)this + 24);
    *((_DWORD *)this + 4) |= 0x80u;
    v3 = *((_DWORD *)this + 4);
  }
  if ( (v3 & 0x100) != 0 || (*((_BYTE *)this + 120) & 4) == 0 )
    goto LABEL_25;
  v38 = 0LL;
  if ( !DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x10uLL, &v38) )
    return 0;
  v30 = (char *)v38;
  *(_DWORD *)v38 = 16;
  *(_QWORD *)(v30 + 4) = 0LL;
  *((_DWORD *)v30 + 3) = 0;
  *((_DWORD *)v30 + 1) = 15;
  *((_DWORD *)v30 + 2) = *v17;
  v30[12] = (*((_BYTE *)this + 120) & 8) != 0;
  *((_DWORD *)this + 4) |= 0x100u;
LABEL_25:
  v26 = *((_DWORD *)this + 29);
  v27 = *((_QWORD *)this + 13);
  while ( *((_DWORD *)this + 28) < v26 )
  {
    v32 = (void *)(4096LL - *((_QWORD *)(*a2)[17] + 5));
    v38 = v32;
    if ( (unsigned __int64)v32 < 0x18 )
    {
      if ( !DirectComposition::CBatch::AllocateNewFragment(
              (struct DirectComposition::CBatch **)a2,
              (unsigned __int64 *)&v38) )
        break;
      v32 = v38;
    }
    v33 = v26 - *((_DWORD *)this + 28);
    if ( v33 >= ((unsigned __int64)v32 - 20) >> 2 )
      LODWORD(v33) = ((unsigned __int64)v32 - 20) >> 2;
    v38 = 0LL;
    DirectComposition::CBatch::EnsureBatchBuffer(a2, (unsigned int)(4 * v33 + 20), &v38);
    v34 = (char *)v38;
    v35 = 0;
    *(_DWORD *)v38 = 4 * v33 + 20;
    v36 = v34 + 20;
    *(_OWORD *)(v34 + 4) = 0LL;
    *((_DWORD *)v34 + 1) = 14;
    *((_DWORD *)v34 + 2) = *((_DWORD *)this + 8);
    for ( *((_DWORD *)v34 + 3) = v33; v35 < (unsigned int)v33; ++v36 )
    {
      v37 = v35 + *((_DWORD *)this + 28);
      ++v35;
      *v36 = *(_DWORD *)(*(_QWORD *)(v27 + 8 * v37) + 32LL);
    }
    *((_DWORD *)this + 28) += v33;
  }
  if ( *((_DWORD *)this + 28) != v26 )
    return 0;
  return v5;
}
