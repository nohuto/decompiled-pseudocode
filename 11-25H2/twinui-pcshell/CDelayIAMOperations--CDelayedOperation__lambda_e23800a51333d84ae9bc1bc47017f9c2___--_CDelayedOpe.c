/*
 * XREFs of CDelayIAMOperations::CDelayedOperation__lambda_e23800a51333d84ae9bc1bc47017f9c2___::_CDelayedOperation__lambda_e23800a51333d84ae9bc1bc47017f9c2___ @ 0x1802E3AAC
 * Callers:
 *     CDelayIAMOperations::CDelayedOperation__lambda_e23800a51333d84ae9bc1bc47017f9c2___::_scalar_deleting_destructor_ @ 0x1802E49F0 (CDelayIAMOperations--CDelayedOperation__lambda_e23800a51333d84ae9bc1bc47017f9c2___--_scalar_dele.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 */

void **__fastcall CDelayIAMOperations::CDelayedOperation__lambda_e23800a51333d84ae9bc1bc47017f9c2___::_CDelayedOperation__lambda_e23800a51333d84ae9bc1bc47017f9c2___(
        _QWORD *a1)
{
  void **result; // rax

  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(a1 + 3);
  result = &CDelayIAMOperations::COperation::`vftable';
  *a1 = &CDelayIAMOperations::COperation::`vftable';
  return result;
}
