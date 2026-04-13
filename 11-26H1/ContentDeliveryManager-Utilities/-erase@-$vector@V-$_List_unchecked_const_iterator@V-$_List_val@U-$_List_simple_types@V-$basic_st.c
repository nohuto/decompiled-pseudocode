/*
 * XREFs of ?erase@?$vector@V?$_List_unchecked_const_iterator@V?$_List_val@U?$_List_simple_types@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@std@@@std@@U_Iterator_base0@2@@std@@U?$_Wrap_alloc@V?$allocator@V?$_List_unchecked_const_iterator@V?$_List_val@U?$_List_simple_types@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@std@@@std@@U_Iterator_base0@2@@std@@@std@@@2@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@V?$_List_unchecked_const_iterator@V?$_List_val@U?$_List_simple_types@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@std@@@std@@U_Iterator_base0@2@@std@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@V?$_List_unchecked_const_iterator@V?$_List_val@U?$_List_simple_types@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@std@@@std@@U_Iterator_base0@2@@std@@@std@@@std@@@2@0@Z @ 0x180099024
 * Callers:
 *     ?_Init@?$_Hash@V?$_Uset_traits@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V?$_Uhash_compare@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@U?$hash@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@U?$equal_to@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@@2@V?$allocator@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@$0A@@std@@@std@@IEAAX_K@Z @ 0x180098D20 (-_Init@-$_Hash@V-$_Uset_traits@V-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@.c)
 * Callees:
 *     <none>
 */

__int64 **__fastcall std::vector<std::_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<std::wstring>>,std::_Iterator_base0>,std::_Wrap_alloc<std::allocator<std::_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<std::wstring>>,std::_Iterator_base0>>>>::erase(
        __int64 **a1,
        __int64 **a2,
        __int64 *a3,
        __int64 *a4)
{
  __int64 **v4; // rax
  __int64 *v6; // r10
  __int64 *v7; // rcx
  __int64 v8; // rax

  v4 = a1 + 1;
  if ( a3 == *a1 && a4 == *v4 )
  {
    *v4 = *a1;
  }
  else if ( a3 != a4 )
  {
    v6 = *v4;
    v7 = a3;
    if ( a4 != *v4 )
    {
      do
      {
        v8 = *a4++;
        *v7++ = v8;
      }
      while ( a4 != v6 );
      v4 = a1 + 1;
    }
    *v4 = v7;
  }
  *a2 = a3;
  return a2;
}
