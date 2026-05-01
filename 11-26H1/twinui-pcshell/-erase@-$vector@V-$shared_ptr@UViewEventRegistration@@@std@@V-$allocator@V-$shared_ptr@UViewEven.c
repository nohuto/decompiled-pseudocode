/*
 * XREFs of ?erase@?$vector@V?$shared_ptr@UViewEventRegistration@@@std@@V?$allocator@V?$shared_ptr@UViewEventRegistration@@@std@@@2@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@V?$shared_ptr@UViewEventRegistration@@@std@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@V?$shared_ptr@UViewEventRegistration@@@std@@@std@@@std@@@2@@Z @ 0x18003709C
 * Callers:
 *     ?UnregisterForViewEvents@WindowEventDispatcher@@UEAAJUEventRegistrationToken@@@Z @ 0x18041F040 (-UnregisterForViewEvents@WindowEventDispatcher@@UEAAJUEventRegistrationToken@@@Z.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x1800373AC (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 */

_QWORD *__fastcall std::vector<std::shared_ptr<ViewEventRegistration>>::erase(__int64 a1, _QWORD *a2, __int64 a3)
{
  __int64 *v3; // rbp
  __int64 *i; // rdi
  __int64 v8; // rax
  __int64 v9; // rdx
  std::_Ref_count_base *v10; // rcx
  std::_Ref_count_base *v11; // rcx
  _QWORD *result; // rax

  v3 = *(__int64 **)(a1 + 8);
  for ( i = (__int64 *)(a3 + 16); i != v3; i += 2 )
  {
    v8 = *i;
    v9 = i[1];
    *i = 0LL;
    i[1] = 0LL;
    *(i - 2) = v8;
    v10 = (std::_Ref_count_base *)*(i - 1);
    *(i - 1) = v9;
    if ( v10 )
      std::_Ref_count_base::_Decref(v10);
  }
  v11 = *(std::_Ref_count_base **)(*(_QWORD *)(a1 + 8) - 8LL);
  if ( v11 )
    std::_Ref_count_base::_Decref(v11);
  *(_QWORD *)(a1 + 8) -= 16LL;
  result = a2;
  *a2 = a3;
  return result;
}
