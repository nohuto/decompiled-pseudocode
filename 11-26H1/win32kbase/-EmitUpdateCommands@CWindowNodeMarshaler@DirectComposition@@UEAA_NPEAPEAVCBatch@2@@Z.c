/*
 * XREFs of ?EmitUpdateCommands@CWindowNodeMarshaler@DirectComposition@@UEAA_NPEAPEAVCBatch@2@@Z @ 0x1400FF730
 * Callers:
 *     <none>
 * Callees:
 *     ?EmitUpdateCommands@CVisualMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1400FF990 (-EmitUpdateCommands@CVisualMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitSetContentSizeCommand@CWindowNodeMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1400FFBAC (-EmitSetContentSizeCommand@CWindowNodeMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitSetContentRelativeClientRectCommand@CWindowNodeMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1400FFC28 (-EmitSetContentRelativeClientRectCommand@CWindowNodeMarshaler@DirectComposition@@AEAA_NPEAPEAVCB.c)
 *     ?EmitSetIsClipToDirtyCommand@CWindowNodeMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1400FFCA8 (-EmitSetIsClipToDirtyCommand@CWindowNodeMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitSetExtendedBoundsCommand@CWindowNodeMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1400FFD24 (-EmitSetExtendedBoundsCommand@CWindowNodeMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitSetFlipExSurfaceCommand@CWindowNodeMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1400FFDA8 (-EmitSetFlipExSurfaceCommand@CWindowNodeMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitSetContentRelativeWindowRectCommand@CWindowNodeMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1400FFE5C (-EmitSetContentRelativeWindowRectCommand@CWindowNodeMarshaler@DirectComposition@@AEAA_NPEAPEAVCB.c)
 *     ?EmitSetFlipExSurfaceClipCommand@CWindowNodeMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1400FFEDC (-EmitSetFlipExSurfaceClipCommand@CWindowNodeMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@.c)
 *     ?EmitSetAlphaMarginsCommand@CWindowNodeMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1400FFF60 (-EmitSetAlphaMarginsCommand@CWindowNodeMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitSetIsComposeOnceCommand@CWindowNodeMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1400FFFE4 (-EmitSetIsComposeOnceCommand@CWindowNodeMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitSetIsCursorCommand@CWindowNodeMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x140100064 (-EmitSetIsCursorCommand@CWindowNodeMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitSetIsLayoutRTLCommand@CWindowNodeMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1401000E4 (-EmitSetIsLayoutRTLCommand@CWindowNodeMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitSetMaximizedClipMarginsCommand@CWindowNodeMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x140100164 (-EmitSetMaximizedClipMarginsCommand@CWindowNodeMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@.c)
 *     ?EmitSetProcessAttributionCommand@CWindowNodeMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1401001EC (-EmitSetProcessAttributionCommand@CWindowNodeMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@.c)
 *     ?EmitSetSourceModificationsCommand@CWindowNodeMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x140100274 (-EmitSetSourceModificationsCommand@CWindowNodeMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2.c)
 *     ?EmitSetSpriteBitmapCommand@CWindowNodeMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1401002FC (-EmitSetSpriteBitmapCommand@CWindowNodeMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitSetSpriteClipCommand@CWindowNodeMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x140100384 (-EmitSetSpriteClipCommand@CWindowNodeMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitSetSpriteHandleCommand@CWindowNodeMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x14010040C (-EmitSetSpriteHandleCommand@CWindowNodeMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitSetWindowHandleCommand@CWindowNodeMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x14010048C (-EmitSetWindowHandleCommand@CWindowNodeMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z.c)
 */

bool __fastcall DirectComposition::CWindowNodeMarshaler::EmitUpdateCommands(
        DirectComposition::CWindowNodeMarshaler *this,
        struct DirectComposition::CBatch **a2)
{
  char v4; // bl

  v4 = 0;
  if ( DirectComposition::CVisualMarshaler::EmitUpdateCommands(this, a2)
    && DirectComposition::CWindowNodeMarshaler::EmitSetAlphaMarginsCommand(this, a2)
    && DirectComposition::CWindowNodeMarshaler::EmitSetContentRelativeClientRectCommand(this, a2)
    && DirectComposition::CWindowNodeMarshaler::EmitSetContentRelativeWindowRectCommand(this, a2)
    && DirectComposition::CWindowNodeMarshaler::EmitSetContentSizeCommand(this, a2)
    && DirectComposition::CWindowNodeMarshaler::EmitSetExtendedBoundsCommand(this, a2)
    && DirectComposition::CWindowNodeMarshaler::EmitSetFlipExSurfaceCommand(this, a2)
    && DirectComposition::CWindowNodeMarshaler::EmitSetFlipExSurfaceClipCommand(this, a2)
    && DirectComposition::CWindowNodeMarshaler::EmitSetIsClipToDirtyCommand(this, a2)
    && DirectComposition::CWindowNodeMarshaler::EmitSetIsComposeOnceCommand(this, a2)
    && DirectComposition::CWindowNodeMarshaler::EmitSetIsCursorCommand(this, a2)
    && DirectComposition::CWindowNodeMarshaler::EmitSetIsLayoutRTLCommand(this, a2)
    && DirectComposition::CWindowNodeMarshaler::EmitSetMaximizedClipMarginsCommand(this, a2)
    && DirectComposition::CWindowNodeMarshaler::EmitSetProcessAttributionCommand(this, a2)
    && DirectComposition::CWindowNodeMarshaler::EmitSetSourceModificationsCommand(this, a2)
    && DirectComposition::CWindowNodeMarshaler::EmitSetSpriteBitmapCommand(this, a2)
    && DirectComposition::CWindowNodeMarshaler::EmitSetSpriteClipCommand(this, a2)
    && DirectComposition::CWindowNodeMarshaler::EmitSetSpriteHandleCommand(this, a2) )
  {
    return DirectComposition::CWindowNodeMarshaler::EmitSetWindowHandleCommand(this, a2);
  }
  return v4;
}
