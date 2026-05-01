/*
 * XREFs of ??1?$ComPtr@VCOperationWaiter@@@WRL@Microsoft@@QEAA@XZ @ 0x1802414A8
 * Callers:
 *     _CApplicationManager::_HandleCreation_EnsureApplicationView_::_1_::dtor$2 @ 0x1806A865D (_CApplicationManager--_HandleCreation_EnsureApplicationView_--_1_--dtor$2.c)
 *     _CApplicationManager::_HandleCreation_EnsureApplicationView_::_1_::dtor$3 @ 0x1806A866F (_CApplicationManager--_HandleCreation_EnsureApplicationView_--_1_--dtor$3.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall Microsoft::WRL::ComPtr<COperationWaiter>::~ComPtr<COperationWaiter>(volatile signed __int32 **a1)
{
  return Microsoft::WRL::ComPtr<COperationWaiter>::InternalRelease(a1);
}
