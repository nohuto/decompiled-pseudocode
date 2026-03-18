/*
 * XREFs of ??1CCompositionDynamicTexture@@UEAA@XZ @ 0x18026A6E4
 * Callers:
 *     ??_ECCompositionDynamicTexture@@UEAAPEAXI@Z @ 0x18026A710 (--_ECCompositionDynamicTexture@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1CRectanglesShape@@UEAA@XZ @ 0x1800BAF10 (--1CRectanglesShape@@UEAA@XZ.c)
 */

void __fastcall CCompositionDynamicTexture::~CCompositionDynamicTexture(struct CResource **this)
{
  CRectanglesShape::~CRectanglesShape((CRectanglesShape *)(this + 11));
  CVisualBitmapGeneratedT<CVisualBitmap,CContent>::~CVisualBitmapGeneratedT<CVisualBitmap,CContent>(this);
}
