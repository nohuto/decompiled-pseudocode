/*
 * XREFs of CDelayIAMOperations::CDelayedOperation__lambda_b685170db6cf3b2ad8ed143403a26c19___::_CDelayedOperation__lambda_b685170db6cf3b2ad8ed143403a26c19___ @ 0x1801FD0AC
 * Callers:
 *     CDelayIAMOperations::CDelayedOperation__lambda_b685170db6cf3b2ad8ed143403a26c19___::_scalar_deleting_destructor_ @ 0x1801FD070 (CDelayIAMOperations--CDelayedOperation__lambda_b685170db6cf3b2ad8ed143403a26c19___--_scalar_dele.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 */

void **__fastcall CDelayIAMOperations::CDelayedOperation__lambda_b685170db6cf3b2ad8ed143403a26c19___::_CDelayedOperation__lambda_b685170db6cf3b2ad8ed143403a26c19___(
        _QWORD *a1)
{
  void **result; // rax

  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(a1 + 2);
  result = &CDelayIAMOperations::COperation::`vftable';
  *a1 = &CDelayIAMOperations::COperation::`vftable';
  return result;
}
