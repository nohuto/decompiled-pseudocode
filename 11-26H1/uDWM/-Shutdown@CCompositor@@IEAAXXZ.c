/*
 * XREFs of ?Shutdown@CCompositor@@IEAAXXZ @ 0x1800A80A4
 * Callers:
 *     ??1CCompositor@@MEAA@XZ @ 0x1800A7EA8 (--1CCompositor@@MEAA@XZ.c)
 *     ??1CDesktopManager@@EEAA@XZ @ 0x1800AA010 (--1CDesktopManager@@EEAA@XZ.c)
 * Callees:
 *     <none>
 */

void __fastcall CCompositor::Shutdown(CCompositor *this)
{
  wil::com_ptr_t<Windows::UI::Composition::ICompositionSurface,wil::err_returncode_policy>::reset((__int64 *)this + 3);
}
