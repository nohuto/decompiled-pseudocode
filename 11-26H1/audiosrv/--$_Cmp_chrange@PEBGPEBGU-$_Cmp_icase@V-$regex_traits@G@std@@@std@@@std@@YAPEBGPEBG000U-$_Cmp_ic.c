/*
 * XREFs of ??$_Cmp_chrange@PEBGPEBGU?$_Cmp_icase@V?$regex_traits@G@std@@@std@@@std@@YAPEBGPEBG000U?$_Cmp_icase@V?$regex_traits@G@std@@@0@@Z @ 0x180132FA4
 * Callers:
 *     ??$_Compare@PEBGPEBGV?$regex_traits@G@std@@@std@@YAPEBGPEBG000AEBV?$regex_traits@G@0@W4syntax_option_type@regex_constants@0@@Z @ 0x180133054 (--$_Compare@PEBGPEBGV-$regex_traits@G@std@@@std@@YAPEBGPEBG000AEBV-$regex_traits@G@0@W4syntax_op.c)
 * Callees:
 *     <none>
 */

unsigned __int16 *__fastcall std::_Cmp_chrange<unsigned short const *,unsigned short const *,std::_Cmp_icase<std::regex_traits<unsigned short>>>(
        unsigned __int16 *a1,
        unsigned __int16 *a2,
        unsigned __int16 *a3,
        unsigned __int16 *a4,
        __int64 a5)
{
  unsigned __int16 *v8; // r14
  __int64 v10; // rdx
  unsigned __int16 v11; // si
  __int16 v12; // di

  v8 = a1;
  if ( a1 == a2 )
  {
LABEL_5:
    if ( a3 != a4 )
      return a1;
  }
  else
  {
    while ( a3 != a4 )
    {
      v10 = *a3++;
      v11 = *v8++;
      v12 = std::ctype<unsigned short>::tolower(*(_QWORD *)(a5 + 8), v10);
      if ( (unsigned __int16)std::ctype<unsigned short>::tolower(*(_QWORD *)(a5 + 8), v11) != v12 )
        return a1;
      if ( v8 == a2 )
        goto LABEL_5;
    }
  }
  return v8;
}
