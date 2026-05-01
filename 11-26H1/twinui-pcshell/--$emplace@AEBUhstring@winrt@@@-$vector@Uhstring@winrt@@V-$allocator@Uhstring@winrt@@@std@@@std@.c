/*
 * XREFs of ??$emplace@AEBUhstring@winrt@@@?$vector@Uhstring@winrt@@V?$allocator@Uhstring@winrt@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@Uhstring@winrt@@@std@@@std@@@1@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@Uhstring@winrt@@@std@@@std@@@1@AEBUhstring@winrt@@@Z @ 0x180618CD4
 * Callers:
 *     ?InsertAt@?$vector_base@U?$vector_impl@Uhstring@winrt@@V?$vector@Uhstring@winrt@@V?$allocator@Uhstring@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@2@@impl@winrt@@Uhstring@3@@winrt@@QEAAXIAEBUhstring@2@@Z @ 0x18061B96C (-InsertAt@-$vector_base@U-$vector_impl@Uhstring@winrt@@V-$vector@Uhstring@winrt@@V-$allocator@Uh.c)
 * Callees:
 *     ??0hstring@winrt@@QEAA@AEBU01@@Z @ 0x18002C9CC (--0hstring@winrt@@QEAA@AEBU01@@Z.c)
 *     ?attach@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXPEAUhstring_header@impl@2@@Z @ 0x18002D1A0 (-attach@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXPEAUhstring_header@impl@2@@Z.c)
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x18002E610 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 *     ??$_Emplace_back_with_unused_capacity@AEBUhstring@winrt@@@?$vector@Uhstring@winrt@@V?$allocator@Uhstring@winrt@@@std@@@std@@AEAAAEAUhstring@winrt@@AEBU23@@Z @ 0x180618814 (--$_Emplace_back_with_unused_capacity@AEBUhstring@winrt@@@-$vector@Uhstring@winrt@@V-$allocator@.c)
 *     ??$_Emplace_reallocate@AEBUhstring@winrt@@@?$vector@Uhstring@winrt@@V?$allocator@Uhstring@winrt@@@std@@@std@@AEAAPEAUhstring@winrt@@QEAU23@AEBU23@@Z @ 0x180618840 (--$_Emplace_reallocate@AEBUhstring@winrt@@@-$vector@Uhstring@winrt@@V-$allocator@Uhstring@winrt@.c)
 */

_QWORD *__fastcall std::vector<winrt::hstring>::emplace<winrt::hstring const &>(
        __int64 a1,
        _QWORD *a2,
        volatile signed __int32 **a3,
        const struct winrt::hstring *a4)
{
  volatile signed __int32 **v4; // rsi
  __int64 *v8; // rdi
  volatile signed __int32 *v9; // rax
  __int64 v10; // rdx
  volatile signed __int32 *v11; // rdx
  volatile signed __int32 *v13[2]; // [rsp+28h] [rbp-10h] BYREF

  v4 = *(volatile signed __int32 ***)(a1 + 8);
  if ( v4 == *(volatile signed __int32 ***)(a1 + 16) )
  {
    *a2 = std::vector<winrt::hstring>::_Emplace_reallocate<winrt::hstring const &>(
            (volatile signed __int32 ***)a1,
            a3,
            a4);
  }
  else
  {
    if ( a3 == v4 )
    {
      std::vector<winrt::hstring>::_Emplace_back_with_unused_capacity<winrt::hstring const &>(a1, a4, (unsigned int)a3);
    }
    else
    {
      winrt::hstring::hstring((winrt::hstring *)v13, a4, (unsigned int)a3);
      v8 = (__int64 *)(v4 - 1);
      v9 = *(v4 - 1);
      *(v4 - 1) = 0LL;
      *v4 = v9;
      *(_QWORD *)(a1 + 8) += 8LL;
      while ( a3 != (volatile signed __int32 **)v8 )
      {
        if ( --v4 != (volatile signed __int32 **)--v8 )
        {
          v10 = *v8;
          *v8 = 0LL;
          winrt::handle_type<winrt::impl::hstring_traits>::attach(v4, v10);
        }
      }
      if ( a3 != v13 )
      {
        v11 = v13[0];
        v13[0] = 0LL;
        winrt::handle_type<winrt::impl::hstring_traits>::attach(a3, (__int64)v11);
      }
      winrt::handle_type<winrt::impl::hstring_traits>::close(v13);
    }
    *a2 = a3;
  }
  return a2;
}
