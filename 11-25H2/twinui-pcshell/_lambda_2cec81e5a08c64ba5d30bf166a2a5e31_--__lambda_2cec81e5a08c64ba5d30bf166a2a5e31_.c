/*
 * XREFs of _lambda_2cec81e5a08c64ba5d30bf166a2a5e31_::__lambda_2cec81e5a08c64ba5d30bf166a2a5e31_ @ 0x1802E39AC
 * Callers:
 *     ?_AttemptPendingActivationTracking@CApplicationManager@@AEAAXPEAUHWND__@@PEAUIImmersiveApplication@@@Z @ 0x1802ECA48 (-_AttemptPendingActivationTracking@CApplicationManager@@AEAAXPEAUHWND__@@PEAUIImmersiveApplicati.c)
 *     _CApplicationManager::_AttemptPendingActivationTracking_::_1_::dtor$1 @ 0x1806B9DEB (_CApplicationManager--_AttemptPendingActivationTracking_--_1_--dtor$1.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall lambda_2cec81e5a08c64ba5d30bf166a2a5e31_::__lambda_2cec81e5a08c64ba5d30bf166a2a5e31_(__int64 a1)
{
  return Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)(a1 + 24));
}
