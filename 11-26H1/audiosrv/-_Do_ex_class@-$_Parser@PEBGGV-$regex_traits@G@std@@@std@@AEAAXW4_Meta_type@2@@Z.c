/*
 * XREFs of ?_Do_ex_class@?$_Parser@PEBGGV?$regex_traits@G@std@@@std@@AEAAXW4_Meta_type@2@@Z @ 0x18014D008
 * Callers:
 *     ?_ClassAtom@?$_Parser@PEBGGV?$regex_traits@G@std@@@std@@AEAA?AW4_Prs_ret@2@XZ @ 0x18014C92C (-_ClassAtom@-$_Parser@PEBGGV-$regex_traits@G@std@@@std@@AEAA-AW4_Prs_ret@2@XZ.c)
 * Callees:
 *     ??$lookup_classname@PEBG@?$_Regex_traits@G@std@@QEBAFPEBG0_N@Z @ 0x180149B7C (--$lookup_classname@PEBG@-$_Regex_traits@G@std@@QEBAFPEBG0_N@Z.c)
 *     ?_Add_equiv@?$_Builder@PEBGGV?$regex_traits@G@std@@@std@@QEAAXPEBG0_J@Z @ 0x18014B8EC (-_Add_equiv@-$_Builder@PEBGGV-$regex_traits@G@std@@@std@@QEAAXPEBG0_J@Z.c)
 *     ?_Add_named_class@?$_Builder@PEBGGV?$regex_traits@G@std@@@std@@QEAAXF_N@Z @ 0x18014BA3C (-_Add_named_class@-$_Builder@PEBGGV-$regex_traits@G@std@@@std@@QEAAXF_N@Z.c)
 *     ?_Char_to_elts@?$_Builder@PEBGGV?$regex_traits@G@std@@@std@@AEAAXPEBG0_JPEAPEAU?$_Sequence@G@2@@Z @ 0x18014C5AC (-_Char_to_elts@-$_Builder@PEBGGV-$regex_traits@G@std@@@std@@AEAAXPEBG0_JPEAPEAU-$_Sequence@G@2@@.c)
 *     ?_Error@?$_Parser@PEBGGV?$regex_traits@G@std@@@std@@AEAAXW4error_type@regex_constants@2@@Z @ 0x18014D364 (-_Error@-$_Parser@PEBGGV-$regex_traits@G@std@@@std@@AEAAXW4error_type@regex_constants@2@@Z.c)
 *     ?_Next@?$_Parser@PEBGGV?$regex_traits@G@std@@@std@@AEAAXXZ @ 0x18014D9A8 (-_Next@-$_Parser@PEBGGV-$regex_traits@G@std@@@std@@AEAAXXZ.c)
 */

__int64 __fastcall std::_Parser<unsigned short const *,unsigned short,std::regex_traits<unsigned short>>::_Do_ex_class(
        __int64 a1,
        int a2)
{
  __int64 v3; // rbx
  unsigned int v4; // esi
  unsigned int v5; // eax
  unsigned int v6; // r14d
  unsigned __int16 *v7; // rbp
  unsigned __int16 v8; // ax
  __int64 v9; // rcx

  v3 = a1;
  if ( a2 == 58 )
  {
    v4 = 1;
  }
  else if ( a2 == 61 )
  {
    v4 = 0;
  }
  else
  {
    v4 = a2 != 46 ? 0xE : 0;
  }
  v5 = *(_DWORD *)(a1 + 124);
  v6 = 0;
  v7 = *(unsigned __int16 **)a1;
  if ( v5 != 58 )
  {
    a1 = v5;
    do
    {
      v5 = a1;
      if ( (_DWORD)a1 == 61 )
        break;
      if ( (_DWORD)a1 == 46 )
        break;
      if ( (_DWORD)a1 == -1 )
        break;
      std::_Parser<unsigned short const *,unsigned short,std::regex_traits<unsigned short>>::_Next(v3);
      v5 = *(_DWORD *)(v3 + 124);
      ++v6;
      a1 = v5;
    }
    while ( v5 != 58 );
  }
  if ( v5 != a2 )
  {
    std::_Parser<unsigned short const *,unsigned short,std::regex_traits<unsigned short>>::_Error(a1, v4);
    __debugbreak();
  }
  switch ( a2 )
  {
    case ':':
      v8 = std::_Regex_traits<unsigned short>::lookup_classname<unsigned short const *>(
             *(_QWORD *)(v3 + 104),
             v7,
             *(unsigned __int16 **)v3,
             BYTE1(*(_DWORD *)(v3 + 112)) & 1);
      if ( !v8 )
      {
        std::_Parser<unsigned short const *,unsigned short,std::regex_traits<unsigned short>>::_Error(v9, 1LL);
        __debugbreak();
      }
      std::_Builder<unsigned short const *,unsigned short,std::regex_traits<unsigned short>>::_Add_named_class(
        v3 + 64,
        v8,
        0);
      break;
    case '=':
      if ( v7 == *(unsigned __int16 **)v3 )
      {
        std::_Parser<unsigned short const *,unsigned short,std::regex_traits<unsigned short>>::_Error(a1, 0LL);
        JUMPOUT(0x18014D157LL);
      }
      std::_Builder<unsigned short const *,unsigned short,std::regex_traits<unsigned short>>::_Add_equiv(
        v3 + 64,
        v7,
        *(_QWORD *)v3,
        v6);
      break;
    case '.':
      if ( v7 == *(unsigned __int16 **)v3 )
      {
        std::_Parser<unsigned short const *,unsigned short,std::regex_traits<unsigned short>>::_Error(a1, 0LL);
        __debugbreak();
      }
      std::_Builder<unsigned short const *,unsigned short,std::regex_traits<unsigned short>>::_Char_to_elts(
        a1,
        v7,
        *(unsigned __int16 **)v3,
        v6,
        (LPVOID *)(*(_QWORD *)(v3 + 72) + 32LL));
      break;
  }
  std::_Parser<unsigned short const *,unsigned short,std::regex_traits<unsigned short>>::_Next(v3);
  return std::_Parser<unsigned short const *,unsigned short,std::regex_traits<unsigned short>>::_Expect(v3, 93LL, v4);
}
