/*
 * XREFs of ??1?$_Container_proxy_ptr12@V?$allocator@U_Container_proxy@std@@@std@@@std@@QEAA@XZ @ 0x1802CF558
 * Callers:
 *     ??0?$deque@_KV?$allocator@_K@std@@@std@@QEAA@_KAEB_K@Z @ 0x1805593E4 (--0-$deque@_KV-$allocator@_K@std@@@std@@QEAA@_KAEB_K@Z.c)
 *     _SnapEducationHandler::WindowFocusChanged_::_1_::dtor$3 @ 0x1806A7156 (_SnapEducationHandler--WindowFocusChanged_--_1_--dtor$3.c)
 *     _std::deque_unsigned___int64_std::allocator_unsigned___int64___::deque_unsigned___int64_std::allocator_unsigned___int64____::_1_::dtor$0 @ 0x1806CD3D6 (_std--deque_unsigned___int64_std--allocator_unsigned___int64___--deque_unsigned___int64_std--all.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180029B4C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

void __fastcall std::_Container_proxy_ptr12<std::allocator<std::_Container_proxy>>::~_Container_proxy_ptr12<std::allocator<std::_Container_proxy>>(
        void **a1)
{
  void *v1; // rcx

  v1 = *a1;
  if ( v1 )
    std::_Deallocate<16,0>(v1, (const struct std::nothrow_t *)0x10);
}
