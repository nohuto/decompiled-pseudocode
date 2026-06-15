/*
 * XREFs of ?_Begin_assert_group@?$_Builder@PEBGGV?$regex_traits@G@std@@@std@@QEAAPEAV_Node_base@2@_N@Z @ 0x18014C1C4
 * Callers:
 *     ?_Do_assert_group@?$_Parser@PEBGGV?$regex_traits@G@std@@@std@@AEAAX_N@Z @ 0x18014CE60 (-_Do_assert_group@-$_Parser@PEBGGV-$regex_traits@G@std@@@std@@AEAAX_N@Z.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18001E210 (--2@YAPEAX_K@Z.c)
 *     ??1?$unique_ptr@V_Facet_base@std@@U?$default_delete@V_Facet_base@std@@@2@@std@@QEAA@XZ @ 0x1800B06D0 (--1-$unique_ptr@V_Facet_base@std@@U-$default_delete@V_Facet_base@std@@@2@@std@@QEAA@XZ.c)
 *     ?_Link_node@?$_Builder@PEBGGV?$regex_traits@G@std@@@std@@AEAAPEAV_Node_base@2@PEAV32@@Z @ 0x18014D910 (-_Link_node@-$_Builder@PEBGGV-$regex_traits@G@std@@@std@@AEAAPEAV_Node_base@2@PEAV32@@Z.c)
 */

_QWORD *__fastcall std::_Builder<unsigned short const *,unsigned short,std::regex_traits<unsigned short>>::_Begin_assert_group(
        __int64 a1,
        unsigned __int8 a2)
{
  int v3; // esi
  _QWORD *v4; // rax
  _QWORD *v5; // rbx
  _QWORD *v6; // r9
  __int64 v7; // r9
  __int64 (__fastcall ***v9)(_QWORD, __int64); // [rsp+30h] [rbp+8h] BYREF

  v3 = a2;
  v4 = operator new(0x28uLL);
  v5 = v4;
  if ( v4 )
  {
    v4[1] = (unsigned int)(v3 + 10);
    v4[2] = 0LL;
    v4[3] = 0LL;
    *v4 = &std::_Node_assert::`vftable';
    v4[4] = 0LL;
  }
  else
  {
    v5 = 0LL;
  }
  v6 = operator new(0x20uLL);
  if ( v6 )
  {
    v6[1] = 1LL;
    *v6 = &std::_Node_endif::`vftable';
    v6[2] = 0LL;
    v6[3] = 0LL;
  }
  v9 = 0LL;
  std::_Builder<unsigned short const *,unsigned short,std::regex_traits<unsigned short>>::_Link_node(a1, v5);
  v5[4] = v7;
  *(_QWORD *)(v7 + 24) = v5;
  *(_QWORD *)(a1 + 8) = v7;
  std::unique_ptr<std::_Facet_base>::~unique_ptr<std::_Facet_base>(&v9);
  return v5;
}
