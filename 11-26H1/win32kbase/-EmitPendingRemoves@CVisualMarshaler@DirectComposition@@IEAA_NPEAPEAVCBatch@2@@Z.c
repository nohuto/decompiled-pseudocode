/*
 * XREFs of ?EmitPendingRemoves@CVisualMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1400AE7A8
 * Callers:
 *     ?EmitUpdateCommands@CVisualMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1400FF990 (-EmitUpdateCommands@CVisualMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 * Callees:
 *     ?ReleaseResource@CApplicationChannel@DirectComposition@@QEAA_KPEAVCResourceMarshaler@2@@Z @ 0x1400AD868 (-ReleaseResource@CApplicationChannel@DirectComposition@@QEAA_KPEAVCResourceMarshaler@2@@Z.c)
 *     ?GetBatchFragment@CApplicationChannel@DirectComposition@@QEAAPEAVCBatch@2@K_N00@Z @ 0x1400AF058 (-GetBatchFragment@CApplicationChannel@DirectComposition@@QEAAPEAVCBatch@2@K_N00@Z.c)
 */

bool __fastcall DirectComposition::CVisualMarshaler::EmitPendingRemoves(
        DirectComposition::CVisualMarshaler *this,
        struct DirectComposition::CBatch ***a2)
{
  struct _RTL_GENERIC_TABLE *v4; // rbp
  struct DirectComposition::CBatch **v5; // rbx
  struct DirectComposition::CBatch *v6; // rdx
  __int64 v7; // r8
  __int64 v8; // rcx
  __int64 v9; // rcx
  struct DirectComposition::CBatch *BatchFragment; // rax
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rcx
  __int64 v14; // rdx

  v4 = (struct _RTL_GENERIC_TABLE *)(*a2)[1];
  if ( *((_QWORD *)this + 25) )
  {
    while ( 1 )
    {
      v5 = *a2;
      v6 = (*a2)[17];
      v7 = *((_QWORD *)v6 + 5);
      if ( (unsigned __int64)(4096 - v7) < 0x10 )
        goto LABEL_5;
      v8 = *((_QWORD *)v6 + 7);
      *((_QWORD *)v6 + 5) = v7 + 16;
      v9 = v7 + v8;
      if ( !v9 )
        break;
      v5[19] = (struct DirectComposition::CBatch *)((char *)v5[19] + 16);
LABEL_9:
      v14 = *((_QWORD *)this + 25);
      *((_QWORD *)this + 25) = *(_QWORD *)(v14 + 208);
      *(_QWORD *)(v14 + 208) = 0LL;
      *(_DWORD *)v9 = 16;
      *(_QWORD *)(v9 + 8) = 0LL;
      *(_DWORD *)(v9 + 4) = 298;
      *(_DWORD *)(v9 + 8) = *((_DWORD *)this + 8);
      *(_DWORD *)(v9 + 12) = *(_DWORD *)(v14 + 32);
      *(_DWORD *)(v14 + 16) &= ~8u;
      DirectComposition::CApplicationChannel::ReleaseResource(v4, (struct DirectComposition::CResourceMarshaler *)v14);
      if ( !*((_QWORD *)this + 25) )
        return *((_QWORD *)this + 25) == 0LL;
    }
    v5 = *a2;
LABEL_5:
    BatchFragment = DirectComposition::CApplicationChannel::GetBatchFragment(
                      v5[1],
                      *((_DWORD *)v5 + 4),
                      (_BYTE)v5[4] & 1,
                      1,
                      0);
    if ( !BatchFragment )
      return *((_QWORD *)this + 25) == 0LL;
    *((_BYTE *)v5[17] + 64) = 0;
    *v5 = BatchFragment;
    *a2 = (struct DirectComposition::CBatch **)BatchFragment;
    v11 = *((_QWORD *)BatchFragment + 17);
    v12 = *(_QWORD *)(v11 + 40);
    if ( (unsigned __int64)(4096 - v12) < 0x10
      || (v13 = *(_QWORD *)(v11 + 56), *(_QWORD *)(v11 + 40) = v12 + 16, (v9 = v12 + v13) == 0) )
    {
      KeBugCheck(0xC000000D);
    }
    *((_QWORD *)BatchFragment + 19) += 16LL;
    goto LABEL_9;
  }
  return *((_QWORD *)this + 25) == 0LL;
}
