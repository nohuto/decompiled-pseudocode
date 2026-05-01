/*
 * XREFs of ??$_Construct@$0A@D@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXD_K@Z @ 0x180661ED0
 * Callers:
 *     ?to_string@winrt@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$basic_string_view@GU?$char_traits@G@std@@@3@@Z @ 0x180664DFC (-to_string@winrt@@YA-AV-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@V-$basic_str.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z @ 0x180285C68 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z.c)
 *     ?_Xlen_string@std@@YAXXZ @ 0x1802C72B8 (-_Xlen_string@std@@YAXXZ.c)
 *     memset_0 @ 0x1802C9ECC (memset_0.c)
 *     ?_Calculate_growth@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@CA_K_K00@Z @ 0x180314DE4 (-_Calculate_growth@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@CA_K_K00@Z.c)
 */

void *__fastcall std::string::_Construct<0,char>(_QWORD *a1, __int64 a2, size_t a3)
{
  void *result; // rax
  unsigned __int64 v6; // rbx
  _BYTE *v7; // rax
  _BYTE *v8; // rdi

  if ( a3 > 0x7FFFFFFFFFFFFFFFLL )
    std::_Xlen_string();
  if ( a3 > 0xF )
  {
    v6 = std::string::_Calculate_growth(a3, 0xFuLL, 0x7FFFFFFFFFFFFFFFuLL);
    v7 = std::_Allocate<16,std::_Default_allocate_traits>(v6 + 1);
    *a1 = v7;
    a1[2] = a3;
    a1[3] = v6;
    v8 = v7;
    result = memset_0(v7, 63, a3);
    v8[a3] = 0;
  }
  else
  {
    a1[3] = 15LL;
    a1[2] = a3;
    result = memset_0(a1, 63, a3);
    *((_BYTE *)a1 + a3) = 0;
  }
  return result;
}
