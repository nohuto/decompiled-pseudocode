/*
 * XREFs of ??1?$_List_node_insert_op2@V?$allocator@U?$_List_node@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x1805861A0
 * Callers:
 *     ??$_Construct_range_unchecked@V?$_List_unchecked_const_iterator@V?$_List_val@U?$_List_simple_types@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@@std@@U_Iterator_base0@2@@std@@V12@@?$list@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@std@@AEAAXV?$_List_unchecked_const_iterator@V?$_List_val@U?$_List_simple_types@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@@std@@U_Iterator_base0@2@@1@V21@@Z @ 0x180585848 (--$_Construct_range_unchecked@V-$_List_unchecked_const_iterator@V-$_List_val@U-$_List_simple_typ.c)
 *     _std::list_std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short____std::allocator_std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short_______::_Construct_range_unchecked_std::_List_unchecked_const_iterator_std::_List_val_std::_List_simple_types_std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short________std::_Iterator_base0__std::_List_unchecked_const_iterator_std::_List_val_std::_List_simple_types_std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short________std::_Iterator_base0____::_1_::dtor$0 @ 0x1806F709E (_std--list_std--basic_string_unsigned_short_std--char_traits_unsigned_short__std--allocator_unsi.c)
 * Callees:
 *     ??$_Freenode@V?$allocator@U?$_List_node@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEAX@std@@@std@@@?$_List_node@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x180285684 (--$_Freenode@V-$allocator@U-$_List_node@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@.c)
 */

_QWORD *__fastcall std::_List_node_insert_op2<std::allocator<std::_List_node<std::wstring,void *>>>::~_List_node_insert_op2<std::allocator<std::_List_node<std::wstring,void *>>>(
        _QWORD *a1)
{
  _QWORD *result; // rax
  _QWORD *v2; // rbx
  __int64 v3; // rdx

  if ( a1[1] )
  {
    *(_QWORD *)(a1[3] + 8LL) = 0LL;
    result = (_QWORD *)a1[2];
    *result = 0LL;
    v2 = (_QWORD *)a1[3];
    while ( v2 )
    {
      v3 = (__int64)v2;
      v2 = (_QWORD *)*v2;
      result = (_QWORD *)std::_List_node<std::wstring,void *>::_Freenode<std::allocator<std::_List_node<std::wstring,void *>>>(
                           (__int64)a1,
                           v3);
    }
  }
  return result;
}
