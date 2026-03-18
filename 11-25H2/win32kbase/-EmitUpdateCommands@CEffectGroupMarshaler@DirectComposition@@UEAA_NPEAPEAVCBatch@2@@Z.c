/*
 * XREFs of ?EmitUpdateCommands@CEffectGroupMarshaler@DirectComposition@@UEAA_NPEAPEAVCBatch@2@@Z @ 0x140123AA0
 * Callers:
 *     <none>
 * Callees:
 *     ?EmitUpdateCommands@CPropertyChangeResourceMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1400246B8 (-EmitUpdateCommands@CPropertyChangeResourceMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitSetTransform3DCommand@CEffectGroupMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x140123B08 (-EmitSetTransform3DCommand@CEffectGroupMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitSetCompositeModeCommand@CEffectGroupMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x140123B90 (-EmitSetCompositeModeCommand@CEffectGroupMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitSetOpacityCommand@CEffectGroupMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x140123C04 (-EmitSetOpacityCommand@CEffectGroupMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z.c)
 */

bool __fastcall DirectComposition::CEffectGroupMarshaler::EmitUpdateCommands(
        DirectComposition::CEffectGroupMarshaler *this,
        struct DirectComposition::CBatch **a2)
{
  char v4; // bl

  v4 = 0;
  if ( DirectComposition::CPropertyChangeResourceMarshaler::EmitUpdateCommands(
         this,
         (struct DirectComposition::CBatch ***)a2)
    && DirectComposition::CEffectGroupMarshaler::EmitSetOpacityCommand(this, a2)
    && DirectComposition::CEffectGroupMarshaler::EmitSetCompositeModeCommand(this, a2) )
  {
    return DirectComposition::CEffectGroupMarshaler::EmitSetTransform3DCommand(this, a2);
  }
  return v4;
}
