/*
 * XREFs of ??1?$ComPtr@VXamlAltTabViewHost@@@WRL@Microsoft@@QEAA@XZ @ 0x1802C86E4
 * Callers:
 *     _wil::MakeAndInitializeOrThrow_XamlAltTabViewHost_XamlViewHostInitializeArgs_const_&__::_1_::dtor$0 @ 0x1806D1084 (_wil--MakeAndInitializeOrThrow_XamlAltTabViewHost_XamlViewHostInitializeArgs_const_-__--_1_--dto.c)
 *     _Microsoft::WRL::Details::MakeAndInitialize_XamlAltTabViewHost_XamlAltTabViewHost_XamlViewHostInitializeArgs_const_&__::_1_::dtor$2 @ 0x1806D10B1 (_Microsoft--WRL--Details--MakeAndInitialize_XamlAltTabViewHost_XamlAltTabViewHost_XamlViewHostIn.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall Microsoft::WRL::ComPtr<XamlAltTabViewHost>::~ComPtr<XamlAltTabViewHost>(volatile int **a1)
{
  return Microsoft::WRL::ComPtr<XamlAltTabViewHost>::InternalRelease(a1);
}
