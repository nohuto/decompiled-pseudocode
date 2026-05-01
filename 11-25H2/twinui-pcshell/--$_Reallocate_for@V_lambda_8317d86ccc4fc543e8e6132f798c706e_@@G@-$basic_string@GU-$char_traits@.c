/*
 * XREFs of ??$_Reallocate_for@V_lambda_8317d86ccc4fc543e8e6132f798c706e_@@G@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAAEAV01@_KV_lambda_8317d86ccc4fc543e8e6132f798c706e_@@G@Z @ 0x18039F9F4
 * Callers:
 *     ?clear_name@reg_iterator_details@reg@wil@@YAXAEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@_K@Z @ 0x1803B2D08 (-clear_name@reg_iterator_details@reg@wil@@YAXAEAV-$basic_string@GU-$char_traits@G@std@@V-$alloca.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180029B4C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180029F1C (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Get_size_of_n@$01@std@@YA_K_K@Z @ 0x180029F78 (--$_Get_size_of_n@$01@std@@YA_K_K@Z.c)
 *     ?_Calculate_growth@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@AEBA_K_K@Z @ 0x18017CCE8 (-_Calculate_growth@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@AEBA_K_K@Z.c)
 *     wmemset @ 0x1801CC7A4 (wmemset.c)
 *     ?_Xlen_string@std@@YAXXZ @ 0x1802D0044 (-_Xlen_string@std@@YAXXZ.c)
 */

__int64 __fastcall std::wstring::_Reallocate_for<_lambda_8317d86ccc4fc543e8e6132f798c706e_,unsigned short>(
        __int64 a1,
        size_t a2)
{
  unsigned __int64 v4; // rbp
  unsigned __int64 v5; // rbx
  size_t size_of; // rax
  wchar_t *v7; // rax
  wchar_t *v8; // r14
  wchar_t v9; // dx

  if ( a2 > 0x7FFFFFFFFFFFFFFELL )
    std::_Xlen_string();
  v4 = *(_QWORD *)(a1 + 24);
  v5 = std::wstring::_Calculate_growth(a1, a2);
  size_of = std::_Get_size_of_n<2>(v5 + 1);
  v7 = (wchar_t *)std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  *(_QWORD *)(a1 + 16) = a2;
  *(_QWORD *)(a1 + 24) = v5;
  v8 = v7;
  wmemset(v7, 0, a2);
  v8[a2] = v9;
  if ( v4 > 7 )
    std::_Deallocate<16,0>(*(void **)a1, (const struct std::nothrow_t *)(2 * v4 + 2));
  *(_QWORD *)a1 = v8;
  return a1;
}
