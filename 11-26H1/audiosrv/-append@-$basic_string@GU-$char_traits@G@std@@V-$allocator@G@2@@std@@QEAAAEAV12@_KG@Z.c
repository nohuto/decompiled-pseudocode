/*
 * XREFs of ?append@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@_KG@Z @ 0x1800EDC5C
 * Callers:
 *     ?resize@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAX_KG@Z @ 0x1800EE920 (-resize@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAX_KG@Z.c)
 * Callees:
 *     ??$_Reallocate_grow_by@V_lambda_b70241e9b5ebaad244db3e52d52cab17_@@_KG@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAAEAV01@_KV_lambda_b70241e9b5ebaad244db3e52d52cab17_@@_KG@Z @ 0x1800E8C50 (--$_Reallocate_grow_by@V_lambda_b70241e9b5ebaad244db3e52d52cab17_@@_KG@-$basic_string@GU-$char_t.c)
 */

_QWORD *__fastcall std::wstring::append(_QWORD *a1, unsigned __int64 a2)
{
  __int64 v3; // rcx
  bool v4; // cc
  __int64 v5; // r11
  _QWORD *v6; // r9
  _WORD *v7; // rdi
  unsigned __int64 i; // rcx

  v3 = a1[2];
  if ( a2 > a1[3] - v3 )
    return std::wstring::_Reallocate_grow_by<_lambda_b70241e9b5ebaad244db3e52d52cab17_,unsigned __int64,unsigned short>(
             a1,
             a2,
             0LL,
             a2);
  v4 = a1[3] <= 7uLL;
  v5 = v3 + a2;
  a1[2] = v3 + a2;
  v6 = a1;
  if ( !v4 )
    v6 = (_QWORD *)*a1;
  v7 = (_WORD *)v6 + v3;
  if ( a2 )
  {
    for ( i = a2; i; --i )
      *v7++ = 0;
  }
  *((_WORD *)v6 + v5) = 0;
  return a1;
}
