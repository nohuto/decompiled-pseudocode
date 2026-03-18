/*
 * XREFs of ?EmitUpdateCommands@CProjectedShadowCasterMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x14015DD60
 * Callers:
 *     <none>
 * Callees:
 *     ?EmitUpdateCommands@CPropertyChangeResourceMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1400246B8 (-EmitUpdateCommands@CPropertyChangeResourceMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitAncestorClipVisual@CProjectedShadowCasterMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x14023BB14 (-EmitAncestorClipVisual@CProjectedShadowCasterMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2.c)
 *     ?EmitBrush@CProjectedShadowCasterMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x14023BB94 (-EmitBrush@CProjectedShadowCasterMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitCastingVisual@CProjectedShadowCasterMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x14023BC14 (-EmitCastingVisual@CProjectedShadowCasterMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitMask@CProjectedShadowCasterMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x14023BC94 (-EmitMask@CProjectedShadowCasterMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z.c)
 */

bool __fastcall DirectComposition::CProjectedShadowCasterMarshaler::EmitUpdateCommands(
        DirectComposition::CProjectedShadowCasterMarshaler *this,
        struct DirectComposition::CBatch **a2)
{
  char v4; // bl

  v4 = 0;
  if ( DirectComposition::CPropertyChangeResourceMarshaler::EmitUpdateCommands(
         this,
         (struct DirectComposition::CBatch ***)a2)
    && DirectComposition::CProjectedShadowCasterMarshaler::EmitAncestorClipVisual(this, a2)
    && DirectComposition::CProjectedShadowCasterMarshaler::EmitCastingVisual(this, a2)
    && DirectComposition::CProjectedShadowCasterMarshaler::EmitBrush(this, a2) )
  {
    return DirectComposition::CProjectedShadowCasterMarshaler::EmitMask(this, a2);
  }
  return v4;
}
