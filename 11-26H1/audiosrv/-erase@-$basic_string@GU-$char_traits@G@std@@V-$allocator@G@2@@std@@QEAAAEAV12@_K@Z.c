/*
 * XREFs of ?erase@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@_K@Z @ 0x1800F59E0
 * Callers:
 *     ?SetEndpointInfo@EndpointInfo@@QEAAJPEBG00K@Z @ 0x1800F53F0 (-SetEndpointInfo@EndpointInfo@@QEAAJPEBG00K@Z.c)
 *     ??$getline@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@YAAEAV?$basic_istream@GU?$char_traits@G@std@@@0@$$QEAV10@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@0@G@Z @ 0x180158A38 (--$getline@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@YAAEAV-$basic_istream@GU-$char_traits@G.c)
 * Callees:
 *     ?_Check_offset@?$_String_val@U?$_Simple_types@G@std@@@std@@QEBAX_K@Z @ 0x1800F593C (-_Check_offset@-$_String_val@U-$_Simple_types@G@std@@@std@@QEBAX_K@Z.c)
 */

_QWORD *__fastcall std::wstring::erase(_QWORD *a1)
{
  _WORD *v2; // rax

  std::_String_val<std::_Simple_types<unsigned short>>::_Check_offset((__int64)a1, 0LL);
  v2 = a1;
  a1[2] = 0LL;
  if ( a1[3] > 7uLL )
    v2 = (_WORD *)*a1;
  *v2 = 0;
  return a1;
}
