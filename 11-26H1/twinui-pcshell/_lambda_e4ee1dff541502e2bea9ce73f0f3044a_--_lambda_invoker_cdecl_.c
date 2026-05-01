/*
 * XREFs of _lambda_e4ee1dff541502e2bea9ce73f0f3044a_::_lambda_invoker_cdecl_ @ 0x1804414D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall lambda_e4ee1dff541502e2bea9ce73f0f3044a_::_lambda_invoker_cdecl_(
        PTP_CALLBACK_INSTANCE Instance,
        LegacyUwpWindowWrapper::NavigationLevelHelper *Context,
        PTP_TIMER Timer)
{
  LegacyUwpWindowWrapper::NavigationLevelHelper::HandleDebounceTimeout(Context, Timer);
}
