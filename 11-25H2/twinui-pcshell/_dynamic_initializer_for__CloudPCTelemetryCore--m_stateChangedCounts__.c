/*
 * XREFs of _dynamic_initializer_for__CloudPCTelemetryCore::m_stateChangedCounts__ @ 0x180011030
 * Callers:
 *     <none>
 * Callees:
 *     ?_Assign_grow@?$_Hash_vec@V?$allocator@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUhstring@winrt@@U12@@std@@@std@@@std@@@std@@@std@@@std@@QEAAX_KV?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUhstring@winrt@@U12@@std@@@std@@@std@@@2@@Z @ 0x1800FCF1C (-_Assign_grow@-$_Hash_vec@V-$allocator@V-$_List_unchecked_iterator@V-$_List_val@U-$_ea_1800FCF1C.c)
 *     ??2@YAPEAX_K@Z @ 0x1802D2B34 (--2@YAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=2
int dynamic_initializer_for__CloudPCTelemetryCore::m_stateChangedCounts__()
{
  _QWORD *v0; // rax

  v0 = operator new(0x70uLL);
  *v0 = v0;
  v0[1] = v0;
  qword_18089EA38 = (__int64)v0;
  qword_18089EA48 = 0LL;
  xmmword_18089EA50 = 0LL;
  qword_18089EA60 = 7LL;
  qword_18089EA68 = 8LL;
  CloudPCTelemetryCore::m_stateChangedCounts = 1065353216;
  std::_Hash_vec<std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<winrt::hstring const,winrt::hstring>>>>>>::_Assign_grow(
    &qword_18089EA48,
    16LL,
    v0);
  return atexit((void (__cdecl *)())dynamic_atexit_destructor_for__CloudPCTelemetryCore::m_stateChangedCounts__);
}
