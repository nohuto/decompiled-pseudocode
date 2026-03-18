/*
 * XREFs of ?EmitUpdateCommands@CNineGridBrushMarshaler@DirectComposition@@UEAA_NPEAPEAVCBatch@2@@Z @ 0x1401976C0
 * Callers:
 *     <none>
 * Callees:
 *     ?EmitSetLeftInsetCommand@CNineGridBrushMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x140197788 (-EmitSetLeftInsetCommand@CNineGridBrushMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitSetBottomInsetCommand@CNineGridBrushMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x140198824 (-EmitSetBottomInsetCommand@CNineGridBrushMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitSetTopInsetCommand@CNineGridBrushMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x140199F58 (-EmitSetTopInsetCommand@CNineGridBrushMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitSetLeftInsetScaleCommand@CNineGridBrushMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x14019CCA4 (-EmitSetLeftInsetScaleCommand@CNineGridBrushMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@.c)
 *     ?EmitSetRightInsetCommand@CNineGridBrushMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x14019DB0C (-EmitSetRightInsetCommand@CNineGridBrushMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitSetIsCenterHollowCommand@CNineGridBrushMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x14019DB80 (-EmitSetIsCenterHollowCommand@CNineGridBrushMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@.c)
 *     ?EmitSetSourceCommand@CNineGridBrushMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x14019DC74 (-EmitSetSourceCommand@CNineGridBrushMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitSetBottomInsetScaleCommand@CNineGridBrushMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1401A1CC4 (-EmitSetBottomInsetScaleCommand@CNineGridBrushMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2.c)
 *     ?EmitSetRightInsetScaleCommand@CNineGridBrushMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x14022F290 (-EmitSetRightInsetScaleCommand@CNineGridBrushMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@.c)
 *     ?EmitSetTopInsetScaleCommand@CNineGridBrushMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x14022F7C0 (-EmitSetTopInsetScaleCommand@CNineGridBrushMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z.c)
 */

bool __fastcall DirectComposition::CNineGridBrushMarshaler::EmitUpdateCommands(
        DirectComposition::CNineGridBrushMarshaler *this,
        struct DirectComposition::CBatch **a2)
{
  char v4; // bl

  v4 = 0;
  if ( DirectComposition::CNineGridBrushMarshaler::EmitSetLeftInsetCommand(this, a2)
    && DirectComposition::CNineGridBrushMarshaler::EmitSetTopInsetCommand(this, a2)
    && DirectComposition::CNineGridBrushMarshaler::EmitSetRightInsetCommand(this, a2)
    && DirectComposition::CNineGridBrushMarshaler::EmitSetBottomInsetCommand(this, a2)
    && DirectComposition::CNineGridBrushMarshaler::EmitSetLeftInsetScaleCommand(this, a2)
    && DirectComposition::CNineGridBrushMarshaler::EmitSetTopInsetScaleCommand(this, a2)
    && DirectComposition::CNineGridBrushMarshaler::EmitSetRightInsetScaleCommand(this, a2)
    && DirectComposition::CNineGridBrushMarshaler::EmitSetBottomInsetScaleCommand(this, a2)
    && DirectComposition::CNineGridBrushMarshaler::EmitSetIsCenterHollowCommand(this, a2) )
  {
    return DirectComposition::CNineGridBrushMarshaler::EmitSetSourceCommand(this, a2);
  }
  return v4;
}
