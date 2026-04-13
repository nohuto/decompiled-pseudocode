/*
 * XREFs of _std::basic_string_char_std::char_traits_char__std::allocator_char___::_Copy_::_1_::catch$1 @ 0x1800BA6BF
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Allocate@D@std@@YAPEAD_KPEAD@Z @ 0x180027EF8 (--$_Allocate@D@std@@YAPEAD_KPEAD@Z.c)
 */

__int64 __fastcall std::basic_string_char_std::char_traits_char__std::allocator_char___::_Copy_::_1_::catch_1(
        __int64 a1,
        __int64 a2)
{
  __int64 v2; // rcx

  v2 = *(_QWORD *)(a2 + 88);
  *(_QWORD *)(a2 + 88) = v2;
  *(_QWORD *)(a2 + 104) = std::_Allocate<char>(v2 + 1);
  return 0LL;
}
