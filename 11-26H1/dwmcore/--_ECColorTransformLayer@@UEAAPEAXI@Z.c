/*
 * XREFs of ??_ECColorTransformLayer@@UEAAPEAXI@Z @ 0x18005D0C0
 * Callers:
 *     ?PushEffects@CDrawingContext@@QEAAJAEAUNodeEffects@1@PEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@PEAVCFilterEffect@@11PEA_N@Z @ 0x1800C6AD0 (-PushEffects@CDrawingContext@@QEAAJAEAUNodeEffects@1@PEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@.c)
 *     ?PushColorTransformLayer@CDrawingContext@@QEAAJPEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@AEBUMilColorTransform@@@Z @ 0x1801E4148 (-PushColorTransformLayer@CDrawingContext@@QEAAJPEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_P.c)
 * Callees:
 *     ??1CExternalLayer@@UEAA@XZ @ 0x18005D5D4 (--1CExternalLayer@@UEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x180220694 (--3@YAXPEAX_K@Z.c)
 */

CColorTransformLayer *__fastcall CColorTransformLayer::`vector deleting destructor'(
        CColorTransformLayer *this,
        char a2)
{
  CExternalLayer::~CExternalLayer(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, 0xE0uLL);
  return this;
}
