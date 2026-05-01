/*
 * XREFs of _dynamic_initializer_for__CloudPCTelemetryCore::m_stateChangedCounts__ @ 0x180012700
 * Callers:
 *     <none>
 * Callees:
 *     ?_Assign_grow@?$_Hash_vec@V?$allocator@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUhstring@winrt@@U12@@std@@@std@@@std@@@std@@@std@@@std@@QEAAX_KV?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUhstring@winrt@@U12@@std@@@std@@@std@@@2@@Z @ 0x180137160 (-_Assign_grow@-$_Hash_vec@V-$allocator@V-$_List_unchecked_iterator@V-$_List_val@U-$_ea_180137160.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z @ 0x180285C68 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=2
int dynamic_initializer_for__CloudPCTelemetryCore::m_stateChangedCounts__()
{
  _QWORD *v0; // rax

  v0 = (_QWORD *)std::_Allocate<16,std::_Default_allocate_traits>(112LL);
  *v0 = v0;
  v0[1] = v0;
  qword_1808DF188 = (__int64)v0;
  qword_1808DF198 = 0LL;
  xmmword_1808DF1A0 = 0LL;
  qword_1808DF1B0 = 7LL;
  qword_1808DF1B8 = 8LL;
  CloudPCTelemetryCore::m_stateChangedCounts = 1065353216;
  std::_Hash_vec<std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<winrt::hstring const,winrt::hstring>>>>>>::_Assign_grow(
    &qword_1808DF198,
    16LL,
    v0);
  return atexit((void (__cdecl *)())dynamic_atexit_destructor_for__CloudPCTelemetryCore::m_stateChangedCounts__);
}
