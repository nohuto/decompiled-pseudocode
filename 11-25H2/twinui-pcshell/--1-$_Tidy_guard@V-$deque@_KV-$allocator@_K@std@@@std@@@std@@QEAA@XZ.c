/*
 * XREFs of ??1?$_Tidy_guard@V?$deque@_KV?$allocator@_K@std@@@std@@@std@@QEAA@XZ @ 0x1805594CC
 * Callers:
 *     ??0?$deque@_KV?$allocator@_K@std@@@std@@QEAA@_KAEB_K@Z @ 0x1805593E4 (--0-$deque@_KV-$allocator@_K@std@@@std@@QEAA@_KAEB_K@Z.c)
 *     _std::deque_unsigned___int64_std::allocator_unsigned___int64___::deque_unsigned___int64_std::allocator_unsigned___int64____::_1_::dtor$1 @ 0x1806CD3E8 (_std--deque_unsigned___int64_std--allocator_unsigned___int64___--deque_unsigned___i_ea_1806CD3E8.c)
 * Callees:
 *     ?_Tidy@?$deque@_KV?$allocator@_K@std@@@std@@AEAAXXZ @ 0x1800E1A2C (-_Tidy@-$deque@_KV-$allocator@_K@std@@@std@@AEAAXXZ.c)
 */

void __fastcall std::_Tidy_guard<std::deque<unsigned __int64>>::~_Tidy_guard<std::deque<unsigned __int64>>(_QWORD **a1)
{
  _QWORD *v1; // rcx

  v1 = *a1;
  if ( v1 )
    std::deque<unsigned __int64>::_Tidy(v1);
}
