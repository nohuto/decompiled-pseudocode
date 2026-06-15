/*
 * XREFs of ?_Do_digits@?$_Parser@PEBGGV?$regex_traits@G@std@@@std@@AEAAHHHW4error_type@regex_constants@2@@Z @ 0x18014CF48
 * Callers:
 *     ?_CharacterEscape@?$_Parser@PEBGGV?$regex_traits@G@std@@@std@@AEAA_NXZ @ 0x18014C79C (-_CharacterEscape@-$_Parser@PEBGGV-$regex_traits@G@std@@@std@@AEAA_NXZ.c)
 *     ?_DecimalDigits2@?$_Parser@PEBGGV?$regex_traits@G@std@@@std@@AEAA_NW4error_type@regex_constants@2@H@Z @ 0x18014CC88 (-_DecimalDigits2@-$_Parser@PEBGGV-$regex_traits@G@std@@@std@@AEAA_NW4error_type@regex_constants@.c)
 *     ?_HexDigits@?$_Parser@PEBGGV?$regex_traits@G@std@@@std@@AEAAXH@Z @ 0x18014D750 (-_HexDigits@-$_Parser@PEBGGV-$regex_traits@G@std@@@std@@AEAAXH@Z.c)
 * Callees:
 *     ?_Error@?$_Parser@PEBGGV?$regex_traits@G@std@@@std@@AEAAXW4error_type@regex_constants@2@@Z @ 0x18014D364 (-_Error@-$_Parser@PEBGGV-$regex_traits@G@std@@@std@@AEAAXW4error_type@regex_constants@2@@Z.c)
 *     ?_Next@?$_Parser@PEBGGV?$regex_traits@G@std@@@std@@AEAAXXZ @ 0x18014D9A8 (-_Next@-$_Parser@PEBGGV-$regex_traits@G@std@@@std@@AEAAXXZ.c)
 */

__int64 __fastcall std::_Parser<unsigned short const *,unsigned short,std::regex_traits<unsigned short>>::_Do_digits(
        __int64 a1,
        int a2,
        unsigned int a3,
        unsigned int a4)
{
  unsigned int v5; // ebx
  int v8; // ecx
  unsigned __int16 v9; // ax
  __int64 v10; // rcx
  int v11; // r8d

  *(_DWORD *)(a1 + 116) = 0;
  v5 = a3;
  if ( a3 )
  {
    while ( 1 )
    {
      v8 = *(unsigned __int16 *)(a1 + 120);
      v9 = v8 - 48;
      if ( a2 == 8 )
      {
        if ( v9 > 7u )
          return v5;
      }
      else if ( v9 > 9u )
      {
        if ( a2 != 16 )
          return v5;
        if ( (unsigned __int16)(v8 - 97) > 5u )
        {
          if ( (unsigned __int16)(v8 - 65) > 5u )
            return v5;
          v10 = (unsigned int)(v8 - 55);
        }
        else
        {
          v10 = (unsigned int)(v8 - 87);
        }
        goto LABEL_11;
      }
      v10 = (unsigned int)(v8 - 48);
LABEL_11:
      if ( (_DWORD)v10 != -1 )
      {
        v11 = *(_DWORD *)(a1 + 116);
        if ( v11 > (0x7FFFFFFF - (int)v10) / a2 )
        {
          std::_Parser<unsigned short const *,unsigned short,std::regex_traits<unsigned short>>::_Error(v10, a4);
          JUMPOUT(0x18014CFFELL);
        }
        *(_DWORD *)(a1 + 116) = v10 + a2 * v11;
        std::_Parser<unsigned short const *,unsigned short,std::regex_traits<unsigned short>>::_Next(a1);
        if ( --v5 )
          continue;
      }
      return v5;
    }
  }
  return v5;
}
