/*
 * XREFs of ?_Link_node@?$_Builder@PEBGGV?$regex_traits@G@std@@@std@@AEAAPEAV_Node_base@2@PEAV32@@Z @ 0x18014D910
 * Callers:
 *     ?_Add_backreference@?$_Builder@PEBGGV?$regex_traits@G@std@@@std@@QEAAXI@Z @ 0x18014B5EC (-_Add_backreference@-$_Builder@PEBGGV-$regex_traits@G@std@@@std@@QEAAXI@Z.c)
 *     ?_Add_class@?$_Builder@PEBGGV?$regex_traits@G@std@@@std@@QEAAXXZ @ 0x18014B7D4 (-_Add_class@-$_Builder@PEBGGV-$regex_traits@G@std@@@std@@QEAAXXZ.c)
 *     ?_Add_rep@?$_Builder@PEBGGV?$regex_traits@G@std@@@std@@QEAAXHH_N@Z @ 0x18014BB8C (-_Add_rep@-$_Builder@PEBGGV-$regex_traits@G@std@@@std@@QEAAXHH_N@Z.c)
 *     ?_Add_str_node@?$_Builder@PEBGGV?$regex_traits@G@std@@@std@@AEAAXXZ @ 0x18014BE4C (-_Add_str_node@-$_Builder@PEBGGV-$regex_traits@G@std@@@std@@AEAAXXZ.c)
 *     ?_Begin_assert_group@?$_Builder@PEBGGV?$regex_traits@G@std@@@std@@QEAAPEAV_Node_base@2@_N@Z @ 0x18014C1C4 (-_Begin_assert_group@-$_Builder@PEBGGV-$regex_traits@G@std@@@std@@QEAAPEAV_Node_base@2@_N@Z.c)
 *     ?_Begin_capture_group@?$_Builder@PEBGGV?$regex_traits@G@std@@@std@@QEAAPEAV_Node_base@2@I@Z @ 0x18014C29C (-_Begin_capture_group@-$_Builder@PEBGGV-$regex_traits@G@std@@@std@@QEAAPEAV_Node_base@2@I@Z.c)
 *     ?_Begin_if@?$_Builder@PEBGGV?$regex_traits@G@std@@@std@@QEAAPEAV_Node_base@2@PEAV32@@Z @ 0x18014C2FC (-_Begin_if@-$_Builder@PEBGGV-$regex_traits@G@std@@@std@@QEAAPEAV_Node_base@2@PEAV32@@Z.c)
 *     ?_End_group@?$_Builder@PEBGGV?$regex_traits@G@std@@@std@@QEAAXPEAV_Node_base@2@@Z @ 0x18014D2DC (-_End_group@-$_Builder@PEBGGV-$regex_traits@G@std@@@std@@QEAAXPEAV_Node_base@2@@Z.c)
 *     ?_New_node@?$_Builder@PEBGGV?$regex_traits@G@std@@@std@@AEAAPEAV_Node_base@2@W4_Node_type@2@@Z @ 0x18014D950 (-_New_node@-$_Builder@PEBGGV-$regex_traits@G@std@@@std@@AEAAPEAV_Node_base@2@W4_Node_type@2@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall std::_Builder<unsigned short const *,unsigned short,std::regex_traits<unsigned short>>::_Link_node(
        __int64 a1,
        __int64 a2)
{
  __int64 v3; // rdx
  __int64 result; // rax

  *(_QWORD *)(a2 + 24) = *(_QWORD *)(a1 + 8);
  v3 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 16LL);
  if ( v3 )
  {
    *(_QWORD *)(a2 + 16) = v3;
    *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 16LL) + 24LL) = a2;
  }
  *(_QWORD *)(*(_QWORD *)(a1 + 8) + 16LL) = a2;
  result = a2;
  *(_QWORD *)(a1 + 8) = a2;
  return result;
}
