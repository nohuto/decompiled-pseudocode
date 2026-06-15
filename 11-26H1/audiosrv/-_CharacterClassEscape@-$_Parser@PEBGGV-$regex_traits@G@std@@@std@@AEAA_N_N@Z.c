/*
 * XREFs of ?_CharacterClassEscape@?$_Parser@PEBGGV?$regex_traits@G@std@@@std@@AEAA_N_N@Z @ 0x18014C6C4
 * Callers:
 *     ?_AtomEscape@?$_Parser@PEBGGV?$regex_traits@G@std@@@std@@AEAAXXZ @ 0x18014C070 (-_AtomEscape@-$_Parser@PEBGGV-$regex_traits@G@std@@@std@@AEAAXXZ.c)
 *     ?_ClassEscape2@?$_Parser@PEBGGV?$regex_traits@G@std@@@std@@AEAA?AW4_Prs_ret@2@XZ @ 0x18014CA10 (-_ClassEscape2@-$_Parser@PEBGGV-$regex_traits@G@std@@@std@@AEAA-AW4_Prs_ret@2@XZ.c)
 * Callees:
 *     ??$lookup_classname@PEBG@?$_Regex_traits@G@std@@QEBAFPEBG0_N@Z @ 0x180149B7C (--$lookup_classname@PEBG@-$_Regex_traits@G@std@@QEBAFPEBG0_N@Z.c)
 *     ?_Add_class@?$_Builder@PEBGGV?$regex_traits@G@std@@@std@@QEAAXXZ @ 0x18014B7D4 (-_Add_class@-$_Builder@PEBGGV-$regex_traits@G@std@@@std@@QEAAXXZ.c)
 *     ?_Add_named_class@?$_Builder@PEBGGV?$regex_traits@G@std@@@std@@QEAAXF_N@Z @ 0x18014BA3C (-_Add_named_class@-$_Builder@PEBGGV-$regex_traits@G@std@@@std@@QEAAXF_N@Z.c)
 *     ?_Next@?$_Parser@PEBGGV?$regex_traits@G@std@@@std@@AEAAXXZ @ 0x18014D9A8 (-_Next@-$_Parser@PEBGGV-$regex_traits@G@std@@@std@@AEAAXXZ.c)
 */

char __fastcall std::_Parser<unsigned short const *,unsigned short,std::regex_traits<unsigned short>>::_CharacterClassEscape(
        __int64 a1,
        char a2)
{
  char v4; // si
  unsigned __int16 v5; // r14
  char v6; // al
  char v7; // bp

  if ( *(_QWORD *)a1 == *(_QWORD *)(a1 + 16) )
    return 0;
  v4 = 0;
  v5 = std::_Regex_traits<unsigned short>::lookup_classname<unsigned short const *>(
         *(_QWORD *)(a1 + 104),
         *(unsigned __int16 **)a1,
         (unsigned __int16 *)(*(_QWORD *)a1 + 2LL),
         BYTE1(*(_DWORD *)(a1 + 112)) & 1);
  if ( !v5 )
    return 0;
  v6 = std::ctype<unsigned short>::is(*(_QWORD *)(*(_QWORD *)(a1 + 104) + 8LL), 1LL);
  v7 = v6;
  if ( a2 )
  {
    std::_Builder<unsigned short const *,unsigned short,std::regex_traits<unsigned short>>::_Add_class(a1 + 64);
    if ( v7 )
      *(_DWORD *)(*(_QWORD *)(a1 + 72) + 12LL) ^= 1u;
  }
  else
  {
    v4 = v6 != 0;
  }
  std::_Builder<unsigned short const *,unsigned short,std::regex_traits<unsigned short>>::_Add_named_class(
    a1 + 64,
    v5,
    v4);
  std::_Parser<unsigned short const *,unsigned short,std::regex_traits<unsigned short>>::_Next(a1);
  return 1;
}
