/*
 * XREFs of ?Marshal@?$CMarshaledArray@M$0GBHEEDEE@$0CMH@$0CMI@$0A@@DirectComposition@@QEAA_NPEAPEAVCBatch@2@I@Z @ 0x1402345BC
 * Callers:
 *     ?EmitUpdateCommands@CTableTransferEffectMarshaler@DirectComposition@@UEAA_NPEAPEAVCBatch@2@@Z @ 0x140233080 (-EmitUpdateCommands@CTableTransferEffectMarshaler@DirectComposition@@UEAA_NPEAPEAVCBatch@2@@Z.c)
 * Callees:
 *     ?ValueTypeMarshal@CMarshaledArrayBase@DirectComposition@@IEAA_NPEAPEAVCBatch@2@IW4MILCMD@@1_K@Z @ 0x140145564 (-ValueTypeMarshal@CMarshaledArrayBase@DirectComposition@@IEAA_NPEAPEAVCBatch@2@IW4MILCMD@@1_K@Z.c)
 */

__int64 __fastcall DirectComposition::CMarshaledArray<float,1635009348,711,712,0>::Marshal(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  return DirectComposition::CMarshaledArrayBase::ValueTypeMarshal(a1, a2, a3);
}
