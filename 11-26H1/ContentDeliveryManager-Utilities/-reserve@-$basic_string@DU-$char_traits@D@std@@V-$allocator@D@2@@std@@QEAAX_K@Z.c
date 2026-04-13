/*
 * XREFs of ?reserve@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAX_K@Z @ 0x18006BA88
 * Callers:
 *     ??$_Construct@V?$_String_iterator@V?$_String_val@U?$_Simple_types@_W@std@@@std@@@std@@@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAXV?$_String_iterator@V?$_String_val@U?$_Simple_types@_W@std@@@std@@@1@0Uforward_iterator_tag@1@@Z @ 0x180067584 (--$_Construct@V-$_String_iterator@V-$_String_val@U-$_Simple_types@_W@std@@@std@@@std@@@-$basic_s.c)
 * Callees:
 *     ?_Grow@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA_N_K_N@Z @ 0x18003DC80 (-_Grow@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA_N_K_N@Z.c)
 */

void __fastcall std::string::reserve(__int64 a1, unsigned __int64 a2)
{
  unsigned __int64 *v2; // rsi
  _QWORD *v3; // rbx
  unsigned __int64 v4; // rdi

  v2 = (unsigned __int64 *)(a1 + 16);
  v3 = (_QWORD *)a1;
  v4 = *(_QWORD *)(a1 + 16);
  if ( v4 <= a2 && *(_QWORD *)(a1 + 24) != a2 && std::string::_Grow(a1, a2, 1) )
  {
    if ( v3[3] >= 0x10uLL )
      v3 = (_QWORD *)*v3;
    *v2 = v4;
    *((_BYTE *)v3 + v4) = 0;
  }
}
