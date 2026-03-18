/*
 * XREFs of ?EmitUpdateCommands@CEffectBrushMarshaler@DirectComposition@@UEAA_NPEAPEAVCBatch@2@@Z @ 0x14018C780
 * Callers:
 *     <none>
 * Callees:
 *     ?EmitSetTemplateCommand@CEffectBrushMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x14018C804 (-EmitSetTemplateCommand@CEffectBrushMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitSetPropertySetCommand@CEffectBrushMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1401A36CC (-EmitSetPropertySetCommand@CEffectBrushMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitSetInputCountCommand@CEffectBrushMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1401A3FB4 (-EmitSetInputCountCommand@CEffectBrushMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?Marshal@?$CMarshaledArray@I$0GFGKEDEE@$0BLF@$0BLG@$0A@@DirectComposition@@QEAA_NPEAPEAVCBatch@2@I@Z @ 0x140234430 (-Marshal@-$CMarshaledArray@I$0GFGKEDEE@$0BLF@$0BLG@$0A@@DirectComposition@@QEAA_NPEAPEAVCBatch@2.c)
 *     ?Marshal@?$CResourceMarshalerArray@$0BLH@$0BLI@$0A@$0BA@@DirectComposition@@QEAA_NPEAPEAVCBatch@2@I@Z @ 0x14023476C (-Marshal@-$CResourceMarshalerArray@$0BLH@$0BLI@$0A@$0BA@@DirectComposition@@QEAA_NPEAPEAVCBatch@.c)
 */

bool __fastcall DirectComposition::CEffectBrushMarshaler::EmitUpdateCommands(
        DirectComposition::CEffectBrushMarshaler *this,
        struct DirectComposition::CBatch **a2)
{
  char v4; // bl

  v4 = 0;
  if ( DirectComposition::CEffectBrushMarshaler::EmitSetTemplateCommand(this, a2)
    && DirectComposition::CEffectBrushMarshaler::EmitSetInputCountCommand(this, a2)
    && DirectComposition::CEffectBrushMarshaler::EmitSetPropertySetCommand(this, a2)
    && (unsigned __int8)DirectComposition::CMarshaledArray<unsigned int,1701462852,437,438,0>::Marshal(
                          (char *)this + 80,
                          a2,
                          *((unsigned int *)this + 8)) )
  {
    return (unsigned __int8)DirectComposition::CResourceMarshalerArray<439,440,0,16>::Marshal(
                              (char *)this + 104,
                              a2,
                              *((unsigned int *)this + 8)) != 0;
  }
  return v4;
}
