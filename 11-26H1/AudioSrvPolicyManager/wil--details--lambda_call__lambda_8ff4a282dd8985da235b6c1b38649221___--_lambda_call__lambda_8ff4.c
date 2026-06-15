/*
 * XREFs of wil::details::lambda_call__lambda_8ff4a282dd8985da235b6c1b38649221___::_lambda_call__lambda_8ff4a282dd8985da235b6c1b38649221___ @ 0x18003B3F0
 * Callers:
 *     _CApplicationManager::ReadBackgroundAudioTaskCapability_::_1_::dtor$0 @ 0x18004E067 (_CApplicationManager--ReadBackgroundAudioTaskCapability_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

void __fastcall wil::details::lambda_call__lambda_8ff4a282dd8985da235b6c1b38649221___::_lambda_call__lambda_8ff4a282dd8985da235b6c1b38649221___(
        __int64 a1)
{
  if ( *(_BYTE *)(a1 + 1) )
  {
    *(_BYTE *)(a1 + 1) = 0;
    CoUninitialize();
  }
}
