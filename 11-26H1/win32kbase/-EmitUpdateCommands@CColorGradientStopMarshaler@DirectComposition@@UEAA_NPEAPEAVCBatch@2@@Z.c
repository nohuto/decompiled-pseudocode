/*
 * XREFs of ?EmitUpdateCommands@CColorGradientStopMarshaler@DirectComposition@@UEAA_NPEAPEAVCBatch@2@@Z @ 0x14019BED0
 * Callers:
 *     <none>
 * Callees:
 *     ?EmitSetOffsetCommand@CColorGradientStopMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x14019BF1C (-EmitSetOffsetCommand@CColorGradientStopMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitSetColorCommand@CColorGradientStopMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x14019FD10 (-EmitSetColorCommand@CColorGradientStopMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z.c)
 */

bool __fastcall DirectComposition::CColorGradientStopMarshaler::EmitUpdateCommands(
        DirectComposition::CColorGradientStopMarshaler *this,
        struct DirectComposition::CBatch **a2)
{
  char v4; // bl

  v4 = 0;
  if ( DirectComposition::CColorGradientStopMarshaler::EmitSetOffsetCommand(this, a2) )
    return DirectComposition::CColorGradientStopMarshaler::EmitSetColorCommand(this, a2);
  return v4;
}
