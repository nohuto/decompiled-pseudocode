/*
 * XREFs of _lambda_25c4a8f213eae6a2b4eeb606a482f2ca_::_lambda_invoker_cdecl_ @ 0x18039DB40
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall lambda_25c4a8f213eae6a2b4eeb606a482f2ca_::_lambda_invoker_cdecl_(
        PTP_CALLBACK_INSTANCE Instance,
        __int64 (__fastcall ****Context)(ExperienceManagerUtils *, GUID *, LPVOID *),
        PTP_TIMER Timer)
{
  SetThreadpoolTimer(Timer, 0LL, 0, 0);
  ExperienceManagerUtils::PostToUIThread(Context[6], (struct IUnknown *)Context, (void *)0x401, 7LL);
}
