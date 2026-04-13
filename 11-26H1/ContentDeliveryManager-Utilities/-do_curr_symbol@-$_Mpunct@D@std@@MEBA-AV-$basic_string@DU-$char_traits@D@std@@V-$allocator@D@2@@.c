/*
 * XREFs of ?do_curr_symbol@?$_Mpunct@D@std@@MEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@2@XZ @ 0x18000A050
 * Callers:
 *     <none>
 * Callees:
 *     strlen_0 @ 0x180021D0E (strlen_0.c)
 *     ?assign@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAAEAV12@PEBD_K@Z @ 0x18003E418 (-assign@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAAEAV12@PEBD_K@Z.c)
 */

_QWORD *__fastcall std::_Mpunct<char>::do_curr_symbol(__int64 a1, _QWORD *a2)
{
  char *v2; // rdi
  size_t v3; // rax

  v2 = *(char **)(a1 + 32);
  v3 = 0LL;
  a2[3] = 15LL;
  a2[2] = 0LL;
  *(_BYTE *)a2 = 0;
  if ( *v2 )
    v3 = strlen_0(v2);
  std::string::assign(a2, v2, v3);
  return a2;
}
