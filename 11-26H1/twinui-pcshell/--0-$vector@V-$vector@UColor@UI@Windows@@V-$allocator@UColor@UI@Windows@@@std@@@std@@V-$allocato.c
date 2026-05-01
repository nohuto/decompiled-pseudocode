/*
 * XREFs of ??0?$vector@V?$vector@UColor@UI@Windows@@V?$allocator@UColor@UI@Windows@@@std@@@std@@V?$allocator@V?$vector@UColor@UI@Windows@@V?$allocator@UColor@UI@Windows@@@std@@@std@@@2@@std@@QEAA@V?$initializer_list@V?$vector@UColor@UI@Windows@@V?$allocator@UColor@UI@Windows@@@std@@@std@@@1@AEBV?$allocator@V?$vector@UColor@UI@Windows@@V?$allocator@UColor@UI@Windows@@@std@@@std@@@1@@Z @ 0x18012BB7C
 * Callers:
 *     _dynamic_initializer_for__idle__ @ 0x18012BA30 (_dynamic_initializer_for__idle__.c)
 *     _dynamic_initializer_for__error__ @ 0x18012BE50 (_dynamic_initializer_for__error__.c)
 *     _dynamic_initializer_for__responding__ @ 0x18012CC40 (_dynamic_initializer_for__responding__.c)
 *     _dynamic_initializer_for__listening__ @ 0x18012DF10 (_dynamic_initializer_for__listening__.c)
 *     _dynamic_initializer_for__thinking__ @ 0x180146BD0 (_dynamic_initializer_for__thinking__.c)
 * Callees:
 *     ??0?$vector@UColor@UI@Windows@@V?$allocator@UColor@UI@Windows@@@std@@@std@@QEAA@AEBV01@@Z @ 0x18012BC70 (--0-$vector@UColor@UI@Windows@@V-$allocator@UColor@UI@Windows@@@std@@@std@@QEAA@AEBV01@@Z.c)
 *     ??$_Get_size_of_n@$0BI@@std@@YA_K_K@Z @ 0x18012BD18 (--$_Get_size_of_n@$0BI@@std@@YA_K_K@Z.c)
 *     ??$_Destroy_range@V?$allocator@V?$vector@UColor@UI@Windows@@V?$allocator@UColor@UI@Windows@@@std@@@std@@@std@@@std@@YAXPEAV?$vector@UColor@UI@Windows@@V?$allocator@UColor@UI@Windows@@@std@@@0@QEAV10@AEAV?$allocator@V?$vector@UColor@UI@Windows@@V?$allocator@UColor@UI@Windows@@@std@@@std@@@0@@Z @ 0x18012BD48 (--$_Destroy_range@V-$allocator@V-$vector@UColor@UI@Windows@@V-$allocator@UColor@UI@Windows@@@std.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z @ 0x180285C68 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 *__fastcall std::vector<std::vector<Windows::UI::Color>>::vector<std::vector<Windows::UI::Color>>(
        __int64 *a1,
        __int64 *a2)
{
  __int64 v3; // rbp
  __int64 v4; // rsi
  unsigned __int64 v5; // r14
  __int64 size_of; // rax
  __int64 v7; // rbx

  *a1 = 0LL;
  a1[1] = 0LL;
  a1[2] = 0LL;
  v3 = a2[1];
  v4 = *a2;
  v5 = 0xAAAAAAAAAAAAAAABuLL * ((v3 - *a2) >> 3);
  if ( v5 )
  {
    if ( v5 > 0xAAAAAAAAAAAAAAALL )
      std::_Xlength_error("vector too long");
    size_of = std::_Get_size_of_n<24>(0xAAAAAAAAAAAAAAABuLL * ((a2[1] - *a2) >> 3));
    v7 = std::_Allocate<16,std::_Default_allocate_traits>(size_of);
    *a1 = v7;
    a1[1] = v7;
    a1[2] = v7 + 24 * v5;
    while ( v4 != v3 )
    {
      std::vector<Windows::UI::Color>::vector<Windows::UI::Color>(v7, v4);
      v7 += 24LL;
      v4 += 24LL;
    }
    std::_Destroy_range<std::allocator<std::vector<Windows::UI::Color>>>(v7, v7);
    a1[1] = v7;
  }
  return a1;
}
