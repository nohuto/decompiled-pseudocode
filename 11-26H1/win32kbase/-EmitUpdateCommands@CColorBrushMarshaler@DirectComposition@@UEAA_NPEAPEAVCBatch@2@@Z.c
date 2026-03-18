/*
 * XREFs of ?EmitUpdateCommands@CColorBrushMarshaler@DirectComposition@@UEAA_NPEAPEAVCBatch@2@@Z @ 0x140196000
 * Callers:
 *     <none>
 * Callees:
 *     ?EmitSetColorCommand@CColorBrushMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x140196018 (-EmitSetColorCommand@CColorBrushMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z.c)
 */

bool __fastcall DirectComposition::CColorBrushMarshaler::EmitUpdateCommands(
        DirectComposition::CColorBrushMarshaler *this,
        struct DirectComposition::CBatch **a2)
{
  return DirectComposition::CColorBrushMarshaler::EmitSetColorCommand(this, a2);
}
