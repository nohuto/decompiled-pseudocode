/*
 * XREFs of ?Marshal@?$CMarshaledArray@I$0GFGGEDEE@$0BMB@$0BMC@$0A@@DirectComposition@@QEAA_NPEAPEAVCBatch@2@I@Z @ 0x1402343AC
 * Callers:
 *     ?EmitUpdateCommands@CFilterEffectMarshaler@DirectComposition@@UEAA_NPEAPEAVCBatch@2@@Z @ 0x140230B00 (-EmitUpdateCommands@CFilterEffectMarshaler@DirectComposition@@UEAA_NPEAPEAVCBatch@2@@Z.c)
 * Callees:
 *     ?ValueTypeMarshal@CMarshaledArrayBase@DirectComposition@@IEAA_NPEAPEAVCBatch@2@IW4MILCMD@@1_K@Z @ 0x140145564 (-ValueTypeMarshal@CMarshaledArrayBase@DirectComposition@@IEAA_NPEAPEAVCBatch@2@IW4MILCMD@@1_K@Z.c)
 */

__int64 __fastcall DirectComposition::CMarshaledArray<unsigned int,1701200708,449,450,0>::Marshal(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  return DirectComposition::CMarshaledArrayBase::ValueTypeMarshal(a1, a2, a3);
}
