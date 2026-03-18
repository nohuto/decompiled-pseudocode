/*
 * XREFs of ?EmitUpdateCommands@CMaskBrushMarshaler@DirectComposition@@UEAA_NPEAPEAVCBatch@2@@Z @ 0x140191FF0
 * Callers:
 *     <none>
 * Callees:
 *     ?EmitSetSourceCommand@CMaskBrushMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x14018CDDC (-EmitSetSourceCommand@CMaskBrushMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitSetMaskCommand@CMaskBrushMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x14019203C (-EmitSetMaskCommand@CMaskBrushMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z.c)
 */

char __fastcall DirectComposition::CMaskBrushMarshaler::EmitUpdateCommands(
        DirectComposition::CMaskBrushMarshaler *this,
        struct DirectComposition::CBatch ***a2)
{
  char v4; // bl

  v4 = 0;
  if ( DirectComposition::CMaskBrushMarshaler::EmitSetMaskCommand(this, (struct DirectComposition::CBatch **)a2) )
    return DirectComposition::CMaskBrushMarshaler::EmitSetSourceCommand(this, a2) != 0;
  return v4;
}
