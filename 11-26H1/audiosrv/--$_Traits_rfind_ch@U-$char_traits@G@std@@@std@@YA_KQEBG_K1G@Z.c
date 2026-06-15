/*
 * XREFs of ??$_Traits_rfind_ch@U?$char_traits@G@std@@@std@@YA_KQEBG_K1G@Z @ 0x1800E8D34
 * Callers:
 *     ??$get_runtime_activation_factory_impl@$0A@@impl@winrt@@YA?AUhresult@1@AEBUhstring@param@1@AEBUguid@1@PEAPEAX@Z @ 0x1800E91B0 (--$get_runtime_activation_factory_impl@$0A@@impl@winrt@@YA-AUhresult@1@AEBUhstring@param@1@AEBUg.c)
 *     ?CrackPartGlobalId@@YAJPEBGPEAPEAGPEAI@Z @ 0x1801323CC (-CrackPartGlobalId@@YAJPEBGPEAPEAGPEAI@Z.c)
 * Callees:
 *     __std_find_last_trivial_2 @ 0x1800B1B40 (__std_find_last_trivial_2.c)
 */

__int64 __fastcall std::_Traits_rfind_ch<std::char_traits<unsigned short>>(
        const __m128i *a1,
        __int64 a2,
        __int64 a3,
        __int16 a4)
{
  const __m128i *v5; // rbx
  const __m128i *last_trivial_2; // rax

  if ( !a2 )
    return -1LL;
  v5 = (const __m128i *)((char *)a1 + 2 * a2);
  last_trivial_2 = _std_find_last_trivial_2(a1, v5, a4);
  if ( last_trivial_2 == v5 )
    return -1LL;
  else
    return ((char *)last_trivial_2 - (char *)a1) >> 1;
}
