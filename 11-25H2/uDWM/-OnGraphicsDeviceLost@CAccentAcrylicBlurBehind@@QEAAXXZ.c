/*
 * XREFs of ?OnGraphicsDeviceLost@CAccentAcrylicBlurBehind@@QEAAXXZ @ 0x1800A0504
 * Callers:
 *     ?OnGraphicsDeviceLost@CAccent@@QEAAXXZ @ 0x1800A04D4 (-OnGraphicsDeviceLost@CAccent@@QEAAXXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x1800295E8 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 */

void __fastcall CAccentAcrylicBlurBehind::OnGraphicsDeviceLost(CAccentAcrylicBlurBehind *this)
{
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)this + 36);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)this + 35);
}
