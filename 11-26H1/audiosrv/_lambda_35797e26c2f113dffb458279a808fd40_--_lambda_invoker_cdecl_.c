/*
 * XREFs of _lambda_35797e26c2f113dffb458279a808fd40_::_lambda_invoker_cdecl_ @ 0x18010E670
 * Callers:
 *     <none>
 * Callees:
 *     ?lock@_Mutex_base@std@@QEAAXXZ @ 0x180013110 (-lock@_Mutex_base@std@@QEAAXXZ.c)
 *     ?PublishSebEvent@CSebNotifier@@AEAAXE@Z @ 0x18006F308 (-PublishSebEvent@CSebNotifier@@AEAAXE@Z.c)
 */

void __fastcall lambda_35797e26c2f113dffb458279a808fd40_::_lambda_invoker_cdecl_(
        PTP_CALLBACK_INSTANCE Instance,
        char *Context,
        PTP_WAIT Wait,
        TP_WAIT_RESULT WaitResult)
{
  std::_Mutex_base::lock((std::_Mutex_base *)(Context + 8));
  if ( !*(_DWORD *)Context )
    CSebNotifier::PublishSebEvent((CSebNotifier *)Context, 0);
  _Mtx_unlock((_Mtx_t)(Context + 8));
}
