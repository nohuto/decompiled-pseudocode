/*
 * XREFs of ?EmitSetManipulations@CInteractionTrackerMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x140146CC0
 * Callers:
 *     ?EmitUpdateCommands@CInteractionTrackerMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x140145F30 (-EmitUpdateCommands@CInteractionTrackerMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 * Callees:
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1400ADE60 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 *     ?GetBatchFragment@CApplicationChannel@DirectComposition@@QEAAPEAVCBatch@2@K_N00@Z @ 0x1400AF058 (-GetBatchFragment@CApplicationChannel@DirectComposition@@QEAAPEAVCBatch@2@K_N00@Z.c)
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
  unsigned __int64 v14; // rdx
  char *v15; // rcx
  unsigned int v16; // edx
  _DWORD *v17; // r8
  __int64 v18; // rax
  _QWORD *v19; // rcx
  struct DirectComposition::CBatch *BatchFragment; // rax
  void *v21; // [rsp+60h] [rbp+8h] BYREF

  v2 = 1;
  v3 = *((_DWORD *)this + 94);
  v4 = 1;
  if ( (*((_DWORD *)this + 4) & 0x1000) != 0 || v3 )
  {
    v7 = (_DWORD *)((char *)this + 380);
    for ( i = *((_DWORD *)this + 95) < v3; ; i = *v7 < *((_DWORD *)this + 94) )
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
        v9 = v7;
        if ( !BatchFragment )
          break;
        *((_BYTE *)v11[17] + 64) = 0;
        *v11 = BatchFragment;
        *a2 = (struct DirectComposition::CBatch **)BatchFragment;
        v12 = 4096LL - *(_QWORD *)(*((_QWORD *)BatchFragment + 17) + 40LL);
      }
      v13 = (unsigned int)(*((_DWORD *)this + 94) - *v7);
      v14 = (v12 - 16) >> 3;
      v21 = 0LL;
      if ( v13 >= v14 )
        LODWORD(v13) = v14;
      DirectComposition::CBatch::EnsureBatchBuffer(a2, (unsigned int)(8 * v13 + 16), &v21);
      v15 = (char *)v21;
      v16 = 0;
      *(_DWORD *)v21 = 8 * v13 + 16;
      v17 = v15 + 16;
      *((_QWORD *)v15 + 1) = 0LL;
      *((_DWORD *)v15 + 1) = 127;
      *((_DWORD *)v15 + 2) = *((_DWORD *)this + 8);
      for ( *((_DWORD *)v15 + 3) = v13; v16 < (unsigned int)v13; v17 += 2 )
      {
        *v17 = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 46) + 16LL * (v16 + *v7)) + 32LL);
        v18 = *(_QWORD *)(*((_QWORD *)this + 46) + 16LL * (v16 + *v7) + 8);
        if ( v18 )
          LODWORD(v18) = *(_DWORD *)(v18 + 32);
        v17[1] = v18;
        ++v16;
      }
      *v7 += v13;
    }
  }
  else
  {
    v21 = 0LL;
    if ( DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x10uLL, &v21) )
    {
      v19 = v21;
      *(_DWORD *)v21 = 16;
      v19[1] = 0LL;
      *((_DWORD *)v19 + 1) = 127;
      v19[1] = *((unsigned int *)this + 8);
    }
    else
    {
      v4 = 0;
    }
    v9 = (_DWORD *)((char *)this + 380);
  }
  if ( *v9 != *((_DWORD *)this + 94) || !v4 )
    return 0;
  return v2;
}
