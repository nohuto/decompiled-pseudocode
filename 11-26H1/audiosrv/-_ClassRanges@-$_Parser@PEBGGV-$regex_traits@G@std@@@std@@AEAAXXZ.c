/*
 * XREFs of ?_ClassRanges@?$_Parser@PEBGGV?$regex_traits@G@std@@@std@@AEAAXXZ @ 0x18014CAA0
 * Callers:
 *     ?_CharacterClass@?$_Parser@PEBGGV?$regex_traits@G@std@@@std@@AEAAXXZ @ 0x18014C658 (-_CharacterClass@-$_Parser@PEBGGV-$regex_traits@G@std@@@std@@AEAAXXZ.c)
 * Callees:
 *     ?_Add_char_to_class@?$_Builder@PEBGGV?$regex_traits@G@std@@@std@@QEAAXG@Z @ 0x18014B7B8 (-_Add_char_to_class@-$_Builder@PEBGGV-$regex_traits@G@std@@@std@@QEAAXG@Z.c)
 *     ?_Add_range2@?$_Builder@PEBGGV?$regex_traits@G@std@@@std@@QEAAXGG@Z @ 0x18014BA84 (-_Add_range2@-$_Builder@PEBGGV-$regex_traits@G@std@@@std@@QEAAXGG@Z.c)
 *     ?_ClassAtom@?$_Parser@PEBGGV?$regex_traits@G@std@@@std@@AEAA?AW4_Prs_ret@2@XZ @ 0x18014C92C (-_ClassAtom@-$_Parser@PEBGGV-$regex_traits@G@std@@@std@@AEAA-AW4_Prs_ret@2@XZ.c)
 *     ?_Error@?$_Parser@PEBGGV?$regex_traits@G@std@@@std@@AEAAXW4error_type@regex_constants@2@@Z @ 0x18014D364 (-_Error@-$_Parser@PEBGGV-$regex_traits@G@std@@@std@@AEAAXW4error_type@regex_constants@2@@Z.c)
 *     ?_Next@?$_Parser@PEBGGV?$regex_traits@G@std@@@std@@AEAAXXZ @ 0x18014D9A8 (-_Next@-$_Parser@PEBGGV-$regex_traits@G@std@@@std@@AEAAXXZ.c)
 */

__int64 __fastcall std::_Parser<unsigned short const *,unsigned short,std::regex_traits<unsigned short>>::_ClassRanges(
        __int64 a1)
{
  __int64 i; // rbx
  unsigned __int16 v2; // si
  int v3; // eax
  __int64 v4; // rcx
  unsigned __int16 v5; // di
  __int64 result; // rax
  __int64 v7; // rcx
  int v8; // edi

  for ( i = a1; ; a1 = i )
  {
    result = std::_Parser<unsigned short const *,unsigned short,std::regex_traits<unsigned short>>::_ClassAtom(a1);
    v8 = result;
    if ( !(_DWORD)result )
      break;
    if ( (_DWORD)result == 1 && !*(_DWORD *)(i + 116) && (*(_DWORD *)(i + 128) & 0x100000) == 0 )
    {
      std::_Parser<unsigned short const *,unsigned short,std::regex_traits<unsigned short>>::_Error(v7, 2LL);
      __debugbreak();
    }
    if ( *(_DWORD *)(i + 124) == 45 )
    {
      std::_Parser<unsigned short const *,unsigned short,std::regex_traits<unsigned short>>::_Next(i);
      v2 = *(_WORD *)(i + 116);
      v3 = std::_Parser<unsigned short const *,unsigned short,std::regex_traits<unsigned short>>::_ClassAtom(i);
      if ( !v3 )
      {
        if ( v8 != 2 )
          std::_Builder<unsigned short const *,unsigned short,std::regex_traits<unsigned short>>::_Add_char_to_class(
            i + 64,
            v2);
        return std::_Builder<unsigned short const *,unsigned short,std::regex_traits<unsigned short>>::_Add_char_to_class(
                 i + 64,
                 45LL);
      }
      if ( v8 == 2 || v3 == 2 )
      {
        std::_Parser<unsigned short const *,unsigned short,std::regex_traits<unsigned short>>::_Error(v4, 8LL);
        __debugbreak();
      }
      v5 = *(_WORD *)(i + 116);
      if ( (*(_DWORD *)(i + 112) & 0x100) != 0 )
      {
        v2 = std::ctype<unsigned short>::tolower(*(_QWORD *)(*(_QWORD *)(i + 104) + 8LL), v2);
        v5 = std::ctype<unsigned short>::tolower(*(_QWORD *)(*(_QWORD *)(i + 104) + 8LL), v5);
      }
      if ( v5 < v2 )
      {
        std::_Parser<unsigned short const *,unsigned short,std::regex_traits<unsigned short>>::_Error(v4, 8LL);
        JUMPOUT(0x18014CBD8LL);
      }
      std::_Builder<unsigned short const *,unsigned short,std::regex_traits<unsigned short>>::_Add_range2(
        i + 64,
        v2,
        v5);
    }
    else if ( (_DWORD)result == 1 )
    {
      std::_Builder<unsigned short const *,unsigned short,std::regex_traits<unsigned short>>::_Add_char_to_class(
        i + 64,
        *(unsigned __int16 *)(i + 116));
    }
  }
  return result;
}
