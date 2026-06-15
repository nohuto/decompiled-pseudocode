/*
 * XREFs of ?_Disjunction@?$_Parser@PEBGGV?$regex_traits@G@std@@@std@@AEAAXXZ @ 0x18014CDA0
 * Callers:
 *     ?_Compile@?$_Parser@PEBGGV?$regex_traits@G@std@@@std@@QEAAPEAV_Root_node@2@XZ @ 0x18014CBE0 (-_Compile@-$_Parser@PEBGGV-$regex_traits@G@std@@@std@@QEAAPEAV_Root_node@2@XZ.c)
 *     ?_Do_assert_group@?$_Parser@PEBGGV?$regex_traits@G@std@@@std@@AEAAX_N@Z @ 0x18014CE60 (-_Do_assert_group@-$_Parser@PEBGGV-$regex_traits@G@std@@@std@@AEAAX_N@Z.c)
 *     ?_Do_capture_group@?$_Parser@PEBGGV?$regex_traits@G@std@@@std@@AEAAXXZ @ 0x18014CEB0 (-_Do_capture_group@-$_Parser@PEBGGV-$regex_traits@G@std@@@std@@AEAAXXZ.c)
 *     ?_Do_noncapture_group@?$_Parser@PEBGGV?$regex_traits@G@std@@@std@@AEAAXXZ @ 0x18014D1E4 (-_Do_noncapture_group@-$_Parser@PEBGGV-$regex_traits@G@std@@@std@@AEAAXXZ.c)
 * Callees:
 *     ?_Alternative@?$_Parser@PEBGGV?$regex_traits@G@std@@@std@@AEAA_NXZ @ 0x18014BEA4 (-_Alternative@-$_Parser@PEBGGV-$regex_traits@G@std@@@std@@AEAA_NXZ.c)
 *     ?_Begin_if@?$_Builder@PEBGGV?$regex_traits@G@std@@@std@@QEAAPEAV_Node_base@2@PEAV32@@Z @ 0x18014C2FC (-_Begin_if@-$_Builder@PEBGGV-$regex_traits@G@std@@@std@@QEAAPEAV_Node_base@2@PEAV32@@Z.c)
 *     ?_Else_if@?$_Builder@PEBGGV?$regex_traits@G@std@@@std@@QEAAXPEAV_Node_base@2@0@Z @ 0x18014D230 (-_Else_if@-$_Builder@PEBGGV-$regex_traits@G@std@@@std@@QEAAXPEAV_Node_base@2@0@Z.c)
 *     ?_End_group@?$_Builder@PEBGGV?$regex_traits@G@std@@@std@@QEAAXPEAV_Node_base@2@@Z @ 0x18014D2DC (-_End_group@-$_Builder@PEBGGV-$regex_traits@G@std@@@std@@QEAAXPEAV_Node_base@2@@Z.c)
 *     ?_New_node@?$_Builder@PEBGGV?$regex_traits@G@std@@@std@@AEAAPEAV_Node_base@2@W4_Node_type@2@@Z @ 0x18014D950 (-_New_node@-$_Builder@PEBGGV-$regex_traits@G@std@@@std@@AEAAPEAV_Node_base@2@W4_Node_type@2@@Z.c)
 *     ?_Next@?$_Parser@PEBGGV?$regex_traits@G@std@@@std@@AEAAXXZ @ 0x18014D9A8 (-_Next@-$_Parser@PEBGGV-$regex_traits@G@std@@@std@@AEAAXXZ.c)
 */

char __fastcall std::_Parser<unsigned short const *,unsigned short,std::regex_traits<unsigned short>>::_Disjunction(
        __int64 a1)
{
  __int64 v1; // rdi
  __int64 v3; // rbp
  _DWORD *v4; // rbx
  _QWORD *v5; // rax
  __int64 v6; // rax
  _QWORD *v7; // r14
  __int64 v8; // rax

  v1 = a1 + 64;
  v3 = *(_QWORD *)(a1 + 72);
  v4 = (_DWORD *)(a1 + 124);
  LOBYTE(v5) = std::_Parser<unsigned short const *,unsigned short,std::regex_traits<unsigned short>>::_Alternative(a1);
  if ( !(_BYTE)v5 )
  {
    if ( *v4 != 124 )
      return (char)v5;
    v6 = std::_Builder<unsigned short const *,unsigned short,std::regex_traits<unsigned short>>::_New_node(v1, 8LL);
    std::_Builder<unsigned short const *,unsigned short,std::regex_traits<unsigned short>>::_End_group(v1, v6);
  }
  v5 = std::_Builder<unsigned short const *,unsigned short,std::regex_traits<unsigned short>>::_Begin_if(v1, v3);
  v7 = v5;
  while ( *v4 == 124 )
  {
    std::_Parser<unsigned short const *,unsigned short,std::regex_traits<unsigned short>>::_Next(a1);
    if ( !std::_Parser<unsigned short const *,unsigned short,std::regex_traits<unsigned short>>::_Alternative(a1) )
    {
      v8 = std::_Builder<unsigned short const *,unsigned short,std::regex_traits<unsigned short>>::_New_node(v1, 8LL);
      std::_Builder<unsigned short const *,unsigned short,std::regex_traits<unsigned short>>::_End_group(v1, v8);
    }
    LOBYTE(v5) = std::_Builder<unsigned short const *,unsigned short,std::regex_traits<unsigned short>>::_Else_if(
                   v1,
                   v3,
                   v7);
  }
  return (char)v5;
}
