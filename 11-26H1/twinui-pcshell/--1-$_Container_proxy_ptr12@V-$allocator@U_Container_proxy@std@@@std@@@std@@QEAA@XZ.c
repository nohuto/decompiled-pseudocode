/*
 * XREFs of ??1?$_Container_proxy_ptr12@V?$allocator@U_Container_proxy@std@@@std@@@std@@QEAA@XZ @ 0x1802C68B8
 * Callers:
 *     ??$_Construct@V?$_Deque_unchecked_const_iterator@V?$_Deque_val@U?$_Deque_simple_types@V?$time_point@Usystem_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0JIJGIA@@std@@@23@@chrono@std@@@std@@@std@@@std@@V12@@?$deque@V?$time_point@Usystem_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0JIJGIA@@std@@@23@@chrono@std@@V?$allocator@V?$time_point@Usystem_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0JIJGIA@@std@@@23@@chrono@std@@@3@@std@@AEAAXV?$_Deque_unchecked_const_iterator@V?$_Deque_val@U?$_Deque_simple_types@V?$time_point@Usystem_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0JIJGIA@@std@@@23@@chrono@std@@@std@@@std@@@1@V21@@Z @ 0x18026AD90 (--$_Construct@V-$_Deque_unchecked_const_iterator@V-$_Deque_val@U-$_Deque_simple_types@V-$time_po.c)
 *     ??0?$deque@_KV?$allocator@_K@std@@@std@@QEAA@_KAEB_K@Z @ 0x18057D5E4 (--0-$deque@_KV-$allocator@_K@std@@@std@@QEAA@_KAEB_K@Z.c)
 *     _std::deque_std::chrono::time_point_std::chrono::system_clock_std::chrono::duration___int64_std::ratio_1_10000000______std::allocator_std::chrono::time_point_std::chrono::system_clock_std::chrono::duration___int64_std::ratio_1_10000000_________::_Construct_std::_Deque_unchecked_const_iterator_std::_Deque_val_std::_Deque_simple_types_std::chrono::time_point_std::chrono::system_clock_std::chrono::duration___int64_std::ratio_1_10000000____________std::_Deque_unchecked_const_iterator_std::_Deque_val_std::_Deque_simple_types_std::chrono::time_point_std::chrono::system_clock_std::chrono::duration___int64_std::ratio_1_10000000______________::_1_::dtor$0 @ 0x1806F5A5B (_std--deque_std--chrono--time_point_std--chrono--system_clock_std--chrono--duration___int64_std-.c)
 * Callees:
 *     ??$_Deallocate@$0BA@@std@@YAXPEAX_K@Z @ 0x180285A90 (--$_Deallocate@$0BA@@std@@YAXPEAX_K@Z.c)
 */

void __fastcall std::_Container_proxy_ptr12<std::allocator<std::_Container_proxy>>::~_Container_proxy_ptr12<std::allocator<std::_Container_proxy>>(
        void **a1)
{
  void *v1; // rcx

  v1 = *a1;
  if ( v1 )
    std::_Deallocate<16>(v1, (struct std::nothrow_t *)0x10);
}
