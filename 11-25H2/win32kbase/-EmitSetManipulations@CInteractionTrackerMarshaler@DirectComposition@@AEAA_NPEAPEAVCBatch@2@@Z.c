/*
 * XREFs of ?EmitSetManipulations@CInteractionTrackerMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x140103820
 * Callers:
 *     ?EmitUpdateCommands@CInteractionTrackerMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x140102FA0 (-EmitUpdateCommands@CInteractionTrackerMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 * Callees:
 *     ?GetBatchFragment@CApplicationChannel@DirectComposition@@QEAAPEAVCBatch@2@K_N00@Z @ 0x1400238D0 (-GetBatchFragment@CApplicationChannel@DirectComposition@@QEAAPEAVCBatch@2@K_N00@Z.c)
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x140023B74 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 */

char __fastcall DirectComposition::CInteractionTrackerMarshaler::EmitSetManipulations(
        DirectComposition::CInteractionTrackerMarshaler *this,
        struct DirectComposition::CBatch ***a2)
{
  char v2; // bp
  unsigned int v3; // eax
  char v4; // r14
  _DWORD *v7; // rsi
  bool i; // cf
  _DWORD *v9; // rcx
  struct DirectComposition::CBatch **v11; // rbx
  unsigned __int64 v12; // rdx
  unsigned __int64 v13; // r12
  char *v14; // rcx
  unsigned int v15; // edx
  _DWORD *v16; // r8
  __int64 v17; // rax
  char *v18; // rcx
  struct DirectComposition::CBatch *BatchFragment; // rax
  void *v20; // [rsp+60h] [rbp+8h] BYREF

  v2 = 1;
  v3 = *((_DWORD *)this + 90);
  v4 = 1;
  if ( (*((_DWORD *)this + 4) & 0x800) != 0 || v3 )
  {
    v7 = (_DWORD *)((char *)this + 364);
    for ( i = *((_DWORD *)this + 91) < v3; ; i = *v7 < *((_DWORD *)this + 90) )
    {
      v9 = v7;
      if ( !i )
        break;
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
        {
          v9 = v7;
          break;
        }
        *((_BYTE *)v11[17] + 64) = 0;
        *v11 = BatchFragment;
        *a2 = (struct DirectComposition::CBatch **)BatchFragment;
        v12 = 4096LL - *(_QWORD *)(*((_QWORD *)BatchFragment + 17) + 40LL);
      }
      v13 = (unsigned int)(*((_DWORD *)this + 90) - *v7);
      if ( v13 >= (v12 - 16) >> 3 )
        LODWORD(v13) = (v12 - 16) >> 3;
      v20 = 0LL;
      DirectComposition::CBatch::EnsureBatchBuffer(a2, (unsigned int)(8 * v13 + 16), &v20);
      v14 = (char *)v20;
      v15 = 0;
      *(_DWORD *)v20 = 8 * v13 + 16;
      v16 = v14 + 16;
      *(_QWORD *)(v14 + 4) = 0LL;
      *((_DWORD *)v14 + 3) = 0;
      *((_DWORD *)v14 + 1) = 191;
      *((_DWORD *)v14 + 2) = *((_DWORD *)this + 8);
      for ( *((_DWORD *)v14 + 3) = v13; v15 < (unsigned int)v13; v16 += 2 )
      {
        *v16 = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 44) + 16LL * (v15 + *v7)) + 32LL);
        v17 = *(_QWORD *)(*((_QWORD *)this + 44) + 16LL * (v15 + *v7) + 8);
        if ( v17 )
          LODWORD(v17) = *(_DWORD *)(v17 + 32);
        v16[1] = v17;
        ++v15;
      }
      *v7 += v13;
    }
  }
  else
  {
    v20 = 0LL;
    if ( DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x10uLL, &v20) )
    {
      v18 = (char *)v20;
      *(_DWORD *)v20 = 16;
      *(_QWORD *)(v18 + 4) = 0LL;
      *((_DWORD *)v18 + 3) = 0;
      *((_DWORD *)v18 + 1) = 191;
      *((_QWORD *)v18 + 1) = *((unsigned int *)this + 8);
    }
    else
    {
      v4 = 0;
    }
    v9 = (_DWORD *)((char *)this + 364);
  }
  if ( *v9 != *((_DWORD *)this + 90) || !v4 )
    return 0;
  return v2;
}
