/*
 * XREFs of ?EmitPendingRemoves@CVisualMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x140021C54
 * Callers:
 *     ?EmitUpdateCommands@CVisualMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x140025730 (-EmitUpdateCommands@CVisualMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 * Callees:
 *     ?ReleaseResource@CApplicationChannel@DirectComposition@@QEAA_KPEAVCResourceMarshaler@2@@Z @ 0x140022208 (-ReleaseResource@CApplicationChannel@DirectComposition@@QEAA_KPEAVCResourceMarshaler@2@@Z.c)
 *     ?GetBatchFragment@CApplicationChannel@DirectComposition@@QEAAPEAVCBatch@2@K_N00@Z @ 0x1400238D0 (-GetBatchFragment@CApplicationChannel@DirectComposition@@QEAAPEAVCBatch@2@K_N00@Z.c)
 */

bool __fastcall DirectComposition::CVisualMarshaler::EmitPendingRemoves(
        DirectComposition::CVisualMarshaler *this,
        struct DirectComposition::CBatch **a2)
{
  DirectComposition::CApplicationChannel *v4; // rbp
  struct DirectComposition::CBatch *v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // rcx
  __int64 v9; // rcx
  struct DirectComposition::CBatch **v10; // rsi
  struct DirectComposition::CBatch *BatchFragment; // rax
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rcx
  __int64 v15; // rdx

  v4 = (DirectComposition::CApplicationChannel *)*((_QWORD *)*a2 + 1);
  while ( *((_QWORD *)this + 25) )
  {
    v5 = *a2;
    v6 = *((_QWORD *)*a2 + 17);
    v7 = *(_QWORD *)(v6 + 40);
    if ( (unsigned __int64)(4096 - v7) < 0x10
      || (v8 = *(_QWORD *)(v6 + 56), *(_QWORD *)(v6 + 40) = v7 + 16, (v9 = v7 + v8) == 0) )
    {
      v10 = (struct DirectComposition::CBatch **)*a2;
      BatchFragment = DirectComposition::CApplicationChannel::GetBatchFragment(
                        *((DirectComposition::CApplicationChannel **)*a2 + 1),
                        *((_DWORD *)*a2 + 4),
                        *((_BYTE *)*a2 + 32) & 1,
                        1,
                        0);
      v5 = BatchFragment;
      if ( !BatchFragment )
        return *((_QWORD *)this + 25) == 0LL;
      *((_BYTE *)v10[17] + 64) = 0;
      *v10 = BatchFragment;
      *a2 = BatchFragment;
      v12 = *((_QWORD *)BatchFragment + 17);
      v13 = *(_QWORD *)(v12 + 40);
      if ( (unsigned __int64)(4096 - v13) < 0x10
        || (v14 = *(_QWORD *)(v12 + 56), *(_QWORD *)(v12 + 40) = v13 + 16, (v9 = v13 + v14) == 0) )
      {
        KeBugCheck(0xC000000D);
      }
    }
    *((_QWORD *)v5 + 19) += 16LL;
    v15 = *((_QWORD *)this + 25);
    *((_QWORD *)this + 25) = *(_QWORD *)(v15 + 208);
    *(_QWORD *)(v15 + 208) = 0LL;
    *(_DWORD *)v9 = 16;
    *(_QWORD *)(v9 + 8) = 0LL;
    *(_DWORD *)(v9 + 4) = 383;
    *(_DWORD *)(v9 + 8) = *((_DWORD *)this + 8);
    *(_DWORD *)(v9 + 12) = *(_DWORD *)(v15 + 32);
    *(_DWORD *)(v15 + 16) &= ~8u;
    DirectComposition::CApplicationChannel::ReleaseResource(v4, (struct DirectComposition::CResourceMarshaler *)v15);
  }
  return *((_QWORD *)this + 25) == 0LL;
}
