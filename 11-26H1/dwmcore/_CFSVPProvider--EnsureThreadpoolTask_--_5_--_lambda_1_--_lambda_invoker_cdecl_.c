/*
 * XREFs of _CFSVPProvider::EnsureThreadpoolTask_::_5_::_lambda_1_::_lambda_invoker_cdecl_ @ 0x180252D00
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CFSVPProvider::EnsureThreadpoolTask_::_5_::_lambda_1_::_lambda_invoker_cdecl_(
        PTP_CALLBACK_INSTANCE Instance,
        CFSVPProvider *Context,
        PTP_WORK Work)
{
  CFSVPProvider::SignalSEBWorker(Context);
}
