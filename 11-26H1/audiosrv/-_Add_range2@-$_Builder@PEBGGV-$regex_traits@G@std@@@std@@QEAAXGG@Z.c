/*
 * XREFs of ?_Add_range2@?$_Builder@PEBGGV?$regex_traits@G@std@@@std@@QEAAXGG@Z @ 0x18014BA84
 * Callers:
 *     ?_ClassRanges@?$_Parser@PEBGGV?$regex_traits@G@std@@@std@@AEAAXXZ @ 0x18014CAA0 (-_ClassRanges@-$_Parser@PEBGGV-$regex_traits@G@std@@@std@@AEAAXXZ.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18001E210 (--2@YAPEAX_K@Z.c)
 *     ?_Add_char_to_array@?$_Builder@PEBGGV?$regex_traits@G@std@@@std@@AEAAXG@Z @ 0x18014B6B4 (-_Add_char_to_array@-$_Builder@PEBGGV-$regex_traits@G@std@@@std@@AEAAXG@Z.c)
 *     ?_Insert2@?$_Buf@G@std@@QEAAXG@Z @ 0x18014D784 (-_Insert2@-$_Buf@G@std@@QEAAXG@Z.c)
 */

__int64 __fastcall std::_Builder<unsigned short const *,unsigned short,std::regex_traits<unsigned short>>::_Add_range2(
        __int64 a1,
        unsigned __int16 a2,
        unsigned __int16 a3)
{
  __int64 result; // rax
  __int64 v4; // rsi
  unsigned int v6; // r14d
  unsigned int v7; // ebx
  _OWORD *v8; // r8
  _OWORD *v9; // rax
  unsigned __int64 v10; // rdx
  _QWORD *v11; // rax
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h] BYREF

  result = (__int64)&retaddr;
  v4 = *(_QWORD *)(a1 + 8);
  v6 = a3;
  v7 = a2;
  if ( a2 <= (unsigned int)a3 )
  {
    do
    {
      if ( v6 >= *(_DWORD *)(a1 + 32) )
        break;
      v8 = *(_OWORD **)(v4 + 40);
      if ( !v8 )
      {
        v9 = operator new(0x20uLL);
        v8 = v9;
        if ( v9 )
        {
          *v9 = 0LL;
          v9[1] = 0LL;
        }
        else
        {
          v8 = 0LL;
        }
        *(_QWORD *)(v4 + 40) = v8;
      }
      v10 = (unsigned __int64)v7 >> 3;
      result = v7++ & 7;
      *((_BYTE *)v8 + v10) |= 1 << result;
    }
    while ( v7 <= v6 );
    if ( v6 >= v7 )
    {
      if ( v6 - v7 >= *(_DWORD *)(a1 + 36) )
      {
        v11 = *(_QWORD **)(v4 + 56);
        if ( !v11 )
        {
          v11 = operator new(0x10uLL);
          if ( v11 )
          {
            *v11 = 0LL;
            v11[1] = 0LL;
          }
          *(_QWORD *)(v4 + 56) = v11;
        }
        std::_Buf<unsigned short>::_Insert2(v11, (unsigned __int16)v7);
        return std::_Buf<unsigned short>::_Insert2(*(_QWORD *)(v4 + 56), (unsigned __int16)v6);
      }
      else
      {
        do
          result = std::_Builder<unsigned short const *,unsigned short,std::regex_traits<unsigned short>>::_Add_char_to_array(
                     a1,
                     (unsigned __int16)v7++);
        while ( v7 <= v6 );
      }
    }
  }
  return result;
}
