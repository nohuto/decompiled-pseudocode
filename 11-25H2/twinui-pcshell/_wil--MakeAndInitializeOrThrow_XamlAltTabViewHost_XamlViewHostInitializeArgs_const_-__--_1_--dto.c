/*
 * XREFs of _wil::MakeAndInitializeOrThrow_XamlAltTabViewHost_XamlViewHostInitializeArgs_const_&__::_1_::dtor$0 @ 0x1806AB036
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$ComPtr@VXamlAltTabViewHost@@@WRL@Microsoft@@QEAA@XZ @ 0x1802D19CC (--1-$ComPtr@VXamlAltTabViewHost@@@WRL@Microsoft@@QEAA@XZ.c)
 */

__int64 __fastcall wil::MakeAndInitializeOrThrow_XamlAltTabViewHost_XamlViewHostInitializeArgs_const____::_1_::dtor_0(
        __int64 a1,
        __int64 a2)
{
  __int64 result; // rax

  result = *(_DWORD *)(a2 + 32) & 1;
  if ( (_DWORD)result )
  {
    *(_DWORD *)(a2 + 32) &= ~1u;
    return Microsoft::WRL::ComPtr<XamlAltTabViewHost>::~ComPtr<XamlAltTabViewHost>(*(volatile int ***)(a2 + 64));
  }
  return result;
}
