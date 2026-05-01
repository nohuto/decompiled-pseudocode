/*
 * XREFs of ??$resize_name_cch@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@reg_iterator_details@reg@wil@@YA_KAEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@_K1@Z @ 0x1803A3480
 * Callers:
 *     ?enumerate_current_index@?$value_iterator_data@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@reg@wil@@AEAAJXZ @ 0x1803B3060 (-enumerate_current_index@-$value_iterator_data@V-$basic_string@GU-$char_traits@G@std@@V-$allocat.c)
 *     ?enumerate_current_index@?$key_iterator_data@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@reg@wil@@AEAAJXZ @ 0x18064ED5C (-enumerate_current_index@-$key_iterator_data@V-$basic_string@GU-$char_traits@G@std@@V-$allocator.c)
 * Callees:
 *     ?resize_buffer_bytes@reg_value_type_info@reg_view_details@reg@wil@@YAJAEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@K@Z @ 0x1803377FC (-resize_buffer_bytes@reg_value_type_info@reg_view_details@reg@wil@@YAJAEAV-$basic_string@GU-$cha.c)
 *     ?clear_name@reg_iterator_details@reg@wil@@YAXAEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@_K@Z @ 0x1803B2D08 (-clear_name@reg_iterator_details@reg@wil@@YAXAEAV-$basic_string@GU-$char_traits@G@std@@V-$alloca.c)
 */

unsigned __int64 __fastcall wil::reg::reg_iterator_details::resize_name_cch<std::wstring>(
        wchar_t *S,
        unsigned __int64 a2,
        unsigned __int64 a3)
{
  unsigned __int64 v4; // rbx

  v4 = a2;
  if ( a3 > a2 )
  {
    if ( (int)wil::reg::reg_view_details::reg_value_type_info::resize_buffer_bytes(S, 2 * (int)a3) < 0 )
      return 0LL;
    v4 = a3;
  }
  wil::reg::reg_iterator_details::clear_name(S);
  return v4;
}
