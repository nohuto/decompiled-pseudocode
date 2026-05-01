/*
 * XREFs of CDelayIAMOperations::CDelayedOperation__lambda_408d293201316df79a8620e012e4c791___::_CDelayedOperation__lambda_408d293201316df79a8620e012e4c791___ @ 0x1801F1BFC
 * Callers:
 *     CDelayIAMOperations::CDelayedOperation__lambda_408d293201316df79a8620e012e4c791___::_scalar_deleting_destructor_ @ 0x1801F1BC0 (CDelayIAMOperations--CDelayedOperation__lambda_408d293201316df79a8620e012e4c791___--_scalar_dele.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 */

void **__fastcall CDelayIAMOperations::CDelayedOperation__lambda_408d293201316df79a8620e012e4c791___::_CDelayedOperation__lambda_408d293201316df79a8620e012e4c791___(
        _QWORD *a1)
{
  void **result; // rax

  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(a1 + 2);
  result = &CDelayIAMOperations::COperation::`vftable';
  *a1 = &CDelayIAMOperations::COperation::`vftable';
  return result;
}
