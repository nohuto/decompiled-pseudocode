/*
 * XREFs of ?EmitSetCallbackId@CNotificationResourceMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1400AEE00
 * Callers:
 *     ?EmitUpdateCommands@CInteractionTrackerMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x140145F30 (-EmitUpdateCommands@CInteractionTrackerMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitUpdateCommands@CCompiledEffectTemplateMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x140155ED0 (-EmitUpdateCommands@CCompiledEffectTemplateMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitUpdateCommands@CManipulationMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x140161CC0 (-EmitUpdateCommands@CManipulationMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitUpdateCommands@CBaseExpressionMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1401C0BA0 (-EmitUpdateCommands@CBaseExpressionMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitUpdateCommands@CInteractionTracker2Marshaler@DirectComposition@@UEAA_NPEAPEAVCBatch@2@@Z @ 0x140230FE0 (-EmitUpdateCommands@CInteractionTracker2Marshaler@DirectComposition@@UEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitUpdateCommands@CInteractionTrackerBindingManagerMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x140244180 (-EmitUpdateCommands@CInteractionTrackerBindingManagerMarshaler@DirectComposition@@MEAA_NPEAPEAVC.c)
 * Callees:
 *     ?GetBatchFragment@CApplicationChannel@DirectComposition@@QEAAPEAVCBatch@2@K_N00@Z @ 0x1400AF058 (-GetBatchFragment@CApplicationChannel@DirectComposition@@QEAAPEAVCBatch@2@K_N00@Z.c)
 */

char __fastcall DirectComposition::CNotificationResourceMarshaler::EmitSetCallbackId(
        DirectComposition::CNotificationResourceMarshaler *this,
        struct DirectComposition::CBatch ***a2)
{
  char v4; // di
  struct DirectComposition::CBatch **v5; // r8
  struct DirectComposition::CBatch *v6; // rdx
  __int64 v7; // r9
  __int64 v8; // rcx
  __int64 v9; // rcx
  struct DirectComposition::CBatch **v10; // rsi
  struct DirectComposition::CBatch *BatchFragment; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rcx

  v4 = 1;
  if ( (*((_DWORD *)this + 4) & 0x40) != 0 )
  {
    v5 = *a2;
    v6 = (*a2)[17];
    v7 = *((_QWORD *)v6 + 5);
    if ( (unsigned __int64)(4096 - v7) >= 0x10
      && (v8 = *((_QWORD *)v6 + 7), *((_QWORD *)v6 + 5) = v7 + 16, (v9 = v7 + v8) != 0) )
    {
      v5[19] = (struct DirectComposition::CBatch *)((char *)v5[19] + 16);
    }
    else
    {
      v10 = *a2;
      BatchFragment = DirectComposition::CApplicationChannel::GetBatchFragment(
                        (*a2)[1],
                        *((_DWORD *)*a2 + 4),
                        (_BYTE)(*a2)[4] & 1,
                        1,
                        0);
      if ( !BatchFragment )
        return 0;
      *((_BYTE *)v10[17] + 64) = 0;
      *v10 = BatchFragment;
      *a2 = (struct DirectComposition::CBatch **)BatchFragment;
      v12 = *((_QWORD *)BatchFragment + 17);
      v13 = *(_QWORD *)(v12 + 40);
      if ( (unsigned __int64)(4096 - v13) < 0x10
        || (v14 = *(_QWORD *)(v12 + 56), *(_QWORD *)(v12 + 40) = v13 + 16, (v9 = v13 + v14) == 0) )
      {
        KeBugCheck(0xC000000D);
      }
      *((_QWORD *)BatchFragment + 19) += 16LL;
    }
    *(_DWORD *)v9 = 16;
    *(_QWORD *)(v9 + 8) = 0LL;
    *(_DWORD *)(v9 + 4) = 179;
    *(_DWORD *)(v9 + 8) = *((_DWORD *)this + 8);
    *(_DWORD *)(v9 + 12) = *((_DWORD *)this + 14);
    *((_DWORD *)this + 4) &= ~0x40u;
  }
  return v4;
}
