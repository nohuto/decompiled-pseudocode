/*
 * XREFs of _lambda_cb8c93dbc801781329b66c287e9aafb7_::_lambda_invoker_cdecl_ @ 0x1803A65E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall lambda_cb8c93dbc801781329b66c287e9aafb7_::_lambda_invoker_cdecl_(
        PTP_CALLBACK_INSTANCE Instance,
        __int64 (__fastcall ****Context)(ExperienceManagerUtils *, GUID *, LPVOID *),
        PTP_TIMER Timer)
{
  SetThreadpoolTimer(Timer, 0LL, 0, 0);
  ExperienceManagerUtils::PostToUIThread(Context[6], (struct IUnknown *)Context, (void *)0x401, 14LL);
}
