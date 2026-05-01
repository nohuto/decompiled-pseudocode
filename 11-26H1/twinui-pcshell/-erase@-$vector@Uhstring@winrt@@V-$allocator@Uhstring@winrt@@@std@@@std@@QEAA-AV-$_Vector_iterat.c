/*
 * XREFs of ?erase@?$vector@Uhstring@winrt@@V?$allocator@Uhstring@winrt@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@Uhstring@winrt@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@Uhstring@winrt@@@std@@@std@@@2@@Z @ 0x18061CA98
 * Callers:
 *     ?RemoveAt@?$vector_base@U?$vector_impl@Uhstring@winrt@@V?$vector@Uhstring@winrt@@V?$allocator@Uhstring@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@2@@impl@winrt@@Uhstring@3@@winrt@@QEAAXI@Z @ 0x18061C384 (-RemoveAt@-$vector_base@U-$vector_impl@Uhstring@winrt@@V-$vector@Uhstring@winrt@@V-$allocator@Uh.c)
 * Callees:
 *     ?attach@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXPEAUhstring_header@impl@2@@Z @ 0x18002D1A0 (-attach@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXPEAUhstring_header@impl@2@@Z.c)
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x18002E610 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 */

__int64 **__fastcall std::vector<winrt::hstring>::erase(__int64 a1, __int64 **a2, __int64 *a3)
{
  __int64 *v3; // r15
  __int64 *v4; // rdi
  __int64 *v8; // rsi
  __int64 v9; // rdx
  __int64 **result; // rax

  v3 = *(__int64 **)(a1 + 8);
  v4 = a3 + 1;
  if ( a3 + 1 != v3 )
  {
    v8 = a3;
    do
    {
      if ( v8 != v4 )
      {
        v9 = *v4;
        *v4 = 0LL;
        winrt::handle_type<winrt::impl::hstring_traits>::attach(v8, v9);
      }
      ++v4;
      ++v8;
    }
    while ( v4 != v3 );
  }
  winrt::handle_type<winrt::impl::hstring_traits>::close((volatile signed __int32 **)(*(_QWORD *)(a1 + 8) - 8LL));
  *(_QWORD *)(a1 + 8) -= 8LL;
  result = a2;
  *a2 = a3;
  return result;
}
