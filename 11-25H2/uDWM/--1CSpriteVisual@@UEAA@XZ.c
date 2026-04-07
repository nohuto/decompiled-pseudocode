/*
 * XREFs of ??1CSpriteVisual@@UEAA@XZ @ 0x18003EA78
 * Callers:
 *     ??1CDWriteText@@UEAA@XZ @ 0x18006310C (--1CDWriteText@@UEAA@XZ.c)
 *     ??1CSystemBackdropVisual@@UEAA@XZ @ 0x180068A4C (--1CSystemBackdropVisual@@UEAA@XZ.c)
 *     ??_GCSpriteVisual@@UEAAPEAXI@Z @ 0x1800B5290 (--_GCSpriteVisual@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x1800295E8 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 */

void __fastcall CSpriteVisual::~CSpriteVisual(CSpriteVisual *this)
{
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)this + 20);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)this + 19);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)this + 18);
  CVisual::~CVisual(this);
}
