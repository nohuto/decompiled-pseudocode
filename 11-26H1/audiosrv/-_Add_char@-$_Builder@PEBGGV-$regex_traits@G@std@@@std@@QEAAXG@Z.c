/*
 * XREFs of ?_Add_char@?$_Builder@PEBGGV?$regex_traits@G@std@@@std@@QEAAXG@Z @ 0x18014B64C
 * Callers:
 *     ?_Add_rep@?$_Builder@PEBGGV?$regex_traits@G@std@@@std@@QEAAXHH_N@Z @ 0x18014BB8C (-_Add_rep@-$_Builder@PEBGGV-$regex_traits@G@std@@@std@@QEAAXHH_N@Z.c)
 *     ?_Alternative@?$_Parser@PEBGGV?$regex_traits@G@std@@@std@@AEAA_NXZ @ 0x18014BEA4 (-_Alternative@-$_Parser@PEBGGV-$regex_traits@G@std@@@std@@AEAA_NXZ.c)
 *     ?_AtomEscape@?$_Parser@PEBGGV?$regex_traits@G@std@@@std@@AEAAXXZ @ 0x18014C070 (-_AtomEscape@-$_Parser@PEBGGV-$regex_traits@G@std@@@std@@AEAAXXZ.c)
 * Callees:
 *     ?_Add_str_node@?$_Builder@PEBGGV?$regex_traits@G@std@@@std@@AEAAXXZ @ 0x18014BE4C (-_Add_str_node@-$_Builder@PEBGGV-$regex_traits@G@std@@@std@@AEAAXXZ.c)
 */

__int64 __fastcall std::_Builder<unsigned short const *,unsigned short,std::regex_traits<unsigned short>>::_Add_char(
        __int64 a1,
        unsigned __int16 a2)
{
  __int64 v2; // rax

  v2 = *(_QWORD *)(a1 + 8);
  if ( *(_DWORD *)(v2 + 8) != 6 || (*(_BYTE *)(v2 + 12) & 4) != 0 )
    std::_Builder<unsigned short const *,unsigned short,std::regex_traits<unsigned short>>::_Add_str_node();
  if ( (*(_DWORD *)(a1 + 16) & 0x100) != 0 )
    a2 = std::ctype<unsigned short>::tolower(*(_QWORD *)(*(_QWORD *)(a1 + 24) + 8LL), a2);
  return std::_Buf<unsigned short>::_Insert2(*(_QWORD *)(a1 + 8) + 32LL, a2);
}
