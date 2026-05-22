/*
 * XREFs of ?CallOnThreadExitStatic@CallOnThreadExit@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WAIT@@K@Z @ 0x180133CE0
 * Callers:
 *     <none>
 * Callees:
 *     ?lock@_Mutex_base@std@@QEAAXXZ @ 0x180010150 (-lock@_Mutex_base@std@@QEAAXXZ.c)
 *     ??4?$function@$$A6AXW4CallbackReason@CallOnThreadExit@@@Z@std@@QEAAAEAV01@$$T@Z @ 0x180133C78 (--4-$function@$$A6AXW4CallbackReason@CallOnThreadExit@@@Z@std@@QEAAAEAV01@$$T@Z.c)
 *     ??R?$_Func_class@XW4CallbackReason@CallOnThreadExit@@@std@@QEBAXW4CallbackReason@CallOnThreadExit@@@Z @ 0x180133C98 (--R-$_Func_class@XW4CallbackReason@CallOnThreadExit@@@std@@QEBAXW4CallbackReason@CallOnThreadExi.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CallOnThreadExit::CallOnThreadExitStatic(
        PTP_CALLBACK_INSTANCE Instance,
        __int64 Context,
        PTP_WAIT Wait,
        TP_WAIT_RESULT WaitResult)
{
  __int64 v5; // rdx

  std::_Mutex_base::lock((std::_Mutex_base *)&unk_1802531B0);
  std::_Func_class<void,enum CallOnThreadExit::CallbackReason>::operator()(Context);
  std::function<void (enum CallOnThreadExit::CallbackReason)>::operator=(Context, v5);
  _Mtx_unlock((_Mtx_t)&unk_1802531B0);
}
