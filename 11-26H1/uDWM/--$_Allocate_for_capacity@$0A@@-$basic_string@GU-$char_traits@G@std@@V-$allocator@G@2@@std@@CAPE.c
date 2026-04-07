/*
 * XREFs of ??$_Allocate_for_capacity@$0A@@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@CAPEAGAEAV?$allocator@G@1@AEA_K@Z @ 0x180074574
 * Callers:
 *     ??$_Construct@$00PEAG@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXQEAG_K@Z @ 0x1800D1B48 (--$_Construct@$00PEAG@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXQEAG_K@Z.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z @ 0x18000D1E0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z.c)
 *     ?_Throw_bad_array_new_length@std@@YAXXZ @ 0x18008726C (-_Throw_bad_array_new_length@std@@YAXXZ.c)
 */

void *__fastcall std::wstring::_Allocate_for_capacity<0>(__int64 a1, unsigned __int64 *a2)
{
  unsigned __int64 v2; // rcx
  void *result; // rax

  v2 = *a2 + 1;
  *a2 = v2;
  if ( v2 > 0x7FFFFFFFFFFFFFFFLL )
    std::_Throw_bad_array_new_length();
  result = std::_Allocate<16,std::_Default_allocate_traits>(2 * v2);
  --*a2;
  return result;
}
