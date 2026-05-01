/*
 * XREFs of _lambda_4df7d2f5a675dae23772a8231912a19a_::_lambda_invoker_cdecl_ @ 0x18039DB90
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall lambda_4df7d2f5a675dae23772a8231912a19a_::_lambda_invoker_cdecl_(
        PTP_CALLBACK_INSTANCE Instance,
        __int64 (__fastcall ****Context)(ExperienceManagerUtils *, GUID *, LPVOID *),
        PTP_TIMER Timer)
{
  SetThreadpoolTimer(Timer, 0LL, 0, 0);
  ExperienceManagerUtils::PostToUIThread(Context[6], (struct IUnknown *)Context, (void *)0x401, 6LL);
}
