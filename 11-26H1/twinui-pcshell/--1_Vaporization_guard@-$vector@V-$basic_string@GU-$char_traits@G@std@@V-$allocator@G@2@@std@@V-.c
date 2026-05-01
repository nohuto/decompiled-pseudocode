/*
 * XREFs of ??1_Vaporization_guard@?$vector@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@std@@QEAA@XZ @ 0x180571334
 * Callers:
 *     _std::vector_std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short____std::allocator_std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short_______::_Insert_counted_range_std::move_iterator_std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short_________::_1_::dtor$2 @ 0x1806F4C7F (_std--vector_std--basic_string_unsigned_short_std--char_traits_unsigned_short__std-_ea_1806F4C7F.c)
 * Callees:
 *     ??$_Destroy_range@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@@std@@YAXPEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@0@QEAV10@AEAV?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@0@@Z @ 0x1801B9CC0 (--$_Destroy_range@V-$allocator@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@@st.c)
 */

__int64 __fastcall std::vector<std::wstring>::_Vaporization_guard::~_Vaporization_guard(__int64 *a1)
{
  __int64 v1; // rdi
  __int64 result; // rax

  v1 = *a1;
  if ( *a1 )
  {
    std::_Destroy_range<std::allocator<std::wstring>>((_QWORD *)a1[3], *(_QWORD **)(v1 + 8));
    result = a1[1];
    *(_QWORD *)(v1 + 8) = result;
  }
  return result;
}
