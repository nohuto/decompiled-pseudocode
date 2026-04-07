/*
 * XREFs of ?OnGraphicsDeviceLost@CNoiseSurfaceCache@CAccentAcrylicBlurBehind@@UEAAXXZ @ 0x1800945C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CAccentAcrylicBlurBehind::CNoiseSurfaceCache::OnGraphicsDeviceLost(
        CAccentAcrylicBlurBehind::CNoiseSurfaceCache *this)
{
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)this + 3);
}
