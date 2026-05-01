/*
 * XREFs of _lambda_379fb6251cfae0942258739af0295e77_::__lambda_379fb6251cfae0942258739af0295e77_ @ 0x1801F9454
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_379fb6251cfae0942258739af0295e77___::_CTaskWrapper__lambda_379fb6251cfae0942258739af0295e77___ @ 0x1801F942C (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_379fb6251cfae0942258739af0295e77___--_CTask.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180029A94 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 */

void __fastcall lambda_379fb6251cfae0942258739af0295e77_::__lambda_379fb6251cfae0942258739af0295e77_(__int64 a1)
{
  std::_Ref_count_base *v2; // rcx

  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)(a1 + 24));
  v2 = *(std::_Ref_count_base **)(a1 + 16);
  if ( v2 )
    std::_Ref_count_base::_Decref(v2);
}
