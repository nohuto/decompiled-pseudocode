/*
 * XREFs of ??$_Compare@PEBGPEBGV?$regex_traits@G@std@@@std@@YAPEBGPEBG000AEBV?$regex_traits@G@0@W4syntax_option_type@regex_constants@0@@Z @ 0x180133054
 * Callers:
 *     ?_Match_pat@?$_Matcher@PEBGGV?$regex_traits@G@std@@PEBG@std@@AEAA_NPEAV_Node_base@2@@Z @ 0x18013F81C (-_Match_pat@-$_Matcher@PEBGGV-$regex_traits@G@std@@PEBG@std@@AEAA_NPEAV_Node_base@2@@Z.c)
 *     ?_Skip@?$_Matcher@PEBGGV?$regex_traits@G@std@@PEBG@std@@QEAAPEBGPEBG0PEAV_Node_base@2@@Z @ 0x18014DB58 (-_Skip@-$_Matcher@PEBGGV-$regex_traits@G@std@@PEBG@std@@QEAAPEBGPEBG0PEAV_Node_base@2@@Z.c)
 * Callees:
 *     ??$_Cmp_chrange@PEBGPEBGU?$_Cmp_icase@V?$regex_traits@G@std@@@std@@@std@@YAPEBGPEBG000U?$_Cmp_icase@V?$regex_traits@G@std@@@0@@Z @ 0x180132FA4 (--$_Cmp_chrange@PEBGPEBGU-$_Cmp_icase@V-$regex_traits@G@std@@@std@@@std@@YAPEBGPEBG000U-$_Cmp_ic.c)
 */

unsigned __int16 *__fastcall std::_Compare<unsigned short const *,unsigned short const *,std::regex_traits<unsigned short>>(
        unsigned __int16 *a1,
        unsigned __int16 *a2,
        unsigned __int16 *a3,
        unsigned __int16 *a4,
        __int64 a5,
        __int16 a6)
{
  unsigned __int16 *v7; // r10
  unsigned __int16 *v8; // rdx
  unsigned __int16 v9; // cx
  __int16 v10; // ax
  __int16 v11; // cx
  __int16 v12; // ax

  v7 = a1;
  if ( (a6 & 0x100) == 0 )
  {
    v8 = a1;
    if ( (a6 & 0x800) != 0 )
    {
      if ( a1 != a2 )
      {
        while ( a3 != a4 )
        {
          v9 = *a3++;
          v10 = *v8++;
          if ( v10 != v9 )
            return v7;
          if ( v8 == a2 )
            goto LABEL_13;
        }
        return v8;
      }
    }
    else if ( a1 != a2 )
    {
      while ( a3 != a4 )
      {
        v11 = *a3++;
        v12 = *v8++;
        if ( v12 != v11 )
          return v7;
        if ( v8 == a2 )
          goto LABEL_13;
      }
      return v8;
    }
LABEL_13:
    if ( a3 != a4 )
      return v7;
    return v8;
  }
  return std::_Cmp_chrange<unsigned short const *,unsigned short const *,std::_Cmp_icase<std::regex_traits<unsigned short>>>(
           a1,
           a2,
           a3,
           a4,
           a5);
}
