/*
 * XREFs of ?_AtomEscape@?$_Parser@PEBGGV?$regex_traits@G@std@@@std@@AEAAXXZ @ 0x18014C070
 * Callers:
 *     ?_Alternative@?$_Parser@PEBGGV?$regex_traits@G@std@@@std@@AEAA_NXZ @ 0x18014BEA4 (-_Alternative@-$_Parser@PEBGGV-$regex_traits@G@std@@@std@@AEAA_NXZ.c)
 * Callees:
 *     ?_Add_backreference@?$_Builder@PEBGGV?$regex_traits@G@std@@@std@@QEAAXI@Z @ 0x18014B5EC (-_Add_backreference@-$_Builder@PEBGGV-$regex_traits@G@std@@@std@@QEAAXI@Z.c)
 *     ?_CharacterClassEscape@?$_Parser@PEBGGV?$regex_traits@G@std@@@std@@AEAA_N_N@Z @ 0x18014C6C4 (-_CharacterClassEscape@-$_Parser@PEBGGV-$regex_traits@G@std@@@std@@AEAA_N_N@Z.c)
 *     ?_CharacterEscape@?$_Parser@PEBGGV?$regex_traits@G@std@@@std@@AEAA_NXZ @ 0x18014C79C (-_CharacterEscape@-$_Parser@PEBGGV-$regex_traits@G@std@@@std@@AEAA_NXZ.c)
 *     ?_DecimalDigits2@?$_Parser@PEBGGV?$regex_traits@G@std@@@std@@AEAA_NW4error_type@regex_constants@2@H@Z @ 0x18014CC88 (-_DecimalDigits2@-$_Parser@PEBGGV-$regex_traits@G@std@@@std@@AEAA_NW4error_type@regex_constants@.c)
 *     ?_Error@?$_Parser@PEBGGV?$regex_traits@G@std@@@std@@AEAAXW4error_type@regex_constants@2@@Z @ 0x18014D364 (-_Error@-$_Parser@PEBGGV-$regex_traits@G@std@@@std@@AEAAXW4error_type@regex_constants@2@@Z.c)
 */

__int64 __fastcall std::_Parser<unsigned short const *,unsigned short,std::regex_traits<unsigned short>>::_AtomEscape(
        __int64 a1)
{
  __int64 v2; // rcx
  unsigned __int64 v3; // r9
  unsigned __int64 v4; // rcx
  int v5; // eax
  __int64 result; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx

  if ( (*(_DWORD *)(a1 + 128) & 0x100) != 0
    && (unsigned __int8)std::_Parser<unsigned short const *,unsigned short,std::regex_traits<unsigned short>>::_DecimalDigits2(
                          a1,
                          3LL,
                          (*(_DWORD *)(a1 + 128) & 0x200) != 0 ? 1 : 0x7FFFFFFF) )
  {
    v3 = *(int *)(a1 + 116);
    if ( !(_DWORD)v3 )
    {
      if ( (*(_DWORD *)(a1 + 128) & 0x100000) == 0 )
      {
        std::_Parser<unsigned short const *,unsigned short,std::regex_traits<unsigned short>>::_Error(v2, 2LL);
        __debugbreak();
      }
      return std::_Builder<unsigned short const *,unsigned short,std::regex_traits<unsigned short>>::_Add_char(
               a1 + 64,
               *(_WORD *)(a1 + 116));
    }
    v4 = *(int *)(a1 + 116);
    if ( *(unsigned int *)(a1 + 24) < v3
      || *(_QWORD *)(a1 + 56) <= v3
      || (v4 = v3 & 0x1F, v5 = *(_DWORD *)(*(_QWORD *)(a1 + 32) + 4 * (v3 >> 5)), !_bittest(&v5, v4)) )
    {
      std::_Parser<unsigned short const *,unsigned short,std::regex_traits<unsigned short>>::_Error(v4, 3LL);
      __debugbreak();
    }
    return std::_Builder<unsigned short const *,unsigned short,std::regex_traits<unsigned short>>::_Add_backreference(
             a1 + 64,
             v3);
  }
  else
  {
    if ( (unsigned __int8)std::_Parser<unsigned short const *,unsigned short,std::regex_traits<unsigned short>>::_CharacterEscape(a1) )
      return std::_Builder<unsigned short const *,unsigned short,std::regex_traits<unsigned short>>::_Add_char(
               a1 + 64,
               *(_WORD *)(a1 + 116));
    if ( (*(_DWORD *)(a1 + 128) & 0x20000) == 0
      || (LOBYTE(v7) = 1,
          result = std::_Parser<unsigned short const *,unsigned short,std::regex_traits<unsigned short>>::_CharacterClassEscape(
                     a1,
                     v7),
          !(_BYTE)result) )
    {
      std::_Parser<unsigned short const *,unsigned short,std::regex_traits<unsigned short>>::_Error(v8, 2LL);
      JUMPOUT(0x18014C163LL);
    }
  }
  return result;
}
