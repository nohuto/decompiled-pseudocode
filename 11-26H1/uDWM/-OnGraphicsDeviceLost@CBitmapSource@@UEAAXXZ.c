/*
 * XREFs of ?OnGraphicsDeviceLost@CBitmapSource@@UEAAXXZ @ 0x180063FE0
 * Callers:
 *     <none>
 * Callees:
 *     ?reset@?$com_ptr_t@UICompositionSurface@Composition@UI@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800544EC (-reset@-$com_ptr_t@UICompositionSurface@Composition@UI@Windows@@Uerr_returncode_policy@wil@@@wil.c)
 */

void __fastcall CBitmapSource::OnGraphicsDeviceLost(CBitmapSource *this)
{
  wil::com_ptr_t<Windows::UI::Composition::ICompositionSurface,wil::err_returncode_policy>::reset((__int64 *)this + 4);
  wil::com_ptr_t<Windows::UI::Composition::ICompositionSurface,wil::err_returncode_policy>::reset((__int64 *)this + 5);
}
