/*
 * XREFs of _lambda_6658f1f8a43dfdccf56aab26c5777bf2_::_lambda_invoker_cdecl_ @ 0x18039DBE0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall lambda_6658f1f8a43dfdccf56aab26c5777bf2_::_lambda_invoker_cdecl_(
        PTP_CALLBACK_INSTANCE Instance,
        __int64 (__fastcall ****Context)(ExperienceManagerUtils *, GUID *, LPVOID *),
        PTP_TIMER Timer)
{
  SetThreadpoolTimer(Timer, 0LL, 0, 0);
  ExperienceManagerUtils::PostToUIThread(Context[6], (struct IUnknown *)Context, (void *)0x401, 2LL);
}
