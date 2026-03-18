/*
 * XREFs of ?EmitReleaseCommand@CResourceMarshaler@DirectComposition@@UEAA_NPEAPEAVCBatch@2@@Z @ 0x1400245B0
 * Callers:
 *     ?EmitReleaseCommand@CCrossChannelChildVisualMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1400F1760 (-EmitReleaseCommand@CCrossChannelChildVisualMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@.c)
 *     ?EmitReleaseCommand@CVisualTargetMarshaler@DirectComposition@@UEAA_NPEAPEAVCBatch@2@@Z @ 0x140105B20 (-EmitReleaseCommand@CVisualTargetMarshaler@DirectComposition@@UEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitReleaseCommand@CRemoteAppRenderTargetMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x140237420 (-EmitReleaseCommand@CRemoteAppRenderTargetMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 * Callees:
 *     ?GetBatchFragment@CApplicationChannel@DirectComposition@@QEAAPEAVCBatch@2@K_N00@Z @ 0x1400238D0 (-GetBatchFragment@CApplicationChannel@DirectComposition@@QEAAPEAVCBatch@2@K_N00@Z.c)
 */

bool __fastcall DirectComposition::CResourceMarshaler::EmitReleaseCommand(
        DirectComposition::CResourceMarshaler *this,
        struct DirectComposition::CBatch ***a2)
{
  struct DirectComposition::CBatch **v2; // r8
  struct DirectComposition::CBatch *v5; // r9
  __int64 v6; // r10
  __int64 v7; // rdx
  __int64 v8; // rdx
  struct DirectComposition::CBatch **v9; // rbx
  struct DirectComposition::CBatch *BatchFragment; // rax
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rdx

  v2 = *a2;
  v5 = (*a2)[17];
  v6 = *((_QWORD *)v5 + 5);
  if ( (unsigned __int64)(4096 - v6) >= 0xC
    && (v7 = *((_QWORD *)v5 + 7), *((_QWORD *)v5 + 5) = v6 + 12, (v8 = v6 + v7) != 0) )
  {
    v2[19] = (struct DirectComposition::CBatch *)((char *)v2[19] + 12);
  }
  else
  {
    v9 = *a2;
    BatchFragment = DirectComposition::CApplicationChannel::GetBatchFragment(
                      (*a2)[1],
                      *((_DWORD *)*a2 + 4),
                      (_BYTE)(*a2)[4] & 1,
                      1,
                      0);
    if ( !BatchFragment )
      return (char)BatchFragment;
    *((_BYTE *)v9[17] + 64) = 0;
    *v9 = BatchFragment;
    *a2 = (struct DirectComposition::CBatch **)BatchFragment;
    v11 = *((_QWORD *)BatchFragment + 17);
    v12 = *(_QWORD *)(v11 + 40);
    if ( (unsigned __int64)(4096 - v12) < 0xC
      || (v13 = *(_QWORD *)(v11 + 56), *(_QWORD *)(v11 + 40) = v12 + 12, (v8 = v12 + v13) == 0) )
    {
      KeBugCheck(0xC000000D);
    }
    *((_QWORD *)BatchFragment + 19) += 12LL;
  }
  *(_DWORD *)v8 = 12;
  *(_QWORD *)(v8 + 4) = 0LL;
  LOBYTE(BatchFragment) = 1;
  *(_DWORD *)(v8 + 4) = 39;
  *(_DWORD *)(v8 + 8) = *((_DWORD *)this + 8);
  return (char)BatchFragment;
}
