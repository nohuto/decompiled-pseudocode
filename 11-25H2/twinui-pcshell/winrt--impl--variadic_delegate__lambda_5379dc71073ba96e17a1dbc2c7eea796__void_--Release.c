/*
 * XREFs of winrt::impl::variadic_delegate__lambda_5379dc71073ba96e17a1dbc2c7eea796__void_::Release @ 0x1805CC260
 * Callers:
 *     <none>
 * Callees:
 *     ?decrement_reference@implements_delegate_base@impl@winrt@@QEAAIXZ @ 0x18028EAE8 (-decrement_reference@implements_delegate_base@impl@winrt@@QEAAIXZ.c)
 *     ??3@YAXPEAX@Z @ 0x1802D2D4C (--3@YAXPEAX@Z.c)
 *     winrt::impl::variadic_delegate__lambda_5379dc71073ba96e17a1dbc2c7eea796__void_::_variadic_delegate__lambda_5379dc71073ba96e17a1dbc2c7eea796__void_ @ 0x1805CA288 (winrt--impl--variadic_delegate__lambda_5379dc71073ba96e17a1dbc2c7eea796__void_--_variadic_delega.c)
 */

__int64 __fastcall winrt::impl::variadic_delegate__lambda_5379dc71073ba96e17a1dbc2c7eea796__void_::Release(
        volatile signed __int32 *Block)
{
  unsigned int v2; // edi

  v2 = winrt::impl::implements_delegate_base::decrement_reference(Block + 2);
  if ( !v2 && Block )
  {
    winrt::impl::variadic_delegate__lambda_5379dc71073ba96e17a1dbc2c7eea796__void_::_variadic_delegate__lambda_5379dc71073ba96e17a1dbc2c7eea796__void_((__int64)Block);
    operator delete((void *)Block);
  }
  return v2;
}
