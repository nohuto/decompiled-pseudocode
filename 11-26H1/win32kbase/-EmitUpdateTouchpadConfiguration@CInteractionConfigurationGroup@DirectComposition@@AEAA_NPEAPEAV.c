/*
 * XREFs of ?EmitUpdateTouchpadConfiguration@CInteractionConfigurationGroup@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1400B212C
 * Callers:
 *     ?EmitUpdateCommands@CInteractionConfigurationGroup@DirectComposition@@QEAA_NPEAPEAVCBatch@2@@Z @ 0x1400B1F1C (-EmitUpdateCommands@CInteractionConfigurationGroup@DirectComposition@@QEAA_NPEAPEAVCBatch@2@@Z.c)
 * Callees:
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1400ADE60 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 *     ?GetBatchFragment@CApplicationChannel@DirectComposition@@QEAAPEAVCBatch@2@K_N00@Z @ 0x1400AF058 (-GetBatchFragment@CApplicationChannel@DirectComposition@@QEAAPEAVCBatch@2@K_N00@Z.c)
 */

bool __fastcall DirectComposition::CInteractionConfigurationGroup::EmitUpdateTouchpadConfiguration(
        DirectComposition::CInteractionConfigurationGroup *this,
        struct DirectComposition::CBatch ***a2)
{
  _DWORD *v3; // rsi
  _DWORD *v5; // rbp
  _DWORD *v6; // r14
  struct DirectComposition::CBatch **v8; // rbx
  unsigned __int64 v9; // rcx
  _DWORD *v10; // r12
  unsigned __int64 v11; // r14
  _QWORD *v12; // rdx
  _QWORD *v13; // r8
  _DWORD *v14; // rax
  unsigned int v15; // edx
  __int64 v16; // rcx
  __int64 v17; // rax
  struct DirectComposition::CBatch *BatchFragment; // rax
  void *v19; // [rsp+70h] [rbp+8h] BYREF

  v3 = (_DWORD *)((char *)this + 48);
  v5 = (_DWORD *)((char *)this + 56);
  while ( 1 )
  {
    v6 = v5;
    if ( (*((_DWORD *)this + 3) & 8) == 0 && *v5 >= *v3 )
      break;
    v8 = *a2;
    v9 = 4096LL - *((_QWORD *)(*a2)[17] + 5);
    if ( v9 < 0x24 )
    {
      BatchFragment = DirectComposition::CApplicationChannel::GetBatchFragment(
                        v8[1],
                        *((_DWORD *)v8 + 4),
                        (_BYTE)v8[4] & 1,
                        1,
                        0);
      if ( !BatchFragment )
        return *v5 == *v3;
      v5 = (_DWORD *)((char *)this + 56);
      *((_BYTE *)v8[17] + 64) = 0;
      *v8 = BatchFragment;
      *a2 = (struct DirectComposition::CBatch **)BatchFragment;
      v9 = 4096LL - *(_QWORD *)(*((_QWORD *)BatchFragment + 17) + 40LL);
    }
    v19 = 0LL;
    v10 = v5;
    v5 = v6;
    v11 = (unsigned int)(*v3 - *v6);
    if ( v11 >= (v9 - 24) / 0xC )
      LODWORD(v11) = (v9 - 24) / 0xC;
    DirectComposition::CBatch::EnsureBatchBuffer(a2, (unsigned int)(12 * (v11 + 2)), &v19);
    v12 = v19;
    *(_DWORD *)v19 = 12 * (v11 + 2);
    v13 = v12 + 3;
    v12[1] = 0LL;
    v12[2] = 0LL;
    *((_DWORD *)v12 + 1) = 114;
    *((_DWORD *)v12 + 2) = *(_DWORD *)(*(_QWORD *)this + 32LL);
    *((_DWORD *)v12 + 3) = v11;
    *((_DWORD *)v12 + 4) = *((_DWORD *)this + 2);
    v14 = v10;
    *((_DWORD *)v12 + 5) = 2;
    if ( *v3 )
    {
      v15 = 0;
      if ( (_DWORD)v11 )
      {
        do
        {
          v16 = v15 + *v10;
          ++v15;
          v17 = *(_QWORD *)(*((_QWORD *)this + 5) + 8 * v16);
          *v13 = *(_QWORD *)v17;
          v13 = (_QWORD *)((char *)v13 + 12);
          *((_DWORD *)v13 - 1) = *(_DWORD *)(v17 + 8);
        }
        while ( v15 < (unsigned int)v11 );
        v14 = (_DWORD *)((char *)this + 56);
      }
    }
    *((_DWORD *)this + 3) &= ~8u;
    *v14 += v11;
  }
  return *v5 == *v3;
}
