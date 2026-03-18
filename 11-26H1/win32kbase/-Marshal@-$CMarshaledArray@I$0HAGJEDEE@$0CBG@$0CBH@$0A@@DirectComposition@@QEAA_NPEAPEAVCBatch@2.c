/*
 * XREFs of ?Marshal@?$CMarshaledArray@I$0HAGJEDEE@$0CBG@$0CBH@$0A@@DirectComposition@@QEAA_NPEAPEAVCBatch@2@I@Z @ 0x1402344E0
 * Callers:
 *     ?EmitUpdateCommands@CInteractionTracker2Marshaler@DirectComposition@@UEAA_NPEAPEAVCBatch@2@@Z @ 0x140230FE0 (-EmitUpdateCommands@CInteractionTracker2Marshaler@DirectComposition@@UEAA_NPEAPEAVCBatch@2@@Z.c)
 * Callees:
 *     ?ValueTypeMarshal@CMarshaledArrayBase@DirectComposition@@IEAA_NPEAPEAVCBatch@2@IW4MILCMD@@1_K@Z @ 0x140145564 (-ValueTypeMarshal@CMarshaledArrayBase@DirectComposition@@IEAA_NPEAPEAVCBatch@2@IW4MILCMD@@1_K@Z.c)
 */

__int64 __fastcall DirectComposition::CMarshaledArray<unsigned int,1885946692,534,535,0>::Marshal(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  return DirectComposition::CMarshaledArrayBase::ValueTypeMarshal(a1, a2, a3);
}
