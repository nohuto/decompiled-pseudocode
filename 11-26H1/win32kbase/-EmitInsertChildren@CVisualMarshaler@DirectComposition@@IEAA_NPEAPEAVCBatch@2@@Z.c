/*
 * XREFs of ?EmitInsertChildren@CVisualMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1400AF364
 * Callers:
 *     ?EmitUpdateCommands@CVisualMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1400FF990 (-EmitUpdateCommands@CVisualMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 * Callees:
 *     ?GetBatchFragment@CApplicationChannel@DirectComposition@@QEAAPEAVCBatch@2@K_N00@Z @ 0x1400AF058 (-GetBatchFragment@CApplicationChannel@DirectComposition@@QEAAPEAVCBatch@2@K_N00@Z.c)
 */

bool __fastcall DirectComposition::CVisualMarshaler::EmitInsertChildren(
        DirectComposition::CVisualMarshaler *this,
        struct DirectComposition::CBatch ***a2)
{
  __int64 v4; // rbx
  __int64 v5; // rsi
  struct DirectComposition::CBatch **v6; // rdx
  struct DirectComposition::CBatch *v7; // r8
  __int64 v8; // r9
  __int64 v9; // rcx
  __int64 v10; // rcx
  struct DirectComposition::CBatch **v11; // r14
  struct DirectComposition::CBatch *BatchFragment; // rax
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rcx
  int v16; // eax

  if ( (*((_DWORD *)this + 4) & 0x8000) != 0 )
  {
    v4 = *((_QWORD *)this + 22);
    v5 = 0LL;
    while ( v4 )
    {
      if ( (*(_DWORD *)(v4 + 16) & 0x10) == 0 )
      {
        v6 = *a2;
        v7 = (*a2)[17];
        v8 = *((_QWORD *)v7 + 5);
        if ( (unsigned __int64)(4096 - v8) < 0x18
          || (v9 = *((_QWORD *)v7 + 7), *((_QWORD *)v7 + 5) = v8 + 24, (v10 = v8 + v9) == 0) )
        {
          v11 = *a2;
          BatchFragment = DirectComposition::CApplicationChannel::GetBatchFragment(
                            (*a2)[1],
                            *((_DWORD *)*a2 + 4),
                            (_BYTE)(*a2)[4] & 1,
                            1,
                            0);
          v6 = (struct DirectComposition::CBatch **)BatchFragment;
          if ( !BatchFragment )
            return (char)BatchFragment;
          *((_BYTE *)v11[17] + 64) = 0;
          *v11 = BatchFragment;
          *a2 = (struct DirectComposition::CBatch **)BatchFragment;
          v13 = *((_QWORD *)BatchFragment + 17);
          v14 = *(_QWORD *)(v13 + 40);
          if ( (unsigned __int64)(4096 - v14) < 0x18
            || (v15 = *(_QWORD *)(v13 + 56), *(_QWORD *)(v13 + 40) = v14 + 24, (v10 = v14 + v15) == 0) )
          {
            KeBugCheck(0xC000000D);
          }
        }
        v6[19] = (struct DirectComposition::CBatch *)((char *)v6[19] + 24);
        *(_DWORD *)v10 = 24;
        *(_QWORD *)(v10 + 8) = 0LL;
        *(_QWORD *)(v10 + 16) = 0LL;
        *(_DWORD *)(v10 + 4) = 295;
        *(_DWORD *)(v10 + 8) = *((_DWORD *)this + 8);
        *(_DWORD *)(v10 + 12) = *(_DWORD *)(v4 + 32);
        if ( v5 )
          v16 = *(_DWORD *)(v5 + 32);
        else
          v16 = 0;
        *(_DWORD *)(v10 + 16) = v16;
        *(_BYTE *)(v10 + 20) = 1;
        *(_DWORD *)(v4 + 16) |= 0x10u;
      }
      v5 = v4;
      v4 = *(_QWORD *)(v4 + 184);
    }
    *((_DWORD *)this + 4) &= ~0x8000u;
  }
  LOBYTE(BatchFragment) = 1;
  return (char)BatchFragment;
}
