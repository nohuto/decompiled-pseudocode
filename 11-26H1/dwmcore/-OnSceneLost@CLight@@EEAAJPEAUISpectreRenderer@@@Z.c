/*
 * XREFs of ?OnSceneLost@CLight@@EEAAJPEAUISpectreRenderer@@@Z @ 0x180264AC0
 * Callers:
 *     <none>
 * Callees:
 *     ?reset@?$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180015450 (-reset@-$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 */

__int64 __fastcall CLight::OnSceneLost(CLight *this, struct ISpectreRenderer *a2)
{
  wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset((__int64 *)this + 2);
  return 0LL;
}
