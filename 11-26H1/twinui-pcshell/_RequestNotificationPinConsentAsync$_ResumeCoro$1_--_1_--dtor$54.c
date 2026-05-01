/*
 * XREFs of _RequestNotificationPinConsentAsync$_ResumeCoro$1_::_1_::dtor$54 @ 0x1806FF17F
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_639cdbf1b0b4bc5a158a88668f16cd2e_::__lambda_639cdbf1b0b4bc5a158a88668f16cd2e_ @ 0x1805EE080 (_lambda_639cdbf1b0b4bc5a158a88668f16cd2e_--__lambda_639cdbf1b0b4bc5a158a88668f16cd2e_.c)
 */

void __fastcall RequestNotificationPinConsentAsync__ResumeCoro_1_::_1_::dtor_54(__int64 a1, __int64 a2)
{
  *(_QWORD *)(a2 + 384) = *(_QWORD *)(a2 + 48) + 520LL;
  *(_QWORD *)(a2 + 392) = **(_QWORD **)(a2 + 384);
  lambda_639cdbf1b0b4bc5a158a88668f16cd2e_::__lambda_639cdbf1b0b4bc5a158a88668f16cd2e_(*(winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension **)(a2 + 392));
}
