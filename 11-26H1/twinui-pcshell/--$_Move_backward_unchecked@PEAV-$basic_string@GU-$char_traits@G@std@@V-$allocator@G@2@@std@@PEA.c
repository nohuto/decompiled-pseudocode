/*
 * XREFs of ??$_Move_backward_unchecked@PEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEAV12@@std@@YAPEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@0@PEAV10@00@Z @ 0x18033E0F4
 * Callers:
 *     ??$_Insertion_sort_unchecked@PEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@U?$less@X@2@@std@@YAPEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@0@QEAV10@0U?$less@X@0@@Z @ 0x18033DF64 (--$_Insertion_sort_unchecked@PEAV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@U-.c)
 *     ??$_Insert_counted_range@V?$move_iterator@PEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@@?$vector@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@std@@AEAAXV?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@@std@@@1@V?$move_iterator@PEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@1@_K@Z @ 0x180571088 (--$_Insert_counted_range@V-$move_iterator@PEAV-$basic_string@GU-$char_traits@G@std@@V-$allocator.c)
 * Callees:
 *     ??4?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x180033674 (--4-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 */

_QWORD *__fastcall std::_Move_backward_unchecked<std::wstring *,std::wstring *>(_QWORD *a1, _QWORD *a2, _QWORD *a3)
{
  _QWORD *i; // rdi

  for ( i = a2; i != a1; std::wstring::operator=(a3, i) )
  {
    i -= 4;
    a3 -= 4;
  }
  return a3;
}
