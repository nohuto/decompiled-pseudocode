/*
 * XREFs of ??$_Traits_rfind@U?$char_traits@G@std@@@std@@YA_KQEBG_K101@Z @ 0x1801588CC
 * Callers:
 *     ?AddExtendedTopologyInfo@EndpointInfo@@QEAAJAEBV?$unique_struct@UtagPROPVARIANT@@P6AJPEAU1@@Z$1?PropVariantClear@@YAJ0@ZP6AX0@Z$1?PropVariantInit@@YAX0@Z@wil@@00@Z @ 0x1801591BC (-AddExtendedTopologyInfo@EndpointInfo@@QEAAJAEBV-$unique_struct@UtagPROPVARIANT@@P6AJPEAU1@@Z$1-.c)
 * Callees:
 *     __std_find_end_2 @ 0x1800B1B30 (__std_find_end_2.c)
 */

__int64 __fastcall std::_Traits_rfind<std::char_traits<unsigned short>>(
        __m128i *a1,
        unsigned __int64 a2,
        __int64 a3,
        __int64 a4,
        unsigned __int64 a5)
{
  __int64 v7; // rdx
  __int64 v8; // rax
  __int64 v9; // rbx
  const __m128i *end_2; // rax

  if ( a5 )
  {
    if ( a5 > a2 )
      return -1LL;
    v7 = a2 - a5;
    v8 = -1LL;
    if ( v7 != -1 )
      v8 = v7;
    v9 = (__int64)a1->m128i_i64 + 2 * a5 + 2 * v8;
    end_2 = _std_find_end_2(a1, v9, (const __m128i *)L"\\", a5);
    if ( end_2 == (const __m128i *)v9 )
      return -1LL;
    else
      return ((char *)end_2 - (char *)a1) >> 1;
  }
  else
  {
    if ( a2 == -1LL )
      return -1LL;
    return a2;
  }
}
