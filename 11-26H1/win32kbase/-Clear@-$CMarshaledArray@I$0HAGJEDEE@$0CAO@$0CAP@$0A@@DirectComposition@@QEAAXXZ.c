/*
 * XREFs of ?Clear@?$CMarshaledArray@I$0HAGJEDEE@$0CAO@$0CAP@$0A@@DirectComposition@@QEAAXXZ @ 0x14022B4AC
 * Callers:
 *     ?ReleaseAllReferences@CEffectBrushMarshaler@DirectComposition@@UEAAXPEAVCApplicationChannel@2@@Z @ 0x1400A29D0 (-ReleaseAllReferences@CEffectBrushMarshaler@DirectComposition@@UEAAXPEAVCApplicationChannel@2@@Z.c)
 *     ?ReleaseAllReferences@CRegionGeometryMarshaler@DirectComposition@@UEAAXPEAVCApplicationChannel@2@@Z @ 0x1400A3D50 (-ReleaseAllReferences@CRegionGeometryMarshaler@DirectComposition@@UEAAXPEAVCApplicationChannel@2.c)
 *     ?ReleaseAllReferences@CGdiSpriteBitmapMarshaler@DirectComposition@@UEAAXPEAVCApplicationChannel@2@@Z @ 0x1401645F0 (-ReleaseAllReferences@CGdiSpriteBitmapMarshaler@DirectComposition@@UEAAXPEAVCApplicationChannel@.c)
 *     ?ReleaseAllReferences@CCompositionDynamicTextureMarshaler@DirectComposition@@UEAAXPEAVCApplicationChannel@2@@Z @ 0x140234A90 (-ReleaseAllReferences@CCompositionDynamicTextureMarshaler@DirectComposition@@UEAAXPEAVCApplicati.c)
 *     ?ReleaseAllReferences@CFilterEffectMarshaler@DirectComposition@@UEAAXPEAVCApplicationChannel@2@@Z @ 0x140234B20 (-ReleaseAllReferences@CFilterEffectMarshaler@DirectComposition@@UEAAXPEAVCApplicationChannel@2@@.c)
 *     ?ReleaseAllReferences@CInteractionTracker2Marshaler@DirectComposition@@UEAAXPEAVCApplicationChannel@2@@Z @ 0x140234BF0 (-ReleaseAllReferences@CInteractionTracker2Marshaler@DirectComposition@@UEAAXPEAVCApplicationChan.c)
 *     ?ReleaseAllReferences@CTableTransferEffectMarshaler@DirectComposition@@UEAAXPEAVCApplicationChannel@2@@Z @ 0x140235150 (-ReleaseAllReferences@CTableTransferEffectMarshaler@DirectComposition@@UEAAXPEAVCApplicationChan.c)
 * Callees:
 *     ?Clear@CMarshaledArrayBase@DirectComposition@@IEAAX_N@Z @ 0x140137154 (-Clear@CMarshaledArrayBase@DirectComposition@@IEAAX_N@Z.c)
 */

void __fastcall DirectComposition::CMarshaledArray<unsigned int,1885946692,526,527,0>::Clear(
        char **a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  LOBYTE(a2) = 1;
  DirectComposition::CMarshaledArrayBase::Clear(a1, a2, a3, a4);
}
