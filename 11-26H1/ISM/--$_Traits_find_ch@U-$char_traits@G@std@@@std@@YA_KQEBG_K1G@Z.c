/*
 * XREFs of ??$_Traits_find_ch@U?$char_traits@G@std@@@std@@YA_KQEBG_K1G@Z @ 0x18010E628
 * Callers:
 *     ?StringToHstringVectorParser@@YA?AV?$com_ptr_t@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@PEBG@Z @ 0x180175330 (-StringToHstringVectorParser@@YA-AV-$com_ptr_t@U-$IVector@PEAUHSTRING__@@@Collections@Foundation.c)
 * Callees:
 *     __std_find_trivial_2 @ 0x18009C8D0 (__std_find_trivial_2.c)
 */

__int64 __fastcall std::_Traits_find_ch<std::char_traits<unsigned short>>(
        __int64 a1,
        unsigned __int64 a2,
        unsigned __int64 a3)
{
  const __m128i *v4; // rbx
  const __m128i *trivial_2; // rax

  if ( a3 >= a2 )
    return -1LL;
  v4 = (const __m128i *)(a1 + 2 * a2);
  trivial_2 = _std_find_trivial_2((const __m128i *)(a1 + 2 * a3), v4, 44);
  if ( trivial_2 == v4 )
    return -1LL;
  else
    return ((__int64)trivial_2->m128i_i64 - a1) >> 1;
}
