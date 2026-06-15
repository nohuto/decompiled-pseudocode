/*
 * XREFs of ?ProcessWorkItem@CWorkFifo@@AEAAXXZ @ 0x180126104
 * Callers:
 *     ?WorkCallback@CWorkFifo@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x180127070 (-WorkCallback@CWorkFifo@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180011720 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?load@?$_Atomic_storage@_N$00@std@@QEBA_NW4memory_order@2@@Z @ 0x18001BEB0 (-load@-$_Atomic_storage@_N$00@std@@QEBA_NW4memory_order@2@@Z.c)
 *     ??R?$_Func_class@X$$V@std@@QEBAXXZ @ 0x18001C994 (--R-$_Func_class@X$$V@std@@QEBAXXZ.c)
 *     ?SetEvent@details@wil@@YAXPEAX@Z @ 0x1800259E8 (-SetEvent@details@wil@@YAXPEAX@Z.c)
 *     ??4?$shared_ptr@VCXvmPowerReference@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x180084124 (--4-$shared_ptr@VCXvmPowerReference@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ?GetWorkItem@CWorkFifo@@AEAA?AV?$shared_ptr@VWorkItem@CWorkFifo@@@std@@XZ @ 0x180085F98 (-GetWorkItem@CWorkFifo@@AEAA-AV-$shared_ptr@VWorkItem@CWorkFifo@@@std@@XZ.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CWorkFifo::ProcessWorkItem(wil::details **this)
{
  __int64 *WorkItem; // rax
  void *v3; // rdx
  __int64 *v4; // [rsp+20h] [rbp-28h] BYREF
  std::_Ref_count_base *v5; // [rsp+28h] [rbp-20h]
  __int64 v6; // [rsp+30h] [rbp-18h] BYREF
  std::_Ref_count_base *v7; // [rsp+38h] [rbp-10h]

  CWorkFifo::GetWorkItem(this, &v4);
  while ( !std::_Atomic_storage<bool,1>::load((__int64)(this + 17)) && v4 )
  {
    std::_Func_class<void,>::operator()(*v4);
    WorkItem = CWorkFifo::GetWorkItem(this, &v6);
    std::shared_ptr<CXvmPowerReference>::operator=(&v4, WorkItem);
    if ( v7 )
      std::_Ref_count_base::_Decref(v7);
  }
  if ( !std::_Atomic_storage<bool,1>::load((__int64)(this + 17))
    && !std::_Atomic_storage<bool,1>::load((__int64)this + 137) )
  {
    wil::details::SetEvent(this[28], v3);
  }
  if ( v5 )
    std::_Ref_count_base::_Decref(v5);
}
