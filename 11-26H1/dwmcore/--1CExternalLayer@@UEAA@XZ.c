/*
 * XREFs of ??1CExternalLayer@@UEAA@XZ @ 0x18005D5D4
 * Callers:
 *     ??_ECTreeEffectLayer@@UEAAPEAXI@Z @ 0x18005D080 (--_ECTreeEffectLayer@@UEAAPEAXI@Z.c)
 *     ??_ECColorTransformLayer@@UEAAPEAXI@Z @ 0x18005D0C0 (--_ECColorTransformLayer@@UEAAPEAXI@Z.c)
 *     ?PushOffScreenRenderingLayer@CDrawingContext@@QEAAJAEBVCResourceTag@@AEBUD2D_SIZE_F@@VDisplayId@@W4Enum@CacheMode@@PEAPEAVIRenderTargetBitmap@@@Z @ 0x18005D0FC (-PushOffScreenRenderingLayer@CDrawingContext@@QEAAJAEBVCResourceTag@@AEBUD2D_SIZE_F@@VDisplayId@.c)
 *     ??_ECColorSpaceLayer@@UEAAPEAXI@Z @ 0x18005D610 (--_ECColorSpaceLayer@@UEAAPEAXI@Z.c)
 *     ??1CResampleLayer@@UEAA@XZ @ 0x18009AA2C (--1CResampleLayer@@UEAA@XZ.c)
 *     ?PushTargetInternal@CGraphRenderingContext@CExternalEffectGraph@@AEAAJIW4Enum@CacheMode@@AEBUD2D_SIZE_F@@@Z @ 0x1800E8CE8 (-PushTargetInternal@CGraphRenderingContext@CExternalEffectGraph@@AEAAJIW4Enum@CacheMode@@AEBUD2D.c)
 *     ?PushEffectLayer@CDrawingContext@@AEAAJPEBVCVisual@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@11PEAVCResource@@PEA_N@Z @ 0x1800F898C (-PushEffectLayer@CDrawingContext@@AEAAJPEBVCVisual@@AEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@U.c)
 *     ??_ECExternalLayer@@UEAAPEAXI@Z @ 0x1801D87B0 (--_ECExternalLayer@@UEAAPEAXI@Z.c)
 *     ??_ECFilterEffectLayer@@UEAAPEAXI@Z @ 0x18021BE60 (--_ECFilterEffectLayer@@UEAAPEAXI@Z.c)
 *     ??_ECSuperSampleLayer@@UEAAPEAXI@Z @ 0x180234900 (--_ECSuperSampleLayer@@UEAAPEAXI@Z.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CExternalLayer::~CExternalLayer(CExternalLayer *this)
{
  __int64 v1; // rcx

  *(_QWORD *)this = &CExternalLayer::`vftable';
  v1 = *((_QWORD *)this + 1);
  if ( v1 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v1 + 16LL))(v1);
}
