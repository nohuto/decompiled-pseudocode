/*
 * XREFs of ??$_Traits_rfind_ch@U?$char_traits@G@std@@@std@@YA_KQEBG_K1G@Z @ 0x1800A586C
 * Callers:
 *     ??$get_runtime_activation_factory_impl@$0A@@impl@winrt@@YA?AUhresult@1@AEBUhstring@param@1@AEBUguid@1@PEAPEAX@Z @ 0x18007CC78 (--$get_runtime_activation_factory_impl@$0A@@impl@winrt@@YA-AUhresult@1@AEBUhstring@param@1@AEBUg.c)
 * Callees:
 *     __std_find_last_trivial_2 @ 0x18009C8C0 (__std_find_last_trivial_2.c)
 */

__int64 __fastcall std::_Traits_rfind_ch<std::char_traits<unsigned short>>(const __m128i *a1, __int64 a2)
{
  const __m128i *v3; // rbx
  const __m128i *last_trivial_2; // rax

  if ( !a2 )
    return -1LL;
  v3 = (const __m128i *)((char *)a1 + 2 * a2);
  last_trivial_2 = _std_find_last_trivial_2(a1, v3, 46);
  if ( last_trivial_2 == v3 )
    return -1LL;
  else
    return ((char *)last_trivial_2 - (char *)a1) >> 1;
}
