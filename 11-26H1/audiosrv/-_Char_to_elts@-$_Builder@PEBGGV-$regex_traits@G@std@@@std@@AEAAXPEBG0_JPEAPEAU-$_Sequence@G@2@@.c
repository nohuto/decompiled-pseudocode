/*
 * XREFs of ?_Char_to_elts@?$_Builder@PEBGGV?$regex_traits@G@std@@@std@@AEAAXPEBG0_JPEAPEAU?$_Sequence@G@2@@Z @ 0x18014C5AC
 * Callers:
 *     ?_Add_equiv@?$_Builder@PEBGGV?$regex_traits@G@std@@@std@@QEAAXPEBG0_J@Z @ 0x18014B8EC (-_Add_equiv@-$_Builder@PEBGGV-$regex_traits@G@std@@@std@@QEAAXPEBG0_J@Z.c)
 *     ?_Do_ex_class@?$_Parser@PEBGGV?$regex_traits@G@std@@@std@@AEAAXW4_Meta_type@2@@Z @ 0x18014D008 (-_Do_ex_class@-$_Parser@PEBGGV-$regex_traits@G@std@@@std@@AEAAXW4_Meta_type@2@@Z.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18001E210 (--2@YAPEAX_K@Z.c)
 *     ?_Insert2@?$_Buf@G@std@@QEAAXG@Z @ 0x18014D784 (-_Insert2@-$_Buf@G@std@@QEAAXG@Z.c)
 */

char *__fastcall std::_Builder<unsigned short const *,unsigned short,std::regex_traits<unsigned short>>::_Char_to_elts(
        __int64 a1,
        unsigned __int16 *a2,
        unsigned __int16 *a3,
        unsigned int a4,
        LPVOID *a5)
{
  char *result; // rax
  _DWORD *v10; // rsi
  char *v11; // rdi

  while ( 1 )
  {
    result = (char *)*a5;
    if ( !*a5 || a4 >= *(_DWORD *)result )
      break;
    a5 = (LPVOID *)(result + 24);
  }
  v10 = *a5;
  if ( !*a5 || a4 != *v10 )
  {
    result = (char *)operator new(0x20uLL);
    if ( result )
    {
      *(_DWORD *)result = a4;
      *((_QWORD *)result + 1) = 0LL;
      *((_QWORD *)result + 2) = 0LL;
    }
    *a5 = result;
    *((_QWORD *)result + 3) = v10;
  }
  v11 = (char *)*a5;
  while ( a2 != a3 )
    result = (char *)std::_Buf<unsigned short>::_Insert2(v11 + 8, *a2++);
  return result;
}
