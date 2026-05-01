/*
 * XREFs of ??R_lambda_949de2b926fa2a3cc50f06471a2a2214_@@QEBA@AEBUIDeviceInformationStatics@Enumeration@Devices@Windows@winrt@@@Z @ 0x1805F5EBC
 * Callers:
 *     ??$call@AEAV_lambda_949de2b926fa2a3cc50f06471a2a2214_@@@?$factory_cache_entry@UDeviceInformation@Enumeration@Devices@Windows@winrt@@UIDeviceInformationStatics@2345@@impl@winrt@@QEAA?A_PAEAV_lambda_949de2b926fa2a3cc50f06471a2a2214_@@@Z @ 0x1805F4368 (--$call@AEAV_lambda_949de2b926fa2a3cc50f06471a2a2214_@@@-$factory_cache_entry@UDeviceInformation.c)
 *     _lambda_3e036b3644723c146ee880a5a6e63477_::operator() @ 0x1805F5980 (_lambda_3e036b3644723c146ee880a5a6e63477_--operator().c)
 * Callees:
 *     ?CreateExpressionAnimation@?$consume_Windows_UI_Composition_ICompositor@UICompositor@Composition@UI@Windows@winrt@@@impl@winrt@@QEBA@AEBUhstring@param@3@@Z @ 0x180493670 (-CreateExpressionAnimation@-$consume_Windows_UI_Composition_ICompositor@UICompositor@Composition.c)
 */

_QWORD *__fastcall _lambda_949de2b926fa2a3cc50f06471a2a2214_::operator()(__int64 **a1, _QWORD *a2, __int64 **a3)
{
  winrt::impl::consume_Windows_UI_Composition_ICompositor<winrt::Windows::UI::Composition::ICompositor>::CreateExpressionAnimation(
    a3,
    a2,
    *a1);
  return a2;
}
