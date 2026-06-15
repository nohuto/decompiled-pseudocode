/*
 * XREFs of ??$_Traits_find@U?$char_traits@G@std@@@std@@YA_KQEBG_K101@Z @ 0x1800494A4
 * Callers:
 *     ?LoadApplicationDefaultEndpoints@ApplicationSpecificEndpointInfo@@AEAAJXZ @ 0x180005ACC (-LoadApplicationDefaultEndpoints@ApplicationSpecificEndpointInfo@@AEAAJXZ.c)
 * Callees:
 *     __std_search_2 @ 0x18002F410 (__std_search_2.c)
 */

__int64 __fastcall std::_Traits_find<std::char_traits<unsigned short>>(
        const __m128i *a1,
        unsigned __int64 a2,
        __int64 a3,
        __int64 a4,
        unsigned __int64 a5)
{
  const __m128i *v7; // rbx
  const __m128i *v8; // rax

  if ( a5 > a2 )
    return -1LL;
  if ( !a5 )
    return 0LL;
  v7 = (const __m128i *)((char *)a1 + 2 * a2);
  v8 = _std_search_2(a1, v7, (const __m128i *)L"_p", a5);
  if ( v8 == v7 )
    return -1LL;
  else
    return ((char *)v8 - (char *)a1) >> 1;
}
