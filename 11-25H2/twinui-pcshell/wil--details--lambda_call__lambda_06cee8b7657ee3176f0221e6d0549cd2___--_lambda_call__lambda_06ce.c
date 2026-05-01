/*
 * XREFs of wil::details::lambda_call__lambda_06cee8b7657ee3176f0221e6d0549cd2___::_lambda_call__lambda_06cee8b7657ee3176f0221e6d0549cd2___ @ 0x18038EBFC
 * Callers:
 *     _lambda_dc9a1ee4bc8f1d94a0d7ca992cb3efdc_::operator() @ 0x18038EE38 (_lambda_dc9a1ee4bc8f1d94a0d7ca992cb3efdc_--operator().c)
 *     __lambda_dc9a1ee4bc8f1d94a0d7ca992cb3efdc_::operator()_::_1_::dtor$1 @ 0x1806BF5F2 (__lambda_dc9a1ee4bc8f1d94a0d7ca992cb3efdc_--operator()_--_1_--dtor$1.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall wil::details::lambda_call__lambda_06cee8b7657ee3176f0221e6d0549cd2___::_lambda_call__lambda_06cee8b7657ee3176f0221e6d0549cd2___(
        __int64 *a1)
{
  __int64 v1; // rax

  if ( *((_BYTE *)a1 + 16) )
  {
    v1 = *a1;
    *((_BYTE *)a1 + 16) = 0;
    *(_BYTE *)(v1 + 816) = 0;
  }
  return Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(a1 + 1);
}
