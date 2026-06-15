/*
 * XREFs of ?RecurringWaitCallback@CSerialWorkQueue@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WAIT@@J@Z @ 0x1800BF900
 * Callers:
 *     <none>
 * Callees:
 *     ?lock@_Mutex_base@std@@QEAAXXZ @ 0x180013110 (-lock@_Mutex_base@std@@QEAAXXZ.c)
 *     ?load@?$_Atomic_storage@_N$00@std@@QEBA_NW4memory_order@2@@Z @ 0x18001BEB0 (-load@-$_Atomic_storage@_N$00@std@@QEBA_NW4memory_order@2@@Z.c)
 *     ??R?$_Func_class@X$$V@std@@QEBAXXZ @ 0x18001C994 (--R-$_Func_class@X$$V@std@@QEBAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CSerialWorkQueue::RecurringWaitCallback(
        PTP_CALLBACK_INSTANCE Instance,
        PVOID Context,
        PTP_WAIT Wait,
        TP_WAIT_RESULT WaitResult)
{
  __int64 v6; // rdi

  v6 = *((_QWORD *)Context + 4);
  std::_Mutex_base::lock((std::_Mutex_base *)(v6 + 88));
  if ( !std::_Atomic_storage<bool,1>::load(v6 + 80) )
  {
    std::_Func_class<void,>::operator()(*((_QWORD *)Context + 1));
    SetThreadpoolWait(Wait, *((HANDLE *)Context + 3), 0LL);
  }
  _Mtx_unlock((_Mtx_t)(v6 + 88));
}
