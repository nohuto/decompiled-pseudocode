/*
 * XREFs of ?_Insert2@?$_Buf@G@std@@QEAAXG@Z @ 0x18014D784
 * Callers:
 *     ?_Add_char@?$_Builder@PEBGGV?$regex_traits@G@std@@@std@@QEAAXG@Z @ 0x18014B64C (-_Add_char@-$_Builder@PEBGGV-$regex_traits@G@std@@@std@@QEAAXG@Z.c)
 *     ?_Add_char_to_array@?$_Builder@PEBGGV?$regex_traits@G@std@@@std@@AEAAXG@Z @ 0x18014B6B4 (-_Add_char_to_array@-$_Builder@PEBGGV-$regex_traits@G@std@@@std@@AEAAXG@Z.c)
 *     ?_Add_range2@?$_Builder@PEBGGV?$regex_traits@G@std@@@std@@QEAAXGG@Z @ 0x18014BA84 (-_Add_range2@-$_Builder@PEBGGV-$regex_traits@G@std@@@std@@QEAAXGG@Z.c)
 *     ?_Char_to_elts@?$_Builder@PEBGGV?$regex_traits@G@std@@@std@@AEAAXPEBG0_JPEAPEAU?$_Sequence@G@2@@Z @ 0x18014C5AC (-_Char_to_elts@-$_Builder@PEBGGV-$regex_traits@G@std@@@std@@AEAAXPEBG0_JPEAPEAU-$_Sequence@G@2@@.c)
 * Callees:
 *     ?_Expand2@?$_Buf@G@std@@AEAAXI@Z @ 0x18014D380 (-_Expand2@-$_Buf@G@std@@AEAAXI@Z.c)
 */

__int64 __fastcall std::_Buf<unsigned short>::_Insert2(__int64 a1, __int16 a2)
{
  __int64 result; // rax

  if ( *(_DWORD *)a1 <= *(_DWORD *)(a1 + 4) )
    std::_Buf<unsigned short>::_Expand2(a1);
  result = *(_QWORD *)(a1 + 8);
  *(_WORD *)(result + 2LL * (unsigned int)(*(_DWORD *)(a1 + 4))++) = a2;
  return result;
}
