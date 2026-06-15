/*
 * XREFs of ??1?$match_results@PEBGV?$allocator@V?$sub_match@PEBG@std@@@std@@@std@@QEAA@XZ @ 0x18014A69C
 * Callers:
 *     _std::_Regex_replace1_std::back_insert_iterator_std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short______unsigned_short_const___std::regex_traits_unsigned_short__unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short____::_1_::dtor$0 @ 0x18016BCB2 (_std--_Regex_replace1_std--back_insert_iterator_std--basic_string_unsigned_short_std--char_trait.c)
 * Callees:
 *     ??$_Deallocate@$0BA@@std@@YAXPEAX_K@Z @ 0x180044828 (--$_Deallocate@$0BA@@std@@YAXPEAX_K@Z.c)
 */

void __fastcall std::match_results<unsigned short const *>::~match_results<unsigned short const *>(_QWORD *a1)
{
  void *v2; // rcx

  v2 = (void *)a1[2];
  if ( v2 )
  {
    std::_Deallocate<16>(v2, (struct std::nothrow_t *)(24 * ((a1[4] - (_QWORD)v2) / 24LL)));
    a1[2] = 0LL;
    a1[3] = 0LL;
    a1[4] = 0LL;
  }
}
