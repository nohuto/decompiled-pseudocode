/*
 * XREFs of wmemset @ 0x1801CC7A4
 * Callers:
 *     ?append@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@_KG@Z @ 0x18005B5D0 (-append@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@_KG@Z.c)
 *     ??$_Reallocate_for@V_lambda_8317d86ccc4fc543e8e6132f798c706e_@@G@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAAEAV01@_KV_lambda_8317d86ccc4fc543e8e6132f798c706e_@@G@Z @ 0x18039F9F4 (--$_Reallocate_for@V_lambda_8317d86ccc4fc543e8e6132f798c706e_@@G@-$basic_string@GU-$char_traits@.c)
 *     ?clear_name@reg_iterator_details@reg@wil@@YAXAEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@_K@Z @ 0x1803B2D08 (-clear_name@reg_iterator_details@reg@wil@@YAXAEAV-$basic_string@GU-$char_traits@G@std@@V-$alloca.c)
 *     ??R_lambda_a3050a43f3157934f354774ab3dd2e02_@@QEBA@QEA_WQEB_W_K2_W@Z @ 0x180677BD4 (--R_lambda_a3050a43f3157934f354774ab3dd2e02_@@QEBA@QEA_WQEB_W_K2_W@Z.c)
 *     ?load_nothrow@tson@@YAXAEAVinput_archive@1@AEAV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@Z @ 0x18068A244 (-load_nothrow@tson@@YAXAEAVinput_archive@1@AEAV-$basic_string@_WU-$char_traits@_W@std@@V-$alloca.c)
 * Callees:
 *     <none>
 */

wchar_t *__cdecl wmemset(wchar_t *S, wchar_t C, size_t N)
{
  wchar_t *v5; // rdi
  size_t i; // rcx

  if ( N )
  {
    v5 = S;
    for ( i = N; i; --i )
      *v5++ = C;
  }
  return S;
}
