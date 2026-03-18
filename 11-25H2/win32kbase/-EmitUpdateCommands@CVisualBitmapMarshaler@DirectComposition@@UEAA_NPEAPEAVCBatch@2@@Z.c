/*
 * XREFs of ?EmitUpdateCommands@CVisualBitmapMarshaler@DirectComposition@@UEAA_NPEAPEAVCBatch@2@@Z @ 0x1401486E0
 * Callers:
 *     <none>
 * Callees:
 *     ?EmitSetVisualCommand@CVisualBitmapMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1401486F8 (-EmitSetVisualCommand@CVisualBitmapMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z.c)
 */

bool __fastcall DirectComposition::CVisualBitmapMarshaler::EmitUpdateCommands(
        DirectComposition::CVisualBitmapMarshaler *this,
        struct DirectComposition::CBatch **a2)
{
  return DirectComposition::CVisualBitmapMarshaler::EmitSetVisualCommand(this, a2);
}
