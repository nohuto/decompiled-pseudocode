/*
 * XREFs of ?Marshal@?$CMarshaledArray@UtagRECT@@$0HEGEEDEE@$0BJP@$0BKA@$00@DirectComposition@@QEAA_NPEAPEAVCBatch@2@I@Z @ 0x1402346F0
 * Callers:
 *     ?EmitUpdateCommands@CCompositionDynamicTextureMarshaler@DirectComposition@@UEAA_NPEAPEAVCBatch@2@@Z @ 0x140230530 (-EmitUpdateCommands@CCompositionDynamicTextureMarshaler@DirectComposition@@UEAA_NPEAPEAVCBatch@2.c)
 * Callees:
 *     ?Clear@CMarshaledArrayBase@DirectComposition@@IEAAX_N@Z @ 0x140137154 (-Clear@CMarshaledArrayBase@DirectComposition@@IEAAX_N@Z.c)
 *     ?ValueTypeMarshal@CMarshaledArrayBase@DirectComposition@@IEAA_NPEAPEAVCBatch@2@IW4MILCMD@@1_K@Z @ 0x140145564 (-ValueTypeMarshal@CMarshaledArrayBase@DirectComposition@@IEAA_NPEAPEAVCBatch@2@IW4MILCMD@@1_K@Z.c)
 */

char __fastcall DirectComposition::CMarshaledArray<tagRECT,1952727876,415,416,1>::Marshal(
        char **this,
        __int64 a2,
        __int64 a3)
{
  char v4; // di
  __int64 v5; // r8
  __int64 v6; // r9

  v4 = DirectComposition::CMarshaledArrayBase::ValueTypeMarshal((__int64)this, a2, a3);
  if ( v4 && this[1] )
    DirectComposition::CMarshaledArrayBase::Clear(this, 0LL, v5, v6);
  return v4;
}
