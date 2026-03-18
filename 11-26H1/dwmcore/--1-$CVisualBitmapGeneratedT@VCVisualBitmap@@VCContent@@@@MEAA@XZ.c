/*
 * XREFs of ??1?$CVisualBitmapGeneratedT@VCVisualBitmap@@VCContent@@@@MEAA@XZ @ 0x180245CF8
 * Callers:
 *     ??_ECSceneModelTransform@@UEAAPEAXI@Z @ 0x180246D30 (--_ECSceneModelTransform@@UEAAPEAXI@Z.c)
 *     ??1CVisualBitmap@@MEAA@XZ @ 0x1802680DC (--1CVisualBitmap@@MEAA@XZ.c)
 *     ??1CCompositionDynamicTexture@@UEAA@XZ @ 0x18026A6E4 (--1CCompositionDynamicTexture@@UEAA@XZ.c)
 * Callees:
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x180022EAC (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 */

void __fastcall CVisualBitmapGeneratedT<CVisualBitmap,CContent>::~CVisualBitmapGeneratedT<CVisualBitmap,CContent>(
        struct CResource **this)
{
  CResource::UnRegisterNotifierInternal((CResource *)this, this[9]);
  this[9] = 0LL;
  CResource::~CResource((CResource *)this);
}
