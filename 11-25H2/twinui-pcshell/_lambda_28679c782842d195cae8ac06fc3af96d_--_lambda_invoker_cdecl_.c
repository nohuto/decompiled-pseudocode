/*
 * XREFs of _lambda_28679c782842d195cae8ac06fc3af96d_::_lambda_invoker_cdecl_ @ 0x180368450
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall lambda_28679c782842d195cae8ac06fc3af96d_::_lambda_invoker_cdecl_(
        PTP_CALLBACK_INSTANCE Instance,
        PVOID Context,
        PTP_TIMER Timer)
{
  ExperienceManagerUtils::PostToUIThread(0LL, 0LL, (void *)(unsigned int)Context, 0LL);
}
