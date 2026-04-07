/*
 * XREFs of ??1CNoiseSurfaceCache@CAccentAcrylicBlurBehind@@QEAA@XZ @ 0x180090948
 * Callers:
 *     ??R?$default_delete@VCNoiseSurfaceCache@CAccentAcrylicBlurBehind@@@std@@QEBAXPEAVCNoiseSurfaceCache@CAccentAcrylicBlurBehind@@@Z @ 0x180090B0C (--R-$default_delete@VCNoiseSurfaceCache@CAccentAcrylicBlurBehind@@@std@@QEBAXPEAVCNoiseSurfaceCa.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x18000C124 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 */

void __fastcall CAccentAcrylicBlurBehind::CNoiseSurfaceCache::~CNoiseSurfaceCache(
        CAccentAcrylicBlurBehind::CNoiseSurfaceCache *this)
{
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)this + 3);
  CGraphicsResourceOwner::~CGraphicsResourceOwner(this);
}
