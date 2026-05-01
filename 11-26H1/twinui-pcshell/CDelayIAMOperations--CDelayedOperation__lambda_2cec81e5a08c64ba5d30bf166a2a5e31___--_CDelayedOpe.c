/*
 * XREFs of CDelayIAMOperations::CDelayedOperation__lambda_2cec81e5a08c64ba5d30bf166a2a5e31___::_CDelayedOperation__lambda_2cec81e5a08c64ba5d30bf166a2a5e31___ @ 0x1802DD0C8
 * Callers:
 *     CDelayIAMOperations::CDelayedOperation__lambda_2cec81e5a08c64ba5d30bf166a2a5e31___::_scalar_deleting_destructor_ @ 0x1802DE140 (CDelayIAMOperations--CDelayedOperation__lambda_2cec81e5a08c64ba5d30bf166a2a5e31___--_scalar_dele.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180046FE0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 */

void **__fastcall CDelayIAMOperations::CDelayedOperation__lambda_2cec81e5a08c64ba5d30bf166a2a5e31___::_CDelayedOperation__lambda_2cec81e5a08c64ba5d30bf166a2a5e31___(
        _QWORD *a1)
{
  void **result; // rax

  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(a1 + 5);
  result = &CDelayIAMOperations::COperation::`vftable';
  *a1 = &CDelayIAMOperations::COperation::`vftable';
  return result;
}
