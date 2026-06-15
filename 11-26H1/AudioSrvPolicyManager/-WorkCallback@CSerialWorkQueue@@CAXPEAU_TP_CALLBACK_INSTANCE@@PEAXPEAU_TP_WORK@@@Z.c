/*
 * XREFs of ?WorkCallback@CSerialWorkQueue@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x1800406D0
 * Callers:
 *     <none>
 * Callees:
 *     ??R?$_Func_class@X$$V@std@@QEBAXXZ @ 0x18002587C (--R-$_Func_class@X$$V@std@@QEBAXXZ.c)
 *     ??_G_WorkTask@@QEAAPEAXI@Z @ 0x18003F7F4 (--_G_WorkTask@@QEAAPEAXI@Z.c)
 *     ?load@?$_Atomic_storage@_N$00@std@@QEBA_NW4memory_order@2@@Z @ 0x180041014 (-load@-$_Atomic_storage@_N$00@std@@QEBA_NW4memory_order@2@@Z.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CSerialWorkQueue::WorkCallback(PTP_CALLBACK_INSTANCE Instance, __int64 *Context, PTP_WORK Work)
{
  __int64 v5; // rsi

  v5 = Context[2];
  if ( _Mtx_lock((_Mtx_t)(v5 + 88)) )
  {
    std::_Throw_Cpp_error(5);
    __debugbreak();
  }
  if ( *(_DWORD *)(v5 + 164) == 0x7FFFFFFF )
  {
    *(_DWORD *)(v5 + 164) = 2147483646;
    std::_Throw_Cpp_error(6);
  }
  if ( !(unsigned __int8)std::_Atomic_storage<bool,1>::load(v5 + 80) )
    std::_Func_class<void,>::operator()(*Context);
  _Mtx_unlock((_Mtx_t)(v5 + 88));
  _WorkTask::`scalar deleting destructor'((_WorkTask *)Context);
  CloseThreadpoolWork(Work);
}
