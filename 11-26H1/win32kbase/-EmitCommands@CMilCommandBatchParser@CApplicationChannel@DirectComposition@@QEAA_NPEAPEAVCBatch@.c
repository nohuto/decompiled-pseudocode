/*
 * XREFs of ?EmitCommands@CMilCommandBatchParser@CApplicationChannel@DirectComposition@@QEAA_NPEAPEAVCBatch@3@@Z @ 0x1400AEB78
 * Callers:
 *     ?BuildBatch@CApplicationChannel@DirectComposition@@IEAA_NPEAPEAVCBatch@2@0K_NAEAVCMilCommandBatchParser@12@PEAII@Z @ 0x1400AC320 (-BuildBatch@CApplicationChannel@DirectComposition@@IEAA_NPEAPEAVCBatch@2@0K_NAEAVCMilCommandBatc.c)
 * Callees:
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1400ADE60 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 *     ?GetBatchFragment@CApplicationChannel@DirectComposition@@QEAAPEAVCBatch@2@K_N00@Z @ 0x1400AF058 (-GetBatchFragment@CApplicationChannel@DirectComposition@@QEAAPEAVCBatch@2@K_N00@Z.c)
 *     ?AllocateNewFragment@CBatch@DirectComposition@@SA_NPEAPEAV12@PEA_K@Z @ 0x1400B0798 (-AllocateNewFragment@CBatch@DirectComposition@@SA_NPEAPEAV12@PEA_K@Z.c)
 *     memmove @ 0x14024C2C0 (memmove.c)
 */

bool __fastcall DirectComposition::CApplicationChannel::CMilCommandBatchParser::EmitCommands(
        DirectComposition::CApplicationChannel::CMilCommandBatchParser *this,
        struct DirectComposition::CBatch ***a2)
{
  unsigned int *v4; // rdi
  bool result; // al
  struct DirectComposition::CBatch **v6; // rcx
  __int64 v7; // r10
  struct DirectComposition::CBatch *v8; // rdx
  __int64 v9; // r9
  unsigned __int64 v10; // r8
  unsigned __int64 v11; // rsi
  __int64 v12; // r8
  void *v13; // rbp
  void *v14; // r8
  struct DirectComposition::CBatch **v15; // r14
  struct DirectComposition::CBatch *BatchFragment; // rax
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // rbp
  __int64 v20; // rcx
  bool v21; // zf
  _DWORD *v22; // rax
  __int64 *v23; // rax
  __int64 v24; // rcx
  __int64 v25; // rsi
  unsigned int v26; // ecx
  unsigned __int64 v27; // rbp
  size_t v28; // r14
  unsigned int v29; // eax
  __int64 v30; // rax
  _DWORD *v31; // rcx
  void *v32; // [rsp+60h] [rbp+8h] BYREF

  while ( 1 )
  {
    v4 = (unsigned int *)*((_QWORD *)this + 4);
    if ( !v4 )
      return 1;
    v6 = *a2;
    v7 = *((_QWORD *)this + 6);
    v8 = (*a2)[17];
    v9 = *((_QWORD *)v8 + 5);
    v10 = 4096 - v9;
    if ( v7 || (v11 = *v4, v11 > v10) )
    {
      v25 = (int)v4[1];
      v26 = DirectComposition::CApplicationChannel::CMilCommandBatchParser::s_pCommandSplitDataGenerated[2 * v25];
      if ( (_DWORD)v25 == 2 )
      {
        v26 = 32;
      }
      else if ( !v26 )
      {
        if ( *v4 > 0x200 )
          KeBugCheck(0xC0000099);
        goto LABEL_31;
      }
      if ( v10 >= (unsigned __int64)v26 + 12 )
      {
        if ( !v7 )
        {
          *((_QWORD *)this + 6) = v4 + 3;
          *((_DWORD *)this + 14) = ((unsigned __int64)*v4 - 12) / v26;
        }
        v27 = *((unsigned int *)this + 14);
        v32 = 0LL;
        if ( v27 >= (v10 - 12) / v26 )
          v27 = (v10 - 12) / v26;
        v28 = v26 * v27;
        v29 = v26 * v27 + 12;
        *v4 = v29;
        DirectComposition::CBatch::EnsureBatchBuffer(a2, v29, &v32);
        v30 = *((_QWORD *)this + 4);
        v31 = v32;
        *(_QWORD *)v32 = *(_QWORD *)v30;
        v31[2] = *(_DWORD *)(v30 + 8);
        memmove(v31 + 3, *((const void **)this + 6), v28);
        if ( v27 >= *((unsigned int *)this + 14) )
        {
          *((_QWORD *)this + 6) = 0LL;
          *((_DWORD *)this + 14) = 0;
          goto LABEL_11;
        }
        if ( (_DWORD)v25 != 2 )
          v4[1] = DirectComposition::CApplicationChannel::CMilCommandBatchParser::s_pCommandSplitDataGenerated[2 * v25 + 1];
        *((_QWORD *)this + 6) += v28;
        *((_DWORD *)this + 14) -= v27;
      }
LABEL_31:
      result = DirectComposition::CBatch::AllocateNewFragment((struct DirectComposition::CBatch **)a2, 0LL);
      if ( !result )
        return result;
    }
    else
    {
      v12 = *((_QWORD *)v8 + 7);
      v13 = 0LL;
      *((_QWORD *)v8 + 5) = v9 + v11;
      v14 = (void *)(v9 + v12);
      if ( v14 )
      {
        v6[19] = (struct DirectComposition::CBatch *)((char *)v6[19] + v11);
        v13 = v14;
      }
      else
      {
        v15 = *a2;
        BatchFragment = DirectComposition::CApplicationChannel::GetBatchFragment(
                          (*a2)[1],
                          *((_DWORD *)*a2 + 4),
                          (_BYTE)(*a2)[4] & 1,
                          1,
                          0);
        if ( BatchFragment )
        {
          *((_BYTE *)v15[17] + 64) = 0;
          *v15 = BatchFragment;
          *a2 = (struct DirectComposition::CBatch **)BatchFragment;
          v17 = *((_QWORD *)BatchFragment + 17);
          v18 = *(_QWORD *)(v17 + 40);
          if ( v11 > 4096 - v18
            || (v19 = *(_QWORD *)(v17 + 56), *(_QWORD *)(v17 + 40) = v18 + v11, (v13 = (void *)(v18 + v19)) == 0LL) )
          {
            KeBugCheck(0xC000000D);
          }
          *((_QWORD *)BatchFragment + 19) += v11;
        }
      }
      memmove(v13, *((const void **)this + 4), *v4);
LABEL_11:
      v20 = *((unsigned int *)this + 10);
      v21 = *((_DWORD *)this + 6) == (_DWORD)v20;
      *((_DWORD *)this + 6) -= v20;
      if ( !v21 )
      {
        v22 = (_DWORD *)(v20 + *((_QWORD *)this + 4));
        goto LABEL_13;
      }
      v23 = (__int64 *)*((_QWORD *)this + 2);
      v24 = *v23;
      *((_QWORD *)this + 2) = *v23;
      if ( v24 )
      {
        *((_DWORD *)this + 6) = *(_DWORD *)(v24 + 20);
        v22 = (_DWORD *)(v24 + 24);
LABEL_13:
        *((_QWORD *)this + 4) = v22;
        *((_DWORD *)this + 10) = *v22;
      }
      else
      {
        *((_QWORD *)this + 4) = 0LL;
        *((_DWORD *)this + 10) = 0;
      }
    }
  }
}
