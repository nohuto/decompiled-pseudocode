/*
 * XREFs of ??$lookup_classname@PEBG@?$_Regex_traits@G@std@@QEBAFPEBG0_N@Z @ 0x180149B7C
 * Callers:
 *     ?_CharacterClassEscape@?$_Parser@PEBGGV?$regex_traits@G@std@@@std@@AEAA_N_N@Z @ 0x18014C6C4 (-_CharacterClassEscape@-$_Parser@PEBGGV-$regex_traits@G@std@@@std@@AEAA_N_N@Z.c)
 *     ?_Do_ex_class@?$_Parser@PEBGGV?$regex_traits@G@std@@@std@@AEAAXW4_Meta_type@2@@Z @ 0x18014D008 (-_Do_ex_class@-$_Parser@PEBGGV-$regex_traits@G@std@@@std@@AEAAXW4_Meta_type@2@@Z.c)
 * Callees:
 *     ??$equal@PEBGPEBGU?$_Cmp_icase@V?$_Regex_traits@G@std@@@std@@@std@@YA_NQEBG00U?$_Cmp_icase@V?$_Regex_traits@G@std@@@0@@Z @ 0x180149AEC (--$equal@PEBGPEBGU-$_Cmp_icase@V-$_Regex_traits@G@std@@@std@@@std@@YA_NQEBG00U-$_Cmp_icase@V-$_R.c)
 */

__int64 __fastcall std::_Regex_traits<unsigned short>::lookup_classname<unsigned short const *>(
        __int64 a1,
        unsigned __int16 *a2,
        unsigned __int16 *a3,
        char a4)
{
  __int64 v8; // rdi
  __int64 v9; // rcx
  __int64 v10; // rbx
  unsigned __int16 v11; // cx

  LODWORD(v8) = 0;
  if ( L"alnum" )
  {
    v9 = 0LL;
    v10 = a3 - a2;
    do
    {
      if ( v10 == LODWORD((&`std::_Regex_traits<unsigned short>::lookup_classname<unsigned short const *>'::`2'::_Names)[v9 + 2])
        && std::equal<unsigned short const *,unsigned short const *,std::_Cmp_icase<std::_Regex_traits<unsigned short>>>(
             a2,
             a3,
             (__int64)(&`std::_Regex_traits<unsigned short>::lookup_classname<unsigned short const *>'::`2'::_Names)[v9 + 1],
             a1) )
      {
        break;
      }
      v8 = (unsigned int)(v8 + 1);
      v9 = 3 * v8;
    }
    while ( (&`std::_Regex_traits<unsigned short>::lookup_classname<unsigned short const *>'::`2'::_Names)[3 * v8 + 1] );
  }
  v11 = 0;
  if ( (&`std::_Regex_traits<unsigned short>::lookup_classname<unsigned short const *>'::`2'::_Names)[3 * (unsigned int)v8 + 1] )
    v11 = *((_WORD *)&`std::_Regex_traits<unsigned short>::lookup_classname<unsigned short const *>'::`2'::_Names
          + 12 * (unsigned int)v8
          + 10);
  if ( a4 && (v11 & 3) != 0 )
    v11 |= 3u;
  return v11;
}
