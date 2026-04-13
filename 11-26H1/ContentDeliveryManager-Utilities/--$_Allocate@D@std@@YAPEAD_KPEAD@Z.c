/*
 * XREFs of ??$_Allocate@D@std@@YAPEAD_KPEAD@Z @ 0x180027EF8
 * Callers:
 *     ?_Copy@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAX_K0@Z @ 0x18003D798 (-_Copy@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAX_K0@Z.c)
 *     _std::basic_string_char_std::char_traits_char__std::allocator_char___::_Copy_::_1_::catch$1 @ 0x1800BA6BF (_std--basic_string_char_std--char_traits_char__std--allocator_char___--_Copy_--_1_--catch$1.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180004554 (--2@YAPEAX_K@Z.c)
 *     ?_Xbad_alloc@std@@YAXXZ @ 0x180004758 (-_Xbad_alloc@std@@YAXXZ.c)
 */

void *__fastcall std::_Allocate<char>(size_t a1)
{
  void *result; // rax

  result = 0LL;
  if ( a1 )
  {
    result = operator new(a1);
    if ( !result )
      std::_Xbad_alloc();
  }
  return result;
}
